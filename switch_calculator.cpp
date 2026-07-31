#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    char q;
    cin >> q;
    int m;
    cin >> m;
    switch(q){
        case '+':
            cout << n+m;
            break;
        case '-':
            cout << n-m;
            break;
        case '*':
            cout << n*m;
            break;
        case '/':
            cout << n/m;
            break;
        default:
            cout << "Invalid operator.";
    }
}
    