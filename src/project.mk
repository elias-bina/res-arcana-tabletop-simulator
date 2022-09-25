include src/environnement/project.mk

TARGETS+=$(BIN)/res-arcana-sim-make-exe



SIMULATOR-SRCS= \
	src/hello.cpp \
	${ENVIRONNEMENT-SRCS}



SIMULATOR-OBJS:=$(SIMULATOR-SRCS:%.cpp=$(BIN)/%.o)


$(BIN)/res-arcana-sim-make-exe:$(SIMULATOR-OBJS)
