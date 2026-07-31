#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    char q;
    cin >> q;
    int m;
    cin >> m;
    if(q=='+'){
        cout << n+m;
    }
    else if(q=='-'){
        cout << n-m;
    }
    else if(q=='*'){
        cout << n*m;
    }
    else if(q=='/'){
        cout << n/m;
    }
}