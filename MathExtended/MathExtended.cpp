#include "pch.h"
#include "MathExtended.h"

const double MATH_EXTENDED::PI = 3.14159265358979323846;
const double MATH_EXTENDED::E = 2.71828182845904523536;
const double MATH_EXTENDED::PHI = 1.61803398874989484820;
const double MATH_EXTENDED::SQRT2 = 1.41421356237309504880;
const double MATH_EXTENDED::SQRT3 = 1.73205080756887729352;
const double MATH_EXTENDED::SQRT5 = 2.23606797749978969640;

const double MATH_EXTENDED_PHYSICS::G = 6.67430e-11;
const double MATH_EXTENDED_PHYSICS::e = 1.602176634e-19;
const double MATH_EXTENDED_PHYSICS::ep0 = 8.8541878128e-12;
const double MATH_EXTENDED_PHYSICS::mu0 = 1.25663706212e-6;

unsigned long long MATH_EXTENDED::factorial(unsigned long long n)
{
	int i = 2;
	unsigned long long rslt = 1;
	do {
		rslt *= i;
		i++;
	} while (i <= n);

	return rslt;
}

unsigned int MATH_EXTENDED::lcm(unsigned int a, unsigned int b)
{
	return 0;
}

unsigned int MATH_EXTENDED::gcd(unsigned int a, unsigned int b)
{
	return 0;
}

double MATH_EXTENDED_PHYSICS::ndNewtonLaw(double m, double a)
{
	return m*a;
}

double MATH_EXTENDED_PHYSICS::ohmLaw(double I, double R)
{
	return I*R;
}
