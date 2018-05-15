#pragma once
#include "bloque1.h"
#include "personaje_basico1.h"
#include "plataforma.h"
#include "interaccion2.h"

class mundo
{
	float x_ojo;
	float y_ojo;
	bloque1 bloque;
	personaje_basico1 mario;
	plataforma suelo;
public:
	mundo();
	~mundo();
	void dibuja();
	void inicializa();
	void mueve();
	void teclaEspecial(unsigned char key);

};

