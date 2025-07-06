// A 
// A B
// B C D
// D E F G
// G H I J K
#include<iostream>
using namespace std;
int main()
{
    int n =5;
    char ch = 'A';
    for(int i=0 ; i<n; i++)
    {
        for(int j= i+1; j>0; j--)
        {
            cout<<ch<<" ";
            ch++;
        }      
        ch--;
        cout<<endl;
    }
    return 0;
}