#include "pch.h"
#include "MathExtended.h"
#include <cstdlib>
#include <time.h>

/**
@brief Value of mathematical constant PI.
*/
const double MATH_EXTENDED::PI = 3.14159265358979323846;

/**
@brief Value of mathematical euler constant.
*/
const double MATH_EXTENDED::E = 2.71828182845904523536;

/**
@brief Value of mathematical constant PHI (golden number).
*/
const double MATH_EXTENDED::PHI = 1.61803398874989484820;

/**
@brief Value of square root of 2.
*/
const double MATH_EXTENDED::SQRT2 = 1.41421356237309504880;

/**
@brief Value of square root of 3.
*/
const double MATH_EXTENDED::SQRT3 = 1.73205080756887729352;

/**
@brief Value of square root of 5.
*/
const double MATH_EXTENDED::SQRT5 = 2.23606797749978969640;


/**
@brief Value of gravity physical constant.
*/
const double MATH_EXTENDED_PHYSICS::G = 6.67430e-11;

/**
@brief Value of elementary charge physical constant.
*/
const double MATH_EXTENDED_PHYSICS::e = 1.602176634e-19;

/**
@brief Value of ep0 physical constant (permittivy of free space).
*/
const double MATH_EXTENDED_PHYSICS::ep0 = 8.8541878128e-12;

/**
@brief Value of magnetic physical constant.
*/
const double MATH_EXTENDED_PHYSICS::mu0 = 1.25663706212e-6;


/**
@brief Calculates factorial of given number.
@param Number to calculate factorial of.
@return Factorial of given number.
*/
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

/**
@brief Calculates least common multiply.
@param a First number.
@param b Second number.
@return Least common multiply of given numbers.
*/
unsigned int MATH_EXTENDED::lcm(unsigned int a, unsigned int b)
{	
	return a / gcd(a, b) * b;
}

/**
@brief Calculates least common multiply.
@param a First number.
@param b Second number.
@return Least common multiply of given numbers.
*/
unsigned int MATH_EXTENDED::gcd(unsigned int a, unsigned int b)
{
	while (a != b) {
		if (a > b) {
			a = a - b;
		}
		else {
			b = b - a;
		}
	}
	return a;
}

/**
@brief Calculates least common multiply.
@param a First number.
@param b Second number.
@return Least common multiply of given numbers.
@remarks This is an alternative implementation of GCD algorithm, which uses pointers.
*/
unsigned int MATH_EXTENDED::gcd_v2(unsigned int a, unsigned int b)
{
	unsigned int* k = new unsigned int;
	while (b != 0) {
		*k = b;
		b = a % b;
		a = *k;
	}
	delete k;
	return a;
}

/**
@brief Generate pseudorandom integer number.
@param min Minimal number.
@param max Maximum number.
@return Generated random integer number in range [min, max].
*/
unsigned long MATH_EXTENDED::randomInt(unsigned int min, unsigned int max) {
	srand(time(NULL));
	return min + rand() % (max - min + 1);
}

/**
@brief Generate pseudorandom double number.
@param min Minimal number.
@param max Maximum number.
@return Generated random double number in range [min, max].
*/
double MATH_EXTENDED::randomDouble(double min, double max) {
	srand(time(NULL));
	return min + (double)rand() / RAND_MAX * (max - min);
};

/**
@brief Calculates second newton law value.
@param m Object's mass.
@param a Object's acceleration.
@return Force applied to object.
*/
double MATH_EXTENDED_PHYSICS::ndNewtonLaw(double m, double a)
{
	return m*a;
}

/**
@brief Calculates electrical current based on ohm law.
@param U Electrical voltage.
@param R Electrical resistance.
@return Electrical current of the object.
*/
double MATH_EXTENDED_PHYSICS::ohmLaw(double U, double R)
{
	return U*R;
}
