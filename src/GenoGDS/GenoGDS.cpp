// ===========================================================
//
// GenoGDS.cpp: C/C++ interface to SNP and Sequencing GDS Files
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

#include "GenoGDS.h"


using namespace GenoGDS;


// =======================================================================
// Class for SNP GDS files (implemented in the R package SNPRelate)
// =======================================================================

ClassSNPGDS::ClassSNPGDS()
{
	RegisterClass();
	_NumOfSamp = _NumOfSNP = 0;
}

ClassSNPGDS::~ClassSNPGDS()
{

}

void ClassSNPGDS::Open(const char *fn)
{
	_File.LoadFileFork(fn);
}

void ClassSNPGDS::Close()
{
	_File.CloseFile();
}
