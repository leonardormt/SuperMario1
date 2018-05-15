#pragma once
#include "bloque1.h"
#include "personaje_basico1.h"
#include "plataforma.h"
#include "interaccion2.h"
#include"malo_basico1.h"

class mundo
{
	float x_ojo;
	float y_ojo;
	bloque1 bloque;
	personaje_basico1 mario;
	plataforma suelo;
	plataforma pared;
	malo_basico1 champi;

public:
	mundo();
	~mundo();
	void dibuja();
	void inicializa();
	void mueve();
	void teclaEspecial(unsigned char key);

};

