##
## Interface: ngspice 1.0.0.0
## created by: admsXml-2.3.0 - Tue, 13 Apr 2010 13:46:25

## Process this file with automake to produce Makefile.in

ADMSXMLINTERFACE=../admst
rtest.c: admsva/rtest.va
	admsXml -Iadmsva admsva/rtest.va \
	-e $(ADMSXMLINTERFACE)/ngspiceVersion.xml \
	-e $(ADMSXMLINTERFACE)/ngspiceMODULEitf.h.xml \
	-e $(ADMSXMLINTERFACE)/ngspiceMODULEinit.c.xml \
	-e $(ADMSXMLINTERFACE)/ngspiceMODULEinit.h.xml \
	-e $(ADMSXMLINTERFACE)/ngspiceMODULEext.h.xml \
	-e $(ADMSXMLINTERFACE)/ngspiceMODULEdefs.h.xml \
	-e $(ADMSXMLINTERFACE)/ngspiceMODULEask.c.xml \
	-e $(ADMSXMLINTERFACE)/ngspiceMODULEmask.c.xml \
	-e $(ADMSXMLINTERFACE)/ngspiceMODULEpar.c.xml \
	-e $(ADMSXMLINTERFACE)/ngspiceMODULEmpar.c.xml \
	-e $(ADMSXMLINTERFACE)/ngspiceMODULEload.c.xml \
	-e $(ADMSXMLINTERFACE)/ngspiceMODULEacld.c.xml \
	-e $(ADMSXMLINTERFACE)/ngspiceMODULEpzld.c.xml \
	-e $(ADMSXMLINTERFACE)/ngspiceMODULEtemp.c.xml \
	-e $(ADMSXMLINTERFACE)/ngspiceMODULEtrunc.c.xml \
	-e $(ADMSXMLINTERFACE)/ngspiceMODULEsetup.c.xml \
	-e $(ADMSXMLINTERFACE)/ngspiceMODULEdel.c.xml \
	-e $(ADMSXMLINTERFACE)/ngspiceMODULEmdel.c.xml \
	-e $(ADMSXMLINTERFACE)/ngspiceMODULEdest.c.xml \
	-e $(ADMSXMLINTERFACE)/ngspiceMODULEnoise.c.xml \
	-e $(ADMSXMLINTERFACE)/ngspiceMODULEguesstopology.c.xml \
	-e $(ADMSXMLINTERFACE)/ngspiceMODULE.hxx.xml \
	-e $(ADMSXMLINTERFACE)/ngspiceMODULE.c.xml
	perl -p -i.bak -e 's/IOP\("(\w+)"/IOP("\L\1"/' rtest.c

noinst_LTLIBRARIES = librtest.la

librtest_la_SOURCES = 	\
	rtest.c		\
	rtest.hxx		\
	rtestacld.c	\
	rtestask.c	\
	rtestdefs.h	\
	rtestdel.c	\
	rtestdest.c	\
	rtestext.h	\
	rtestguesstopology.c	\
	rtestinit.c	\
	rtestinit.h	\
	rtestitf.h	\
	rtestload.c	\
	rtestmask.c	\
	rtestmdel.c	\
	rtestmpar.c	\
	rtestpar.c	\
	rtestpzld.c	\
	rtestsetup.c	\
	rtesttemp.c	\
	rtesttrunc.c

BUILT_SOURCES = 	\
	rtest.c		\
	rtest.hxx		\
	rtestacld.c	\
	rtestask.c	\
	rtestdefs.h	\
	rtestdel.c	\
	rtestdest.c	\
	rtestext.h	\
	rtestguesstopology.c	\
	rtestinit.c	\
	rtestinit.h	\
	rtestitf.h	\
	rtestload.c	\
	rtestmask.c	\
	rtestmdel.c	\
	rtestmpar.c	\
	rtestpar.c	\
	rtestpzld.c	\
	rtestsetup.c	\
	rtesttemp.c \
	rtesttrunc.c

CLEANFILES = 		\
	rtest.c		\
	rtest.hxx		\
	rtest.c.bak	\
	rtestacld.c	\
	rtestask.c	\
	rtestdefs.h	\
	rtestdel.c	\
	rtestdest.c	\
	rtestext.h	\
	rtestguesstopology.c	\
	rtestinit.c	\
	rtestinit.h	\
	rtestitf.h	\
	rtestload.c	\
	rtestmask.c	\
	rtestmdel.c	\
	rtestmpar.c	\
	rtestpar.c	\
	rtestpzld.c	\
	rtestsetup.c	\
	rtesttemp.c	\
	rtestnoise.c	\
	rtesttrunc.c


#TODO (not implemented) \
	rtestconv.c	\
	rtestgetic.c

AM_CPPFLAGS = -I$(top_srcdir)/src/include

MAINTAINERCLEANFILES = Makefile.in
