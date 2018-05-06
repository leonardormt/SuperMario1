#pragma once
#include "obj_movil.h"
class personaje_basico1:
	public obj_movil
{
	int vidas;
	float altura;

public:
	personaje_basico1();
	~personaje_basico1();
	void dibuja();
	float Getx() { return posicion.x; }
	float Gety() { return posicion.y; }
};

