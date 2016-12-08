#include <iostream>
#include"Convert.h"
using namespace std;
int main(void) {

	int test_case;

	freopen("input.txt", "r", stdin);
	cin >> test_case;
	int len=0;
	int S[1000];
	string Aser="";
	string tmpstr="";
	string Answer="";
	
	for (int k = 0; k < test_case; k++)
	{
		cin >> len;

		memset(S, 0, sizeof(S));
		for (int i = 0; i < len; i++)
		{
			cin >> S[i];
			Answer = "";
			tmpstr = "";
			tmpstr = intToBitStr(S[i]);

			while (tmpstr.size() < 7)
			{
				tmpstr = "0" + tmpstr;
			}

			Aser = Aser + tmpstr;
		}
	
		Answer = bitToIntStr(Aser);
		Aser = "";
		tmpstr = "";
		cout << Answer << endl;

	}
	
	for (;;);
	return 0;
}