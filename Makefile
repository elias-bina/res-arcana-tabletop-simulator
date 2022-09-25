

.PHONY:all,true-all

all:true-all

BIN?=bin
TARGETS=
INCLUDES=-I./include

include base.mk

include src/project.mk

true-all: ${TARGETS}
