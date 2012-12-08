#ifndef _PERSON_H
#define _PERSON_H

#include <string>
#include <map>
#include <iostream>
#include <vector>

using namespace std;

class Person 
{
protected:
	string name;
	map<string,float> *rateRecord;
	vector<string> ratedBook;

public:
	Person();
	Person(string name);
	~Person(){delete rateRecord;}

	string getName()const{return this->name;}
	float getRateForBook(string name);
	void setRateForBook(string bookName, float rate);
	bool isBookRated(string bookName);

	int getRatedBookSize()const{return ratedBook.size();}
	vector<string> getAllRatedBooks(){return ratedBook;}
};

#endif