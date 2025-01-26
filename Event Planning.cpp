#include <iostream>
using namespace std;

int main() {
    int NoParticipants, Budget, NoHotels, WeeksAvailable;
    
    while (cin >> NoParticipants >> Budget >> NoHotels >> WeeksAvailable) {
        int min_cost = Budget + 1;
        for (int i = 0; i < NoHotels; ++i) {
            int price;
            cin >> price;
            for (int j = 0; j < WeeksAvailable; ++j) {
                int beds;
                cin >> beds;
                if (beds >= NoParticipants) {
                    int cost = price * NoParticipants;
                    if (cost <= Budget) {
                        min_cost = min_cost < cost ? min_cost : cost;
                    }
                }
            }
        }
        if (min_cost <= Budget){
            cout << min_cost << endl;
            return 0;
        }
        else{
            cout << "stay home" << endl;
            return 0;
        }
        
    }
    
}
