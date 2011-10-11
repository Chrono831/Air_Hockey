/**
 * Air_Hockey Project File
 * https://github.com/Chrono831/Air_Hockey
 * Dylan Hall
 * dylan.p.hall@gmail.com
 * github: Chrono831
 * 
 * 
 * gameobject_main.cpp
 * 
 * Created: Aug 30 2011 10:32:03
 * 
 * Comments: Testing file for GameObject class
 * 
 */

#include "gameobject.h"

int main (int argc, char *argv[]) {
  std::cout << "Hello, World!\n";
  //These must be the first things in the program! They init SDL.
  GameObject *screen = new GameObject();
  screen->setImage(startup(screen->getImage()));
  //Okay, not other things can happen

  GameObject *thing = new GameObject(0,0,0,0,"../images/Air_Hockey_Layout.png");
  
  createSurface(thing->getImage(), screen->getImage(), 0, 0, NULL);

  if( SDL_Flip( screen->getImage() ) == -1 ) { return 1; }
  
  SDL_Delay( 1000 );
  
  delete screen;
  delete thing;
  return 0;
}

