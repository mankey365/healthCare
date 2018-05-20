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
CND_PLATFORM=GNU-Linux
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/patient.o \
	${OBJECTDIR}/person.o \
	${OBJECTDIR}/provider.o \
	${OBJECTDIR}/registerPatient.o


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
LDLIBSOPTIONS=-Wl,-rpath,mysql-connector-c-6.1.3-linux-glibc2.5-x86_64/include/

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/digitalhealthcare

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/digitalhealthcare: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/digitalhealthcare ${OBJECTFILES} ${LDLIBSOPTIONS} -lmysqlclient

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Imysql-connector-c-6.1.3-linux-glibc2.5-x86_64/include/ -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/patient.o: patient.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Imysql-connector-c-6.1.3-linux-glibc2.5-x86_64/include/ -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/patient.o patient.cpp

${OBJECTDIR}/person.o: person.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Imysql-connector-c-6.1.3-linux-glibc2.5-x86_64/include/ -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/person.o person.cpp

${OBJECTDIR}/provider.o: provider.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Imysql-connector-c-6.1.3-linux-glibc2.5-x86_64/include/ -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/provider.o provider.cpp

${OBJECTDIR}/registerPatient.o: registerPatient.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -Imysql-connector-c-6.1.3-linux-glibc2.5-x86_64/include/ -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/registerPatient.o registerPatient.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/digitalhealthcare

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
