// Searching a element in matrix
// two dimensional array
#include <iostream>
using namespace std;
int main()
{

    int n, m;
    cout << "Enter the dimensions of row";
    cin >> n;
    cout << "Enter the dimensions of col";
    cin >> m;

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout<<"Matrrix is\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n ";
    }
    int x;
    cout<<"Enter the number you want to find";
    cin>>x;
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==x){
                cout<<i<<" "<<j<<endl;
                flag=true;
            } 
        }
    }
    if(flag){
        cout<<"Element is found";
    }
    else{
        cout<<"Not found";
    }
    return 0;
}
// #ifndef ONLINE_JUDGE
// freopen(_Filename: "input.txt",_Mode:"r",_file: stdin);
// freopen(_Filename: "output.txt",_Mode:"w",_file: stdout);
// #endif