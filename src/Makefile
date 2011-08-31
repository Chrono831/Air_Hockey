#Air_Hockey makefile
#for usage with g++ / SDL v1.2
#usage : make <executable name from cpp file containing main()>
#
#Dylan Hall
#dylanphall
#
#-Will want to write change to make it work for the specific final executable
# probably give a specific output target "AirHockey.exe" etc
#
################################################################################
#Detects system type for using OpenGL drivers
#
MACHINE= $(shell uname -s)
ifeq ($(MACHINE),Darwin) #Mac
	OPENGL_INC= -FOpenGL
	OPENGL_LIB= -framework OpenGL
	SDL_INC= `sdl-config --cflags`
	SDL_LIB= `sdl-config --libs`
else
	OPENGL_INC= -I/usr/X11R6/include
	OPENGL_LIB= -I/usr/lib64 -lGL -lGLU
	SDL_INC= `sdl-config --cflags`
	SDL_LIB= `sdl-config --libs` -lSDL_image
endif

CC=gcc
CXX=g++
CFLAGS=-W -Wall -std=c99
CXXFLAGS=-W -Wall -pedantic 
#may need to add '-fpermissive' to flags

#libraries to include
SDL_EXT_LIBS=-lSDL_image
LIBRARIES= $(SDL_LIB) $(OPENGL_LIB) $(SDL_EXT_LIBS)
LDFLAGS=-lm $(LIBRARIES)

#includes
INCLUDE= $(SDL_INC) $(OPENGL_INC)

#argument name -> executable name
MODULES := $^
SOURCES := $(MODULES).cpp 
OBJECTS = $(patsubst %.cpp, %.o, %(SOURCES))

#list object files here for now
OBJECTS += staticmethods.o gameobject.o gamebox.o 

#/usr/bin/ruby1.9.1


ifeq ($(DEBUG),true)
	CFLAGS+=-DDEBUG -g
endif

all: 


%.o: %.cpp 
	$(CXX) $(CXXFLAGS) $(INCLUDE) -c $< -o $@ 

%.o: %.c 
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@ 

$(MODULES): $(OBJECTS) 
	$(CXX) $(LDFLAGS) $(OBJECTS) -o $(MODULES)

.PHONY: clean
clean:
	rm -f *.o *.out *.dat