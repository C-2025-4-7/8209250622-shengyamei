#include <iostream>
using namespace std;
void gcd_lcm(int m, int n, int& gcd_val, int& lcm_val) 
{
    int a = m, b = n;
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    gcd_val = a;
    lcm_val = (m / gcd_val) * n;
}

int main() {
    int m, n, gcd_val, lcm_val;
    cout << "请输入两个自然数m和n：";
    cin >> m >> n;

    gcd_lcm(m, n, gcd_val, lcm_val);
    cout << "最大公约数为：" << gcd_val << endl;
    cout << "最小公倍数为：" << lcm_val << endl;

    return 0;
}