#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "How many numbers?";
    cin >> n;
        
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
        if (a[i] > a[j]) {
            int vemp;
            vemp = a[i];
            a[i] = a[j];
            a[j] = vemp;
        } 
        }
    }

    cout << "\nAfter bubble sort...\n";
    
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}