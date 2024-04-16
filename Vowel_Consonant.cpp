// Write a program to accept any letter/character from user and check whether the entered character is a vowel or a consonant

#include <iostream>
using namespace std;

int main() {
    char letter;
    cout<<"Enter any character to check whether it is vowel or not";
    cin>>letter;
    
    if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u'){
        cout<<"The entered character is a vowel.";
    }
    else{
        cout<<"The entered character is a consonant.";
    }

    return 0;
}
