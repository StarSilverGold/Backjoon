#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
using namespace std;

int main(void)
{
    int num, in, max = 0, sum = 0;

    cin >> num;
    while (num--)
    {
        cin >> in;
        if (max < in)
            max = in;
        sum += in;
    }

    cout << sum - max;

    return 0;
}