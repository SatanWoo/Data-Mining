#include <iostream>
#include "Person.h"
#include "MathDistanceCalculator.h"
using namespace std;

// @Author:Ziqi Wu, Tongji University
// Follow me http://weibo.com/billgawu

// In this chapter there will be three different method.
// 1.computing the math distance among users and recommend informaton for those who have nearer distances.
// 2.To avoid the grade-inflation ,we'd better use another method called Perseaon Coefficient
// 3.The avoid the sparse condition among a large scale of data, we could use cosine to judge.
float testCaseOnMahatann()
{
	Person *Angelice = new Person("Angelice");
	Person *Bill = new Person("Bill");

	Angelice->setRateForBook("Blues Traveler", 3.5);
	Angelice->setRateForBook("Broken Bells", 2);
	Angelice->setRateForBook("Norah Jones", 4.5);
	Angelice->setRateForBook("Phoenix", 5);
	Angelice->setRateForBook("Slightly Stoopid", 1.5);
	Angelice->setRateForBook("The Strokes",2.5);
	Angelice->setRateForBook("Vampire Weekend",2);

	Bill->setRateForBook("Blues Traveler", 2);
	Bill->setRateForBook("Broken Bells", 3.5);
	Bill->setRateForBook("Deadmau5", 4);
	Bill->setRateForBook("Phoenix", 2);
	Bill->setRateForBook("Slightly Stoopid", 3.5);
	Bill->setRateForBook("Vampire Weekend",3);

	return MathDistanceCalculator::calculateEuclideanDistance(Angelice,Bill);
}

int main()
{
	cout << testCaseOnMahatann() << endl;
	return 0;
}

