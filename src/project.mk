
TARGETS+=res-arcana-sim-make-exe



SIMULATOR-SRCS=src/hello.cpp



SIMULATOR-OBJS:=$(SIMULATOR-SRCS:.cpp=.o)


res-arcana-sim-make-exe:$(SIMULATOR-OBJS)
