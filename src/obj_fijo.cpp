#include "obj_fijo.h"



obj_fijo::obj_fijo()
{
}


obj_fijo::~obj_fijo()
{
}

void obj_fijo::SetColor(unsigned char r, unsigned char g, unsigned char b)
{
	rojo = r;
	verde = g;
	azul = b;
}

void obj_fijo::SetPos(float x1, float y1)
{
	posicion.x = x1;
	posicion.y = y1;

}

