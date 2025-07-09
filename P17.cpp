// E 
// D E
// C D E
// B C D E
// A B C D E
#include<iostream>
using namespace std;
int main()
{
    int n = 5 ;
    for(int i = 0 ;i<n; i++)
    {
        for(int j = i+1; j>0 ; j--)
        {
            char ch = 'A' + (n - j);
            cout << ch << " ";
        }
        cout<<endl;
    }
    return 0;
}