##
## Interface: ngspice 1.0.0.0
## created by: admsXml-2.3.0 - Tue, 23 Mar 2010 21:11:50

## Process this file with automake to produce Makefile.in

ADMSXMLINTERFACE=../admst
mextram.c: admsva/mextram.va
	admsXml -Iadmsva admsva/mextram.va \
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
	perl -p -i.bak -e 's/IOP\("(\w+)"/IOP("\L\1"/' mextram.c

noinst_LTLIBRARIES = libmextram.la

libmextram_la_SOURCES = 	\
	mextram.c		\
	mextram.hxx		\
	mextramacld.c	\
	mextramask.c	\
	mextramdefs.h	\
	mextramdel.c	\
	mextramdest.c	\
	mextramext.h	\
	mextramguesstopology.c	\
	mextraminit.c	\
	mextraminit.h	\
	mextramitf.h	\
	mextramload.c	\
	mextrammask.c	\
	mextrammdel.c	\
	mextrammpar.c	\
	mextrampar.c	\
	mextrampzld.c	\
	mextramsetup.c	\
	mextramtemp.c	\
	mextramtrunc.c

BUILT_SOURCES = 	\
	mextram.c		\
	mextram.hxx		\
	mextramacld.c	\
	mextramask.c	\
	mextramdefs.h	\
	mextramdel.c	\
	mextramdest.c	\
	mextramext.h	\
	mextramguesstopology.c	\
	mextraminit.c	\
	mextraminit.h	\
	mextramitf.h	\
	mextramload.c	\
	mextrammask.c	\
	mextrammdel.c	\
	mextrammpar.c	\
	mextrampar.c	\
	mextrampzld.c	\
	mextramsetup.c	\
	mextramtemp.c \
	mextramtrunc.c

CLEANFILES = 		\
	mextram.c		\
	mextram.hxx		\
	mextram.c.bak	\
	mextramacld.c	\
	mextramask.c	\
	mextramdefs.h	\
	mextramdel.c	\
	mextramdest.c	\
	mextramext.h	\
	mextramguesstopology.c	\
	mextraminit.c	\
	mextraminit.h	\
	mextramitf.h	\
	mextramload.c	\
	mextrammask.c	\
	mextrammdel.c	\
	mextrammpar.c	\
	mextrampar.c	\
	mextrampzld.c	\
	mextramsetup.c	\
	mextramtemp.c	\
	mextramnoise.c	\
	mextramtrunc.c


#TODO (not implemented) \
	mextramconv.c	\
	mextramgetic.c

AM_CPPFLAGS = -I$(top_srcdir)/src/include

MAINTAINERCLEANFILES = Makefile.in
