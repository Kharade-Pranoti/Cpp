// Write a program to input angles of a triangle and check whether it is a triangle or not.

#include <iostream>
using namespace std;

int main() {
    int angle1, angle2, angle3;
    
    cout<<"Enter the angles of a triangle :";
    cin>>angle1;
    cin>>angle2;
    cin>>angle3;
    
    int sum_of_angles = angle1 + angle2 + angle3;
    
    // if sum of angles is 180 degree then it is a triangle
    // otherwise it is not a triangle.
    if(sum_of_angles == 180){
        cout<<"It is a triangle.";
    }
    else{
        cout<<"It is not a triangle.";
    }

    return 0;
}
