#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        int min=INT_MAX;
        int mIndex=-1;
       for (int j = i; j < n; j++)
       {
        if (arr[j]<min)
        {
           min=arr[j];
           mIndex=j;
        }
       }   
       swap(arr[i],arr[mIndex]);
    }
    cout<<"The Sorted array is : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // copying the array in array1 : 
    int A[n],B[n];
    for (int i = 0; i < n; i++)
    {
        A[i]=arr[i];
        B[i]=arr[i];
    }
    cout<<"Printing the array A"<< endl;
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    for (int i = n-1; i >=1; i--)
    {
       if (arr[i]!=arr[i-1])
       {
         swap(B[i],B[i-1]);
         break;
       }
    }
    
    cout<<"Printing the array B"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<B[i]<<" ";
    }


// Making the value of array 
int sum1=0;
int sum2=0;
for (int i =0; i<n; i++)
{
  sum1=(sum1*10)+A[i];
}
for (int i =0; i<n; i++)
{
  sum2=sum2*10+B[i];
}

 cout<<"\nThe total sum is "<<(sum1+sum2)<<endl;














}
   
    