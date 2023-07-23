#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=1;
    while(row<=n)
    {

        char ch='A' + row -1;
        int j=1;
        while(j<=(n-1))
        {
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        row++;
    }
}