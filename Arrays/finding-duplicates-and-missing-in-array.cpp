#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
vector<int> findTwoElement(vector<int> &arr);
int main() {
  vector<int> vec = {1, 2, 4, 5, 3, 6, 9, 3};
  vector<int> result = findTwoElement(vec);
  for (int i : result)
    cout << i << endl;
  return 0;
}
vector<int> findTwoElement(vector<int> &arr) {
  vector<int> result;
  int size = arr.size();
  int number = 1;
  int repeating = 0;
  int missing = 0;
  sort(arr.begin(), arr.end());  // sort array
  for (int i = 0; i < size; i++) // loop the array
  {
    if (i + 1 < size) // if i+1 element is out of index then don't check.
    {
      if (arr[i] == arr[i + 1]) {
        repeating = arr[i]; // if current index and next index numbers are same
                            // then set the repaating to i.
      }
    }
  }
  result.push_back(repeating);   // push the repeating into the result vector.
  for (int j = 0; j < size; j++) // loop the array.
  {
    if (number == arr[j]) // if current index number is same number in sequence
                          // then increase the number.
    {
      number++;
    } else if (j != 0 &&
               arr[j - 1] == arr[j]) // first check that index is not 0 and then
                                     // if last number in the array is same as
                                     // current one then skip it.
    {
      continue;
    } else {
      missing = number; // set the misisng number to the current number if not
                        // found in the array.
    }
  }
  if (missing != 0) // if missing number is not 0 then push it.
  {
    result.push_back(missing);
  } else // if missing is 0 then push the size which is last index number +1;
  {
    result.push_back(size);
  }
  return result; // return result vector.
}
