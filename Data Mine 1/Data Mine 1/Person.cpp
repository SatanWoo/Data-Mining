#include "Person.h"

#define kNotRate -1
Person::Person()
{
	rateRecord = new map<string,float>();
}

Person::Person(string bookname)
{
	this->name = bookname;
	rateRecord = new map<string,float>();
}

void Person::setRateForBook(string bookName, float rate)
{
	map<string, float>::iterator iter = rateRecord->find(bookName);
	if (iter != rateRecord->end())
		iter->second = rate;
	else{
		rateRecord->insert(map < string, float >::value_type(bookName, rate)); 
		ratedBook.push_back(bookName);
	}
}

bool Person::isBookRated(string bookName)
{
	map<string, float>::iterator iter = rateRecord->find(bookName);
	if (iter != rateRecord->end())
		return true;
	else
		return false;
}

float Person::getRateForBook(string bookName)
{
	map<string, float>::iterator iter = rateRecord->find(bookName);
	if (iter != rateRecord->end())
		return iter->second;
	else 
		return kNotRate;
}




