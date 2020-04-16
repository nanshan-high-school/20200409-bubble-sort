#include <iostream>
using namespace std;

int main(){
    int numCount;
    cin >> numCount;
    int num[10000];
    int num2[10000];
    for(int i = 0; i < numCount; i++){
        cin >> num[i];
        num2[i] = num[i];
    }
    bool complete = false;
    int check = 0;
    while(complete == false){
        for(int i = 0; i < numCount - 1; i++){
            if(num[i] > num[i+1]){
                num[i] = num2[i+1];
                num[i+1] = num2[i];
                num2[i] = num[i];
                num2[i+1] = num[i+1];
            }
            else{
                check++;
            }
        }
        if(check == numCount - 1){
            complete = true;
        }
        else{
            check = 0;
        }
    }
    for(int i = 0; i < numCount; i++){
        cout << num[i] << " ";
    }
}
