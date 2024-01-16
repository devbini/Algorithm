#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int count;
	vector<string> result;
	cin >> count;

	while (count)
	{
		int m_count;
		vector<long int> inputlist;
		vector<long int> resultmini;

		cin >> m_count;
		for (int i=0; i < m_count*2; i++)
		{
			long int A;
			cin >> A;
			inputlist.push_back(A);
		}

		int pass = 0;
		reverse(inputlist.begin(), inputlist.end());
		while (inputlist.size() != 0)
		{
			long int origin = inputlist[0 + pass] * 0.75;
			if (find(inputlist.begin(), inputlist.end(), origin) != inputlist.end()) {
				pass = 0;
				long int originindex = find(inputlist.begin(), inputlist.end(), origin) - inputlist.begin();
				resultmini.push_back(origin);
				inputlist.erase(inputlist.begin() + originindex);
				inputlist.erase(inputlist.begin());
			}
			else
			{
				pass++;
			}
		}

		string data = "";
		reverse(resultmini.begin(), resultmini.end());
		for (size_t i = 0; i < resultmini.size() - 1; i++)
		{
			data += to_string(resultmini[i]) + " ";
		}
		data += to_string(resultmini[resultmini.size()-1]);

		result.push_back(data);
		count--;
	}

	for (int i = 0; i < result.size() - 1; i++)
	{
		cout << "Case #" << i + 1 << ": " << result[i] << "\n";
	}
	cout << "Case #" << result.size() << ": " << result[result.size() - 1];
}