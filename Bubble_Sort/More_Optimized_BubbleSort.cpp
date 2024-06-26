#include<iostream>
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

    // Here Bubble Sort Algo optimized
    for (int i = 0; i < n-1; i++)
    {
        bool flag=true;
        for (int j = 0; j < n-i-1; j++)
        {
           if (arr[j]>arr[j+1])
           {
                swap(arr[j],arr[j+1]);
                flag=false;
           }
           
        }
        if (flag==true) //Swap did not happened
        {
            break;
        } 
    }
    cout<<endl;
    cout<<"The sorted array is : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}