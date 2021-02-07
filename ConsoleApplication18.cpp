#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	bool a;
	int maxi = 1;
	int lasta = arr[0], lastb = -1;

	for (int i = 1; i < n; i++) {
		if (arr[i] == lasta) {
			if (arr[i] != lastb)
				maxi++;
			lastb = arr[i];
		}
		else
		{
			lasta = arr[i];
			maxi++;
		}
	}
	cout << maxi;
}