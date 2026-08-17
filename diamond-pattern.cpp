#include <iostream>
using namespace std;

int main() {

    for (int i = 1; i <= 9; i++) {

        for (int j = 1; j <= 9; j++) {

            if (i <= 5) {
                if (j >= 6 - i && j <= 4 + i)
                    cout << "*";
                else
                    cout << " ";
            }
            else {
                if (j >= i - 4 && j <= 14 - i)
                    cout << "*";
                else
                    cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
