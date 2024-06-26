#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // InsertionSort
    for (int i = 1; i < n; i++)
    {

        for (int j = i; j >= 1; j--)
        {
            // We can also use arr[j]<arr[j-1] instead of j >=1
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
            else
            {
                break;
            }
        }

        /*
                int j=i;
                while(j>=1 && arr[j]<arr[j-1]){
                    swap(arr[j],arr[j-1]);
                    j--;
        }
        */
    }
    cout << "After Swapping the array become : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}