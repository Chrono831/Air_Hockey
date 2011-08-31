/**
 * Air_Hockey Project File
 * https://github.com/Chrono831/Air_Hockey
 * Dylan Hall
 * dylan.p.hall@gmail.com
 * github: Chrono831
 * 
 * 
 * gamebox_main.cpp
 * 
 * Created: Aug 29 2011 16:56:41
 * 
 * Comments: 
 * 
 */

#include "gamebox.h"



int main (int argc, char *argv[]) {
  std::cout << "Hello, World!\n";
  
  GameObject *screen = new GameObject();
  GameBox *thing = new GameBox();

  thing->setW(10);
  thing->setH(110);
  thing->setX(50);
  thing->setY(550);



  std::cout << "w = " << thing->getW() << "\n";
  std::cout << "h = " << thing->getH() << "\n";
  std::cout << "x = " << thing->getX() << "\n";
  std::cout << "y = " << thing->getY() << "\n";


  screen->setImage(initScreen(screen->getImage()));
  if( screen->getImage()  == NULL ) { return 1; }
  
  thing->setImage("../images/Air_Hockey_Layout.png");

  createSurface(thing->getImage(), screen->getImage(), 0, 0, NULL);

  if( SDL_Flip( screen->getImage() ) == -1 ) { return 1; }
  



  SDL_Delay( 1000 );
  
  delete screen;
  delete thing;

  return 0;
}

