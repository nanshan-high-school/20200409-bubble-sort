#include <iostream>
using namespace std;

void swap(int *m, int *n);

int main() {
  int count;
  cin >> count;

  int nums[count];
  for (int i = 0; i < count; i++) {
    cin >> nums[i];
  }

  for (int j = count; j > 0; j--) {
    for (int i = 0; i < j - 1; i++) {
      if (nums[i] > nums[i + 1]) {
        swap(&nums[i], &nums[i + 1]);
      }
    }
  }

  for (int i = 0; i < count; i++) {
    cout << nums[i] << "\n";
  }
}

void swap(int *m, int *n) {
  int temp = *m;
  *m = *n;
  *n = temp;
}
