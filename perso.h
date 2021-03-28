#ifndef JEU_H_INCLUDED
#define JEU_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
typedef struct
{
    int score;
    int vie;
}sv;
typedef struct
{
	SDL_Surface *imageLeft[4];
	SDL_Surface *imageRight[4];
	SDL_Surface *image;
	SDL_Rect positionp;
       
}personne;

//void init(personne* personne,int numperso);
void init(personne* personne);
void afficherperso(personne personne, SDL_Surface * screen);
void deplacerperso(personne *personne);
void animerperso(personne* personne);
void saut(personne *personne);

#endif // JEU_H_INCLUDED
