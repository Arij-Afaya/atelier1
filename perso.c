#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "perso.h"


void init(personne* personne)
{
   personne->image=IMG_Load("image_principale.png");

   personne->imageRight[0]=IMG_Load("image_right0.png");
   personne->imageRight[1]=IMG_Load("image_right1.png");
   personne->imageRight[2]=IMG_Load("image_right2.png");
   personne->imageRight[3]=IMG_Load("image_right3.png");

   personne->imageLeft[0]=IMG_Load("image_left0.png");
   personne->imageLeft[1]=IMG_Load("image_left1.png");
   personne->imageLeft[2]=IMG_Load("image_left2.png");
   personne->imageLeft[3]=IMG_Load("image_left3.png");

   sv->vie=5;
   sv->score=0;
   personne->positionp.x=100;
   personne->positionp.y=400;
}
void afficherperso(personne *personne, SDL_Surface * screen)
{
int i=0;
    SDL_BlitSurface(personne->imageRight[i],NULL,screen,&personne->positionp);
    SDL_BlitSurface(personne->imageLeft[i],NULL,screen,&personne->positionp);
    i++;
    if(i==3)
       i=0;
}
void deplacerperso(personne *personne)
{
  while (done)
    {
   while(SDL_PollEvent(&event))
     {
   switch (event.type)
       {
          case SDL_KEYDOWN:
          {
            if (event.key.keysym.sym == SDLK_ESCAPE)
              done = 0 ;
   if (event.key.keysym.sym == SDLK_RIGHT)
       positionp.x+=10;
   if (event.key.keysym.sym == SDLK_LEFT)
       positionp.x-=10;
                break;
           }
        }
}SDL_Flip(screen);
}
}
void animerperso(personne* personne)
{

}
//*************************************************
void saut(personne *personne)
{

}
