#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int parseHex(const char* const hexString)
{
	int result = 0;
	int len = strlen(hexString);
	for (int i = 0; i < len; i++)
	{
		char c = toupper(hexString[i]);
		result *= 16;
		if (c >= '0' && c <= '9')
		{
			result += (c - '0');
		}
		else if (c >= 'A' && c <= 'F') 
		{  
			result += (c - 'A' + 10);  
		}
		else 
		{  
			cout << "无效的16进制字符！" << endl;
			return -1; 
		}
	}
}