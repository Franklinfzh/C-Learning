#include <iostream>
using namespace std;
int main()
{
    int a[3][4], i, j;
    cout << "请按行输入12个数据" << endl;
    for (i = 0; i < 3; i++){
        for (j = 0; j < 4; j++){
            cin>>a[i][j];
        }
    }
    for (i = 0; i < 3; i++){
        for (j = 0; j < 4; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
}