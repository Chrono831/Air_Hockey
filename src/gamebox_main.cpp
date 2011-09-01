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
  //These must be the first things in the program! They init SDL.
  GameObject *screen = new GameObject();
  screen->setImage(startup(screen->getImage()));
  //Okay, not other things can happen
  std::string pic = "../images/Air_Hockey_Layout.png"; 
  std::cout << pic;
  GameBox *thing = new GameBox(0,0, BOARD_WIDTH, BOARD_HEIGHT, pic);
  std::cout << "w = " << thing->getW() << "\n";
  std::cout << "h = " << thing->getH() << "\n";
  std::cout << "x = " << thing->getX() << "\n";
  std::cout << "y = " << thing->getY() << "\n";

  
  createSurface(thing->getImage(), screen->getImage(), 0, 0, NULL);

  if( SDL_Flip( screen->getImage() ) == -1 ) { return 1; }
  
  SDL_Delay( 1000 );
  
  delete screen;
  delete thing;
  return 0;
}

