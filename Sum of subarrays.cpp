#include <iostream>
#include <vector>
using namespace std;

long long subArraySum(vector<int>& arr) {
    long long total = 0;
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        long long count = (long long)(i + 1) * (n - i);
        total += (long long)arr[i] * count;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << subArraySum(arr) << endl;
    return 0;
}
