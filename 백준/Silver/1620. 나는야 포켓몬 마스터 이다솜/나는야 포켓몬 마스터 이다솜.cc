#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;

    vector<string> pokemon(N + 1);
    unordered_map<string, int> name_to_index;

    for (int i = 1; i <= N; ++i) {
        cin >> pokemon[i];
        name_to_index[pokemon[i]] = i;
    }

    while (M--) {
        string x;
        cin >> x;
        if (isdigit(x[0])) {
            int index = stoi(x);
            cout << pokemon[index] << "\n";
        } else {
            cout << name_to_index[x] << "\n";
        }
    }
	

	return 0;
}