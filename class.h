#pragma once
class Complex
{
public:
	double re;
	double im;

	void sequence(Complex number1)
	{
		re = number1.re * number1.re;
		im = number1.im * number1.im;
	}

	void multiple(Complex number1)
	{
		re = pow(number1.re, 3);
		im = pow(number1.im, 3);
	}

	void result(Complex number1, Complex number2, Complex number3, Complex number4)
	{
		re = (number2.re + number3.re - number4.re) / number1.re;
		im = (number2.im + number3.im - number4.im) / number1.im;
	}

	void input(float Re, float Im)
	{
		re = Re;
		im = Im;
	}
};