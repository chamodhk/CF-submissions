#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    int x = 0;
    cin >> n;
    for (int i = 0 ; i < n; i++)
    {
        string tmp;
        cin >> tmp;
        if (tmp.find("++") != string::npos)
            x++;
        else if (tmp.find("--") != string::npos)
            x--;
 
    }
 
    cout << x;
    
}
