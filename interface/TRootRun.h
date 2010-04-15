#ifndef TRootRun_h
#define TRootRun_h

#include <string>
#include <iostream>
#include <vector>

#include "Rtypes.h"
#include "TObject.h"
#include "TVector3.h"

using namespace std;

namespace TopTree
{
	class TRootRun : public TObject
	{

	public:
		TRootRun() :
			nHLT8E29Events_(0)
			,nHLT8E29WasRun_(0)
			,nHLT8E29Accept_(0)
			,nHLT8E29Errors_(0)
			,nHLTEvents_(0)
			,nHLTWasRun_(0)
			,nHLTAccept_(0)
			,nHLTErrors_(0)
	  		,hlt8E29WasRun_(0)
  			,hlt8E29Accept_(0)
  			,hlt8E29Errors_(0)
  			,hlt8E29Names_(0)
	  		,hltWasRun_(0)
  			,hltAccept_(0)
  			,hltErrors_(0)
  			,hltNames_(0)
			,hlt8E29InputTag_("")
			,hltInputTag_("")
			{;}
	
		~TRootRun() {;}
		
		unsigned int  nHLT8E29Paths() const { return hlt8E29Names_.size(); }
		unsigned int  nHLTPaths() const { return hltNames_.size(); }

		unsigned int  nHLT8E29Events() const { return nHLT8E29Events_; }
		unsigned int  nHLT8E29WasRun() const { return nHLT8E29WasRun_; }
		unsigned int  nHLT8E29Accept() const { return nHLT8E29Accept_; }
		unsigned int  nHLT8E29Errors() const { return nHLT8E29Errors_; }
		unsigned int  nHLTEvents() const { return nHLTEvents_; }
		unsigned int  nHLTWasRun() const { return nHLTWasRun_; }
		unsigned int  nHLTAccept() const { return nHLTAccept_; }
		unsigned int  nHLTErrors() const { return nHLTErrors_; }

		std::vector<unsigned int> hlt8E29WasRun() const { return hlt8E29WasRun_; }
		std::vector<unsigned int> hlt8E29Accept() const { return hlt8E29Accept_; }
		std::vector<unsigned int> hlt8E29Errors() const { return hlt8E29Errors_; }
		std::vector<std::string>  hlt8E29Names() const { return hlt8E29Names_; }
		std::vector<unsigned int> hltWasRun() const { return hltWasRun_; }
		std::vector<unsigned int> hltAccept() const { return hltAccept_; }
		std::vector<unsigned int> hltErrors() const { return hltErrors_; }
		std::vector<std::string>  hltNames() const { return hltNames_; }

		unsigned int hlt8E29WasRun(unsigned ipath) const { return (hlt8E29WasRun_.size()>ipath ?  hlt8E29WasRun_.at(ipath) : 0 ); }
		unsigned int hlt8E29Accept(unsigned ipath) const { return (hlt8E29Accept_.size()>ipath ?  hlt8E29Accept_.at(ipath) : 0 ); }
		unsigned int hlt8E29Errors(unsigned ipath) const { return (hlt8E29Errors_.size()>ipath ?  hlt8E29Errors_.at(ipath) : 0 ); }
		std::string hlt8E29Names(unsigned ipath) const { return (hlt8E29Names_.size()>ipath ?  hlt8E29Names_.at(ipath) : "noname" ); }
		unsigned int hltWasRun(unsigned ipath) const { return (hltWasRun_.size()>ipath ?  hltWasRun_.at(ipath) : 0 ); }
		unsigned int hltAccept(unsigned ipath) const { return (hltAccept_.size()>ipath ?  hltAccept_.at(ipath) : 0 ); }
		unsigned int hltErrors(unsigned ipath) const { return (hltErrors_.size()>ipath ?  hltErrors_.at(ipath) : 0 ); }
		std::string hltNames(unsigned ipath) const { return (hltNames_.size()>ipath ?  hltNames_.at(ipath) : "noname" ); }

		unsigned int hlt8E29Path(std::string hlt8E29Name)
		{
			for (unsigned int ipath=0; ipath < hlt8E29Names_.size(); ipath++)
			{
				//std::cout << hlt8E29Names_.at(ipath)<< " <-> " <<  hlt8E29Name << endl;
				if (hlt8E29Names_.at(ipath) == hlt8E29Name)
				{
					return ipath;   
				}
			}
			return 9999;  
		}
		unsigned int hltPath(std::string hltName)
		{
			for (unsigned int ipath=0; ipath < hltNames_.size(); ipath++)
			{
				//std::cout << hltNames_.at(ipath)<< " <-> " <<  hltName << endl;
				if (hltNames_.at(ipath) == hltName)
				{
					return ipath;   
				}
			}
			return 9999;  
		}

		std::string hlt8E29InputTag() const { return hlt8E29InputTag_; }
		std::string hltInputTag() const { return hltInputTag_; }


		void setNHLT8E29Events(unsigned int nHLT8E29Events) { nHLT8E29Events_=nHLT8E29Events; }
		void setNHLT8E29WasRun(unsigned int nHLT8E29WasRun) { nHLT8E29WasRun_=nHLT8E29WasRun; }
		void setNHLT8E29Accept(unsigned int nHLT8E29Accept) { nHLT8E29Accept_=nHLT8E29Accept; }
		void setNHLT8E29Errors(unsigned int nHLT8E29Errors) { nHLT8E29Errors_=nHLT8E29Errors; }
		void setNHLTEvents(unsigned int nHLTEvents) { nHLTEvents_=nHLTEvents; }
		void setNHLTWasRun(unsigned int nHLTWasRun) { nHLTWasRun_=nHLTWasRun; }
		void setNHLTAccept(unsigned int nHLTAccept) { nHLTAccept_=nHLTAccept; }
		void setNHLTErrors(unsigned int nHLTErrors) { nHLTErrors_=nHLTErrors; }
		
		void setHLT8E29WasRun(std::vector<unsigned int> hlt8E29WasRun)
		{
			hlt8E29WasRun_.resize(hlt8E29WasRun.size()); 
			hlt8E29WasRun_=hlt8E29WasRun; 
		}
		void setHLT8E29Accept(std::vector<unsigned int> hlt8E29Accept)
		{
			hlt8E29Accept_.resize(hlt8E29Accept.size()); 
			hlt8E29Accept_=hlt8E29Accept; 
		}
		void setHLT8E29Errors(std::vector<unsigned int> hlt8E29Errors)
		{
			hlt8E29Errors_.resize(hlt8E29Errors.size()); 
			hlt8E29Errors_=hlt8E29Errors; 
		}
		void setHLT8E29Names(std::vector<std::string> hlt8E29Names)
		{
			hlt8E29Names_.resize(hlt8E29Names.size()); 
			hlt8E29Names_=hlt8E29Names; 
		}

		void setHLTWasRun(std::vector<unsigned int> hltWasRun)
		{
			hltWasRun_.resize(hltWasRun.size()); 
			hltWasRun_=hltWasRun; 
		}
		void setHLTAccept(std::vector<unsigned int> hltAccept)
		{
			hltAccept_.resize(hltAccept.size()); 
			hltAccept_=hltAccept; 
		}
		void setHLTErrors(std::vector<unsigned int> hltErrors)
		{
			hltErrors_.resize(hltErrors.size()); 
			hltErrors_=hltErrors; 
		}
		void setHLTNames(std::vector<std::string> hltNames)
		{
			hltNames_.resize(hltNames.size()); 
			hltNames_=hltNames; 
		}

		void setHLT8E29InputTag(std::string hlt8E29InputTag) { hlt8E29InputTag_ = hlt8E29InputTag; }
		void setHLTInputTag(std::string hltInputTag) { hltInputTag_ = hltInputTag; }


	private:
		unsigned int nHLT8E29Events_;		// Nb of events
		unsigned int nHLT8E29WasRun_;		// Nb of events where at least one HLT was run
		unsigned int nHLT8E29Accept_;		// Nb of accepted events
		unsigned int nHLT8E29Errors_;		// Nb of events where at least one HLT had error
		unsigned int nHLTEvents_;			// Nb of events
		unsigned int nHLTWasRun_;			// Nb of events where at least one HLT was run
		unsigned int nHLTAccept_;			// Nb of accepted events
		unsigned int nHLTErrors_;			// Nb of events where at least one HLT had error

		std::vector<unsigned int> hlt8E29WasRun_;		// # where HLT[i] was run
		std::vector<unsigned int> hlt8E29Accept_;		// # of events accepted by HLT[i]
		std::vector<unsigned int> hlt8E29Errors_;		// # of events with error in HLT[i]
		std::vector<std::string>  hlt8E29Names_;		// name of each HLT algorithm
		std::vector<unsigned int> hltWasRun_;			// # where HLT[i] was run
		std::vector<unsigned int> hltAccept_;			// # of events accepted by HLT[i]
		std::vector<unsigned int> hltErrors_;			// # of events with error in HLT[i]
		std::vector<std::string>  hltNames_;			// name of each HLT algorithm

		std::string hlt8E29InputTag_;						// name of the 8E29HLT inputtag provided in the TopTreeProducer config
		std::string hltInputTag_;							// name of the HLT inputtag provided in the TopTreeProducer config

		ClassDef (TRootRun,1);
	};
}

#endif
