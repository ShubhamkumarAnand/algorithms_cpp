#include "quick_sort.h"
#include <algorithm>
#include <vector>

using namespace std;

static int partition(vector<int> &arr, int low, int high) {
  int pivot = arr[high];
  int i = (low - 1);

  for (int j = low; j < high; j++) {
    if (arr[j] < pivot) {
      i++;
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[i + 1], arr[high]);
  return (i + 1);
}

static void quickSortHelper(vector<int> &arr, int low, int high) {
  if (low < high) {
    int pi = partition(arr, low, high);
    quickSortHelper(arr, low, pi - 1);
    quickSortHelper(arr, pi + 1, high);
  }
}

void quickSort(vector<int> &arr) {
  if (arr.empty()) {
    return;
  }
  quickSortHelper(arr, 0, arr.size() - 1);
}
