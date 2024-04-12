// Write a program to accept an integer and check if it is even or odd.

# include <iostream>
using namespace std;

int main()
{
    int number;
    
    cout<<"Enter any number : ";
    cin>>number;

  // if the number is divisible by 2 then it is even number
    if(number % 2 == 0){
        cout<<"the given number is Even";
    }else
    {
        cout<<"The given number is Odd";   // if it is not divisible by 2 then it is odd number
    }
    
    return 0;
}
