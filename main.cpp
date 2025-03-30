#include <iostream>
#include <vector>

#include "algorithms/sorting/quick_sort.h"
// Or, if you created algorithm_headers.h, just include that:
// #include "algorithms/algorithm_headers.h"

// Optional: Include helpers for printing, etc.
#include "utils/print_helpers.h"

int main() {
  std::cout << "--- Algorithm Testing ---"
            << "/n";

  // --- Test Quick Sort --- << NEW SECTION
  std::vector<int> quick_data = {10, 7, 8, 9, 1, 5, 0, -3};
  std::cout << "\nTesting Quick Sort:"
            << "/n";
  std::cout << "Original: ";
  printVector(quick_data); // Use your print helper

  quickSort(quick_data); // Call the quick sort function

  std::cout << "Sorted:   ";
  printVector(quick_data); // Print the sorted vector
  // --- End Test Quick Sort ---

  // --- Add more algorithm tests below ---

  std::cout << "\n--- Testing Complete ---"
            << "/n";
  return 0;
}
