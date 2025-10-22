#include <iostream>
using namespace std;

int main() {
    int arr2[2][2] = {

        {10,20},
        {30,40}
    };

    cout << "Array 2D: " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}