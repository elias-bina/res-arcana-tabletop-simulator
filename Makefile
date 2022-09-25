

.PHONY:all,true-all

all:true-all

BIN?=bin
TARGETS=


include base.mk

include src/project.mk

true-all: ${TARGETS}
