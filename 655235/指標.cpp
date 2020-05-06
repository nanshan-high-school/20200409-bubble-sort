#include <iostream>
using namespace std;

void swap (int *N, int *M);

int main() {
    int Q;
    int num[1000];
    cout << "數字數量：";
    cin >> Q;

    for (int i = 0; i < Q; i++) {
        cout << i + 1 << "：";
        cin >> num[i];
    }

    for (int i = 0; i < Q; i++) {
        for (int j = 0; j < Q; j++) {
            if (num[j] > num[j + 1]) {
                swap(num[j], num[j + 1]);
            }
        }
    }

    for (int i = 0; i < Q; i++) {
        cout << num[i + 1] << " ";
    }

}

void swap (int *N, int *M) {
    int now = 0;
    now = *M;
    *M = *N;
    *N = now; 
}
