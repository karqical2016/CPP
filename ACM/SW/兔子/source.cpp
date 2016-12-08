#include<iostream>
using namespace std;





int main(void) {
	int test_count;
	freopen("input.txt", "r", stdin);
	cin >> test_count;  
	int R;//行数
	int C;//列数
	int A, B;//出发点坐标	
	int N;//经过时间
	int flagA;
	int flagB;
	int flagT;
	for (int test_case = 1; test_case <= test_count; test_case++)
	{
		cin >> R >> C >> A >> B >> N;
		flagA = 1;//默认开始每个例子都是向右下角移动
		flagB = 1;
		
		while (N>0)
		{

			if (A != R - 2) {
				if (flagA == 1)
				{
					A=A+2;
					if (A == R)
					{
						flagA = -1;
						
					}
					else
					{
						flagA = 1;						
					}
				}
				else
				{
					A=A-2;
					if (A == 0) {
						flagA = 1;
					}
					else
					{
						flagA = -1;				
						
					}
				}
			}
			else
			{
				if (flagA == -1)
				{
					A=A-2;
					if (A == 0) {
						flagA = 1;
					}
					else
					{
						flagA = -1;						
						
					}
				}
				else
				{
					A=A+2;
					if (A >= R) {
						flagA = -1;
						A--;
					}
					else
					{
						flagA = 1;
					}
				}
			}

			N--;
		}
		cout << "#" << test_case << " " << A<<" "<<B << endl;
	}
	for (;;);
	return 0;
}

