#ifndef TRootElectron_h
#define TRootElectron_h

#include <map>

#include "../interface/TRootParticle.h"

#include "Rtypes.h"
#include "TObject.h"

using namespace std;

class TRootElectron : public TRootParticle
{

public:

	TRootElectron() :
		TRootParticle()
		,classification_(-9999)
		,caloEnergy_(-9999.)
		,caloEnergyError_(-9999.)
		,trackMomentum_(-9999.)
		,trackMomentumError_(-9999.)
		,hadOverEm_(-9999.)
		,deltaEtaIn_(-9999.)
		,deltaPhiIn_(-9999.)
		,energySuperClusterOverPin_(-9999.)
		,deltaEtaOut_(-9999.)
		,deltaPhiOut_(-9999.)
		,energySeedClusterOverPout_(-9999.)
		,energyScaleCorrected_(false)
		,momentumCorrected_(false)
		,d0_(-9999.)
		,d0Error_(-9999.) 
		,dsz_(-9999.)
		,dszError_(-9999.)
		,normalizedChi2_(-9999.)
		,ptError_(-9999.)
		,etaError_(-9999.)
		,phiError_(-9999.)
		,nbClusters_(-9999)
		,superClusterRawEnergy_(-9999.)
		,preshowerEnergy_(-9999.)
		,caloPosition_(-9999.,-9999.,-9999.)
		,scRef_()
		,clusterAlgo_(-9999)
		,caloConeSize_(-9999.)
		,e2x2_(-9999.)
		,e3x3_(-9999.)
		,e5x5_(-9999.)
		,eMax_(-9999.)
		,isoR01_sumPt_(-9999.)
		,isoR01_nTracks_(-9999)
		,isoR02_sumPt_(-9999.)
		,isoR02_nTracks_(-9999)
		,isoR03_emEt_(-9999.)
		,isoR03_hadEt_(-9999.)
		,isoR03_sumPt_(-9999.)
		,isoR03_nTracks_(-9999)
		,isoR05_emEt_(-9999.)
		,isoR05_hadEt_(-9999.)
		,isoR05_sumPt_(-9999.)
		,isoR05_nTracks_(-9999)
		,idPTDRLoose_(-9999.)
		,idPTDRMedium_(-9999.)
		,idPTDRTight_(-9999.)
		,idCutBasedLoose_(-9999.)
		,idCutBasedRobust_(-9999.)
		,idCutBasedTight_(-9999.)
		,idLikelihood_(-9999.)
		,idNeuralNet_(-9999.)
		{;}

	TRootElectron(const TRootElectron& electron) :
		TRootParticle(electron)
		,classification_(electron.classification_)
		,caloEnergy_(electron.caloEnergy_)
		,caloEnergyError_(electron.caloEnergyError_)
		,trackMomentum_(electron.trackMomentum_)
		,trackMomentumError_(electron.trackMomentumError_)
		,hadOverEm_(electron.hadOverEm_)
		,deltaEtaIn_(electron.deltaEtaIn_)
		,deltaPhiIn_(electron.deltaPhiIn_)
		,energySuperClusterOverPin_(electron.energySuperClusterOverPin_)
		,deltaEtaOut_(electron.deltaEtaOut_)
		,deltaPhiOut_(electron.deltaPhiOut_)
		,energySeedClusterOverPout_(electron.energySeedClusterOverPout_)
		,energyScaleCorrected_(electron.energyScaleCorrected_)
		,momentumCorrected_(electron.momentumCorrected_)
		,d0_(electron.d0_)
		,d0Error_(electron.d0Error_) 
		,dsz_(electron.dsz_)
		,dszError_(electron.dszError_)
		,normalizedChi2_(electron.normalizedChi2_)
		,ptError_(electron.ptError_)
		,etaError_(electron.etaError_)
		,phiError_(electron.phiError_)
		,nbClusters_(electron.nbClusters_)
		,superClusterRawEnergy_(electron.superClusterRawEnergy_)
		,preshowerEnergy_(electron.preshowerEnergy_)
		,caloPosition_(electron.caloPosition_)
		,scRef_(electron.scRef_)
		,clusterAlgo_(electron.clusterAlgo_)
		,caloConeSize_(electron.caloConeSize_)
		,e2x2_(electron.e2x2_)
		,e3x3_(electron.e3x3_)
		,e5x5_(electron.e5x5_)
		,eMax_(electron.eMax_)
		,isoR01_sumPt_(electron.isoR01_sumPt_)
		,isoR01_nTracks_(electron.isoR01_nTracks_)
		,isoR02_sumPt_(electron.isoR02_sumPt_)
		,isoR02_nTracks_(electron.isoR02_nTracks_)
		,isoR03_emEt_(electron.isoR03_emEt_)
		,isoR03_hadEt_(electron.isoR03_hadEt_)
		,isoR03_sumPt_(electron.isoR03_sumPt_)
		,isoR03_nTracks_(electron.isoR03_nTracks_)
		,isoR05_emEt_(electron.isoR05_emEt_)
		,isoR05_hadEt_(electron.isoR05_hadEt_)
		,isoR05_sumPt_(electron.isoR05_sumPt_)
		,isoR05_nTracks_(electron.isoR05_nTracks_)
		,idPTDRLoose_(electron.idPTDRLoose_)
		,idPTDRMedium_(electron.idPTDRMedium_)
		,idPTDRTight_(electron.idPTDRTight_)
		,idCutBasedLoose_(electron.idCutBasedLoose_)
		,idCutBasedRobust_(electron.idCutBasedRobust_)
		,idCutBasedTight_(electron.idCutBasedTight_)
		,idLikelihood_(electron.idLikelihood_)
		,idNeuralNet_(electron.idNeuralNet_)
		{;}

	TRootElectron(Double_t px, Double_t py, Double_t pz, Double_t e) :
		TRootParticle(px,py,pz,e)
		,classification_(-9999)
		,caloEnergy_(-9999.)
		,caloEnergyError_(-9999.)
		,trackMomentum_(-9999.)
		,trackMomentumError_(-9999.)
		,hadOverEm_(-9999.)
		,deltaEtaIn_(-9999.)
		,deltaPhiIn_(-9999.)
		,energySuperClusterOverPin_(-9999.)
		,deltaEtaOut_(-9999.)
		,deltaPhiOut_(-9999.)
		,energySeedClusterOverPout_(-9999.)
		,energyScaleCorrected_(false)
		,momentumCorrected_(false)
		,d0_(-9999.)
		,d0Error_(-9999.) 
		,dsz_(-9999.)
		,dszError_(-9999.)
		,normalizedChi2_(-9999.)
		,ptError_(-9999.)
		,etaError_(-9999.)
		,phiError_(-9999.)
		,nbClusters_(-9999)
		,superClusterRawEnergy_(-9999.)
		,preshowerEnergy_(-9999.)
		,caloPosition_(-9999.,-9999.,-9999.)
		,scRef_()
		,clusterAlgo_(-9999)
		,caloConeSize_(-9999.)
		,e2x2_(-9999.)
		,e3x3_(-9999.)
		,e5x5_(-9999.)
		,eMax_(-9999.)
		,isoR01_sumPt_(-9999.)
		,isoR01_nTracks_(-9999)
		,isoR02_sumPt_(-9999.)
		,isoR02_nTracks_(-9999)
		,isoR03_emEt_(-9999.)
		,isoR03_hadEt_(-9999.)
		,isoR03_sumPt_(-9999.)
		,isoR03_nTracks_(-9999)
		,isoR05_emEt_(-9999.)
		,isoR05_hadEt_(-9999.)
		,isoR05_sumPt_(-9999.)
		,isoR05_nTracks_(-9999)
		,idPTDRLoose_(-9999.)
		,idPTDRMedium_(-9999.)
		,idPTDRTight_(-9999.)
		,idCutBasedLoose_(-9999.)
		,idCutBasedRobust_(-9999.)
		,idCutBasedTight_(-9999.)
		,idLikelihood_(-9999.)
		,idNeuralNet_(-9999.)
		{;}
	
	TRootElectron(Double_t px, Double_t py, Double_t pz, Double_t e, Double_t vtx_x, Double_t vtx_y, Double_t vtx_z) :
		TRootParticle(px,py,pz,e,vtx_x,vtx_y,vtx_z)
		,classification_(-9999)
		,caloEnergy_(-9999.)
		,caloEnergyError_(-9999.)
		,trackMomentum_(-9999.)
		,trackMomentumError_(-9999.)
		,hadOverEm_(-9999.)
		,deltaEtaIn_(-9999.)
		,deltaPhiIn_(-9999.)
		,energySuperClusterOverPin_(-9999.)
		,deltaEtaOut_(-9999.)
		,deltaPhiOut_(-9999.)
		,energySeedClusterOverPout_(-9999.)
		,energyScaleCorrected_(false)
		,momentumCorrected_(false)
		,d0_(-9999.)
		,d0Error_(-9999.) 
		,dsz_(-9999.)
		,dszError_(-9999.)
		,normalizedChi2_(-9999.)
		,ptError_(-9999.)
		,etaError_(-9999.)
		,phiError_(-9999.)
		,nbClusters_(-9999)
		,superClusterRawEnergy_(-9999.)
		,preshowerEnergy_(-9999.)
		,caloPosition_(-9999.,-9999.,-9999.)
		,scRef_()
		,clusterAlgo_(-9999)
		,caloConeSize_(-9999.)
		,e2x2_(-9999.)
		,e3x3_(-9999.)
		,e5x5_(-9999.)
		,eMax_(-9999.)
		,isoR01_sumPt_(-9999.)
		,isoR01_nTracks_(-9999)
		,isoR02_sumPt_(-9999.)
		,isoR02_nTracks_(-9999)
		,isoR03_emEt_(-9999.)
		,isoR03_hadEt_(-9999.)
		,isoR03_sumPt_(-9999.)
		,isoR03_nTracks_(-9999)
		,isoR05_emEt_(-9999.)
		,isoR05_hadEt_(-9999.)
		,isoR05_sumPt_(-9999.)
		,isoR05_nTracks_(-9999)
		,idPTDRLoose_(-9999.)
		,idPTDRMedium_(-9999.)
		,idPTDRTight_(-9999.)
		,idCutBasedLoose_(-9999.)
		,idCutBasedRobust_(-9999.)
		,idCutBasedTight_(-9999.)
		,idLikelihood_(-9999.)
		,idNeuralNet_(-9999.)
		{;}

	TRootElectron(Double_t px, Double_t py, Double_t pz, Double_t e, Double_t vtx_x, Double_t vtx_y, Double_t vtx_z, Int_t type, Float_t charge) :
		TRootParticle(px,py,pz,e,vtx_x,vtx_y,vtx_z,type,charge)
		,classification_(-9999)
		,caloEnergy_(-9999.)
		,caloEnergyError_(-9999.)
		,trackMomentum_(-9999.)
		,trackMomentumError_(-9999.)
		,hadOverEm_(-9999.)
		,deltaEtaIn_(-9999.)
		,deltaPhiIn_(-9999.)
		,energySuperClusterOverPin_(-9999.)
		,deltaEtaOut_(-9999.)
		,deltaPhiOut_(-9999.)
		,energySeedClusterOverPout_(-9999.)
		,energyScaleCorrected_(false)
		,momentumCorrected_(false)
		,d0_(-9999.)
		,d0Error_(-9999.) 
		,dsz_(-9999.)
		,dszError_(-9999.)
		,normalizedChi2_(-9999.)
		,ptError_(-9999.)
		,etaError_(-9999.)
		,phiError_(-9999.)
		,nbClusters_(-9999)
		,superClusterRawEnergy_(-9999.)
		,preshowerEnergy_(-9999.)
		,caloPosition_(-9999.,-9999.,-9999.)
		,scRef_()
		,clusterAlgo_(-9999)
		,caloConeSize_(-9999.)
		,e2x2_(-9999.)
		,e3x3_(-9999.)
		,e5x5_(-9999.)
		,eMax_(-9999.)
		,isoR01_sumPt_(-9999.)
		,isoR01_nTracks_(-9999)
		,isoR02_sumPt_(-9999.)
		,isoR02_nTracks_(-9999)
		,isoR03_emEt_(-9999.)
		,isoR03_hadEt_(-9999.)
		,isoR03_sumPt_(-9999.)
		,isoR03_nTracks_(-9999)
		,isoR05_emEt_(-9999.)
		,isoR05_hadEt_(-9999.)
		,isoR05_sumPt_(-9999.)
		,isoR05_nTracks_(-9999)
		,idPTDRLoose_(-9999.)
		,idPTDRMedium_(-9999.)
		,idPTDRTight_(-9999.)
		,idCutBasedLoose_(-9999.)
		,idCutBasedRobust_(-9999.)
		,idCutBasedTight_(-9999.)
		,idLikelihood_(-9999.)
		,idNeuralNet_(-9999.)
		{;}

	TRootElectron(const TLorentzVector &momentum) :
		TRootParticle(momentum)
		,classification_(-9999)
		,caloEnergy_(-9999.)
		,caloEnergyError_(-9999.)
		,trackMomentum_(-9999.)
		,trackMomentumError_(-9999.)
		,hadOverEm_(-9999.)
		,deltaEtaIn_(-9999.)
		,deltaPhiIn_(-9999.)
		,energySuperClusterOverPin_(-9999.)
		,deltaEtaOut_(-9999.)
		,deltaPhiOut_(-9999.)
		,energySeedClusterOverPout_(-9999.)
		,energyScaleCorrected_(false)
		,momentumCorrected_(false)
		,d0_(-9999.)
		,d0Error_(-9999.) 
		,dsz_(-9999.)
		,dszError_(-9999.)
		,normalizedChi2_(-9999.)
		,ptError_(-9999.)
		,etaError_(-9999.)
		,phiError_(-9999.)
		,nbClusters_(-9999)
		,superClusterRawEnergy_(-9999.)
		,preshowerEnergy_(-9999.)
		,caloPosition_(-9999.,-9999.,-9999.)
		,scRef_()
		,clusterAlgo_(-9999)
		,caloConeSize_(-9999.)
		,e2x2_(-9999.)
		,e3x3_(-9999.)
		,e5x5_(-9999.)
		,eMax_(-9999.)
		,isoR01_sumPt_(-9999.)
		,isoR01_nTracks_(-9999)
		,isoR02_sumPt_(-9999.)
		,isoR02_nTracks_(-9999)
		,isoR03_emEt_(-9999.)
		,isoR03_hadEt_(-9999.)
		,isoR03_sumPt_(-9999.)
		,isoR03_nTracks_(-9999)
		,isoR05_emEt_(-9999.)
		,isoR05_hadEt_(-9999.)
		,isoR05_sumPt_(-9999.)
		,isoR05_nTracks_(-9999)
		,idPTDRLoose_(-9999.)
		,idPTDRMedium_(-9999.)
		,idPTDRTight_(-9999.)
		,idCutBasedLoose_(-9999.)
		,idCutBasedRobust_(-9999.)
		,idCutBasedTight_(-9999.)
		,idLikelihood_(-9999.)
		,idNeuralNet_(-9999.)
		{;}

	TRootElectron(const TLorentzVector &momentum, const TVector3 &vertex, Int_t type, Float_t charge) :
		TRootParticle(momentum, vertex, type, charge)
		,classification_(-9999)
		,caloEnergy_(-9999.)
		,caloEnergyError_(-9999.)
		,trackMomentum_(-9999.)
		,trackMomentumError_(-9999.)
		,hadOverEm_(-9999.)
		,deltaEtaIn_(-9999.)
		,deltaPhiIn_(-9999.)
		,energySuperClusterOverPin_(-9999.)
		,deltaEtaOut_(-9999.)
		,deltaPhiOut_(-9999.)
		,energySeedClusterOverPout_(-9999.)
		,energyScaleCorrected_(false)
		,momentumCorrected_(false)
		,d0_(-9999.)
		,d0Error_(-9999.) 
		,dsz_(-9999.)
		,dszError_(-9999.)
		,normalizedChi2_(-9999.)
		,ptError_(-9999.)
		,etaError_(-9999.)
		,phiError_(-9999.)
		,nbClusters_(-9999)
		,superClusterRawEnergy_(-9999.)
		,preshowerEnergy_(-9999.)
		,caloPosition_(-9999.,-9999.,-9999.)
		,scRef_()
		,clusterAlgo_(-9999)
		,caloConeSize_(-9999.)
		,e2x2_(-9999.)
		,e3x3_(-9999.)
		,e5x5_(-9999.)
		,eMax_(-9999.)
		,isoR01_sumPt_(-9999.)
		,isoR01_nTracks_(-9999)
		,isoR02_sumPt_(-9999.)
		,isoR02_nTracks_(-9999)
		,isoR03_emEt_(-9999.)
		,isoR03_hadEt_(-9999.)
		,isoR03_sumPt_(-9999.)
		,isoR03_nTracks_(-9999)
		,isoR05_emEt_(-9999.)
		,isoR05_hadEt_(-9999.)
		,isoR05_sumPt_(-9999.)
		,isoR05_nTracks_(-9999)
		,idPTDRLoose_(-9999.)
		,idPTDRMedium_(-9999.)
		,idPTDRTight_(-9999.)
		,idCutBasedLoose_(-9999.)
		,idCutBasedRobust_(-9999.)
		,idCutBasedTight_(-9999.)
		,idLikelihood_(-9999.)
		,idNeuralNet_(-9999.)
		{;}

	~TRootElectron() {;}


	Int_t classification() const { return classification_ ;}
	Float_t caloEnergy() const { return caloEnergy_ ;}
	Float_t caloEnergyError() const { return caloEnergyError_ ;}
	Float_t trackMomentum() const { return trackMomentum_ ;}
	Float_t trackMomentumError() const { return trackMomentumError_ ;}
	Float_t hadOverEm() const { return hadOverEm_ ;}
	Float_t deltaEtaIn() const { return deltaEtaIn_ ;}
	Float_t deltaPhiIn() const { return deltaPhiIn_ ;}
	Float_t energySuperClusterOverPin() const { return energySuperClusterOverPin_ ;}
	Float_t deltaEtaOut() const { return deltaEtaOut_ ;}
	Float_t deltaPhiOut() const { return deltaPhiOut_ ;}
	Float_t energySeedClusterOverPout() const { return energySeedClusterOverPout_ ;}
	Bool_t energyScaleCorrected() const { return energyScaleCorrected_ ;}
	Bool_t momentumCorrected() const { return momentumCorrected_ ;}
	Float_t d0() const { return d0_ ;}
	Float_t d0Error() const { return d0Error_ ;}
	Float_t dsz() const { return dsz_ ;}
	Float_t dszError() const { return dszError_ ;}
	Float_t normalizedChi2() const { return normalizedChi2_ ;}
	Float_t ptError() const { return ptError_ ;}
	Float_t etaError() const { return etaError_ ;}
	Float_t phiError() const { return phiError_ ;}
	Int_t nbClusters() const { return nbClusters_ ;}
	Float_t superClusterRawEnergy() const { return superClusterRawEnergy_ ;}
	Float_t preshowerEnergy() const { return preshowerEnergy_ ;}
	TVector3 caloPosition() const { return caloPosition_ ;}
	map<Int_t,TRef> scRef() const { return scRef_ ;}
	Int_t clusterAlgo() const { return clusterAlgo_ ;}
	Float_t caloConeSize() const { return caloConeSize_ ;}
	Float_t e2x2() const { return e2x2_ ;}
	Float_t e3x3() const { return e3x3_ ;}
	Float_t e5x5() const { return e5x5_ ;}
	Float_t eMax() const { return eMax_ ;}
	Float_t isoR01_sumPt() const { return isoR01_sumPt_ ;}
	Int_t isoR01_nTracks() const { return isoR01_nTracks_ ;}
	Float_t isoR02_sumPt() const { return isoR02_sumPt_ ;}
	Int_t isoR02_nTracks() const { return isoR02_nTracks_ ;}
	Float_t isoR03_emEt() const { return isoR03_emEt_ ;}
	Float_t isoR03_hadEt() const { return isoR03_hadEt_ ;}
	Float_t isoR03_sumPt() const { return isoR03_sumPt_ ;}
	Int_t isoR03_nTracks() const { return isoR03_nTracks_ ;}
	Float_t isoR05_emEt() const { return isoR05_emEt_ ;}
	Float_t isoR05_hadEt() const { return isoR05_hadEt_ ;}
	Float_t isoR05_sumPt() const { return isoR05_sumPt_ ;}
	Int_t isoR05_nTracks() const { return isoR05_nTracks_ ;}
	Float_t idPTDRLoose() const { return idPTDRLoose_ ;}
	Float_t idPTDRMedium() const { return idPTDRMedium_ ;}
	Float_t idPTDRTight() const { return idPTDRTight_ ;}
	Float_t idCutBasedLoose() const { return idCutBasedLoose_ ;}
	Float_t idCutBasedRobust() const { return idCutBasedRobust_ ;}
	Float_t idCutBasedTight() const { return idCutBasedTight_ ;}
	Float_t idLikelihood() const { return idLikelihood_ ;}
	Float_t idNeuralNet() const { return idNeuralNet_ ;}

	virtual TString typeName() const { return "TRootElectron"; }


	void setClassification(Int_t classification) { classification_ = classification; }
	void setCaloEnergy(Float_t caloEnergy) { caloEnergy_ = caloEnergy; }
	void setCaloEnergyError(Float_t caloEnergyError) { caloEnergyError_ = caloEnergyError; }
	void setTrackMomentum(Float_t trackMomentum) { trackMomentum_ = trackMomentum; }
	void setTrackMomentumError(Float_t trackMomentumError) { trackMomentumError_ = trackMomentumError; }
	void setHadOverEm(Float_t hadOverEm) { hadOverEm_ = hadOverEm; }
	void setDeltaEtaIn(Float_t deltaEtaIn) { deltaEtaIn_ = deltaEtaIn; }
	void setDeltaPhiIn(Float_t deltaPhiIn) { deltaPhiIn_ = deltaPhiIn; }
	void setEnergySuperClusterOverPin(Float_t energySuperClusterOverPin) { energySuperClusterOverPin_ = energySuperClusterOverPin; }
	void setDeltaEtaOut(Float_t deltaEtaOut) { deltaEtaOut_ = deltaEtaOut; }
	void setDeltaPhiOut(Float_t deltaPhiOut) { deltaPhiOut_ = deltaPhiOut; }
	void setEnergySeedClusterOverPout(Float_t energySeedClusterOverPout) { energySeedClusterOverPout_ = energySeedClusterOverPout; }
	void setEnergyScaleCorrected(Bool_t energyScaleCorrected) { energyScaleCorrected_ = energyScaleCorrected; }
	void setMomentumCorrected(Bool_t momentumCorrected) { momentumCorrected_ = momentumCorrected; }
	void setD0(Float_t d0) { d0_ = d0; }
	void setD0Error(Float_t d0Error) { d0Error_ = d0Error; }
	void setDsz(Float_t dsz) { dsz_ = dsz; }
	void setDszError(Float_t dszError) { dszError_ = dszError; }
	void setNormalizedChi2(Float_t normalizedChi2) { normalizedChi2_ = normalizedChi2; }
	void setPtError(Float_t ptError) { ptError_ = ptError; }
	void setEtaError(Float_t etaError) { etaError_ = etaError; }
	void setPhiError(Float_t phiError) { phiError_ = phiError; }
	void setNbClusters(Int_t nbClusters) { nbClusters_ = nbClusters; }
	void setSuperClusterRawEnergy(Float_t superClusterRawEnergy) { superClusterRawEnergy_ = superClusterRawEnergy; }
	void setPreshowerEnergy(Float_t preshowerEnergy) { preshowerEnergy_ = preshowerEnergy; }
	void setCaloPosition(TVector3 caloPosition) { caloPosition_ = caloPosition; }
	void setCaloPosition(Double_t x, Double_t y, Double_t z) { caloPosition_.SetXYZ(x, y ,z); }
	void setSCRef(map<Int_t,TRef> scRef) { scRef_ = scRef; }
	void setClusterAlgo(Int_t clusterAlgo) { clusterAlgo_ = clusterAlgo; }
	void setCaloConeSize(Float_t caloConeSize) { caloConeSize_ = caloConeSize; }
	void setE2x2(Float_t e2x2) { e2x2_ = e2x2; }
	void setE3x3(Float_t e3x3) { e3x3_ = e3x3; }
	void setE5x5(Float_t e5x5) { e5x5_ = e5x5; }
	void setEMax(Float_t eMax) { eMax_ = eMax; }
	void setIsoR01_sumPt(Float_t isoR01_sumPt) { isoR01_sumPt_ = isoR01_sumPt; }
	void setIsoR01_nTracks(Int_t isoR01_nTracks) { isoR01_nTracks_ = isoR01_nTracks; }
	void setIsoR02_sumPt(Float_t isoR02_sumPt) { isoR02_sumPt_ = isoR02_sumPt; }
	void setIsoR02_nTracks(Int_t isoR02_nTracks) { isoR02_nTracks_ = isoR02_nTracks; }
	void setIsoR03_emEt(Float_t isoR03_emEt) { isoR03_emEt_ = isoR03_emEt; }
	void setIsoR03_hadEt(Float_t isoR03_hadEt) { isoR03_hadEt_ = isoR03_hadEt; }
	void setIsoR03_sumPt(Float_t isoR03_sumPt) { isoR03_sumPt_ = isoR03_sumPt; }
	void setIsoR03_nTracks(Int_t isoR03_nTracks) { isoR03_nTracks_ = isoR03_nTracks; }
	void setIsoR05_emEt(Float_t isoR05_emEt) { isoR05_emEt_ = isoR05_emEt; }
	void setIsoR05_hadEt(Float_t isoR05_hadEt) { isoR05_hadEt_ = isoR05_hadEt; }
	void setIsoR05_sumPt(Float_t isoR05_sumPt) { isoR05_sumPt_ = isoR05_sumPt; }
	void setIsoR05_nTracks(Int_t isoR05_nTracks) { isoR05_nTracks_ = isoR05_nTracks; }
	void setIDPTDRLoose(Float_t idPTDRLoose) { idPTDRLoose_ = idPTDRLoose; }
	void setIDPTDRMedium(Float_t idPTDRMedium) { idPTDRMedium_ = idPTDRMedium; }
	void setIDPTDRTight(Float_t idPTDRTight) { idPTDRTight_ = idPTDRTight; }
	void setIDCutBasedLoose(Float_t idCutBasedLoose) { idCutBasedLoose_ = idCutBasedLoose; }
	void setIDCutBasedRobust(Float_t idCutBasedRobust) { idCutBasedRobust_ = idCutBasedRobust; }
	void setIDCutBasedTight(Float_t idCutBasedTight) { idCutBasedTight_ = idCutBasedTight; }
	void setIDLikelihood(Float_t idLikelihood) { idLikelihood_ = idLikelihood; }
	void setIDNeuralNet(Float_t idNeuralNet) { idNeuralNet_ = idNeuralNet; }
	
	friend std::ostream& operator<< (std::ostream& stream, const TRootElectron& electron) {
		stream << "TRootElectron - Charge=" << electron.charge() << " (Et,eta,phi)=("<< electron.Et() <<","<< electron.Eta() <<","<< electron.Phi() << ")"
				<< " vertex(x,y,z)=("<< electron.vx() <<","<< electron.vy() <<","<< electron.vz() << ")";
		return stream;
	};

		
 private:
	/*
	TODO
      if (fabs (eta) <= 1.4442) {
	localElectron.setPosition (1);
      }
      else if (fabs (eta) > 1.4442 & fabs (eta) < 1.5560) {
	localElectron.setPosition (0);
      }
      else if (fabs (eta) >= 1.5560) {
	localElectron.setPosition (-1);
      }
	*/

	// Variables from reco::GsfElectron

	// Classification:
	//	barrel  :   0: golden,  10: bigbrem,  20: narrow, 30-34: showering, 
	//          (30: showering nbrem=0, 31: showering nbrem=1, 32: showering nbrem=2 ,33: showering nbrem=3, 34: showering nbrem>=4)
	//           40: crack
	//	endcaps : 100: golden, 110: bigbrem, 120: narrow, 130-134: showering
	//            (130: showering nbrem=0, 131: showering nbrem=1, 132: showering nbrem=2 ,133: showering nbrem=3, 134: showering nbrem>=4)

	Int_t classification_;             // Electron classification

	Float_t caloEnergy_;                // SuperCluster energy corrected by EnergyScaleFactor
	Float_t caloEnergyError_;           // Error on caloEnergy_
	Float_t trackMomentum_;             // Track momentum at vertex
	Float_t trackMomentumError_;        // Error on trackMomentum_

	Float_t hadOverEm_;                 // hadronic over electromagnetic fraction

	Float_t deltaEtaIn_;                // Supercluster eta - Track eta from helix extrapolation from impact point
	Float_t deltaPhiIn_;                // Supercluster phi - Track phi from helix extrapolation from impact point
	Float_t energySuperClusterOverPin_; // supercluster energy / track momentum at impact point

	Float_t deltaEtaOut_;               // SeedCluster eta - Track eta at calo from outermost state
	Float_t deltaPhiOut_;               // SeedCluster phi - Track phi at calo from outermost state
	Float_t energySeedClusterOverPout_; // SeedCluster energy / track momentum at calo from outermost state

	Bool_t energyScaleCorrected_;       // Has Energy Scale been applied ?
	Bool_t momentumCorrected_;          // Tell if class dependant E-p combination has been determined


	// Variables from reco::GsfTrack

	/* cf: http://cmslxr.fnal.gov/lxr/source/DataFormats/TrackReco/interface/TrackBase.h
	For tracks reconstructed in the CMS Tracker, the reference position is the point of closest approach to the centre
	of CMS. For muons, this is not necessarily true. Parameters associated to the 5D curvilinear covariance matrix:
		qoverp = q / abs(p) = signed inverse of momentum [1/GeV]
		lambda = pi/2 - polar angle at the given point
		phi = azimuth angle at the given point
		dxy = -vx*sin(phi) + vy*cos(phi) [cm]
		dsz = vz*cos(lambda) - (vx*cos(phi)+vy*sin(phi))*sin(lambda) [cm]
 
	Geometrically, dxy is the signed distance in the XY plane between the straight line passing through (vx,vy) with
	azimuthal angle phi and the point (0,0). The dsz parameter is the signed distance in the SZ plane between the straight
	line passing through (vx,vy,vz) with angles (phi, lambda) and the point (s=0,z=0). The S axis is defined by the projection
	of the straight line onto the XY plane. The convention is to assign the S coordinate for (vx,vy) as the value
	vx*cos(phi)+vy*sin(phi). This value is zero when (vx,vy) is the point of minimum transverse distance to (0,0).

	Note that dxy and dsz provide sensible estimates of the distance from the true particle trajectory to (0,0,0) ONLY
	in two cases:
		- When (vx,vy,vz) already correspond to the point of minimum transverse distance to (0,0,0) or is close to it
		(so that the differences between considering the exact trajectory or a straight line in this range  are negligible).
		This is usually true for Tracker tracks.
		- When the track has infinite or extremely high momentum */

     Float_t d0_;             // d0=-dxy
     Float_t d0Error_;        // error on d0_
     Float_t dsz_;            // dsz parameter
     Float_t dszError_;       // error on dsz_
     Float_t normalizedChi2_; // chi-squared divided by n.d.o.f. of track fit

     Float_t ptError_; // needed ?  ptError()
     Float_t etaError_; // needed ?  etaError()
     Float_t phiError_; // needed ?  phiError()


	// Variables from reco::SuperCluster
	Int_t nbClusters_; // Number of related brem clusters
     Float_t superClusterRawEnergy_;
     Float_t preshowerEnergy_;
	TVector3 caloPosition_;		// SuperCluster centroid position
	map<Int_t,TRef> scRef_;     // references to the seed SuperClusters (one per SC tytpe)


	// Cluster Shape variables
	// need reco::SuperCluster and reco::BasicCluster
	Int_t clusterAlgo_; // reco::BasicCluster::algo() island = 0, hybrid = 1, fixedMatrix = 2, dynamicHybrid = 3, multi5x5 = 4
	Float_t caloConeSize_; // Delta_R of the cone centered on the reco::GsfElectron and containing all its basic clusters constituents
	// need reco::SuperCluster and reco::BasicCluster and reduced Ecal RecHits Collections for EcalClusterLazyTools
	Float_t e2x2_;
	Float_t e3x3_;
	Float_t e5x5_;
	Float_t eMax_;


     // pat::Electron Isolation
	Float_t isoR01_sumPt_;
	Int_t isoR01_nTracks_;

	Float_t isoR02_sumPt_;
	Int_t isoR02_nTracks_;

	Float_t isoR03_emEt_;
	Float_t isoR03_hadEt_;
	Float_t isoR03_sumPt_;
	Int_t isoR03_nTracks_;

	Float_t isoR05_emEt_;
	Float_t isoR05_hadEt_;
	Float_t isoR05_sumPt_; // Pt sum of tracks in a DR=0.5 cone around the electron
	Int_t isoR05_nTracks_; // Tracks multiplicity in a DR=0.5 cone around the electron


     // pat::Electron ID (cf https://twiki.cern.ch/twiki/bin/view/CMS/SWGuideElectronID)
     Float_t idPTDRLoose_;
     Float_t idPTDRMedium_;
     Float_t idPTDRTight_;
     Float_t idCutBasedLoose_;
     Float_t idCutBasedRobust_;
     Float_t idCutBasedTight_;
     Float_t idLikelihood_;
     Float_t idNeuralNet_;

	// Matched genParticle
	TLorentzVector momentumMCElectron_;
	TVector3 vertexMCElectron_;
	Int_t pdgIdMCElectron_;

	// needed ?
	//Float_t sigmaEtaEta_;
	//Float_t sigmaPhiPhi_;

	
	ClassDef (TRootElectron,1);
};

#endif