##
## Interface: ngspice 1.0.0.0
## created by: admsXml-2.3.0 - Tue, 23 Mar 2010 22:14:06

## Process this file with automake to produce Makefile.in

ADMSXMLINTERFACE=../admst
psp102.c: admsva/psp102.va
	admsXml -Iadmsva admsva/psp102.va \
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
	perl -p -i.bak -e 's/IOP\("(\w+)"/IOP("\L\1"/' psp102.c

noinst_LTLIBRARIES = libpsp102.la

libpsp102_la_SOURCES = 	\
	psp102.c		\
	psp102.hxx		\
	psp102acld.c	\
	psp102ask.c	\
	psp102defs.h	\
	psp102del.c	\
	psp102dest.c	\
	psp102ext.h	\
	psp102guesstopology.c	\
	psp102init.c	\
	psp102init.h	\
	psp102itf.h	\
	psp102load.c	\
	psp102mask.c	\
	psp102mdel.c	\
	psp102mpar.c	\
	psp102par.c	\
	psp102pzld.c	\
	psp102setup.c	\
	psp102temp.c	\
	psp102trunc.c

BUILT_SOURCES = 	\
	psp102.c		\
	psp102.hxx		\
	psp102acld.c	\
	psp102ask.c	\
	psp102defs.h	\
	psp102del.c	\
	psp102dest.c	\
	psp102ext.h	\
	psp102guesstopology.c	\
	psp102init.c	\
	psp102init.h	\
	psp102itf.h	\
	psp102load.c	\
	psp102mask.c	\
	psp102mdel.c	\
	psp102mpar.c	\
	psp102par.c	\
	psp102pzld.c	\
	psp102setup.c	\
	psp102temp.c \
	psp102trunc.c

CLEANFILES = 		\
	psp102.c		\
	psp102.hxx		\
	psp102.c.bak	\
	psp102acld.c	\
	psp102ask.c	\
	psp102defs.h	\
	psp102del.c	\
	psp102dest.c	\
	psp102ext.h	\
	psp102guesstopology.c	\
	psp102init.c	\
	psp102init.h	\
	psp102itf.h	\
	psp102load.c	\
	psp102mask.c	\
	psp102mdel.c	\
	psp102mpar.c	\
	psp102par.c	\
	psp102pzld.c	\
	psp102setup.c	\
	psp102temp.c	\
	psp102noise.c	\
	psp102trunc.c


#TODO (not implemented) \
	psp102conv.c	\
	psp102getic.c

AM_CPPFLAGS = -I$(top_srcdir)/src/include

MAINTAINERCLEANFILES = Makefile.in
