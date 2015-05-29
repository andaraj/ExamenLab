#ifndef ENEMIGO_H
#define ENEMIGO_H
#include "Personaje.h"
#include <vector>
#include <list>

class Enemigo : public Personaje
{
public:
        int velocidad_bala;
        std::vector<SDL_Rect> rect_bullet;
        void dibujar();
        void logica();
        Enemigo(SDL_Renderer* renderer);

        virtual ~Enemigo();
    protected:
    private:
};

#endif // ENEMIGO_H
