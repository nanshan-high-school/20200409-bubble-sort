#include <iostream>
using namespace std;
int main() {
    int c = 0;
    int d = 0;
    int e;
    cin >> e;
    int a[e];
    for (int i = 0; i < e; i++) {
        a[i] = 0;
    }
    for (int i = 0; i < e; i++) {
        cin >> a[i];
    }
     for (int j = 0; j < e - 1; j++) {
        for (int i = 0; i < e - 1; i++) {
            if (a[i] > a[i + 1]) {
                swap (a[i],a[i + 1]);
            }
        }
    }
    for (int i = 0; i < e; i++) {
        cout << a[i] << " ";
        }
}
void swap (int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
