#include <iostream>
#include <algorithm>
using namespace std;
int main() {


	int T;
	freopen("input.txt", "r", stdin);
	cin >> T;

	int Answer;
	int start, end, len;//声明回文开始位置，回文结束位置，回文长度，

	for (int test_case = 1; test_case <= T; test_case++)
	{
		int L;
		cin >> L;
		char S[100] = "";

		for (int i = 0; i < L; i++)
		{
			cin >> S[i];
		}

		Answer = 0;
		for (int i = 0; i < L; i++)
		{
			for (int j = L - 1; j > i; j--)
			{
				start = i; //起点初期设置
				end = j;// 终点初期设置
				len = 0;// 长度初期设置
				if (S[start] != S[end])//比较起点文字和终点文字
				{
					continue;//不同则跳转至下一个
				}
				else
				{
					len = end - start + 1;//仅在起点文字和终点文字相同时执行计算

					// 判断是否为回文的语句, 将比较点向内移动一格					  
					// 比较点在中间或比较结果不同时停止。
					do {
						start++;//起始位置后移一位
						end--;//结束位置前移一位
					} while (S[start] == S[end] && start <= end);//当且仅当起点文字与终点文字相同，并且起点小于等于终点

					// 只有比较点在中间时才能成为回文。
					if (start > end) {
						//当回文长度大于3时，并且回文长度取结果中最大值时
						if (len >= 3 && len > Answer) {
							Answer = len;
						}
					}
				}
			}
		}

	
		cout << "#" << test_case << " " << Answer << endl;
	}

	for (;;);

	return 0;
}