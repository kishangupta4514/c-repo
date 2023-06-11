#include<iostream>
using namespace std;
int main()
{
    int row, col ,n;
    cin>>n;
    for(row=0;row<n;row++)
    {
        //space
        for(col=0;col<n-row-1; col++)
        {
            cout<<" ";

        
        }
        //stars
        for(col=0;col<row+1;col++)
        {
            cout<<"* ";

        }
        cout<<endl;
    }

}