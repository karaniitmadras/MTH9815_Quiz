#ifndef QUICKSORT_HPP
#define QUICKSORT_HPP

#include <vector>

class QuickSort {
public:
    QuickSort(); // Constructor
    void sort(std::vector<int>& arr); // Function to sort the array
private:
    void quickSort(std::vector<int>& arr, int low, int high);
    int partition(std::vector<int>& arr, int low, int high);
};

#endif // QUICKSORT_HPP
