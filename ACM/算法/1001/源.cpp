#include <iostream>  

using namespace std;

#define MAXVAl 5000000  

int sum[MAXVAl + 1];

int main(int argc, char* argv[])
{
	int i, j;
	for (i = 0; i <= MAXVAl; i++) {
		sum[i] = 1;
	}
	for (i = 2; i + i <= MAXVAl; i++) {
		j = i + i;
		while (j <= MAXVAl) {
			sum[j] += i;
			j += i;
		}
	}
	for (i = 0; i <= MAXVAl; i++) {
		if (sum[i] > i && sum[i] <= MAXVAl && sum[sum[i]] == i) {
			cout << i << " " << sum[i] << endl;
		}
	}
	for (;;);
	return 0;
}