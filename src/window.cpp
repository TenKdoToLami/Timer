#include <window.h>


Window::Window(const int windowWidth, const int windowHeight, const std::string & windowTitle)
{
    if (windoWInitializer(windowWidth, windowHeight, windowTitle))
    {
        throw std::runtime_error("Failed to initialize window");
        return;
    }
    

    return;
};

int Window::windoWInitializer(const int windowWidth, const int windowHeight, const std::string & windowTitle)
{
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
        return printError("Failed to initialize the SDL2 library", "Window initializer");


    window = SDL_CreateWindow(windowTitle.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, windowWidth, windowHeight, 0);
    if(!window)
        return printError("Failed to create window", "Window initializer");

    
    windowSurface = SDL_GetWindowSurface(window);
    if(!windowSurface)
        return printError("Failed to get the surface from the window", "Window initializer");

    SDL_Delay(5000);
    

    return 0;
}
