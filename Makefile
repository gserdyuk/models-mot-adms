
all:
	-(cd hicum0;	make -f Makefile.gnucap)
	-(cd hicum2; 	make -f Makefile.gnucap)
	-(cd mextram; 	make -f Makefile.gnucap)
	-(cd ekv; 	make -f Makefile.gnucap)
	-(cd psp102; 	make -f Makefile.gnucap)
	-(cd rtest;     make -f Makefile.gnucap)

clean:
	-(cd hicum0;	make -f Makefile.gnucap clean)
	-(cd hicum2; 	make -f Makefile.gnucap clean)
	-(cd mextram; 	make -f Makefile.gnucap clean)
	-(cd ekv; 	make -f Makefile.gnucap clean)
	-(cd psp102; 	make -f Makefile.gnucap clean)
	-(cd rtest; 	make -f Makefile.gnucap clean)

install:
	-(cd hicum0;	make -f Makefile.gnucap install)
	-(cd hicum2; 	make -f Makefile.gnucap install)
	-(cd mextram; 	make -f Makefile.gnucap install)
	-(cd ekv; 	make -f Makefile.gnucap install)
	-(cd psp102; 	make -f Makefile.gnucap install)
	-(cd rtest; 	make -f Makefile.gnucap install)
