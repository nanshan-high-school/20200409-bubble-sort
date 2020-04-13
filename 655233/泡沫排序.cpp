#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "你要輸入幾個數字?";
    cin >> num;

    int bubble[num];

    cout << "請輸入你的數字" << endl;

    for (int i = 0; i < num; i++) {
        cout << "第" << i + 1 << "個?";
        cin >> bubble[i];
        cout << endl;
    }

    for (int i = 0; i < num; i++) {
        for (int j = i + 1; j < num; j++) {
            if (bubble[i] > bubble[j]) {
            int yee;
            yee = bubble[i];
            bubble[i] = bubble[j];
            bubble[j] = yee;
        }
        
        }
    }

    for (int i = 0; i < num; i++) {
        cout << bubble[i];
    }




    
}
