#include <iostream>
using namespace std;
int sort(char type, int array[]);
void displaySortedArray(int array[]);
int main() {
  int array[12] = {23,2999,0,45, 67, 34, 78, 988, 6, 35, 980, 29055};
  displaySortedArray(array);
  return 0;
}
int sort(char type, int array[]) {
  int temp = 0;
  if (type == 'A' || type == 'a') {
    for (int i = 0; i < 11; i++) {
      for (int j = i + 1; j < 12; j++) {
        if (array[i] > array[j]) {
          temp = array[j];
          array[j] = array[i];
          array[i] = temp;
        }
      }
    }
  } else if (type == 'D' || type == 'd') {
    for (int i = 0; i < 11; i++) {
      for (int j = i + 1; j < 12; j++) {
        if (array[i] < array[j]) {
          temp = array[j];
          array[j] = array[i];
          array[i] = temp;
        }
      }
    }
  } else
    cout << "Invalid output";
  return 0;
}
void displaySortedArray(int array[])
{
char type;
  cout << "Enter A for accending and D for decending: ";
  cin >> type;
  sort(type, array);
  if (type == 'A' || type == 'a' || type == 'D' || type == 'd') {
    cout << "[ ";
    for (int i = 0; i < 12; i++) {
      cout << array[i] << " ";
    }
    cout << "]"<<endl;
  }
}
