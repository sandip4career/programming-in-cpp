#include <iostream>
using namespace std;

int main() {
    int i, j, k, num;

    for (i = 0; i < 5; i++) {
        k = 1;
        num = 1;

        for (j = 1; j <= 9; j++) {
            if (j >= 5 - i && j <= 5 + i && k) {
                cout << num;

                // Next Pascal value
                num = num * (i - (j - (5 - i)) / 2) / (((j - (5 - i)) / 2) + 1);

                k = 0;   // Skip alternate positions
            } else {
                cout << " ";
                k = 1;
            }
        }
        cout << endl;
    }

    return 0;
}
