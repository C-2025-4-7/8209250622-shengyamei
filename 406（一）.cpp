#include <iostream>
using namespace std;
void const£¨const; char s[], int counts[])
int main()
{
	for (int i = 0; i < 26; i++)
	{
		counts i = 0;
    }
int len = strlen(s);
for (int i = 0; i < len; i++)
{
	if (isalpha(s[i]))
	{
		char lower = tolower(s[i]);
		counts[lower - 'a']++;
	}
}
}
int main()
{
	char s[100];
	int counts[26];
	cout << "Enter a string: ";
	cin.ignore();
	cin.getline(s, 100);
    count(s, counts);
	for (counts[i] > 0)
	{
		cout << char('a' + i) << ":" << counts[i] << "times" << endl;
	}
	return 0;
}