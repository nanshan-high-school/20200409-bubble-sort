#include <iostream>
using namespace std;

int main() {
    int num[1000];
    int amount;
    cout << "數字量：";
    cin >> amount;
    for (int i = 0; i < amount; i++) {
        cout << i + 1 << "：";
        cin >> num[i];
    }
    for (int i = 0; i < amount - 1; i++) {
        int now;
        for(int j = 0; j < amount - 1; j++) {
            if(num[j] > num[j + 1]) {
                now = 0;
                now = num[j + 1];
                num[j + 1] = num[j];
                num[j] = now;
            }
        }
    }
    for (int k = 0; k < amount; k++) {
        cout << num[k] << " ";
    }
}
