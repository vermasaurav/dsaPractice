#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=1;
    for(int i=1;i<=n;i++)
    {
        int col=1;
        for(int j=1;j<=n;j++)
        {
            cout<<col;
            col++;
            
        }
        cout<<endl;
        
    }
}