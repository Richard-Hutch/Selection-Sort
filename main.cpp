#include <iostream>
using namespace std;

int main() {

  int size = 8;
  int arr[20] = {11, 2, 333, 43, 52, 6, 8, 119};
  int minIdx;


  for (int i = 0; i < size -1; i++){

    minIdx = i;
    for (int j = i + 1; j < size; j++){

      if (arr[j] < arr[minIdx]){
        minIdx = j;
      }
    }
    swap(arr[i], arr[minIdx]);
  }


  for (int i = 0; i < size; i++){
    cout << arr[i] << endl;
  }
}

