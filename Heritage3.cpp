#include <iostream>
#include <string.h>
using namespace std;

class Person
{
   private:
		char name;
		int age;
		
	public:
		void readPerson()
		{
			cout<<"Enter Name: ";
			cin>>name;
			cout<<"Enter Age: ";
			cin>>age;
		}
		
		
		void printPerson()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Enter Age: "<<age<<endl;
		}
};

class Employee
{
	public:
		char designation;
		float salary;
		
	public:
     void readEmployee()
	 {
	 	cout<<"Enter designation: ";
	 	cin>>designation;
	 	cout<<"Enter salary";
	 	cin>>salary;
	 }      
	 
	      void printEmployee()
	 {
	 	cout<<"Enter designation: "<<designation<<endl;
	 	cout<<"Enter salary"<<salary<<endl;
	 }      
};

class Emplnfo:public Person, public Employee
{
	 void readEmplnfo()
	 {
	 	readPerson();
	 	readEmployee();
	 }
	 void printEmplnfo()
	 {
	 	printPerson();
	 	printEmployee();
	 }
};

int main()
{
	Emplnfo e;
	e.readEmployee();
	cout<<endl;
	e.printEmployee();
	
	return 0;
}
