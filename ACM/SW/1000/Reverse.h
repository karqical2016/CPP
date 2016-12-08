


void Reverse(int n, int a[], int b[])
{
	for (int i = 0; i < n; i++)
	{
		b[i] = a[n - 1 - i];
	}
}

void Reverse(int n, int a[]) {

	int m = n / 2;
	int tmp;

	for (int i = 0; i < m; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}

void Reverse(int n, char a[], char b[])
{
	for (int i = 0; i < n; i++)
	{
		b[i] = a[n - 1 - i];
	}
}

void Reverse(int n, char a[]) {

	int m = n / 2;
	char tmp;

	for (int i = 0; i < m; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}