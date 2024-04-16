// Write a program to accept any uppercase character and convert it into the lower case character

#include <iostream>
using namespace std;

int main() {
    char character;
    cout<<"Enter any uppercase character:";
    cin>>character;
    
    char lowercase = character + 32;
    
    cout<<"The lower case character is "<<lowercase;

    return 0;
}
