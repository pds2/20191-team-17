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
${BUILD_DIR}/Aluno.o: ${INCLUDE_DIR}/Aluno.hpp ${SRC_DIR}/Aluno.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/Aluno.cpp -o ${BUILD_DIR}/Aluno.o

#DEPARTAMENTO
${BUILD_DIR}/Departamento.o: ${INCLUDE_DIR}/Departamento.hpp ${SRC_DIR}/Departamento.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/Departamento.cpp -o ${BUILD_DIR}/Departamento.o

#PESSOA
${BUILD_DIR}/Pessoa.o: ${INCLUDE_DIR}/Pessoa.hpp ${SRC_DIR}/Pessoa.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/Pessoa.cpp -o ${BUILD_DIR}/Pessoa.o

#DISCIPLINA
${BUILD_DIR}/Disciplina.o: ${INCLUDE_DIR}/Disciplina.hpp ${SRC_DIR}/Disciplina.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/Disciplina.cpp -o ${BUILD_DIR}/Disciplina.o

#MAIN
${BUILD_DIR}/main.o: ${SRC_DIR}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

${BUILD_DIR}/main: ${BUILD_DIR}/professor.o ${BUILD_DIR}/Aluno.o ${BUILD_DIR}/Departamento.o ${BUILD_DIR}/Pessoa.o ${BUILD_DIR}/Disciplina.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} -o ${BUILD_DIR}/main ${BUILD_DIR}/*.o

clean_windows:
	del /S "%dir%\build\*.o"

clean_linux:
	rm -rf ${BUILD_DIR}/*.o
	rm -rf ${BUILD_DIR}/main

make run:
	./build/main
