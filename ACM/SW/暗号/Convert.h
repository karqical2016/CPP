#include <sstream>

using namespace std;

string intToBitStr(int theInput)
{
	int i, j = 0;
	i = theInput;
	int theOutPut[1000];
	string result = "";
	while (i)
	{
		theOutPut[j] = i % 2;
		i /= 2;
		j++;
	}
	
	for (i = j - 1; i >= 0; i--)//逆序输出
		result += theOutPut[i]+48;
	
	return result;	
}

string  bitToIntStr(string theInput)
{
	long double value = 0;
	ostringstream out;
	string str="";
	for (size_t i = 0; i < theInput.size(); i++)
	{
		value += (theInput[theInput.size()-i-1]-48) * pow(2, i);
	}
	
	out.precision(100);//覆盖精度显示100位
	out << value;
	str = out.str();
	out.str("");
	return str;
}


