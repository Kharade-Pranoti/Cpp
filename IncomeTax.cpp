// Write a program, which accepts annual basic salary of an employee and calculates and displays the 
// Income tax as per the following rules. 
// Basic: < 1, 50,000 Tax = 0
// 1, 50,000 to 3,00,000 Tax = 20% 
// > 3,00,000 Tax = 30% 

# include <iostream>
using namespace std;

int main()
{
	float basic_salary;
	float tax;
	
	cout<<"Enter your basic salary";
	cin>>basic_salary;
	
	if(basic_salary < 150000){
		tax = 0;
		cout<<"The tax you have to pay is "<<tax<<" amount";
	}
	else if(basic_salary >= 150000 && basic_salary < 300000){
		tax = basic_salary / 20;
		cout<<"The tax you have to pay is "<<tax<<" amount";
	}
	else if(basic_salary >= 300000){
		tax = basic_salary / 30;
		cout<<"The tax you have to pay is "<<tax<<" amount";
	}
	
	return 0;
}
