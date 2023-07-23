#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=1;
    int count=1;
    while(row<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<count;
            count++;
            j++;
        }
        cout<<endl;
        row++;
    }
}