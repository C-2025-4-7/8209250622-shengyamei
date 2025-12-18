#include <iostream>
using namespace std;
int peach_count(int day) 
{
    if (day == 10) 
    {
        return 1; 
    }
    else
    {
        return (peach_count(day + 1) + 1) * 2;
    }
}
int main() 
{
    cout << "第一天猴子共摘了 " << peach_count(1) << " 个桃子" << endl;
    return 0;
}