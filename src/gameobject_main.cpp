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
 * Comments: 
 * 
 */

#include "stdincludes.h"
#include "gameobject.h"
#include "staticmethods.h"

int main (int argc, char *argv[]) {
  std::cout << "Hello, World!\n";

  
  SDL_Surface *screen = NULL;
  GameObject *thing = new GameObject();
  
  if( (screen = initScreen(screen)) == NULL ) { return 1; }
  
  thing->setImage("../images/Air_Hockey_Layout.png");

  createSurface(thing->getImage(), screen, 0, 0, NULL);
  //  apply_surface( 0, 0, thing->getImage(), screen );
  if( SDL_Flip( screen ) == -1 ) { return 1; }
  
  SDL_Delay( 5000 );
   
  clean_up(NULL, screen);
  return 0;


}

