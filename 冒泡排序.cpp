#include <iostream>
using namespace std;

int main()
{
    //冒泡排序算法

    //1、定义一个数组
    int array[] = {4, 3, 7, 2, 9, 3, 4, 2 };
    //2、利用for循环语句，对数组里面的数按照升序进行排序
    //2.1、变量初始化
    int len = sizeof(array)/sizeof(array[0]);

    for ( int j=0; j<len-1; j++ )
    {
        //2.2、编写for内层循环，实现对数组的第一次排序
        for (int i = 0; i < len - j - 1; i++) {
            if (array[i] > array[i + 1]) {
                int num;
                num = array[i + 1];
                array[i + 1] = array[i];
                array[i] = num;
            }
        }
    }
    //3、输出排序后的数组
    for ( int i=0; i<len; i++ )
    {
        cout << array[i] << endl;
    }
}