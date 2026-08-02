#include <iostream>
using namespace std;
main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int f=1;
    for(int i=1;i<n;i++){
        if(n%i==0)
            f=i;
    }
    cout<<f<<endl;
}