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
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Ante_Gabrielle_A5_Find_the_Max,_Min,_and_Sum_of_an_integer_array._10pts.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/a5_find_the_max__min__and_sum_of_an_integer_array._10pts.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/a5_find_the_max__min__and_sum_of_an_integer_array._10pts.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/a5_find_the_max__min__and_sum_of_an_integer_array._10pts ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Ante_Gabrielle_A5_Find_the_Max,_Min,_and_Sum_of_an_integer_array._10pts.o: Ante_Gabrielle_A5_Find_the_Max,_Min,_and_Sum_of_an_integer_array._10pts.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++98 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Ante_Gabrielle_A5_Find_the_Max,_Min,_and_Sum_of_an_integer_array._10pts.o Ante_Gabrielle_A5_Find_the_Max,_Min,_and_Sum_of_an_integer_array._10pts.cpp

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
