#include "MathDistanceCalculator.h"
#include <vector>
#define kNotRate -1

float MathDistanceCalculator::caculateDistanceWithMoreQuotient(Person *one, Person *two, float quotient)
{
	float sum = 0;
	vector<string> allBooks = one->getAllRatedBooks();
	for (int i = 0;i < allBooks.size();i++)
	{
		string tempName = allBooks[i];
		if (two->isBookRated(tempName))
		{
			float rateOne = one->getRateForBook(tempName);
			float rateTwo = two->getRateForBook(tempName);
			float result = fabs(rateTwo - rateOne);
			sum += pow(result, quotient);
		}
	}

	return pow(sum, 1 / quotient);
}

float MathDistanceCalculator::calculateMahantannDistance(Person *one, Person *two)
{
	return MathDistanceCalculator::caculateDistanceWithMoreQuotient(one,two,1);
}

float MathDistanceCalculator::calculateEuclideanDistance(Person *one, Person *two)
{
	return MathDistanceCalculator::caculateDistanceWithMoreQuotient(one,two,2);
}