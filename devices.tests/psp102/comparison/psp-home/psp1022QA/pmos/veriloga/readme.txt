======================================================================================
======================================================================================

  ---------------------------
  Verilog-A definition of PSP
  ---------------------------


  (c) Copyright 2007, All Rights Reserved, NXP Semiconductors


  Version: PSP 102.2 (including JUNCAP2 200.3), October 2007

======================================================================================
======================================================================================

 Authors: G.D.J. Smit, A.J. Scholten, and D.B.M. Klaassen (NXP Semiconductors Research)
          R. van Langevelde (Philips Research)
          G. Gildenblat, X. Li, and W. Wu (Arizona State University)



The most recent version of the model code, the documentation, and contact information
can be found on:

         http://pspmodel.asu.edu/

======================================================================================
======================================================================================

This package consists of several files:

     - readme.txt                     This file

     - psp102.va                      Main file for global ("geometrical") model
     - psp102b.va                     Main file for global binning model
     - psp102e.va                     Main file for local  ("electrical") model
     - psp102_nqs.va                  Main file for global ("geometrical") model with NQS-effects
     - psp102b_nqs.va                 Main file for global binning model with NQS-effects
     - psp102e_nqs.va                 Main file for local  ("electrical") model with NQS-effects
     - juncap200.va                   Main file for JUNCAP2 stand-alone model

     - SIMKIT_macrodefs.include       Common macro definitions
     - PSP102_macrodefs.include       Macro definitions for PSP
     - PSP102_module.include          Actual model code for intrinsic MOS model
     - PSP102_binning.include         Geometry scaling equation for binning 
     - PSP102_binpars.include         Parameterlist for global PSP binning model
     - PSP102_nqs_macrodefs.include   Macro definitions for PSP-NQS
     - PSP102_InitNQS.include         PSP-NQS initialization code
     - PSP102_ChargesNQS.include      Calculation of NQS-charge contributions
     - JUNCAP200_macrodefs.include    Macro definitions for JUNCAP2 model
     - JUNCAP200_parlist.include      JUNCAP2 parameter list
     - JUNCAP200_varlist1.include     JUNCAP2 variable declarations
     - JUNCAP200_varlist2.include     JUNCAP2 variable declarations
     - JUNCAP200_InitModel.include    JUNCAP2 model initialization code

======================================================================================
======================================================================================

Usage
-----

Depending which model one wants to use, one should compile one of the seven .va-files
(psp102.va, psp102b.va, psp102e.va, psp102_nqs.va, psp102b_nqs.va, psp102e_nqs.va, and
juncap200.va). The module names are "PSP102VA" and "PSPNQS102VA" for the global PSP-model
(QS and NQS, respectively), and similarly "PSP102BVA" and "PSPNQS102BVA" for the binning
PSP-model, "PSP102EVA" and "PSPNQS102EVA" for the local PSP-model, and "JUNCAP200" for
the JUNCAP2-model.


======================================================================================
======================================================================================

Release notes vA-code of PSP 102.2 and JUNCAP2 200.3 (October 2007)
-------------------------------------------------------------------

Changes:
1. Added WPE-model according to CMC's specification.
2. Added parameters EPSROX (local), EPSROXO (global), POEPSROX (binning) representing
   relative dielectric constant of gate oxide. Default value is 3.9. Note that
   introduction of this parameter leads to small numerical differences as compared
   to PSP 102.1. Relative differences are typically <1e-4.   
3. Added instance parameters DELVTO and FACTUO to local, global and binning model.
4. Added NF support to global and binning model.
5. Extended stress model to support NF.
6. Added substrate resistor network and external gate resistor to the PSP-model. Now,
   PSP and PSP-NQS have identical topology.
   Note that addition of the parasitic resistor network to PSP implies that PSP 102.2
   has five internal nodes, leading to an increased simulation time and memory usage.
   Ideally, if one or more resistance values are set to 0, the associated internal
   nodes are removed from the model (node collapse). However, most Verilog-A
   compilers do not yet (fully) support node-collapse. Therefore, an alternative
   Verilog-A implementation of PSP 102.2 is provided, for convenience of the user,
   which partially circumvents this limitation.(See also note below.)
   Finally note that PSP102.2 as implemented in SiMKit 3.0 fully supports node-
   collapse.
7. Added geometry scaling for gate resistance in global and binning model. Added
   associated model parameters RSHG, RINT, DLSIL, and RVPOLY and instance parameters
   NGCON and XGW.
8. Integration of JUNCAP-express into PSP. Both PSP and the stand-alone version of
   JUNCAP2 are now equipped with a switch-parameter SWJUNEXP. When SWJUNEXP=0
   (default) the full JUNCAP2 model is evaluated, similar to previous version of PSP.
   When SWJUNEXP=1, the Express-model will be evaluated, leading to a significant
   reduction of model-evalutation time for the JUNCAP2-model. (But, also see note
   below.)
   JUNCAP-express has two additional parameters: VJUNREF and FJUNQ.
9. Added "dummy" parameters LMIN, LMAX, WMIN, WMAX to binning model, which can be
   used as labels for the binning set.
10.Some minor bug fixes.
11.Several minor implementation changes.

PSP 102.2 is backwards compatible with the previous version, PSP 102.1.

======================================================================================
======================================================================================

Differences with CMC test release (PSP 102.2-test, July 2007)
-------------------------------------------------------------

1. Inclusion of JUNCAP2 express with switch SWJUNEXP
2. As compared to JUNCAP2 express test-release (July 2007), the JUNCAP2 express model
   has been made more robust against floating point errors, some minor
   implementation changes have been made, and some minor bugs fixed.
3. Parasitic resistances have been implemented differently, to allow modern Verilog-A
   compilers to collapse nodes if resistance is set to 0.
4. Some minor implementation changes.

======================================================================================
======================================================================================

Parasitic resistances
---------------------

The addition of the parasitic resistor network to PSP implies that PSP 102.2 has five
internal nodes, leading to an increased simulation time and memory usage. Ideally, if
one or more resistance values are set to 0, the associated internal nodes are removed
from the model (node collapse).

Unfortunately, most Verilog-A compilers do not yet (fully) support node-collapse. This
is *not* a limitation of this PSP 102.2 implementation, but is due to the fact that
most present day Verilog-A compilers are not fully LRM 2.2 compliant and/or are
not sufficiently mature to fully optimize the generated model. As a result, using
this PSP Verilog-A implementation directly in a circuit simulator may lead to one of
the following situations:

  1. The code does not compile
  2. The code compiles (with or without warnings). For each parasitic resistor one
     internal node is created. However, nodes are not removed if one or more
     resistance values is set to 0.
  3. The code compiles (with or without warnings). For each parasitic resistor TWO
     internal nodes are created. However, nodes are not removed if one or more
     resistance values is set to 0.
  4. The code compiles. For each parasitic resistor one internal node is created.
     For *some* of the resistors, the associated internal node is removed if the
     resistance value is set to 0, but not for all.
  5. The code compiles. For each parasitic resistor an internal node is created.
     For each of the resistors, the associated internal node is removed if the
     resistancance value is set to 0.
     
Obviously, situation 5 is the intended behavior.

For convenience of the user, an alternative Verilog-A implementation of PSP 102.2 is
provided, which should compile without problems in all present day Verilog-A
compilers. Its usage is, however, limited to one of the following two situations.

  (A) All five parasitic resistors are set to a nonzero value.
  (B) All five parasitic resistors are set to 0.

This alternative PSP 102.2 implementation is described in more detail in the
readme.txt file accompanying the Verilog-A code.

======================================================================================
======================================================================================

JUNCAP2-express
---------------

The newly introduced express-option of the JUNCAP2 model (invoked by setting
SWJUNEXP=1) allows the user to trade some simulation accuracy for simulation speed.
In transient analyses, a simulation time reduction of upto a factor 5 (of the
simulation time associated with JUNCAP2) has been demonstrated with a very limited
loss of accuracy. This is achieved by a creating a strongly simplified IV-model,
combined with more involved initialisation code. To have the full benefit of the
model, it is essential that the model is implemented such that the initialisation code
is executed only once during the entire circuit simulation. The SiMKit-implementation
of the model guarantees that this condition is fullfilled.
Unfortunately, this may not be automatically achieved by all verilog-A compilers.
Therefore, running the model directly in verilog-A might lead to suboptimal model
performance.

======================================================================================
======================================================================================

The authors want to thank Laurent Lemaitre and Colin McAndrew (Freescale)
for their help with ADMS and the implementation of the model code. Geoffrey
Coram (Analog Devices) is acknowledged for input concerning the Verilog-A
implementation of the model.
