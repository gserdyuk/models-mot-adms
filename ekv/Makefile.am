##
## Interface: ngspice 1.0.0.0
## created by: admsXml-2.3.0 - Tue, 13 Apr 2010 10:12:42

## Process this file with automake to produce Makefile.in

ADMSXMLINTERFACE=../admst
ekv.c: admsva/ekv.va
	admsXml -Iadmsva admsva/ekv.va \
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
	perl -p -i.bak -e 's/IOP\("(\w+)"/IOP("\L\1"/' ekv.c

noinst_LTLIBRARIES = libekv.la

libekv_la_SOURCES = 	\
	ekv.c		\
	ekv.hxx		\
	ekvacld.c	\
	ekvask.c	\
	ekvdefs.h	\
	ekvdel.c	\
	ekvdest.c	\
	ekvext.h	\
	ekvguesstopology.c	\
	ekvinit.c	\
	ekvinit.h	\
	ekvitf.h	\
	ekvload.c	\
	ekvmask.c	\
	ekvmdel.c	\
	ekvmpar.c	\
	ekvpar.c	\
	ekvpzld.c	\
	ekvsetup.c	\
	ekvtemp.c	\
	ekvtrunc.c

BUILT_SOURCES = 	\
	ekv.c		\
	ekv.hxx		\
	ekvacld.c	\
	ekvask.c	\
	ekvdefs.h	\
	ekvdel.c	\
	ekvdest.c	\
	ekvext.h	\
	ekvguesstopology.c	\
	ekvinit.c	\
	ekvinit.h	\
	ekvitf.h	\
	ekvload.c	\
	ekvmask.c	\
	ekvmdel.c	\
	ekvmpar.c	\
	ekvpar.c	\
	ekvpzld.c	\
	ekvsetup.c	\
	ekvtemp.c \
	ekvtrunc.c

CLEANFILES = 		\
	ekv.c		\
	ekv.hxx		\
	ekv.c.bak	\
	ekvacld.c	\
	ekvask.c	\
	ekvdefs.h	\
	ekvdel.c	\
	ekvdest.c	\
	ekvext.h	\
	ekvguesstopology.c	\
	ekvinit.c	\
	ekvinit.h	\
	ekvitf.h	\
	ekvload.c	\
	ekvmask.c	\
	ekvmdel.c	\
	ekvmpar.c	\
	ekvpar.c	\
	ekvpzld.c	\
	ekvsetup.c	\
	ekvtemp.c	\
	ekvnoise.c	\
	ekvtrunc.c


#TODO (not implemented) \
	ekvconv.c	\
	ekvgetic.c

AM_CPPFLAGS = -I$(top_srcdir)/src/include

MAINTAINERCLEANFILES = Makefile.in
