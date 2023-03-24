#include <iostream>
using namespace std;

int main()
{
    // 20个随机数
    int a[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    // 对数组选择排序
    for (int i = 0; i < 20; i++)
    {
        int max = i;
        for (int j = i + 1; j < 20; j++)
        {
            if (a[j] > a[max])
            {
                max = j;
            }
        }
        int temp = a[i];
        a[i] = a[max];
        a[max] = temp;
    }
    // 输出数组元素
    for (int i = 0; i < 20; i++)
    {
        cout << a[i] << " ";
    }
}