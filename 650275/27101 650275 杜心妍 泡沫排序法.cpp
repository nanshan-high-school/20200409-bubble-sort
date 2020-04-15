#include <iostream>
using namespace std;

int main() {
    int quantity;
    cout << "請輸入共幾個數字:";
    cin >> quantity;

    int number[quantity];
    cout << "請輸入數字:\n";
    for (int i = 0; i < quantity; i++) {
        cin >> number[i];
    }

    int place;
    for (int i = 0; i < quantity; i++) {
        for (int j = 0; j <= i - 1; j++) {
            if (number[j] > number[j + 1]) {
                place = number[j];
                number[j] = number[j + 1];
                number[j + 1] = place;              
            }
        }
    }

    for (int i = 0; i < quantity; i++) {
        cout << number[i] << "\n";
    }

}