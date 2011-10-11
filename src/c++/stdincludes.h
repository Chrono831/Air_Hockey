/**
 * Dylan Hall
 * dylanphall
 *
 * dylan.p.hall@gmail.com
 *
 * stdincludes.h
 *
 * 
 */

#ifndef STDINCLUDES_H_INCLUDED
#define STDINCLUDES_H_INCLUDED

//Local Headers
#include "constants.h"

//SDL Libraries
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"

//C++ STL
#include <string> //strings
#include <iostream> //std I/O
#include <fstream> //files
#include <vector> //array like manip

//C Standard Libraries
#include <cstdio>
#include <cstdlib>
#include <stdbool.h>
#include <cctype>
#include <ctime>
#include <cmath>


#ifdef DEBUG
  #define Dd(X) (fprintf(stderr, #X " digit value : %d\n", (X)), (X) )
  #define Dld(X) (fprintf(stderr, #X " long digit value : %ld\n", (X)), (X) )
  #define Ds(X) (fprintf(stderr, #X " string value : %s\n", (X)), (X) )
  #define Df(X) (fprintf(stderr, #X " float value : %f\n", (X)), (X) )
  #define Dlf(X) (fprintf(stderr, #X " double value : %lf\n", (X)), (X) )

  #define ENTER_FUNC (fprintf(stderr, "Entering %s\n", __func__))
  #define EXIT_FUNC (fprintf(stderr, "Exiting %s\n", __func__))

#else
  #define Dd(X) (X) 
  #define Dld(X) (X) 
  #define Ds(X) (X)
  #define Df(X) (X)
  #define Dlf(X) (X) 

  #define ENTER_FUNC ;
  #define EXIT_FUNC ;

#endif


//typedef char * string; // for C usage only


#endif
