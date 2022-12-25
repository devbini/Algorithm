#include <iostream>
#include <vector>

using namespace std;

vector<int> Replace(vector<int> mdata)
{
	for (int i = 1; i < mdata.size(); i++)
	{
		mdata[i] = mdata[i - 1] + mdata[i];
	}

	return mdata;
}

int main()
{
	vector<int> result;
	int count;
	
	cin >> count;

	for (int i = 0; i < count; i++)
	{
		vector<int> mdata = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 };
		
		int k, n, a = 0;

		cin >> k >> n;

		while (a != k)
		{
			mdata = Replace(mdata);
			a++;
		}

		result.push_back(mdata[n - 1]);
	}

	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i];
		if (i != result.size() - 1) cout << "\n";
	}
}