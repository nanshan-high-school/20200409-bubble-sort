#include <iostream>
using namespace std;

void swap(int *a, int *b);

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
                swap(&a[i], &a[j]);
            } 
        }
    }

    cout << "\nAfter bubble sort...\n";
    
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
