#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin >>n;
    long long int arr[n];
    for (int i=0;i<n;i++)
    {
        cin >>arr[i];
    }
    long long int sum=0;
    for (int i=0;i<n;i++)
    {
        sum =sum +arr[i];
    }
    cout <<sum;


}
