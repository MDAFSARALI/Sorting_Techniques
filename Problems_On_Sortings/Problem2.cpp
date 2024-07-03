/*Statement: 
Given an array,arr[] containing n integers the task is to find an integer (say k) such that after replacing each and every index of the array by |ai-k| where (i belongs to [1,n]), result in a sorted array. If no such integer exist that satisfy the above condition then return -1;
*Find the range of k*
*/

#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
float max(float a,float b){
    if (a>=b) return a ;
    else return b;
}
float min(float a,float b){
    if (a<b) return a ;
    else return b;
}
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
    
    // Code
    float kmin=(float)INT_MIN;
    float kmax=(float)INT_MAX;
    bool flag=true;
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i]>=arr[i+1])//kmin ke bare me socho
        {
            kmin= max(kmin,(arr[i]+arr[i+1])/2.0);
        }
        else{
            // kmax ka condition
            kmax=min(kmax,(arr[i]+arr[i+1])/2.0);
        }   
        if (kmin>kmax)
        {
            flag=false;
            break;
        }
        
    }
    if (flag==false) cout<<"-1";
    else if (kmin==kmax)
    {
       if (kmin-(int)(kmin)==0)
       {
            cout<<"There is only one value of k: "<<kmin<<endl;
       }
       else{
        cout<<-1;
       }
       
    }
    else{
        if ((kmin-(int)kmin)>0)
        {
            kmin=int(kmin)+1;
        }
        
        cout<<"Range of k is : ["<<kmin<<","<<(int)kmax<<"]";
    }   
}