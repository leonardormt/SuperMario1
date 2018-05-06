#pragma once
#include "vector2D.h"
class obj_fijo
{
protected:
	vector2D posicion;
	unsigned char rojo;
	unsigned char verde;
	unsigned char azul;
public:
	obj_fijo();
	~obj_fijo();
	void SetColor(unsigned char r, unsigned char g, unsigned char b);
	void SetPos(float x1, float y1);
};



