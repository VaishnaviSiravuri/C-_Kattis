#include <iostream>
using namespace std;

int main () {

    int n;

    //cout << "Enter integer n: ";
    cin >> n;

    while (n < 0){
        //cout << "n cannot be negative !!" << endl;
        //cout << "Enter integer n: ";
        cin >> n;
    }

    for (int i = 1; i <= n; i++ ){

        cout << i << endl;

    }

    return 0;
}