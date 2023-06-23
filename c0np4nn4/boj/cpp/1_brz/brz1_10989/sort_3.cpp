#include <iostream>

using namespace std;

int n;
int seq[10001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;

        seq[tmp]++;
    }


    for (int i = 0; i < 10001; i++) {
        while (seq[i]) {
            cout << i << '\n';

            seq[i]--;
        }
    }

    return 0;
}
