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
	void SetColor(unsigned char r, unsigned char g, unsigned char b);
	void SetPos(float x1, float y1);
	void SetVel(float x1, float y1);
	float Getx() { return posicion.x; }
	float Gety() { return posicion.y; }
	friend class interaccion2;
};
