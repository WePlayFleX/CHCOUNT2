#include <iostream>
#include <conio.h>

using namespace std;

#pragma warning(disable : 4996)

int main()
{
	int chcount = 0;
	int wdcount = 1;
	char ch;

	cout << "Enter the string: ";
	while ((ch = getche()) != '\r')
	{
		if (ch == ' ')
		{
			wdcount++;
		}
		else
		{
			chcount++;
		}
	}
	cout << "\nWords: " << wdcount << endl
		<< "Letters: " << chcount << endl;

	system("pause");
	return 0;
}