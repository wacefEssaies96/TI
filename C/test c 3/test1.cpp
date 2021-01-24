#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL_image.h>
 
void pause()
{
    int continuer = 1;
    SDL_Event event;
 
    while (continuer)
    {
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_KEYDOWN:
                continuer = 0;
        }
    }
}
 
int main(int argc, char *argv[])
{
    SDL_Surface *ecran = NULL, *imageDeFond = NULL;
    SDL_Rect positionFond;
 
    positionFond.x = 0;
    positionFond.y = 0;
 
    SDL_Init(SDL_INIT_VIDEO);
 
    /* Chargement de l'icône AVANT SDL_SetVideoMode */
    SDL_WM_SetIcon(SDL_LoadBMP("sdl_icone.bmp"), NULL);
 
    ecran = SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE);
    SDL_WM_SetCaption("DAVTechnologie Beta 0.1", NULL);
 
    imageDeFond = SDL_LoadBMP("Pict6.bmp");
    SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);
 
 
    SDL_Flip(ecran);
    pause();
 
    SDL_FreeSurface(imageDeFond);
    SDL_Quit();
 
    return EXIT_SUCCESS;
 
}
