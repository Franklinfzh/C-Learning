#include <iostream>
using namespace std;

int main()
{
    int a[16] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768};
    int x, left = 0, right = 15, mid, flag = 0;
    cin >> x;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (x == a[mid])
        {
            flag = 1;
            break;
        }
        else if (x < a[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    if (flag)
    {
        cout << "所查元素存在于数组,序号为：" << mid << endl;
    }
    else
    {
        cout << "所查元素不存在于数组" << endl;
    }
}