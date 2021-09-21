## This file is part of CoreArray.
##
## CoreArray is free software: you can redistribute it and/or modify it
## under the terms of the GNU Lesser General Public License Version 3 as
## published by the Free Software Foundation.
##
## CoreArray is distributed in the hope that it will be useful, but
## WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
## GNU Lesser General Public License for more details.
##
## You should have received a copy of the GNU Lesser General Public
## License along with CoreArray.
## If not, see <http:##www.gnu.org/licenses/>.



## The command which runs the C compiler.
CC = gcc

## Debugging and optimization options for the C compiler.
CFLAGS = -O2 -DCOREARRAY_NO_LZMA

## The command which runs the C++ compiler.
CXX = g++

## Options for the C++ compiler.
CXXFLAGS = -O2 -DCOREARRAY_NO_LZMA

## Copy files
CP = cp -f

## Remove directory entries
RM = rm -rf

## Create a directory
MKDIR = mkdir -p

## Create and maintain library archives
AR = ar



## CoreArray library archive file
LIB_COREARRAY_A = ../lib/libCoreArray.a

## CoreArray library object files
LIB_CORE_OBJS = \
	CoreArray.o dAllocator.o dAny.o dBase.o dBitGDS.o dEndian.o dFile.o \
	dParallel.o dParallel_Ext.o dPlatform.o dRealGDS.o dSerial.o \
	dStrGDS.o dStream.o dStruct.o dSparse.o dVLIntGDS.o


## CoreArray header files
INC_COREARRAY = -I../include


## zlib library
LIB_ZIP_A = ../lib/libZLIB.a

## ZLIB library object files
LIB_ZLIB_OBJS = adler32.o compress.o crc32.o deflate.o infback.o \
	inffast.o inflate.o inftrees.o trees.o uncompr.o zutil.o


## lz4 library
LIB_LZ4_A = ../lib/libLZ4.a

## LZ4 library object files
LIB_LZ4_OBJS = lz4.o lz4hc.o lz4frame.o xxhash.o


## xz library
LIB_XZ_A = ../lib/liblzma.a



## lz4 library
LIB_GENOGDS_A = ../lib/libGenoGDS.a

## LZ4 library object files
LIB_GENOGDS_OBJS = GenoGDS.o


##  all jobs

all: $(LIB_COREARRAY_A) $(LIB_ZIP_A) $(LIB_LZ4_A) $(LIB_GENOGDS_A)
	
##  Clean and remove files

clean:
	$(RM) *.o
	$(RM) ../lib/*
	$(RM) CoreArray/*.o
	$(RM) ZLIB/*.o
	$(RM) LZ4/*.o
	$(RM) GenoGDS/*.o



## CoreArray library archives
$(LIB_COREARRAY_A): $(LIB_CORE_OBJS)
	$(MKDIR) ../lib
	$(RM) $(LIB_COREARRAY_A)
	$(AR) -r $(LIB_COREARRAY_A) $(LIB_CORE_OBJS)

## zlib library archives
$(LIB_ZIP_A): $(LIB_ZLIB_OBJS)
	$(MKDIR) ../lib
	$(RM) $(LIB_ZIP_A)
	$(AR) -r $(LIB_ZIP_A) $(LIB_ZLIB_OBJS)

## lz4 library archives
$(LIB_LZ4_A): $(LIB_LZ4_OBJS)
	$(MKDIR) ../lib
	$(RM) $(LIB_LZ4_A)
	$(AR) -r $(LIB_LZ4_A) $(LIB_LZ4_OBJS)

## GenoGDS library archives
$(LIB_GENOGDS_A): $(LIB_GENOGDS_OBJS)
	$(MKDIR) ../lib
	$(RM) $(LIB_GENOGDS_A)
	$(AR) -r $(LIB_GENOGDS_A) $(LIB_GENOGDS_OBJS)




##########################################################################

##  CoreArray Library  ##

CoreArray.o:
	$(CXX) $(CXXFLAGS) $(INC_COREARRAY) CoreArray/CoreArray.cpp -c -o $@

dAllocator.o:
	$(CXX) $(CXXFLAGS) $(INC_COREARRAY) CoreArray/dAllocator.cpp -c -o $@

dAny.o:
	$(CXX) $(CXXFLAGS) $(INC_COREARRAY) CoreArray/dAny.cpp -c -o $@

dBase.o:
	$(CXX) $(CXXFLAGS) $(INC_COREARRAY) CoreArray/dBase.cpp -c -o $@

dBitGDS.o:
	$(CXX) $(CXXFLAGS) $(INC_COREARRAY) CoreArray/dBitGDS.cpp -c -o $@

dEndian.o:
	$(CXX) $(CXXFLAGS) $(INC_COREARRAY) CoreArray/dEndian.cpp -c -o $@

dFile.o:
	$(CXX) $(CXXFLAGS) $(INC_COREARRAY) CoreArray/dFile.cpp -c -o $@

dParallel.o:
	$(CXX) $(CXXFLAGS) $(INC_COREARRAY) CoreArray/dParallel.cpp -c -o $@

dParallel_Ext.o:
	$(CC) $(CFLAGS) $(INC_COREARRAY) CoreArray/dParallel_Ext.c -c -o $@

dPlatform.o:
	$(CXX) $(CXXFLAGS) $(INC_COREARRAY) CoreArray/dPlatform.cpp -c -o $@

dRealGDS.o:
	$(CXX) $(CXXFLAGS) $(INC_COREARRAY) CoreArray/dRealGDS.cpp -c -o $@

dSerial.o:
	$(CXX) $(CXXFLAGS) $(INC_COREARRAY) CoreArray/dSerial.cpp -c -o $@

dStrGDS.o:
	$(CXX) $(CXXFLAGS) $(INC_COREARRAY) CoreArray/dStrGDS.cpp -c -o $@

dStream.o:
	$(CXX) $(CXXFLAGS) $(INC_COREARRAY) CoreArray/dStream.cpp -c -o $@

dStruct.o:
	$(CXX) $(CXXFLAGS) $(INC_COREARRAY) CoreArray/dStruct.cpp -c -o $@

dSparse.o:
	$(CXX) $(CXXFLAGS) $(INC_COREARRAY) CoreArray/dSparse.cpp -c -o $@

dVLIntGDS.o:
	$(CXX) $(CXXFLAGS) $(INC_COREARRAY) CoreArray/dVLIntGDS.cpp -c -o $@


##  ZLIB Library  ##

adler32.o:
	$(CC) $(CFLAGS) ZLIB/adler32.c -c -o $@

compress.o:
	$(CC) $(CFLAGS) ZLIB/compress.c -c -o $@

crc32.o:
	$(CC) $(CFLAGS) ZLIB/crc32.c -c -o $@

deflate.o:
	$(CC) $(CFLAGS) ZLIB/deflate.c -c -o $@

infback.o:
	$(CC) $(CFLAGS) ZLIB/infback.c -c -o $@

inffast.o:
	$(CC) $(CFLAGS) ZLIB/inffast.c -c -o $@

inflate.o:
	$(CC) $(CFLAGS) ZLIB/inflate.c -c -o $@

inftrees.o:
	$(CC) $(CFLAGS) ZLIB/inftrees.c -c -o $@

trees.o:
	$(CC) $(CFLAGS) ZLIB/trees.c -c -o $@

uncompr.o:
	$(CC) $(CFLAGS) ZLIB/uncompr.c -c -o $@

zutil.o:
	$(CC) $(CFLAGS) ZLIB/zutil.c -c -o $@


##  LZ4 Library  ##

lz4.o:
	$(CC) $(CFLAGS) LZ4/lz4.c -c -o $@

lz4hc.o:
	$(CC) $(CFLAGS) LZ4/lz4hc.c -c -o $@

lz4frame.o:
	$(CC) $(CFLAGS) LZ4/lz4frame.c -c -o $@

xxhash.o:
	$(CC) $(CFLAGS) LZ4/xxhash.c -c -o $@


##  GenoGDS Library  ##

GenoGDS.o: GenoGDS/GenoGDS.h GenoGDS/GenoGDS.cpp
	$(CXX) $(CXXFLAGS) $(INC_COREARRAY) GenoGDS/GenoGDS.cpp -c -o $@
