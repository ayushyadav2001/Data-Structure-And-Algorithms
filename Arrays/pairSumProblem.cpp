/* check if there exists two element sum is equal to given number k or not */
#include <iostream>
#include <climits>

using namespace std;
bool pairsSum(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; i < n; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                cout << i << "" << j << endl;
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr[] = {2, 4, 7, 11, 14, 16, 20, 21};
    int k = 31;
    cout << pairsSum(arr, 8, k) << endl;
    // int n;
    // cout<<"Enter the size\n";
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cout<<"Enter the element at position"<<i<<"\n";
    //     cin>>arr[i];
    // }

    return 0;
}