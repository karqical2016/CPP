#include <iostream>

using namespace std;

typedef struct R
{
	char data[6];
	int num;
	int dotlenght;//dot<=4
	char result[99999];
}Rn;


int main() {

	int test_case;
	freopen("input.txt", "r", stdin);
	cin >> test_case;
	
	Rn tmpRn[6];
	memset(tmpRn, 0, sizeof(tmpRn));
	
	

	for (int k = 0; k < test_case; k++)
	{
		cin >> tmpRn[k].data >> tmpRn[k].num;

		for (int i = 1; i < 5; i++)
		{
			if (tmpRn[k].data[i] == '.') {
				tmpRn[k].dotlenght =5-i;
			}
		}
		
		cout <<tmpRn[k].data << " "<<tmpRn[k].num <<" "<< tmpRn[k].dotlenght << endl;
	}


	
	for (;;);
	return 0;
}


