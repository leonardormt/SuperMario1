#pragma once
#include "plataforma.h"
#include "bloque1.h"
#include "personaje_basico1.h"
#include "malo_basico1.h"
class interaccion2
{
public:
	interaccion2();
	~interaccion2();
	static void colision(personaje_basico1& p, plataforma a);
	static void colision(personaje_basico1& p, bloque1 b);
	static void colision(personaje_basico1& p, malo_basico1& m);
	static void colision(malo_basico1& p, plataforma a);
};

