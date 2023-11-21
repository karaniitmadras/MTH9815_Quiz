#ifndef MAXHEAP_HPP
#define MAXHEAP_HPP

#include <vector>

// Class definition for a MaxHeap.
class MaxHeap {
public:
    MaxHeap();
    void Add(int element); // Adds an element to the heap.
    int Remove(); // Removes the maximum element from the heap.
    bool IsEmpty() const; // Checks if the heap is empty.
    size_t Size() const; // Returns the size of the heap.

private:
    std::vector<int> heap; // Internal container for heap elements.

    // Helper functions for maintaining the heap property.
    void HeapifyUp(int index); // Moves an element up to maintain heap property.
    void HeapifyDown(int index); // Moves an element down to maintain heap property.

    // Utility functions to get indices of parent and children.
    int GetLeftChildIndex(int parentIndex) const;
    int GetRightChildIndex(int parentIndex) const;
    int GetParentIndex(int childIndex) const;

    // Utility functions to check the existence of parent and children.
    bool HasLeftChild(int index) const;
    bool HasRightChild(int index) const;
    bool HasParent(int index) const;

    // Utility functions to access elements.
    int LeftChild(int index) const;
    int RightChild(int index) const;
    int Parent(int index) const;

    // Utility function to swap elements in the heap.
    void Swap(int indexOne, int indexTwo);
};

#endif // MAXHEAP_HPP
