#ifndef MuonAnalyzer_h
#define MuonAnalyzer_h

// system include files
#include <iostream>

// user include files
#include "FWCore/Framework/interface/Event.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "FWCore/Framework/interface/ESHandle.h"

#include "DataFormats/MuonReco/interface/Muon.h"
#include "DataFormats/MuonReco/interface/MuonFwd.h"
#include "DataFormats/PatCandidates/interface/Muon.h"

#include "../interface/TRootMuon.h"

#include "TClonesArray.h"


class MuonAnalyzer{
	
public:
	MuonAnalyzer(const edm::ParameterSet& producersNames);
	MuonAnalyzer(const edm::ParameterSet& producersNames, const edm::ParameterSet& myConfig, int verbosity);
	~MuonAnalyzer();
	void SetVerbosity(int verbosity) {verbosity_ = verbosity; };
	void Process(const edm::Event& iEvent, TClonesArray* rootMuons);

private:
	int verbosity_;
	std::string dataType_ ;
	edm::InputTag muonProducer_;
	bool useMC_;
};

#endif