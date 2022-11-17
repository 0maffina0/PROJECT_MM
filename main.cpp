#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    int k;
    int m[1000];
    cin >> n;
    int mi = 2 * pow(10,9);
    int mi2 = 2 * pow(10,9);
    for (int i = 0; i < n; i++) {
        cin >> m[i];
        if (m[i] < mi) {
            mi = m[i];
            k = i;
        }
    }
    m[k] = mi2;
    for (int i = 0; i < n; i++) {
        if (m[i] < mi2) {
            mi2 = m[i];
        }
    }
    cout << mi << ' ' << mi2 << '\n';
    return 0;
}