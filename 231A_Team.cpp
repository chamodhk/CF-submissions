// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n ;
    int n2 = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        int tmp;
        for (int j = 0; j < 3; j++)
        {
            cin >> tmp;
            (tmp) ? c++ : 0;
        }
        
        (c > 1) ? n2++ : 0 ;
            
         
    }
    cout << n2;
    return 0;
}
