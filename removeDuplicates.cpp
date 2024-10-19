#include <bits/stdc++.h>
using namespace std;

// Function to find the missing elements
vector<int> FindMissing(vector<int> arr)
{
	int i = 0;
	int N = arr.size();
	while (i < N) {
	
		// as 0 based indexing
		int correct = arr[i] - 1;
		if (arr[i] != arr[correct]) {
			swap(arr[i], arr[correct]);
		}
		else {
			i++;
		}
	}

	vector<int> ans;
	for (i = 0; i < N; i++) {
		if (arr[i] != i + 1) {
			ans.push_back(i + 1);
		}
	}
	return ans;
}

int main()
{
	vector<int> arr = { 1, 3, 3, 3, 5 };
	
	// Function call
	vector<int> res = FindMissing(arr);
	for(int x: res)
		cout << x << " ";
	return 0;
}
