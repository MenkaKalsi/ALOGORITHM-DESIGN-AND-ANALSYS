#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int fun (int arr[], int t, int low, int high);
int main() {
int t;
int arr[]={5,3,7,4,9,12,56,33,77,54,643,56,89};
int s = sizeof(arr) / sizeof(arr[0]);
int low = 0;
int high = s - 1;
sort(arr, arr + s);
cout<<"Sorted array is : \n";
for(int i = 0; i < s; i++)
{
cout<<arr[i]<<" ";
}
cout<<"\nEnter the target you want to find : ";
cin>>t;
int res = fun(arr, t, low, high);
cout<<"\n The target index is : "<<res;
return 0;
}
int fun (int arr[], int t, int low, int high)
{
int mid = low + (high - low)/2;
if (arr[mid] == t)
{
return mid;
}
if (arr[mid] < t)
{
low = mid + 1;
return fun(arr, t, low, high);
}
else
{
high = mid - 1;
return fun(arr, t, low, high);
}
}