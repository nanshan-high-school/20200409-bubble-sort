#include <iostream>
using namespace std;

int main() {
    int n = 0;
    int a = 0;
    int b = 0;
    cout << "要輸入幾個數字:";
    cin >> n;
    int number[n];
    for (int k = 0; k < n; k++){
        number[k] = 0;
    }
    for (int x = 0; x < n; x++){
        cin >> number[x];
    }
    for (int y = 0; y < n - 1; y++){
        for (int i = 0; i < n; i++){
            if (number[i] < number[i - 1]){
                a = number[i - 1];
                b = number[i];
                number[i] = a;
                number[i - 1] = b;
            }
        }
    }
    for (int p = 0; p < n; p++){
        cout << number[p] << "\n";
    }
}