#include<iostream>
using namespace std;
int main(void)
{

	int test_case;
	freopen("input.txt", "r", stdin);
	cin >> test_case;

	int Answer;
	int N;//对手旗子个数, 2<N<10 
	int X,Y;//主教坐标
	int x, y;//其他棋子坐标
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