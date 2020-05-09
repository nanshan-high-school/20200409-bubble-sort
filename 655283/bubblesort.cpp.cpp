#include <iostream>
using namespace std;

void swap(int *m , int *n);

int main() {

int time; 
cout << "輸入字數";
cin >> time;
int num[time];

for (int i = 0; i < time; i++) {
    cout << "輸入數值" << i + 1 << "\n";
    cin >> num[i];
}

for (int i = 0; i < (time - 1); i++) {
    for (int j = 0; j < (time - 1 - i); j++) {
        if (num[j] > num[j + 1]) {
            swap(&num[j], &num[j + 1]);
        }
    }
}

for (int k = 0; k < time; k++) {
    cout << num[k] << ' ';
}

}

void swap(int *m , int *n) {
    int mid = *m;
    *m = *n;
    *n = mid;
}
