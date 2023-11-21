// MTH9815_Quiz.cpp : Defines the entry point for the application.
// Karan Jeswani


#include "MTH9815_Quiz.h"
#include "QuickSort.hpp"
#include "MaxHeap.hpp"


int main()
{
    // Exercise 1
    std::cout << "Output for Exercise 1: Quick Sort:" << std::endl;

    QuickSort qs;
    std::vector<int> arr = { 10, 7, 8, 9, 1, 5 };
    qs.sort(arr);
    std::cout << "Sorted array: \n";

    for (int value : arr) {

        std::cout << value << " ";
    }

    std::cout << std::endl;

    // Exercise 2
    std::cout << "Exercise 2: MaxHeap, Adding elements" << std::endl;

    MaxHeap maxHeap;

    // Adding elements to the heap.
    maxHeap.Add(15);
    maxHeap.Add(10);
    maxHeap.Add(30);
    maxHeap.Add(20);
    maxHeap.Add(40);

    // Exercise 3
    std::cout << "Output for Exercise 3: MaxHeap, Removing elements" << std::endl;
    // Printing and removing elements from the heap.
    std::cout << "MaxHeap after adding elements: ";

    while (!maxHeap.IsEmpty()) {
        std::cout << maxHeap.Remove() << " "; // Remove and print the max element.
    }
    std::cout << std::endl;

    return 0;
	
}
