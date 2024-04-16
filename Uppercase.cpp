// Write a program to convert the lowercase letter into uppercase letter

#include <iostream>
using namespace std;

int main() {
    char character;
    cout<<"Enter any lowercase character:";
    cin>>character;
    
    char upper = character - 32;
    
    cout<<"The upper case character is "<<upper;

    return 0;
}
