#pragma once
#include "vector2D.h"

class obj_movil
{
protected:
	vector2D posicion;
	vector2D velocidad;
	vector2D aceleracion;
	unsigned char rojo;
	unsigned char verde;
	unsigned char azul;
public:

	obj_movil();
	~obj_movil();
	void mover( float t);

};
