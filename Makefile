all: lib/libCoreArray.a

clean:
	cd src; make clean; cd ..

lib/libCoreArray.a:
	cd src; make; cd ..
