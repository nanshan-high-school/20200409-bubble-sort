#include <iostream>
using namespace std;

int main() {
  int count;
  cin >> count;

  int nums[count];
  for (int i = 0; i < count; i++) {
    cin >> nums[i];
  }

  for (int i = 0; i < count; i++) {
    int low = nums[i];
    if (nums[i] < low) {
        low = nums[i];
      }
  }
  
  for (int j = count; j > 0; j--) {
    for (int i = 0; i < j - 1; i++) {
      if (nums[i] > nums[i + 1]) {
        int save = nums[i];
        nums[i] = nums[i + 1];
        nums[i + 1] = save;
      }
    }
  }

  for (int i = 0; i < count; i++) {
    cout << nums[i] << "\n";
  }
}
