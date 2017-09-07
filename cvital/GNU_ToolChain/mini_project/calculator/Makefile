main:
	make -C src
statlib:
	make -C lib statlib
dynlib:
	make -C lib dynlib

clean: 
	make -C src clean
	exit 0	
	make -C lib clean
	exit 0
install:
	cp src/main bin/
