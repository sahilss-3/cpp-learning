#include <iostream>
using namespace std;
int main() {
    for (int i = 1;i <=20 ; i++){
        if (i == 10 || i == 8) {
            continue; // skip the rest of the loop for this iteration
        }
        cout << i << " ";
    }
}