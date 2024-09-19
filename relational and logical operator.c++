#include <iostream>
using namespace std;
int main()
{
    int num1 = 6;
    int num2 = 3;
    cout << num1 + num2 << endl;
    cout << num1 - num2 << endl;
    cout << num1 * num2 << endl;
    cout << num1 % num2 << endl;
    cout << (num1 == num2) << endl;
    cout << (num1 != num2) << endl;
    cout << (num1 >= num2) << endl;
    num1 += 3;
    num2 += 2;
    cout << num1 << endl;
    cout << num2 << endl;

    return 0;
}