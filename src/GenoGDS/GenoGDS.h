// ===========================================================
//
// GenoGDS.h: C/C++ interface to SNP and Sequencing GDS Files
//
// Copyright (C) 2015    Xiuwen Zheng
//
// GenoGDS is free software: you can redistribute it and/or modify it
// under the terms of the GNU Lesser General Public License Version 3 as
// published by the Free Software Foundation.
//
// CoreArray is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with GenoGDS.
// If not, see <http://www.gnu.org/licenses/>.

#ifndef _HEADER_GENOTYPE_GDS_
#define _HEADER_GENOTYPE_GDS_

#include "dType.h"


#ifdef __cplusplus

#include "../CoreArray/CoreArray.h"

namespace GenoGDS
{
	using namespace CoreArray;


	/// Class for SNP GDS files (implemented in the R package SNPRelate)
	class ClassSNPGDS
	{
	public:
		ClassSNPGDS();
		~ClassSNPGDS();

		void Open(const char *fn);
		void Close();

		inline int NumOfSamp() const { return _NumOfSamp; }
		inline int NumOfSNP() const { return _NumOfSNP; }

	protected:
		CdGDSFile _File;
		int _NumOfSamp;
		int _NumOfSNP;
	};


	/// Class for sequencing GDS files (implemented in the R package SeqArray)
	class ClassSeqGDS
	{
	public:
		
	};
}


extern "C" {

#endif



#ifdef __cplusplus
}
#endif

#endif /* _HEADER_GENOTYPE_GDS_ */
