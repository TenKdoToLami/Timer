#ifndef WINDOW
#define WINDOW


#include <SDL2/SDL.h>
#include <string>


#include "errorOutput.h"


class Window
{
private:
    SDL_Window * window;
    SDL_Surface * windowSurface;
public:

    Window(const int windowWidth, const int windowHeight, const std::string & windowTitle);





private:
    int windoWInitializer(const int windowWidth, const int windowHeight, const std::string & windowTitle);

};


#endif /* WINDOW */