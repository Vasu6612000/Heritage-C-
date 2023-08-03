#include <iostream>
using namespace std;

class Mother{
public:
	Mother(){};
	void display(){cout << "hello im the mother!"<< endl;};	
};

class Daughter : public Mother{
public:
	Daughter(){};
	void display(){cout << "hello im the daugther!"<< endl;};	
};

int main()
{	
	Mother mo;
	Daughter dau;
	mo.display();
    dau.display();

	return 0;
}
