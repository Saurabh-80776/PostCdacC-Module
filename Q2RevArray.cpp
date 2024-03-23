#include<iostream>
using namespace std;

// to reverse an array of n integer
void revArray(int arr[], int size)
{
    for(int i = size-1; i >=1; i--){
        cout <<arr[i]<<"-";
    }
    cout << endl;
    
}
int main()
{
    int n;
    cin>> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    revArray(arr,n);
    return 0;
}