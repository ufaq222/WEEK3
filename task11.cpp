#include<iostream>
using namespace std;

main()
{

	cout<<"Enter the current world population: ";
	int population;
	cin>> population;
	cout<<"Enter the monthly birth rate (number of births per month): ";
	int number;
	cin>> number;
	int n;
	n=30*number*12+population;
	cout<<"The population in three decades will be: "<< n ;

}
