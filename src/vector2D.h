#pragma once
#include <glut.h>
class vector2D
{
 
public: //métodos
	float x;
	float y;
	vector2D(float xv = 0.0f, float yv = 0.0f); // (1)
	virtual ~vector2D();
	/*float modulo(); // (2) modulo del vector
	float argumento(); // (3) argumento del vector
	vector2D Unitario(); // (4) devuelve un vector unitario*/
	vector2D operator - (vector2D &v); // (5) resta de vectores
	vector2D operator + (vector2D &v); // (6) suma de vectores
	float operator *(vector2D &v); // (7) producto escalar
	vector2D operator *(float ); // (8) producto por un escalar 
	vector2D operator =(vector2D &v);
};

