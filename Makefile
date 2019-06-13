### Makefile ###

#Nome do compilador
CC=g++

#Opções de compilação
CFLAGS=-std=c++11 -Wall

#Diretorios de arquivos
BUILD_DIR = ./build
SRC_DIR = ./src
INCLUDE_DIR = ./include

all: ${BUILD_DIR}/main

# PROFESSOR
${BUILD_DIR}/professor.o: ${INCLUDE_DIR}/professor.hpp ${SRC_DIR}/professor.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/professor.cpp -o ${BUILD_DIR}/professor.o

# ALUNO
${BUILD_DIR}/aluno.o: ${INCLUDE_DIR}/aluno.hpp ${SRC_DIR}/aluno.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/aluno.cpp -o ${BUILD_DIR}/aluno.o

#DEPARTAMENTO
${BUILD_DIR}/departamento.o: ${INCLUDE_DIR}/departamento.hpp ${SRC_DIR}/departamento.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/departamento.cpp -o ${BUILD_DIR}/departamento.o

#DISCIPLINA
${BUILD_DIR}/disciplina.o: ${INCLUDE_DIR}/disciplina.hpp ${SRC_DIR}/disciplina.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/disciplina.cpp -o ${BUILD_DIR}/disciplina.o

#MAIN
${BUILD_DIR}/main.o: ${SRC_DIR}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

${BUILD_DIR}/main: ${BUILD_DIR}/professor.o ${BUILD_DIR}/aluno.o ${BUILD_DIR}/departamento.o ${BUILD_DIR}/disciplina.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} -o ${BUILD_DIR}/main ${BUILD_DIR}/*.o

clean_windows:
	del /S "%dir%\build\*.o"

clean_linux:
	rm -rf ${BUILD_DIR}/*.o
	rm -rf ${BUILD_DIR}/main

make run:
	./build/main
