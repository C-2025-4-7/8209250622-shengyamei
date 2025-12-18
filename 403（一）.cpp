#include <iostream>
using namespace std;
int main()
{
	const int CABINET_NUM = 100;
	bool cabinets[CABINET_NUM] = { false };
	for (int student = 1; student <= CABINET_NUM; student++)
	{
		for (int cabient = student - 1; ;)
	cout << "开着的存物柜号码：";
	for (int i = 0; i < CABINET_NUM; i++)
	{
		if (cabinets[i]) {
			cout << i + 1 << " "; 
		}
	}
	cout << endl;
	return 0;
}