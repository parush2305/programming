#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >>n;
    for(int i=0;i<n;i++)
    {
        for (int j=i;j<n-1;j++)
        {
            cout <<" ";
        }
        for (int j=n-1-i;j<n;j++)
        {
            cout <<"#";
        }
        cout <<endl;
    }

}
