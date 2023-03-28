# include <bits/stdc++.h>
using namespace std;
bool isKjagged(int n, int k)
{
	if (n % 2 == 0)
		return (k <= 2);
	for (int i = 3; i*i <= n; i = i+2)
		if (n%i == 0)
			return (i >= k);

return (n >= k);
}

int main()
{
int n;
 cout<<"Enter the k number :";
  cin>>n;
   int k;
   cout<<"Enter the n Number: ";
    cin>>k;
	if (isKjagged(n, k))
		cout << n << " is a "
			<< k << "-rough number\n";
	else
		cout << n << " is not a "
			<< k << "- rough number\n";
	return 0;
}

