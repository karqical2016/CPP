#include<iostream>
using namespace std;
int main(void)
{

	int test_case;
	freopen("input.txt", "r", stdin);
	cin >> test_case;

	int Answer;
	int N;//�������Ӹ���, 2<N<10 
	int X,Y;//��������
	int x, y;//������������
	int tmpXabs, tmpYabs;
	for (size_t k = 0; k < test_case; k++)
	{
		Answer = 0;
		cin >> N >> X >> Y;	
		for (size_t i = 0; i < N; i++)
		{
			cin >> x >> y;
			tmpXabs = abs(x - X);
			tmpYabs = abs(y - Y);

			if (tmpXabs == tmpYabs)
			{
				Answer++;
			}
		}

		cout << Answer << endl;
	}

	for (;;);
	return 0;
}