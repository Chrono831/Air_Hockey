/**
 * Air_Hockey Project File
 * https://github.com/Chrono831/Air_Hockey
 * Dylan Hall
 * dylan.p.hall@gmail.com
 * github: Chrono831
 * 
 * 
 * gameobject.cpp
 * 
 * Created: Aug 30 2011 10:32:03
 * 
 * Comments: Implemetation of gameobject.h
 * 
 */

#include "gameobject.h"


/**
 Default Constructor.  Initializes x, y, dx, dy to 0 and image to NULL.
*/
GameObject::GameObject() {
<<<<<<< HEAD
  image = new SDL_Surface;//(SDL_Surface *) malloc (sizeof(SDL_Surface *));
=======
  image = new SDL_Surface;
>>>>>>> c1771115b985b0d715021d3168a2b9cd336915d0
  setX(0);
  setY(0);
  setDx(0);
  setDy(0);
  setImage(NULL);
}

/**
<<<<<<< HEAD
 * Copy Constructor.  Copies all data into a new object
 */
GameObject::GameObject(const GameObject & gobj) {
  image = new SDL_Surface;
  setX(gobj.x);
  setY(gobj.y);
  setDx(gobj.dx);
  setDy(gobj.dy);
  setImage(gobj.image);
}

=======
 Constructor.  Initializes x, y, dx, dy and image to input values.
*/
GameObject::GameObject(int newX, int newY, float newDx, float newDy, std::string newImage) {
  image = new SDL_Surface;
  setX(newX);
  setY(newY);
  setDx(newDx);
  setDy(newDy);
  setImage(newImage);
}


>>>>>>> c1771115b985b0d715021d3168a2b9cd336915d0
/**
 Destructor.  Frees the SDL_Surface * for the image.
*/
GameObject::~GameObject() {
<<<<<<< HEAD
  delete image;//free(getImage());
}   


/**
 * Assignement operator.  Performs a deep copy of the Rvalue object onto the Lvalue object
 * @param gobj GameObject to copy
 * @return copy of gobj
 */
GameObject & GameObject::operator=(const GameObject & gobj) {
  if(this == &gobj) { return *this; }
  delete image;
  image = new SDL_Surface;
  setX(gobj.x);
  setY(gobj.y);
  setDx(gobj.dx);
  setDy(gobj.dy);
  setImage(gobj.image);
  return *this;
}





=======
  delete image;
}   


>>>>>>> c1771115b985b0d715021d3168a2b9cd336915d0
/**
  Returns the x value.
  @return x x-position of object
*/
int GameObject::getX(void) { return x; }


/**
  Returns the y value.
  @return x y-position of object
*/
int GameObject::getY(void) { return y; }


/**
  Returns the dx value.
  @return dx x component of the velocity vector
*/
float GameObject::getDx(void)  { return dx; }   


/**
  Returns the dy value.
  @return dy y component of the velocity vector
*/
float GameObject::getDy(void)  { return dy; }

 
/**
  Returns the image.  Not const so that it can be manipulated.
  @return image SDL_Surface * to the image.
*/
SDL_Surface * GameObject::getImage(void)  { return image; }


/**
  Sets the x value.  valid ranges from [0 - SCREEN_WIDTH]
  @param newX value to set as x.
*/
void GameObject::setX(int newX) {
  if ( (newX < 0) || (newX > SCREEN_WIDTH) ) return;
  else { x = newX; }
}
    

/**
  Sets the y value.  valid ranges from [0 - SCREEN_HEIGHT]
  @param newY value to set as y.
*/
void GameObject::setY(int newY) {
  if ( (newY < 0) || (newY > SCREEN_HEIGHT) ) return;
  else { y = newY; }
}


/**
  Sets the dx value.  positive values are to the right, negative to the left.
  @param newDx value to set as dx.
*/
void GameObject::setDx(float newDx) {
  if ( (newDx > MAX_DX) ) return;
  else { dx = newDx; }
}


/**
  Sets the dy value.  positive values are to the bottom, negative to the top.
  @param newDy value to set as dy.
*/
void GameObject::setDy(float newDy) {
  if ( (newDy > MAX_DY) ) return;
  else { dy = newDy; }
}

/**
  Sets the image.  Expects a valid SDL_Surface * that has been optimized to the screen.
  @param newImage SDL_Surface * to set as the image.
*/
void GameObject::setImage(SDL_Surface * newImage) {
  if (newImage != NULL) { image = newImage; }
}


/**
  Sets the image.  Expects a filename to go load an image from.
  @param filename name of the file to load as the image.
*/
void GameObject::setImage(std::string filename) {
  std::cout << filename << std::endl;
  
  // SDL_Surface * temp = loadImage( filename );
  
  
  SDL_Surface *loadedImage = NULL;
  SDL_Surface *formattedImage = NULL;

  loadedImage = IMG_Load( filename.c_str() );

  if(loadedImage != NULL) {
    formattedImage = SDL_DisplayFormat(loadedImage);
  } //converts image to settings specified by SDL_SetVideoMode
  SDL_FreeSurface(loadedImage);

  if(formattedImage != NULL) {
    SDL_SetColorKey(formattedImage, SDL_SRCCOLORKEY, SDL_MapRGB(formattedImage->format, 0xFF, 0xFF, 0xFF));
  } //converts image to settings specified by SDL_SetVideoMode
  // return formattedImage;

  image = formattedImage;

  //  setImage(temp);
}
