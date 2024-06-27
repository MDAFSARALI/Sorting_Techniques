#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    string arr[n];
    cout<<"Enter the array of strings : "<<endl;
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
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
        if(flag==true) break;       
    }
    cout<<"The Required array of string is : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    






    return 0;
}