
#include <bits/stdc++.h>

using namespace std;

void rotate(vector<int> &arr, int k, int arr_size)
{
	
	k = k % arr_size;
	reverse(arr.begin(), arr.begin() + k);
	reverse(arr.begin() + k, arr.end());
	reverse(arr.begin(), arr.end());
}

bool check(vector<int> &arr)
{

	int n = arr.size();

	int j;

	for (int i = 1; i < n; i++)
	{
		if (arr[i - 1] <= arr[i])
		{
		}
		else
		{
			j = i;
			cout<<"j :- "<<j<<endl;
			rotate(arr, j, n);
			break;
		}
	}

	for(auto i : arr){
		cout<<i<<" ";
	}
	for (int i = 1; i < n; i++)
	{
		if (arr[i - 1] <= arr[i])
		{
		}
		else
		{
			return 0;
		}
	}
	return 1;
}


int main()
{

	int n = 0;
	vector<int> sit;
	sit.push_back(3);
	sit.push_back(4);
	sit.push_back(5);
	sit.push_back(1);
	sit.push_back(2);

	// cout<<"ans is :- "<<check(sit)<<endl;


	cout<<1%2;

	
	return 0;
}