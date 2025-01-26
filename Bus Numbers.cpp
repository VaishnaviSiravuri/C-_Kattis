#include <iostream>
#include <string>

using namespace std;


void Sort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
 
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void compressBusNumbers(int buses[], int n) {
   Sort(buses, n);
    
    for (int i = 0; i < n;) {
        int start = i;
   
        while (i + 1 < n && buses[i + 1] == buses[i] + 1) {
            ++i;
        }
        int end = i;

        if (end - start >= 2) {
      
            cout << buses[start] << "-" << buses[end] << " ";
        } else {
           
            for (int j = start; j <= end; ++j) {
                cout << buses[j] << " ";
            }
        }
        ++i;
    }
    cout << endl;
}

int main() {
    int BusNumber;
    cin >> BusNumber;
    int buses[1000];

    for (int i = 0; i < BusNumber; ++i) {
        cin >> buses[i];
    }

    compressBusNumbers(buses, BusNumber);

    return 0;
}
