#include<iostream>
using namespace std;
int main(void)
{
	size_t test_count;
	freopen("input.txt", "r", stdin);
	cin >> test_count;

	size_t Answer;
	size_t N;
	size_t M;
	size_t S[20];
	size_t Max1;
	size_t Max2;
	for (size_t test_case = 1; test_case <= test_count; test_case++)
	{
		Answer = 0;
		Max1 = 0;
		cin >> N >> M;
		Max2 = M / 50;
		for (size_t i = 0; i < N; i++)
		{
			cin >> S[i];		

			if (Max1 < S[i]) {
				Max1 = S[i];
			}
		}
		

		




		cout << "#" << test_case << " " << Answer << endl;
	}


	for (;;);
	return 0;
}