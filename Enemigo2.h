#ifndef ENEMIGO2_H
#define ENEMIGO2_H

#include "Personaje.h"
#include <vector>
#include <list>

class Enemigo2 : public Personaje
{
    public:
        int velocidad_bala;
        std::vector<SDL_Rect> rect_bullet2;
        SDL_Texture *textura, *textura_bala;
        SDL_Rect rect_textura, rect_bala;
        SDL_Renderer *renderer;

        void dibujar();
        void logica();

        Enemigo2(SDL_Renderer* renderer);
        virtual ~Enemigo2();
    protected:
    private:
};

#endif // ENEMIGO2_H
