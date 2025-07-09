// A 
// B A 
// C B A 
// D C B A 
// E D C B A 
#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    for(int i = 0 ; i< n ; i++)
    {
        for(int j = i; j>= 0 ; j--)
        {
            cout<<static_cast<char>('A' + j)<<" ";
        }
        cout<<endl;
    }
  return 0;
}