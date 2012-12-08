#ifndef _MATHDISTANCECALCULATOR_H
#define _MATHDISTANCECALCULATOR_H
#include "Person.h"

// The difference between these method are their quotient.
// If you are interested in the calculation on more quotients, you can try to implement the protected method.
// Then you will find very cool stuffs
class MathDistanceCalculator
{
public:
	float static calculateMahantannDistance(Person *one, Person *two);
	float static calculateEuclideanDistance(Person *one, Person *two);
protected:
	float static caculateDistanceWithMoreQuotient(Person *one, Person *two, float quotient);
};

#endif