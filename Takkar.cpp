#include <iostream>
using namespace std;

int main() {

    int a,b;

    //cout << "Enter size of Trump's button: ";
    cin >> a;

    //Input validation
    while (a < 0){
        //cout << "Size of button cannot be negative" << endl;
        //cout << "Enter size of Trump's button: ";
        cin >> a;
    }

    //cout << "Enter size of Kim Jong's button: ";
    cin >> b;

    //Input Validation
    while (b < 0){
        //cout << "Size of button cannot be negative" << endl;
        //cout << "Enter size of Kim Jong's button: ";
        cin >> a;
    }


    if (a > b){
        cout << "MAGA!" << endl;
    }else if ( a < b){
        cout << "FAKE NEWS!" << endl;
    }else{
        cout << "WORLD WAR 3!" << endl;
    }

    return 0;

}