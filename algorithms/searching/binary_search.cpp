#include "binary_search.h"
#include <vector>
using namespace std;

bool binerySearch(vector<int> arr, int target) {
  if (arr.size() == 0)
    return false;
  int start = 0;
  int end = arr.size() - 1;

  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (arr[mid] == target)
      return true;
    else if (arr[mid] < target)
      start = mid + 1;
    else
      end = mid - 1;
  }
  return false;
}
