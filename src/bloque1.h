#pragma once
#include "obj_fijo.h"
class bloque1 :
	public obj_fijo
{

	float lado;
public:
	bloque1();
	~bloque1();
	void dibuja();
	void SetLado(float l) { lado = l; }
	friend class interaccion2;
};

