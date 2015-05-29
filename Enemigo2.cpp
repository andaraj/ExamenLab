#include "Enemigo2.h"


Enemigo2::Enemigo2(SDL_Renderer* renderer)
{
    this->renderer = renderer;
    int w,h;
    textura = IMG_LoadTexture(renderer, "enemigo2.png");
    SDL_QueryTexture(textura, NULL, NULL, &w, &h);
    rect_textura.x = 10;
    rect_textura.y = 200;
    rect_textura.w = w;
    rect_textura.h = h;

    textura_bala = IMG_LoadTexture(renderer, "bala1.png");
    SDL_QueryTexture(textura_bala, NULL, NULL, &w, &h);
    rect_bala.x = 10;
    rect_bala.y = 200;
    rect_bala.w = w;
    rect_bala.h = h;

    velocidad_bala=10;
}

void Enemigo2::dibujar()
{
    SDL_RenderCopy(renderer, textura, NULL, &rect_textura);
    for(int i=0;i<rect_bullet2.size();i++)
        SDL_RenderCopy(renderer, textura_bala, NULL, &rect_bullet2[i]);
}

void Enemigo2::logica()
{
    for(int i=0;i<rect_bullet2.size();i++)

    rect_bullet2[i].x+=velocidad_bala;
    rect_textura.x+=8;
    if(rect_textura.x==1500)
    {
        rect_textura.x=10;
    }
    SDL_Rect temp;
    temp.x=rect_textura.x;
    temp.y=rect_textura.y;
    temp.w=rect_bala.w;
    temp.h=rect_bala.h;

    if(frame%30==0)
    rect_bullet2.push_back(temp);

    {
    for(int i=0;i<rect_bullet2.size();i++)
    {

    frame++;
    }
    }

}

Enemigo2::~Enemigo2()
{
    //dtor
}
