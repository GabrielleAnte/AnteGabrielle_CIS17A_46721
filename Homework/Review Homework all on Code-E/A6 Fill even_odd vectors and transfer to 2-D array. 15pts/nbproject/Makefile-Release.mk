#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Ante_Gabrielle_A6_Fill_even_odd_vectors_and_transfer_to_2-D_array._15pts.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/a6_fill_even_odd_vectors_and_transfer_to_2-d_array._15pts.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/a6_fill_even_odd_vectors_and_transfer_to_2-d_array._15pts.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/a6_fill_even_odd_vectors_and_transfer_to_2-d_array._15pts ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Ante_Gabrielle_A6_Fill_even_odd_vectors_and_transfer_to_2-D_array._15pts.o: Ante_Gabrielle_A6_Fill_even_odd_vectors_and_transfer_to_2-D_array._15pts.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Ante_Gabrielle_A6_Fill_even_odd_vectors_and_transfer_to_2-D_array._15pts.o Ante_Gabrielle_A6_Fill_even_odd_vectors_and_transfer_to_2-D_array._15pts.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
