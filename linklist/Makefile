program_NAME := myprogram
dir = ../list
program_C_SRCS += $(wildcard *.cc)
#program_C_SRCS += $(wildcard ../stack/*.cc)
program_C_OBJS := ${program_C_SRCS:.cc=.o}
#program_CXX_OBJS := ${program_CXX_SRCS:.cpp=.o}
program_OBJS := $(program_C_OBJS) #$(program_CXX_OBJS)
program_INCLUDE_DIRS := 
program_LIBRARY_DIRS := 
program_LIBRARIES :=
CPPFLAGS += $(foreach includedir,$(program_INCLUDE_DIRS),-I$(includedir))
LDFLAGS += $(foreach librarydir,$(program_LIBRARY_DIRS),-L$(librarydir))
LDFLAGS += $(foreach library,$(program_LIBRARIES),-l$(library))

.PHONY: all clean distclean run



all: $(program_NAME)

$(program_NAME): $(program_OBJS)
	$(LINK.cc) $(program_OBJS) -o $(program_NAME)

clean:
	@- $(RM) $(program_NAME)
	@- $(RM) $(program_OBJS)

distclean: clean


#https://sites.google.com/site/michaelsafyan/software-engineering/how-to-write-a-makefile

