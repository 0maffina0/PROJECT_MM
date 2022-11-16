#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    int massive[35];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> massive[i];
    }
    int posl = massive[n - 1];
    for (int i = n - 1; i >= 0; i--) {
        massive[i] = massive[i - 1];
    }
    massive[0] = posl;
    for (int i = 0; i < n; i++) {
        cout << massive[i] << " ";
    }
    return 0;
}