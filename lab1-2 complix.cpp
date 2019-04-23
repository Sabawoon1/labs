#include "pch.h"
#include "Complex.h"

Complex::Complex() 
{ 
	setNumber(0, 0); 
}

Complex::Complex(double re, double im) 
{ 
	setNumber(re, im); 
}
void Complex::setNumber(double re, double im) 
{
	this->im = im;
	this->re = re;
}
double Complex::getRe() 
{ 
	return re; 
}

double Complex::getIm() 
{ 
	return im; 
}

double Complex::countModule() 
{
	return sqrt(re * re + im * im);
}

Complex& Complex::operator= (const Complex& c) 
{
	re = c.re;
	im = c.im;
	return *this;
}

std::ostream& operator<< (std::ostream& out, const Complex& c) 
{
	out << c.re;
	if (c.im < 0) 
	{
		out << c.im << "i";
	}
	else 
	{
		out << "+" << c.im << "i";
	}
	return out;}

Complex::~Complex() 
{
}
