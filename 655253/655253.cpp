#include <iostream>
using namespace std;

int main() {
    float num[6987];
    int quintity;
    cout << "警告：數字不得大於6987個\n";
    cout << "輸入多少數字：";
    cin >> quintity;
    for (int i = 0; i < quintity; i++) {
        cout << i + 1 << "：";
        cin >> num[i];
    }
    for (int i = 0; i < quintity - 1; i++) {
        float num2;
        for(int j = 0; j < quintity - 1; j++) {
            if(num[j + 1] < num[j]) {
                num2 = 0;
                num2 = num[j + 1];
                num[j + 1] = num[j];
                num[j] = num2;
            }
        }
    }
    for (int k = 0; k < quintity; k++) {
        cout << num[k] << ", ";
    }
    return 0;
}

