#ifndef TRootGenEvent_h
#define TRootGenEvent_h

#include "../interface/TRootParticle.h"

#include "Rtypes.h"
#include "TObject.h"
#include "vector.h"

#include <iostream>
#include <iomanip>
using namespace std;

class TRootGenEvent : public TObject 
{
	
public: 
        // semiletponic decay channel
        enum LeptonType {kNone, kElec, kMuon, kTau};

public:
	TRootGenEvent() :
	        semiLeptonicChannel_(kNone),
                isTtBar_(false),
	        isFullHadronic_(false),
	        isSemiLeptonic_(false),
	        isFullLeptonic_(false)	
		{;}

	~TRootGenEvent(){;}

	Bool_t isTtBar() const {return isTtBar_;};
	Bool_t isFullHadronic() const {return isFullHadronic_;};
	Bool_t isSemiLeptonic() const {return isSemiLeptonic_;};
	Bool_t isFullLeptonic() const {return isFullLeptonic_;};
        LeptonType semiLeptonicChannel() const { return semiLeptonicChannel_;};
	bool isSemiLeptonic(LeptonType typeA) const
	 { return (semiLeptonicChannel()==typeA ? true : false); };
	  
        const TLorentzVector neutrino() const { return neutrino_;};
        const TLorentzVector lepton() const { return lepton_;};
        const TLorentzVector leptonicDecayW() const { return leptonicDecayW_;};
        const TLorentzVector leptonicDecayB() const { return leptonicDecayB_;};
        const TLorentzVector leptonicDecayTop() const { return leptonicDecayTop_;};
        const TLorentzVector hadronicDecayW() const {return hadronicDecayW_;};
        const TLorentzVector hadronicDecayB() const {return hadronicDecayB_;};
        const TLorentzVector hadronicDecayTop() const {return hadronicDecayTop_;};
        const TLorentzVector hadronicDecayQuark() const {return hadronicDecayQuark_;};
        const TLorentzVector hadronicDecayQuarkBar() const {return hadronicDecayQuarkBar_;};
        const std::vector<TLorentzVector> leptonicDecayTopRadiation() const { return leptonicDecayTopRadiation_;};
        const std::vector<TLorentzVector> hadronicDecayTopRadiation() const { return leptonicDecayTopRadiation_;};
        const std::vector<TLorentzVector> ISR()const { return ISR_;};
 

        void SetBoolean(Bool_t isTtBar, Bool_t isFullHadronic, Bool_t isSemiLeptonic, Bool_t isFullLeptonic){
	 isTtBar_ = isTtBar;
	 isFullHadronic_ = isFullHadronic;
	 isSemiLeptonic_ = isSemiLeptonic;
	 isFullLeptonic_ = isFullLeptonic;
	};
	void SetSemiLeptonicChannel(LeptonType type){ semiLeptonicChannel_ = type;};
	void SetTLorentzVector(TLorentzVector &lepton, TLorentzVector &neutrino, TLorentzVector &leptonicDecayW, TLorentzVector &leptonicDecayB, TLorentzVector &leptonicDecayTop, TLorentzVector &hadronicDecayW, TLorentzVector &hadronicDecayB, TLorentzVector &hadronicDecayTop, TLorentzVector &hadronicDecayQuark, TLorentzVector &hadronicDecayQuarkBar){
	 lepton_ = lepton;
	 neutrino_ = neutrino;
	 leptonicDecayW_ = leptonicDecayW;
	 leptonicDecayB_ = leptonicDecayB;
	 leptonicDecayTop_ = leptonicDecayTop;
	 hadronicDecayW_ = hadronicDecayW;
	 hadronicDecayB_ = hadronicDecayB;
	 hadronicDecayTop_ = hadronicDecayTop;
	 hadronicDecayQuark_ = hadronicDecayQuark;
	 hadronicDecayQuarkBar_ = hadronicDecayQuarkBar; 
	};
        void SetRadiation(std::vector<TLorentzVector> leptonicDecayTopRadiation, std::vector<TLorentzVector> hadronicDecayTopRadiation, std::vector<TLorentzVector> ISR){
	  leptonicDecayTopRadiation_ = leptonicDecayTopRadiation; 
	  hadronicDecayTopRadiation_ = hadronicDecayTopRadiation;
	  ISR_ = ISR; 
	};

	virtual TString typeName() const { return "TRootGenEvent"; }


	friend std::ostream& operator<< (std::ostream& stream, const TRootGenEvent& genEvt) {
		stream << "TRootGenEvent - is ";
	        if(genEvt.isTtBar()) stream <<"not ";
		stream <<"Ttbar event ";
		if(genEvt.isFullHadronic()) stream <<" FullHadronic ";
		if(genEvt.isFullLeptonic()) stream <<" FullLeptonic ";
		if(genEvt.isSemiLeptonic()) stream <<" SemiLeptonic ";
		if(genEvt.semiLeptonicChannel()==kMuon) stream <<" muonic";
		if(genEvt.semiLeptonicChannel()==kElec) stream <<" electronic";
		if(genEvt.semiLeptonicChannel()==kTau) stream <<" tauonic";
		stream << std::endl;
		stream << "Nof ISR: "<< genEvt.ISR().size();
		stream << "Nof Top radiations: "<< genEvt.leptonicDecayTopRadiation().size() + genEvt.hadronicDecayTopRadiation().size();
		//stream << "TRootGenEvent - Charge=" << setw(2) << jet.charge() << " (Et,eta,phi)=("<< setw(10) << jet.Et() <<","<< setw(10) << jet.Eta() <<","<< setw(10) << jet.Phi() << ")"
		return stream;
	};


private:

        LeptonType semiLeptonicChannel_;
        Bool_t isTtBar_;
	Bool_t isFullHadronic_;
	Bool_t isSemiLeptonic_;
	Bool_t isFullLeptonic_;
	TLorentzVector lepton_;
	TLorentzVector neutrino_;
	TLorentzVector leptonicDecayW_;
	TLorentzVector leptonicDecayB_;
	TLorentzVector leptonicDecayTop_;
	TLorentzVector hadronicDecayW_;
	TLorentzVector hadronicDecayB_;
	TLorentzVector hadronicDecayTop_;
	TLorentzVector hadronicDecayQuark_;
	TLorentzVector hadronicDecayQuarkBar_;
        std::vector<TLorentzVector> ISR_;
        std::vector<TLorentzVector> leptonicDecayTopRadiation_;
        std::vector<TLorentzVector> hadronicDecayTopRadiation_;

	
  ClassDef (TRootGenEvent,1);
};

#endif