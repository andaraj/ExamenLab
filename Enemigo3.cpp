#include "Enemigo3.h"

Enemigo3::Enemigo3(SDL_Renderer* renderer)
{
    this->renderer = renderer;
    int w,h;
    textura = IMG_LoadTexture(renderer, "enemigo3.png");
    SDL_QueryTexture(textura, NULL, NULL, &w, &h);
    rect_textura.x = 600;
    rect_textura.y = 410;
    rect_textura.w = w;
    rect_textura.h = h;

    textura_bala = IMG_LoadTexture(renderer, "bala3.png");
    SDL_QueryTexture(textura_bala, NULL, NULL, &w, &h);
    rect_bala.x = 600;
    rect_bala.y = 410;
    rect_bala.w = w;
    rect_bala.h = h;

    velocidad_bala = 10;
}

void Enemigo3::dibujar()
{
    SDL_RenderCopy(renderer, textura, NULL, &rect_textura);
    for(int i=0;i<rect_bullet3.size();i++)
        SDL_RenderCopy(renderer, textura_bala, NULL, &rect_bullet3[i]);
}

void Enemigo3::logica()
{

    for(int j=0;j<rect_bullet3.size();j++)
    rect_bullet3[j].y-=velocidad_bala;



    rect_textura.x-=10;
    if(rect_textura.x==-100)
    {
        rect_textura.x=600;
    }
    SDL_Rect temp;
    temp.x=rect_textura.x;
    temp.y=rect_textura.y;
    temp.w=rect_bala.w;
    temp.h=rect_bala.h;

    if(frame%20==0)
    rect_bullet3.push_back(temp);

    {
    for(int i=0;i<rect_bullet3.size();i++)
    {

    frame++;
    }
    }

}

Enemigo3::~Enemigo3()
{
    //dtor
}
