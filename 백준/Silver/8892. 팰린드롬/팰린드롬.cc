#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        string arr[100];
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) 
        {
            cin >> arr[i];
        }

        int count = 0;
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                if (i != j) 
                {
                    string sum = arr[i] + arr[j];
                    string compare = sum;
                    reverse(sum.begin(), sum.end());
                    if (sum == compare) 
                    {
                        count++;
                        cout << sum << '\n';
                        break;
                    }
                }
                else if (i == j) 
                {
                    continue;
                }
            }
            if (count != 0) 
            {
                break;
            }
        }
        if (count == 0) 
        {
            cout << '0' << '\n';
        }

    }

}