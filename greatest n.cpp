
#include <iostream>
#include<conio.h>
using namespace std;
template <typename T>
T findGreatest(T a, T b, T c)
{
    if (a >= b && a >= c)
    {
        return a;
    }
    else if (b >= a && b >= c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    int int1 = 9, int2 = 19, int3 = 1;
    char char1 = 'B', char2 = 'W', char3 = 'N';
    float float1 = 1.23, float2 = 3.56, float3 = 8.9;
    int maxInt = findGreatest(int1, int2, int3);
    cout << "Max integer: " << maxInt << endl;
    char maxChar = findGreatest(char1, char2, char3);
    cout << "Max character: " << maxChar << endl;
    float maxFloat = findGreatest(float1, float2, float3);
    cout << "Max float: " << maxFloat << endl;
    getch();
}
