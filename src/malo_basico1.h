#pragma once
#include "obj_movil.h"
class malo_basico1 :
	public obj_movil
{
	float tama�o;
public:
	malo_basico1(float t=2);
	~malo_basico1();
	void SetTama�o(float t) { tama�o = t; }
	void dibuja();
	friend class interaccion2;

};

