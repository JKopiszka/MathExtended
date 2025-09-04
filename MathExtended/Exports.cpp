// Inside DLL
#include "pch.h"
#include "MathExtended.h"
#include <ctime>
#include <cmath>


extern "C" __declspec(dllexport) unsigned long long factorial(unsigned long long n) {
	return MATH_EXTENDED::factorial(n);
}

extern "C" __declspec(dllexport) unsigned int lcm(unsigned int a, unsigned int b) {
	return MATH_EXTENDED::lcm(a, b);
}

extern "C" __declspec(dllexport) unsigned int gcd(unsigned int a, unsigned int b) {
	return MATH_EXTENDED::gcd(a, b);
}

extern "C" __declspec(dllexport) unsigned int quick_gcd(unsigned int a, unsigned int b) {
	return MATH_EXTENDED::quick_gcd(a, b);
}

extern "C" __declspec(dllexport) double randomDouble(double min, double max) {
	return MATH_EXTENDED::randomDouble(min, max);
}

extern "C" __declspec(dllexport) unsigned long randomInt(unsigned int min, unsigned int max) {
	
	return MATH_EXTENDED::randomInt(min, max);
}

extern "C" __declspec(dllexport) double get_e() {
	return MATH_EXTENDED::E;
}

extern "C" __declspec(dllexport) double get_pi() {
	return MATH_EXTENDED::PI;
}

extern "C" __declspec(dllexport) double get_SQRT2() {
	return MATH_EXTENDED::SQRT2;
}

extern "C" __declspec(dllexport) double get_SQRT3() {
	return MATH_EXTENDED::SQRT3;
}

extern "C" __declspec(dllexport) double get_SQRT5() {
	return MATH_EXTENDED::SQRT5;
}

extern "C" __declspec(dllexport) double get_PHI() {
	return MATH_EXTENDED::PHI;
}



