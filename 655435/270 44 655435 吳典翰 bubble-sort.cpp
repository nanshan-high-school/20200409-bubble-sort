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
            c = a[i];
            d = a[i+1];
            if (c > d) {
                a[i] = d;
                a[i+1] = c;
                }
            else {
                a[i] = c;
                a[i+1] = d;
            }    
        }
    }
    for (int i = 0; i < e; i++) {
        cout << a[i] << " ";
        }
    

}
