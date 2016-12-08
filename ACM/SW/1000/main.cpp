/*
	Set 集合、迭代器的使用
*/

#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;


std::vector<std::string> split(std::string str, std::string pattern)
{
	std::string::size_type pos;
	std::vector<std::string> result;
	str += pattern;//扩展字符串以方便操作
	size_t size = str.size();

	for (size_t i = 0; i < size; i++)
	{
		pos = str.find(pattern, i);
		if (pos<size)
		{
			std::string s = str.substr(i, pos - i);
			result.push_back(s);
			i = pos + pattern.size() - 1;
		}
	}
	return result;
}


int main(void) {


	int test_case;
	string  tmp;
	std::string pattern;
	freopen("input.txt", "r", stdin);
	cin >> test_case;
	set<char> tmplst;
	set<char>::iterator ii;
	 
	
	tmplst.clear();
	for (int  k = 0; k < test_case; k++)
	{
		getline(cin, tmp);
		std::vector<std::string> result = split(tmp, " ");
		std::cout << "The result:" << std::endl;
		for (size_t i = 0; i < result.size(); i++)
		{
			std::cout << result[i] << std::endl;
		}
	}



	
	for (;;);
	return 0;
}