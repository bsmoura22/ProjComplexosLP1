#include <iostream>
#include "../include/complexo.h"
#include <ostream>
#include <cmath>

using std::cout; 
using std::endl; 


Complexo::Complexo(double x, double y)
{
	real = x; 
	imaginario = y;  
}

Complexo::Complexo()
{
	real = 0; 
	imaginario = 0; 
}

Complexo::~Complexo()
{

}

Complexo Complexo::operator+(Complexo &c)
{
	int x = real + c.real; 
	int y = imaginario + c.imaginario; 
	
	return Complexo(x,y); 	
}

Complexo Complexo::operator-(Complexo &c)
{
	int x = real - c.real; 
	int y = imaginario - c.imaginario; 
	
	return Complexo(x,y);
}

Complexo Complexo::operator*(Complexo &c)
{
	int x = (real * c.real) + (-(imaginario*c.imaginario));
	int y = (real * c.imaginario) + (c.real * imaginario); 

	return Complexo(x,y); 
}

float Complexo::operator|(Complexo &c)
{
	float x = sqrt(pow(real,2) + pow(imaginario,2)); 

	return x;  

}

std::ostream& operator<<(std::ostream &o, Complexo const &c)
{

		o << c.real; 
		if(c.imaginario > 0)
			o << "+" << c.imaginario << "i" << endl;
		else if(c.imaginario < 0)
			o << c.imaginario << "i" << endl; 

	return o; 
}