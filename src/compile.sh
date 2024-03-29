#!/bin/bash

g++ -W -Wall -pedantic -g -lSDL -lSDL_image -c staticmethods.cpp;
g++ -W -Wall -pedantic -g -lSDL -lSDL_image -c gameobject.cpp;

g++ -W -Wall -pedantic -g -lSDL -lSDL_image gameobject_main.cpp staticmethods.o gameobject.o  -o gameobject_main -o gameobject_main.out

g++ -W -Wall -pedantic -g -lSDL -lSDL_image -c gamebox.cpp;

g++ -W -Wall -pedantic -g -lSDL -lSDL_image gamebox_main.cpp staticmethods.o gameobject.o gamebox.o -o gamebox_main.out

g++ -W -Wall -pedantic -g -lSDL -lSDL_image table_main.cpp staticmethods.o gameobject.o gamebox.o -o table_main.out

