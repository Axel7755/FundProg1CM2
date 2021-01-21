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
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/APunt3.o \
	${OBJECTDIR}/ArrProm.o \
	${OBJECTDIR}/Arr_Min_Max.o \
	${OBJECTDIR}/Arreglo.o \
	${OBJECTDIR}/ArrgloUsua.o \
	${OBJECTDIR}/BurbOpt.o \
	${OBJECTDIR}/Burbuja.o \
	${OBJECTDIR}/ContChar.o \
	${OBJECTDIR}/ConvTemp.o \
	${OBJECTDIR}/Ejercisio1.o \
	${OBJECTDIR}/Ejercisio2.o \
	${OBJECTDIR}/Ejercisio3.o \
	${OBJECTDIR}/Ficheros.o \
	${OBJECTDIR}/For.o \
	${OBJECTDIR}/Funciones.o \
	${OBJECTDIR}/FuncionesP.o \
	${OBJECTDIR}/If_Else.o \
	${OBJECTDIR}/Menu.o \
	${OBJECTDIR}/PunteroVoid.o \
	${OBJECTDIR}/Punteros.o \
	${OBJECTDIR}/Recursividad.o \
	${OBJECTDIR}/Repeticion1.o \
	${OBJECTDIR}/While_Ani.o \
	${OBJECTDIR}/char.o \
	${OBJECTDIR}/funciones.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/newmain.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/fundprog1cm2

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/fundprog1cm2: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/fundprog1cm2 ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/APunt3.o: APunt3.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/APunt3.o APunt3.c

${OBJECTDIR}/ArrProm.o: ArrProm.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ArrProm.o ArrProm.c

${OBJECTDIR}/Arr_Min_Max.o: Arr_Min_Max.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Arr_Min_Max.o Arr_Min_Max.c

${OBJECTDIR}/Arreglo.o: Arreglo.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Arreglo.o Arreglo.c

${OBJECTDIR}/ArrgloUsua.o: ArrgloUsua.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ArrgloUsua.o ArrgloUsua.c

${OBJECTDIR}/BurbOpt.o: BurbOpt.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/BurbOpt.o BurbOpt.c

${OBJECTDIR}/Burbuja.o: Burbuja.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Burbuja.o Burbuja.c

${OBJECTDIR}/ContChar.o: ContChar.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ContChar.o ContChar.c

${OBJECTDIR}/ConvTemp.o: ConvTemp.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ConvTemp.o ConvTemp.c

${OBJECTDIR}/Ejercisio1.o: Ejercisio1.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Ejercisio1.o Ejercisio1.c

${OBJECTDIR}/Ejercisio2.o: Ejercisio2.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Ejercisio2.o Ejercisio2.c

${OBJECTDIR}/Ejercisio3.o: Ejercisio3.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Ejercisio3.o Ejercisio3.c

${OBJECTDIR}/Ficheros.o: Ficheros.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Ficheros.o Ficheros.c

${OBJECTDIR}/For.o: For.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/For.o For.c

${OBJECTDIR}/Funciones.o: Funciones.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Funciones.o Funciones.c

${OBJECTDIR}/FuncionesP.o: FuncionesP.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/FuncionesP.o FuncionesP.c

${OBJECTDIR}/If_Else.o: If_Else.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/If_Else.o If_Else.c

${OBJECTDIR}/Menu.o: Menu.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Menu.o Menu.c

${OBJECTDIR}/PunteroVoid.o: PunteroVoid.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/PunteroVoid.o PunteroVoid.c

${OBJECTDIR}/Punteros.o: Punteros.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Punteros.o Punteros.c

${OBJECTDIR}/Recursividad.o: Recursividad.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Recursividad.o Recursividad.c

${OBJECTDIR}/Repeticion1.o: Repeticion1.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Repeticion1.o Repeticion1.c

${OBJECTDIR}/While_Ani.o: While_Ani.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/While_Ani.o While_Ani.c

${OBJECTDIR}/char.o: char.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/char.o char.c

${OBJECTDIR}/funciones.o: funciones.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/funciones.o funciones.c

${OBJECTDIR}/main.o: main.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.c

${OBJECTDIR}/newmain.o: newmain.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/newmain.o newmain.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/fundprog1cm2

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
