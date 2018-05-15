#include "obj_movil.h"



obj_movil::obj_movil()
{
	aceleracion.y = -9.8f;
}


obj_movil::~obj_movil()
{
}

void obj_movil::mover(float t)
{
	posicion = posicion + velocidad * t+ aceleracion*(0.5f*t*t);
	velocidad = velocidad + aceleracion * t;
}

void obj_movil::SetColor(unsigned char r, unsigned char g, unsigned char b)
{
	rojo = r;
	verde = g;
	azul = b;
}

void obj_movil::SetPos(float x1, float y1)
{
	posicion.x = x1;
	posicion.y = y1;
}

void obj_movil::SetVel(float x1, float y1)
{
	velocidad.x = x1;
	velocidad.y = y1;
}





