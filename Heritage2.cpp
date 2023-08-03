#include <iostream>
#include <string.h>
using namespace std;

class Animal
{
	protected :
		string name ;
		int age;
		
    public :
	void set_vealue(string n,int a)
	{
		name = n;
		age =  a; 
	}
};

class Zebra : public Animal
{
	public :
		void display()
		{
		cout<<"Zebra Name: "<<name<<endl;
		cout<<"Zebra Age: "<<age<<endl;
		cout<<"Place  of Oringin: Africa"<<endl;
		}		
};

class Dolphin : public Animal
{
	public :
		void display ()
		{
		cout<<"Dolphin Name: "<<name<<endl;
		cout<<"Dolphin Age: "<<age<<endl;
		cout<<"Place  of Oringin: Oceans"<<endl;
		}
};

int main()
{
	 Zebra z;
	 z.set_vealue("Marty",5);
	 z.display();
	 
	 cout<<endl;
	 
	 Dolphin d;
	 d.set_vealue("Flipper",10);
	 d.display();
}
