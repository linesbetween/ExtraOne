#include "Cd.h"
#include "Classic.h"
#include <iostream>
using namespace std;

Classic::Classic():Cd(){
	cout<<"\n Classic defaul constructor";
	primary[0]='\0';
	sLength3=0;
}

Classic::Classic(char * s1, char * s2, char *s3, int n, double x):Cd(s1,s2,n,x){
	cout<<"\n Classic constructor with args";
	for (unsigned  i=0;i<strlen(s3);i++){
		primary[i]=s3[i];
	}

	sLength3=strlen(s3);
}

Classic::~Classic(){
	cout<<"\n Classic Destroyed";
}

Classic::Classic(const Classic &right){
	cout<<"Classic copy constructor";
	for(int i=0;i<50;i++ ){
		primary[i]=right.primary[i];
	}
	sLength3=right.sLength3;

	Cd::Cd(right);
}

void Classic::report() const{
	cout<<"\n Primary: ";
	for(int i=0;i<sLength3;i++){
		cout<<primary[i];
	}
	Cd::report();
}

Classic& Classic::operator=(const Classic &right){
	cout<<"\n Classic overload =";
	for(int i=0;i<50;i++ ){
		primary[i]=right.primary[i];
	}
	sLength3=right.sLength3;

	//Cd::Cd(right);
	//below copied from Cd::operator=
	for(int i=0;i<50;i++ ){
		performers[i]=right.performers[i];
	}

	for(int i=0;i<20;i++ ){
		label[i]=right.label[i];
	}

	selections=right.selections;
	playtime=right.playtime;
	sLength1=right.sLength1;
	sLength2=right.sLength2;

	return *this;
}
