#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    int arr1[n];
    cout<<"Enter the elements of array 1 :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }
    cout<<"Entered elemets are : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    cout<<"Copying the array1 into array2 : "<<endl;
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        arr2[i]=arr1[i];
    }
    cout<<"After copying the array2 became :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    cout<<"Sorting the array1 : "<<endl;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr1[j]>arr1[j+1])
            {
                swap(arr1[j],arr1[j+1]);
            }    
        }    
    }
    cout<<"After sorting the array became : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    // Checking 
    bool check=true;
    for (int i = 0; i < n-1; i++)
    {
        if ((arr1[i]!=arr2[i]) && (arr1[i+1]!=arr2[i])&& (arr1[i]!=arr2[i-1]))
        {
            check=false;
            break;
        }  
    }
    if (check==true) cout<<"Yes sorted.."<<endl;
    else cout<<"No sorted.."<<endl;
    
    return 0;
}