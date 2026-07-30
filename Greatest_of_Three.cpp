#include <iostream>
using namespace std;
int main(){
    int x,y,z;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << "Enter z: ";
    cin >> z;
    if(x>y and x>z){
        cout << "x is the greatest number.";
    }
    else if(y>x and y>z){
        cout << "y is the greatest number.";
    }
    else if(z>x and z>y){
        cout << "z is the greatest number.";
    }
    else{
        cout << "All numbers are equal.";
    }

}