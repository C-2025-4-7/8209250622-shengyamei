#include <iostream>
using namespace std;
int gcd(int m, int n) 
//gcd是greatest common devisor of two numbers
{
    while (!(n==0) ) {
        int temp = m % n;
        m = n;
        n = temp;
    }
    return m;
}

int main() 
{
    int m, n;
    cout << "请输入两个自然数m和n：";
    cin >> m >> n;

    int result = gcd(m, n);
    cout << "最大公约数为：" << result << endl;

    return 0;
}