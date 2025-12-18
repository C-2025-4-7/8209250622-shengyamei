#include <iostream>
#include<iomanip>
using namespace std;
static void bubble_sort(double arr[], int temp,int size)
{
	bool changed;
	do {
		changed = false;
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				arr[j + 1] =temp;
				changed = true;
			}
		}
	} while (changed);
}
int main(){
    cout << "请输入10个双精度数字：";
    for (int i = 0; i < 10; i++) 
	{
		cin >> i;
    }
    cout << "排序后的数字：";
    for (int i = 0; i < 10; i++) {
        cout << fixed << setprecision(1) << " ";
    }
    cout << endl;

    return 0;
