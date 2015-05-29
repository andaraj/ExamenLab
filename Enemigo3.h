#ifndef ENEMIGO3_H
#define ENEMIGO3_H

#include "Personaje.h"
#include <vector>
#include <list>

class Enemigo3 : public Personaje
{
    public:
        int velocidad_bala;
        std::vector<SDL_Rect> rect_bullet3;
        SDL_Texture *textura, *textura_bala;
        SDL_Rect rect_textura, rect_bala;
        SDL_Renderer *renderer;

        void dibujar();
        void logica();

        Enemigo3(SDL_Renderer* renderer);

        virtual ~Enemigo3();
    protected:
    private:
};

#endif // ENEMIGO3_H
