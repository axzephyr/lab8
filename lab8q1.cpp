#include <iostream>
using namespace std;

int sum(int arr[],int n)
{
    int sum = 0;
    for (int k = 0; k < n; k++)
    sum = sum+arr[k];

    return sum;
}

int main()
{
    int n;
    cout<<"declare the number of the variables in the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the numbers of the array"<<endl;
    for(int i=0;i<n;++i)
        {
            cin>> arr[i];
        }
    cout<<"Sum of given array is "<<sum(arr, n)<<endl;
    return 0;


}
