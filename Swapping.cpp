// Write a program to swap two numbers by
// by using temp variable and
// without using temp variable.

# include <iostream>
using namespace std;

int main()
{
  int number1 = 57;
  int number2 = 49;
  int temp;
  
  cout<<"Swapping by using temp variable --> \n";
  cout<<"Before Swapping"<<endl;
  cout<<"The two numbers are : "<<number1<<" "<<number2<<endl;
  
  // by using temp variable
  
  temp = number1;
  number1 = number2;
  number2 = temp;
  
  cout<<endl;
  
  cout<<"After swapping"<<endl;
  cout<<"The two numbers are : "<<number1<<" "<<number2;
  
   cout<<"\n \n";
  
  // without using temp variable
  
  cout<<"Swapping without using temp variable --> \n";
  cout<<"Before swapping"<<endl;
  cout<<"The two numbers are : "<<number1<<" "<<number2<<endl;
  
  number1 = number1 + number2;
  number2 = number1 - number2;
  number1 = number1 - number2;
  
  cout<<"After swapping"<<endl;
  cout<<"The two numbers are : "<<number1<<" "<<number2;
  
  
  return 0;
  
}
