// Write a program to find factorial of a given number.

#include <iostream>
using namespace std;

int main() {
    int number;
    int fact = 1;
    
    cout<<"Enter a number";
    cin>>number;
    
    for(int i=1; i<=number; i++){
        fact = fact*i;
    }
    
    cout<<"The factorial of a given number is "<<fact;

    return 0;
}
