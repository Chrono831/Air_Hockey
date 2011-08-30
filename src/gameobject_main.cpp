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

  GameObject *screen = new GameObject();
  GameObject *thing = new GameObject();

  screen->setImage(initScreen(screen->getImage()));
  if( screen->getImage()  == NULL ) { return 1; }
  
  thing->setImage("../images/Air_Hockey_Layout.png");

  createSurface(thing->getImage(), screen->getImage(), 0, 0, NULL);

  if( SDL_Flip( screen->getImage() ) == -1 ) { return 1; }
  
  SDL_Delay( 5000 );
  
  delete screen;
  delete thing;

}

