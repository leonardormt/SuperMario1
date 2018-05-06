#pragma once
#include "linea1.h"
class plataforma
{
	linea1 arist_izq;
	linea1 arist_der;
	float ancho;
	vector2D origen;
	float alto;
	unsigned char rojo;
	unsigned char verde;
	unsigned char azul;
public:
	plataforma();
	~plataforma();
	void dibuja();
	void SetColor(unsigned char r, unsigned char g, unsigned char b);
	void SetPos(float x1, float y1);
	void SetAncho(float a) { ancho = a; }
	void SetAlto(float a) { alto = a; }
	void inicializa();



};


