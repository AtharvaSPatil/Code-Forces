#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int count = 0;
        vector<int> remi(3, 0); // To store the count of remi (0, 1, 2) in the window

        // Calculate the initial remi for the first window
        for (int i = 0; i < 3; ++i) {
            remi[arr[i] % 3]++;
        }

        for (int i = 3; i < n; ++i) {
            // Check if the window has a sum not divisible by 3
            if ((arr[i] + arr[i - 1] + arr[i - 2]) % 3 != 0) {
                // Find the remainder with the highest count
                int maxi = 0;
                for (int j = 1; j < 3; ++j) {
                    if (remi[j] > remi[maxi]) {
                        maxi = j;
                    }
                }

                // Increment the current element to make the window sum divisible by 3
                count += (3 - (arr[i] + arr[i - 1] + arr[i - 2] + maxi) % 3) % 3;
                arr[i] += (3 - (arr[i] + arr[i - 1] + arr[i - 2] + maxi) % 3) % 3;
            }

            // Update the remi for the next window
            remi[arr[i - 2] % 3]--;
            remi[arr[i] % 3]++;
        }

        cout << count << endl;
    }

    return 0;
}

