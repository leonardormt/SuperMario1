#pragma once
#include "d:\Descargas\Tema4_completo2012\Tema4_inicial_2012\Tema4_inicial_2012\Pang\src\obj_movil.h"
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

