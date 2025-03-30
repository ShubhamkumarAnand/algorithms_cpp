#ifndef PRINT_HELPERS_H
#define PRINT_HELPERS_H

#include <vector>   // Needed for std::vector parameter
#include <iostream> // Needed for std::cout
#include <iterator> // Needed for std::ostream_iterator
#include <algorithm> // Needed for std::copy

// --- Template Functions (Implementation often goes in header) ---

/**
 * @brief Prints the elements of a std::vector to std::cout.
 *
 * @tparam T The type of elements in the vector.
 * @param vec The vector to print.
 * @param prefix Optional string to print before the vector contents.
 * @param suffix Optional string to print after the vector contents (defaults to newline).
 */
template <typename T>
void printVector(const std::vector<T>& vec,
                 const std::string& prefix = "",
                 const std::string& suffix = "\n")
{
    std::cout << prefix; // Print prefix if any
    std::cout << "[ ";
    // Use std::copy and std::ostream_iterator for a concise way to print
    // elements with a space separator. This handles various types printable via <<.
    std::copy(vec.begin(), vec.end(), std::ostream_iterator<T>(std::cout, " "));
    std::cout << "]";
    std::cout << suffix; // Print suffix (usually newline)
}

// --- Declarations for Non-Template Functions (Implementation in .cpp) ---

// Add declarations for any non-template helper functions here if needed later.
// Example:
// void printSeparatorLine();

#endif // PRINT_HELPERS_H
