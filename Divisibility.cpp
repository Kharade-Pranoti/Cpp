// Write a program to accept a number and check if it is divisble by 5 and 7

# include <iostream>
using namespace std;

int main()
{
    int number;
    
    cout<<"Enter any number : ";
    cin>>number;
    
    if(number % 5 == 0 && number % 7 == 0){
        cout<<"The given number is divisble by 5 and 7.";
    }
    else{
        cout<<"The given number is not divisible by 5 and 7.";
    }
    
    return 0;
}
