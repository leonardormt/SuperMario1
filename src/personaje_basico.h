#pragma once
#include "obj_movil.h"
class personaje_basico :
	public obj_movil
{
	int vidas;
	float altura;
public:
	personaje_basico();
	virtual ~personaje_basico();
	void dibuja();
};

