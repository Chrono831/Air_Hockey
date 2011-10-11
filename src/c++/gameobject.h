/**
 * Air_Hockey Project File
 * https://github.com/Chrono831/Air_Hockey
 * Dylan Hall
 * dylan.p.hall@gmail.com
 * github: Chrono831
 * 
 * 
 * gameobject.h
 * 
 * Created: Aug 30 2011 10:32:03
 * 
 * Comments: This class should form the basis for any in game objects; it should not be created by itself,
 *  rather inherited and instantiated.
 * 
 */

#ifndef GAMEOBJECT_H_INCLUDED
#define GAMEOBJECT_H_INCLUDED


#include "stdincludes.h"
#include "staticmethods.h"

class GameObject {
 private:
  int x, y; //x, y position of object
  float dx, dy; //velocity vector
  SDL_Surface * image; //visual representation of object


 public:
  //Constructors
  GameObject(); //default init : x,y,dx,dy = 0; image = NULL
  GameObject(const GameObject &); //copy constructor
  GameObject(int, int, float, float, std::string);
  ~GameObject(); //destructor - SDL_Surface*

  //Overloaded Operators
  GameObject & operator=(const GameObject &); //deep copy overloaded assignment
    
  //Accessors
  int getX(void);
  int getY(void);
  float getDy(void);
  float getDx(void);
  SDL_Surface * getImage(void);
  
  //Mutators
  void setImage(const SDL_Surface *);
  void setImage(const std::string);
  void setX(int);
  void setY(int);
  void setDx(float);
  void setDy(float);


};



#endif
