#include <iostream>
#include <string>
using namespace std;

int main()
{
    int TestCase;
    cin >> TestCase;
    string case1,case2;
    
    for (int i=0; i<TestCase; i++){

        cin >> case1;
        cin >> case2;
        
        cout <<"\n";
        cout << case1 << endl;
        cout << case2 << endl;
        
        for (int j=0; j<case1.length() ; j++){
            
            if (case1.at(j) == case2.at(j)){
                cout <<".";
            }else{
                cout << "*";
            }
            
        }
        
        cout <<"\n";
        
    }
     

    
}