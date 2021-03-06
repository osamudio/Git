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
CND_PLATFORM=GNU-Linux-x86
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/233601340/jugador1.o \
	${OBJECTDIR}/_ext/233601340/clases.o \
	${OBJECTDIR}/_ext/233601340/humano.o \
	${OBJECTDIR}/_ext/233601340/barcos.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/concurso_de_barcos

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/concurso_de_barcos: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/concurso_de_barcos ${OBJECTFILES} ${LDLIBSOPTIONS} 

${OBJECTDIR}/_ext/233601340/jugador1.o: ../Concurso_de_barcos/jugador1.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/233601340
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/233601340/jugador1.o ../Concurso_de_barcos/jugador1.cpp

${OBJECTDIR}/_ext/233601340/clases.o: ../Concurso_de_barcos/clases.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/233601340
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/233601340/clases.o ../Concurso_de_barcos/clases.cpp

${OBJECTDIR}/_ext/233601340/humano.o: ../Concurso_de_barcos/humano.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/233601340
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/233601340/humano.o ../Concurso_de_barcos/humano.cpp

${OBJECTDIR}/_ext/233601340/barcos.o: ../Concurso_de_barcos/barcos.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/233601340
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/233601340/barcos.o ../Concurso_de_barcos/barcos.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/concurso_de_barcos

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
