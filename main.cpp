#include "stdafx.h"
#include "StringManager.h"

using namespace std;

int main()
{
	CStringManager szString1 = "value";
	CStringManager szString2 = "value";

	if (szString1 == szString2)
	{
		cout << "��ġ" << endl;
	}
	system("pause");
	return 0;
}