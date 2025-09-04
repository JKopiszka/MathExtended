//	THIS FILE CONTAINS THE DEFINITION OF THE MATH EXTENDED LIBRARY
//	MathExtended is a library that contains some useful mathematical functions
//	unavailable in the standard C++ library. 
//
//		Whole library contains class:
// 		- MATH_EXTENDED: containing some useful mathematical formulas,
//						 constants and functions.
//
// 
// Written and copyrighted by: Jakub Kopiszka (c) 2025

#pragma once

#ifdef _MATH_EXTENDED_EXPORTS
#define MATH_EXTENDED_API __declspec(dllimport)
#else
#define MATH_EXTENDED_API __declspec(dllexport)
#endif

#ifndef MATH_EXTENDED_H
#define MATH_EXTENDED_H

// Math_extended class definition
class MATH_EXTENDED {
public:

	// VARIABLES DEFINITION
	static const double PI; // PI constant
	static const double E; // Euler's number
	static const double PHI; // Golden ratio
	static const double SQRT2; // Square root of 2
	static const double SQRT3; // Square root of 3
	static const double SQRT5; // Square root of 5

	// FUNCTIONS DEFINITION
	static unsigned long long factorial(unsigned long long n); // Factorial function
	static unsigned int lcm(unsigned int a, unsigned int b); // Least common multiple function
	static unsigned int gcd(unsigned int a, unsigned int b); // Greatest common divisor function
	static unsigned int quick_gcd(unsigned int a, unsigned int b); // Greatest common divisor function (different algorithm)

	static double randomDouble(double min, double max); // Randomizer (int)
	static unsigned long randomInt(unsigned int min, unsigned int max); // Randomizer (int)
};

#endif
