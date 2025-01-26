#include <iostream>
using namespace std;

int main() {
    int n;  
    int k; 

    cin >> n;
    cin >> k;

    const int baseYear = 2022;

    int yearsPassed = n / k;

    int currentYear = baseYear + yearsPassed;

    cout << currentYear << endl;

    return 0;
}
