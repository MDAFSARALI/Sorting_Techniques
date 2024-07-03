/*Statement: 
Given an array with N distinct elements, convert the given array to a form where all elements are in the range from 0 to N-1 . The Order of elements is the same i.e 0 is placed in the place of the smallest elements,...N-1 is placed for the largest element.*/

#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array "<<endl;
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    vector<int> v(n,0); // 0 means not visited ...
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int x=0;
    // for (int i = 0; i < n; i++)
    // {
    //     int min=INT_MAX;
    //     int mindex=-1;
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (v[j]==1)
    //         {
    //             continue;
    //         }
    //         else{
    //             if (min>arr[j])
    //             {
    //                 min=arr[j];
    //                 mindex=j;
    //             }
                
    //         }
            
    //     }
    //     arr[mindex]=x;
    //     v[mindex]=1; //visited
    //     x++;
    // }


    // If in the array there is no negative numbers : 
    for (int i = 0; i < n; i++)
    {
        int min=INT_MAX;
        int mindex=-1;
        for (int j = 0; j < n; j++)
        {
            if (arr[j]<=0)
            {
                continue;
            }
            else{
                if (min>arr[j])
                {
                    min=arr[j];
                    mindex=j;
                }
                
            }
            
        }
        arr[mindex]=-x;
        x++;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i]=arr[i]*-1;
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    






}