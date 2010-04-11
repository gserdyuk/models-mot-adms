##
## Interface: ngspice 1.0.0.0
## created by: admsXml-2.3.0 - Tue, 23 Mar 2010 20:48:06

## Process this file with automake to produce Makefile.in

ADMSXMLINTERFACE=../admst
hicum2.c: admsva/hicum2.va
	admsXml -Iadmsva admsva/hicum2.va \
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
	perl -p -i.bak -e 's/IOP\("(\w+)"/IOP("\L\1"/' hicum2.c

noinst_LTLIBRARIES = libhicum2.la

libhicum2_la_SOURCES = 	\
	hicum2.c		\
	hicum2.hxx		\
	hicum2acld.c	\
	hicum2ask.c	\
	hicum2defs.h	\
	hicum2del.c	\
	hicum2dest.c	\
	hicum2ext.h	\
	hicum2guesstopology.c	\
	hicum2init.c	\
	hicum2init.h	\
	hicum2itf.h	\
	hicum2load.c	\
	hicum2mask.c	\
	hicum2mdel.c	\
	hicum2mpar.c	\
	hicum2par.c	\
	hicum2pzld.c	\
	hicum2setup.c	\
	hicum2temp.c	\
	hicum2trunc.c

BUILT_SOURCES = 	\
	hicum2.c		\
	hicum2.hxx		\
	hicum2acld.c	\
	hicum2ask.c	\
	hicum2defs.h	\
	hicum2del.c	\
	hicum2dest.c	\
	hicum2ext.h	\
	hicum2guesstopology.c	\
	hicum2init.c	\
	hicum2init.h	\
	hicum2itf.h	\
	hicum2load.c	\
	hicum2mask.c	\
	hicum2mdel.c	\
	hicum2mpar.c	\
	hicum2par.c	\
	hicum2pzld.c	\
	hicum2setup.c	\
	hicum2temp.c \
	hicum2trunc.c

CLEANFILES = 		\
	hicum2.c		\
	hicum2.hxx		\
	hicum2.c.bak	\
	hicum2acld.c	\
	hicum2ask.c	\
	hicum2defs.h	\
	hicum2del.c	\
	hicum2dest.c	\
	hicum2ext.h	\
	hicum2guesstopology.c	\
	hicum2init.c	\
	hicum2init.h	\
	hicum2itf.h	\
	hicum2load.c	\
	hicum2mask.c	\
	hicum2mdel.c	\
	hicum2mpar.c	\
	hicum2par.c	\
	hicum2pzld.c	\
	hicum2setup.c	\
	hicum2temp.c	\
	hicum2noise.c	\
	hicum2trunc.c


#TODO (not implemented) \
	hicum2conv.c	\
	hicum2getic.c

AM_CPPFLAGS = -I$(top_srcdir)/src/include

MAINTAINERCLEANFILES = Makefile.in
