#include <iostream>
using namespace std;

int main() {
    int gg[1000] = {0};
    cout << "輸入你想移的數字有幾個\n";
    int num;
    cin >> num;
    cout << "輸入你想要輸入的數字們\n";
    for (int x = 0; x < num; x++) {
        cin >> gg[x];
    }
    for (int a = 0; a < num; a++) {
        for (int b = a + 1; b < num; b++){
            if (gg[a] > gg[b]){
                int jack;
                jack = gg[a];
                gg[a] = gg[b];
                gg[b] = jack;
            }
        }
    }
    for (int c = 0; c < num; c++){
        cout << "第" << c + 1 << "個數" ;
        cout << gg[c] << "\n";
    }
}