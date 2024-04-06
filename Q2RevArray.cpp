#include<iostream>
using namespace std;

// to reverse an array of n integer
void revArray(int arr[], int size)
{
    for(int i = size; i >=1; i--){
        cout <<arr[i]<<" ";
    }
    cout << endl;
    
}
int main()
{
    int n;
    cout<<"Enter Number: ";
    cin >> n;

    int arr[n];
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    
    revArray(arr,n);
    return 0;
}