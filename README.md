# Algorithms

This File Contains Algorithms implemented in C++.

## Workflow:

1. Decide on an algorithm (e.g., Merge Sort).
2. Create files: algorithms/sorting/merge_sort.h and algorithms/sorting/merge_sort.cpp.
3. Declare: Add the function signature (e.g., void mergeSort(std::vector<int>& arr);) in merge_sort.h.
4. Implement: Write the logic in merge_sort.cpp. Remember to #include "merge_sort.h" and any standard headers (<vector>, <iostream>, etc.).

5. Add Test Call: Go to main.cpp.

    - #include "algorithms/sorting/merge_sort.h" (or update algorithm_headers.h and include that).
    - Add code to create a test vector.
    - Call mergeSort() on the vector.
    - Print the vector before and after (using utils/print_helpers.h ideally).

6. Compile: Open your terminal in the learning_algorithms/ directory and run make.
7. Run: Execute ./runner.
8. Verify & Debug: Check the output. If wrong, add print statements inside merge_sort.cpp, recompile (make), and run again. Use the -g flag and a debugger (like gdb) if needed.
9. Clean Up (Optional): Run make clean to remove compiled files.
