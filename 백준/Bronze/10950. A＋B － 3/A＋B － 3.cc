#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> result;
    int count = 0;
    cin >> count;
    
    for (int i = 0; i < count; i++)
    {
        int A, B;
        cin >> A >> B;
        result.push_back(A + B);
    }

    for (int i = 0; i < result.size() - 1; i++)
    {
        cout << result[i] << "\n";
    }
    cout << result[result.size() - 1];

    return 0;
}