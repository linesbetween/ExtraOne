#ifndef CD_H
#define CD_H
using namespace std;


// base class
class Cd { // represents a CD disk
protected: 
	char performers[50];
	char label[20];
	int selections; // number of selections
	double playtime; // playing time in minutes
	//Actual length of performers and label name
	int sLength1;
	int sLength2;

public:
	Cd(char * s1, char * s2, int n, double x);
	Cd(const Cd &d);
	Cd();
	~Cd();
	void report() const; // reports all the CD data
	Cd & operator=(const Cd &d);
};

#endif

