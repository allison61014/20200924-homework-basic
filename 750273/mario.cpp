#include <iostream>
using namespace std;

int main() {
    int height;

    cout << "高度：";
    cin >> height;

    for (int i = 0; i < height; i++) {
        for (int j = height - 2; j >= i; j--) {
            cout << " ";
        }
        for (int k = 0; k <= i; k++) {
            cout << "#";
        }
        cout << "\n";
   }
}
