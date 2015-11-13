#ifndef CLASSIC_H
#define CLASSIC_H
#include "Cd.h";
#include <iostream>
using namespace std;

class Classic: public Cd{
protected 
	char primary[50];

public:
	Classic();
	Classic(char * s1, char * s2, char *s3, int n, double x)
	~Classic();


}


#endif