#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout << "Enter x axis value: ";
    cin >> x;
    cout <<"Enter y axis value: ";
    cin >> y;
    if(x>0 and y>0){
        cout << "The point is in the First Quadrant.";
    }
    else if(x<0 and y>0){
        cout << "The point is in the Second Quadrant.";
    }
    else if(x<0 and y<0){
        cout << "The point is in the Third Quadrant.";
    }
    else if(x>0 and y<0){
        cout << "The point is in the Fourth Quadrant.";
    }
    else if(x==0 and y==0){
        cout << "The point is at the Origin.";
    }
    else if(x==0){
        cout << "The point is on the Y axis.";
    }
    else if(y==0){
        cout << "The point is on the X axis.";
    }
}