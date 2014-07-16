#include "../interface/PFMETAnalyzer.h"

using namespace std;
using namespace TopTree;
using namespace reco;
using namespace edm;

PFMETAnalyzer::PFMETAnalyzer(const edm::ParameterSet& producersNames):verbosity_(0), useMC_(false)
{
	metProducer_ = producersNames.getParameter<edm::InputTag>("PFmetProducer");
	myMETAnalyzer = new METAnalyzer(producersNames);
}

PFMETAnalyzer::PFMETAnalyzer(const edm::ParameterSet& producersNames, const edm::ParameterSet& myConfig, int verbosity):verbosity_(verbosity)
{
	metProducer_ = producersNames.getParameter<edm::InputTag>("PFmetProducer");
	useMC_ = myConfig.getUntrackedParameter<bool>("doMETMC");
	myMETAnalyzer = new METAnalyzer(producersNames,myConfig, verbosity);

}

PFMETAnalyzer::PFMETAnalyzer(const edm::ParameterSet& producersNames, int iter, const edm::ParameterSet& myConfig, int verbosity):verbosity_(verbosity)
{
	vPFmetProducer = producersNames.getUntrackedParameter<std::vector<std::string> >("vpfmetProducer");
	metProducer_ = edm::InputTag(vPFmetProducer[iter]);
	myMETAnalyzer = new METAnalyzer(producersNames, myConfig, verbosity);
}

PFMETAnalyzer::~PFMETAnalyzer()
{
}

void PFMETAnalyzer::Process(const edm::Event& iEvent, TClonesArray* rootMET)
{

  // cout<<"in PFMETAnalyser 0 "<<endl;
	unsigned int nMETs=0;

	edm::Handle < std::vector <pat::MET> > patMETs;
	iEvent.getByLabel(metProducer_, patMETs);
	nMETs = patMETs->size();

	// cout<<"in PFMETAnalyser 1 "<<endl;
	if(verbosity_>1) std::cout << "   Number of MET objects = " << nMETs << "   Label: " << metProducer_.label() << "   Instance: " << metProducer_.instance() << std::endl;

	for (unsigned int j=0; j<nMETs; j++)
	{
	  // cout<<"in PFMETAnalyser 2 "<<endl;
		const reco::Candidate* met = 0;	
		met = (const reco::Candidate*) ( & ((*patMETs)[j]) );

		TRootMET tempMET = (TRootMET) myMETAnalyzer->Process( &( *(met) ) );

		TRootPFMET localMET = TRootPFMET(tempMET);

		localMET.setMETType(2); // 2 = PFMET
    
		// cout<<"in PFMETAnalyser 2 "<<endl;
    const pat::MET *patMET = dynamic_cast<const pat::MET*>(&*met);
    
    // cout<<"in PFMETAnalyser 3 "<<endl;

    localMET.setPFMETFraction(patMET->NeutralEMFraction(), patMET->NeutralHadEtFraction(), patMET->ChargedEMEtFraction(), patMET->ChargedHadEtFraction(), patMET->MuonEtFraction(), patMET->Type6EtFraction(), patMET->Type7EtFraction());

    // cout<<"in PFMETAnalyser 4 "<<endl;
		new( (*rootMET)[j] ) TRootPFMET(localMET);
		if(verbosity_>2) cout << "   ["<< setw(3) << j << "] " << localMET << endl;
	}

	// cout<<"in PFMETAnalyser 5 "<<endl;

}
