#include <iostream>
using namespace std;
int main(){
    int cost_prise,selling_prise;
    cout << "Enter cost price: ";
    cin >> cost_prise;
    cout << "Enter selling price: ";
    cin >> selling_prise;
    if(selling_prise > cost_prise) {
        cout << "Profit: " << selling_prise - cost_prise;
    }
    else if(selling_prise < cost_prise) {
        cout << "Loss: " << cost_prise - selling_prise;
    }
    else {
        cout << "No profit, no loss.";
    }
}