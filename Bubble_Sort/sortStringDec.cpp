/*Sort a String in descending order of values associated after removal of values smaller than X*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    string str="";
    cout<<"Enter your string : "<<endl;
    cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]>='X')
        {
            str.push_back(s[i]);
        }
    }
    sort(str.begin(),str.end());
    cout<<"After Sorting the string: "<<endl;
    cout<<str<<endl;
}