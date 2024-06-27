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
    // Performing selection sort
    if (n==1) cout<<"sum : "<<arr[0]<<endl;
    else if (n==2) cout<<"sum : "<<(arr[0]+arr[1])<<endl;
    else{
        for (int i = 0; i < 3; i++)
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
        
    }
    cout<<"After sorting the sum is : "<<(arr[0]+arr[1])<<endl;
}