#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=1;
    char ch='A';
    while(row<=n)
    {
        int j=1;
        while(j<=row)
        {
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        row++;
    }
}