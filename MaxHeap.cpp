#include "MaxHeap.hpp"
#include <algorithm>
#include <stdexcept>

MaxHeap::MaxHeap() {}

void MaxHeap::Add(int element) {
    heap.push_back(element); // Add the new element at the end of the heap.
    HeapifyUp(heap.size() - 1); // Re-heapify the heap upwards.
}

int MaxHeap::Remove() {
    if (IsEmpty()) {
        throw std::out_of_range("Heap is empty");
    }
    int item = heap[0]; // Store the max element.
    heap[0] = heap.back(); // Move the last element to the root.
    heap.pop_back(); // Remove the last element.
    HeapifyDown(0); // Re-heapify the heap downwards.
    return item; // Return the max element.
}

bool MaxHeap::IsEmpty() const {
    return heap.empty(); // Return whether the heap is empty.
}

size_t MaxHeap::Size() const {
    return heap.size(); // Return the size of the heap.
}

void MaxHeap::HeapifyUp(int index) {
    // Re-heapify the heap by moving the element at index upwards.
    while (HasParent(index) && Parent(index) < heap[index]) {
        Swap(GetParentIndex(index), index);
        index = GetParentIndex(index);
    }
}

void MaxHeap::HeapifyDown(int index) {
    // Re-heapify the heap by moving the element at index downwards.
    while (HasLeftChild(index)) {
        int largerChildIndex = GetLeftChildIndex(index);
        if (HasRightChild(index) && RightChild(index) > LeftChild(index)) {
            largerChildIndex = GetRightChildIndex(index);
        }

        if (heap[index] > heap[largerChildIndex]) {
            break;
        }
        else {
            Swap(index, largerChildIndex);
        }
        index = largerChildIndex;
    }
}

// Below are utility functions to get indices and check existence of nodes.

int MaxHeap::GetLeftChildIndex(int parentIndex) const { return 2 * parentIndex + 1; }
int MaxHeap::GetRightChildIndex(int parentIndex) const { return 2 * parentIndex + 2; }
int MaxHeap::GetParentIndex(int childIndex) const { return (childIndex - 1) / 2; }
bool MaxHeap::HasLeftChild(int index) const { return GetLeftChildIndex(index) < heap.size(); }
bool MaxHeap::HasRightChild(int index) const { return GetRightChildIndex(index) < heap.size(); }
bool MaxHeap::HasParent(int index) const { return GetParentIndex(index) >= 0; }
int MaxHeap::LeftChild(int index) const { return heap[GetLeftChildIndex(index)]; }
int MaxHeap::RightChild(int index) const { return heap[GetRightChildIndex(index)]; }
int MaxHeap::Parent(int index) const { return heap[GetParentIndex(index)]; }
void MaxHeap::Swap(int indexOne, int indexTwo) { std::swap(heap[indexOne], heap[indexTwo]); }
