#pragma once
struct complex
{
	double re;
	double im;

	void sequence(complex number1)
	{
		re = number1.re * number1.re;
		im = number1.im * number1.im;
	}

	void multiple(complex number1)
	{
		re = pow(number1.re, 3);
		im = pow(number1.im, 3);
	}

	void result(complex number1, complex number2, complex number3, complex number4)
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