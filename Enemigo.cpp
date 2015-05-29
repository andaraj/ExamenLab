#include "Enemigo.h"
#include <iostream>

Enemigo::Enemigo(SDL_Renderer* renderer)
{
    this->renderer = renderer;
    int w,h;
    textura = IMG_LoadTexture(renderer, "enemigo.png");
    SDL_QueryTexture(textura, NULL, NULL, &w, &h);
    rect_textura.x = 400;
    rect_textura.y = 100;
    rect_textura.w = w;
    rect_textura.h = h;

    textura_bala = IMG_LoadTexture(renderer, "bala2.png");
    SDL_QueryTexture(textura_bala, NULL, NULL, &w, &h);
    rect_bala.x = 450;
    rect_bala.y = 150;
    rect_bala.w = w;
    rect_bala.h = h;


    velocidad_bala=10;
}

void Enemigo::dibujar()
{
    SDL_RenderCopy(renderer, textura, NULL, &rect_textura);
    for(int i=0;i<rect_bullet.size();i++)
        SDL_RenderCopy(renderer, textura_bala, NULL, &rect_bullet[i]);
}

void Enemigo::logica()
{


    for(int i=0;i<rect_bullet.size();i++)

    rect_bullet[i].x-=velocidad_bala;
    rect_textura.y+=1;
    SDL_Rect temp;
    temp.x=rect_textura.x;
    temp.y=rect_textura.y;
    temp.w=rect_bala.w;
    temp.h=rect_bala.h;

    if(frame%20==0)
    rect_bullet.push_back(temp);

    {
    for(int i=0;i<rect_bullet.size();i++)
    {

    frame++;
    }
    }


//for(list<Personaje*>::iterator i=nave->begin();
//        i!=nave->end();
//        i++
//        )
//    {
//        if(*i==this)
//            continue;
//        for(int j=0;j<rect_bullet.size();j++)
//        {
//            SDL_Rect rect1 = rect_bullet[j];
//            SDL_Rect rect2 = (*i)->rect_textura;
//            if((rect1.x+rect1.w<rect2.x)==false//Muy a la izq
//                && (rect1.x>rect2.x+rect2.w)==false//Muy a la der
//                && (rect1.y+rect1.h<rect2.y)==false//Muy arriba
//                && (rect1.y>rect2.y+rect2.h)==false//Muy abajo
//               )
//            {
//                personajes->erase(i);
//                return;
//            }
//        }

}
Enemigo::~Enemigo()
{
    //dtor
}
