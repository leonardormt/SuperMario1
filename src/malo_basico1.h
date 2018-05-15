#pragma once
#include "obj_movil.h"
class malo_basico1 :
	public obj_movil
{
	float tamaño;
public:
	malo_basico1(float t=2);
	~malo_basico1();
	void SetTamaño(float t) { tamaño = t; }
	void dibuja();
	friend class interaccion2;

};

