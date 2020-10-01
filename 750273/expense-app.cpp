#include <iostream>
using namespace std;

int main() {
    int count = 0;
    int money = 0;
    int sum = 0;

    cout << "請問有幾筆資料？\n";
    cin >> count;

    for (int i = 1; i <= count; i++) {
        cout << "第" << i << "筆：";
        cin >> money;
        sum += money;
    } 
    cout << "總共" << sum << "元";
}
