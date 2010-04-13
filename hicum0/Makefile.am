##
## Interface: ngspice 1.0.0.0
## created by: admsXml-2.3.0 - Tue, 13 Apr 2010 10:13:51

## Process this file with automake to produce Makefile.in

ADMSXMLINTERFACE=../admst
hicum0.c: admsva/hicum0.va
	admsXml -Iadmsva admsva/hicum0.va \
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
	perl -p -i.bak -e 's/IOP\("(\w+)"/IOP("\L\1"/' hicum0.c

noinst_LTLIBRARIES = libhicum0.la

libhicum0_la_SOURCES = 	\
	hicum0.c		\
	hicum0.hxx		\
	hicum0acld.c	\
	hicum0ask.c	\
	hicum0defs.h	\
	hicum0del.c	\
	hicum0dest.c	\
	hicum0ext.h	\
	hicum0guesstopology.c	\
	hicum0init.c	\
	hicum0init.h	\
	hicum0itf.h	\
	hicum0load.c	\
	hicum0mask.c	\
	hicum0mdel.c	\
	hicum0mpar.c	\
	hicum0par.c	\
	hicum0pzld.c	\
	hicum0setup.c	\
	hicum0temp.c	\
	hicum0trunc.c

BUILT_SOURCES = 	\
	hicum0.c		\
	hicum0.hxx		\
	hicum0acld.c	\
	hicum0ask.c	\
	hicum0defs.h	\
	hicum0del.c	\
	hicum0dest.c	\
	hicum0ext.h	\
	hicum0guesstopology.c	\
	hicum0init.c	\
	hicum0init.h	\
	hicum0itf.h	\
	hicum0load.c	\
	hicum0mask.c	\
	hicum0mdel.c	\
	hicum0mpar.c	\
	hicum0par.c	\
	hicum0pzld.c	\
	hicum0setup.c	\
	hicum0temp.c \
	hicum0trunc.c

CLEANFILES = 		\
	hicum0.c		\
	hicum0.hxx		\
	hicum0.c.bak	\
	hicum0acld.c	\
	hicum0ask.c	\
	hicum0defs.h	\
	hicum0del.c	\
	hicum0dest.c	\
	hicum0ext.h	\
	hicum0guesstopology.c	\
	hicum0init.c	\
	hicum0init.h	\
	hicum0itf.h	\
	hicum0load.c	\
	hicum0mask.c	\
	hicum0mdel.c	\
	hicum0mpar.c	\
	hicum0par.c	\
	hicum0pzld.c	\
	hicum0setup.c	\
	hicum0temp.c	\
	hicum0noise.c	\
	hicum0trunc.c


#TODO (not implemented) \
	hicum0conv.c	\
	hicum0getic.c

AM_CPPFLAGS = -I$(top_srcdir)/src/include

MAINTAINERCLEANFILES = Makefile.in
