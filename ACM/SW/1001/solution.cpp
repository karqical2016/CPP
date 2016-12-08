#include <iostream>
using namespace std;






int main(void) {

	int test_case;
	
	freopen("input.txt", "r", stdin);
	cin >> test_case;
	int len;
	int high[1000];
	int Aser[1000];
	int tmpOut;
	for (int k = 0; k < test_case; k++)
	{
		cin >> len;

		for (int i = 0; i < 1000; i++)
		{
			high[i] = 0;
			Aser[i] = 0;
		}

		for (int i = 0; i < len; i++)
		{
			cin >> high[i];			
		}
		tmpOut = 0;		
		
		
		for (size_t i = 0; i < len; i++)
		{
			for (size_t j = i+1; j < len-1-i; j++)
			{
				if (high[i] <= high[j]) {
					tmpOut++;
					break;
				}
				else
				{
					i++;
				}
			}
			
		}
		
		

		
			
		
		
		cout <<"#"<<k<<" "<<tmpOut << endl;	
	}






	for (;;);
	return 0;
}