#include<iostream>
#include<string>
#include<set>

using namespace std;

int main(void)
{
	size_t test_Total = 0;
	freopen("input.txt", "r", stdin);
	cin >> test_Total;

	size_t Answer;
	size_t N;//指定产品生产中所需要的组件的数N	
	string S1[20];
	string S2[20];
	multiset<char> char1;
	multiset<char> char2;
	multiset<char>::iterator it1;
	multiset<char>::iterator it2;

	for (size_t test_case = 0; test_case < test_Total; test_case++)
	{
		Answer = 0;
		cin >> N;

		for (size_t i = 0; i < N; i++) {

			cin >> S1[i];
		}

		for (size_t i = 0; i < N; i++)
		{
			cin >> S2[i];
		}

		for (size_t i = 0; i < N; i++)
		{
			if (S1[i].at(0) == S2[i].at(0)
				&& S1[i].at(S1[i].length() - 1) == S2[i].at(S2[i].length() - 1))
			{
				char1.clear();
				char2.clear();
				for (size_t j = 1; j < S1[i].length() - 1; j++)
				{
					char1.insert(S1[i].at(j));
				}
				for (size_t p = 1; p < S2[i].length() - 1; p++)
				{
					char2.insert(S2[i].at(p));
				}

				it1 = char1.begin();
				it2 = char2.begin();

				for (size_t q = 1; q < S1[i].length() - 1; q++)
				{
					if (*it1 != *it2)
					{
						break;
					}
					if (q == char1.size())
					{
						Answer++;
					}
					*it1++;
					*it2++;
				}

			}
		}
		cout << "#"<<test_case<<" "<< Answer << endl;
	}

	for (;;);
	return 0;
	
}


