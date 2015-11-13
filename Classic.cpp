#include "Cd.h"
#include "Classic.h"
#include <iostream>
using namespace std;

Classic::Classic():Cd(){
	primary[0]='\0';
	sLength3=0;
}

Classic::Classic(char * s1, char * s2, char *s3, int n, double x):Cd(s1,s2,n,x){
	for (unsigned  i=0;i<strlen(s3);i++){
		primary[i]=s3[i];
	}

	sLength3=strlen(s3);
}

Classic::~Classic(){
	cout<<"Classic Destroyed";
}

Classic::Classic(const Classic &right){
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

	for(int i=0;i<50;i++ ){
		primary[i]=right.primary[i];
	}
	sLength3=right.sLength3;

	Cd::Cd(right);

	return *this;
}
