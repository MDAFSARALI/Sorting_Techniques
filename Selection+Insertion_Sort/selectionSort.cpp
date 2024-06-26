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
    // SelectionSort
    for(int i=0;i<n-1;i++){
        int minValue=INT_MAX;
        int mIndex=-1;
        for (int j = i; j < n; j++)
        {
            if (arr[j]<minValue)
            {
                minValue=arr[j];
                mIndex=j;
            } 
        }
         swap(arr[i],arr[mIndex]);       
    } 
    cout<<"Printing the array : "<<endl;
        for(int elem:arr){
            cout<<elem<<" ";
        }  
}