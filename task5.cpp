#include<iostream>
using namespace std;

main()
{

	cout<<"Enter the student's name: ";
	string name;
	cin>> name;
	cout<<"Enter matriculation marks (out of 1100): ";
        float marks;
	cin>> marks;
	cout<<"Enter intermediate marks (out of 550): ";
	float intermarks;
	cin>> intermarks;
	cout<<"Enter Ecat marks (out of 400): ";
	float ecat;
	cin>> ecat;
	float a,b,c;
	a=(marks/1100)*10;
	b=(intermarks/550)*40;
	c=(ecat/400)*50;
        float aggregate;
	aggregate=a+b+c;
        cout<<"Aggregate score for Mirza in UET is: "<<aggregate<<"%";
	








}