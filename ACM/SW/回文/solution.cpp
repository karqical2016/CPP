#include <iostream>
#include <algorithm>
using namespace std;
int main() {


	int T;
	freopen("input.txt", "r", stdin);
	cin >> T;

	int Answer;
	int start, end, len;//�������Ŀ�ʼλ�ã����Ľ���λ�ã����ĳ��ȣ�

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
				start = i; //����������
				end = j;// �յ��������
				len = 0;// ���ȳ�������
				if (S[start] != S[end])//�Ƚ�������ֺ��յ�����
				{
					continue;//��ͬ����ת����һ��
				}
				else
				{
					len = end - start + 1;//����������ֺ��յ�������ͬʱִ�м���

					// �ж��Ƿ�Ϊ���ĵ����, ���Ƚϵ������ƶ�һ��					  
					// �Ƚϵ����м��ȽϽ����ͬʱֹͣ��
					do {
						start++;//��ʼλ�ú���һλ
						end--;//����λ��ǰ��һλ
					} while (S[start] == S[end] && start <= end);//���ҽ�������������յ�������ͬ���������С�ڵ����յ�

					// ֻ�бȽϵ����м�ʱ���ܳ�Ϊ���ġ�
					if (start > end) {
						//�����ĳ��ȴ���3ʱ�����һ��ĳ���ȡ��������ֵʱ
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