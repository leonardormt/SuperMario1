#pragma once
#include "bloque1.h"
#include "personaje_basico1.h"
#include "plataforma.h"

class mundo
{
	bloque1 bloque;
	personaje_basico1 mario;
	plataforma suelo;
public:
	mundo();
	~mundo();
	void dibuja();
	void inicializa();
	void mueve();

};

