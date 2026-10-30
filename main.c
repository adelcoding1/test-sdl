// creer une fenetre : SDL_CreateWindow(...)

#include "SDL.h"
#include <stdio.h>

int main(int argc, char** argv)
{
    SDL_Window* window = NULL;

    // Initialiser SDL (on utilise seulement la vidéo)
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        printf("Erreur pour initialiser SDL (%s)\n", SDL_GetError());
        return -1;
    }

    // Creer la fenetre
    window = SDL_CreateWindow("01 - Ma premiere fenetre SDL2",
        SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
        640, 480,
        SDL_WINDOW_SHOWN);

    if(window == NULL)
    {
        printf("Erreur pour creer la fenetre (%s)\n", SDL_GetError());
        return -1;
    }

    // attendre 5 secondes
    SDL_Delay(5000);

    // fin du programme
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}