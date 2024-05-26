#include<iostream>
using namespace std;
//Standard Template Library (of generic classes and functions)
// 1. Containers = objects which stores data
// 2. Algorithm = procedure to process data
// 3. Iterators = object which point to an element of a container

int main(){
    // Types of container-
    //     1. Sequence Containers (linear) - includes vector, list, dequeue
    //     2. Associative Containers (tree like) - set, multiset, map, multimap
    // designed for faster access
    //     3. Derived Containers (stack, queue, priority queue) - derived from sequence and associative containers.


//In sequence containers, we have Vectors, which has following properties:

// Faster random access to elements in comparison to array
// Slower insertion and deletion at some random position, except at the end.
// Faster insertion at the end.
 

// In Lists, we have,

// Random accessing elements is too slow, because every element is traversed using pointers.
// Insertion and deletion at any position is relatively faster, because they only use pointers, which can easily be manipulated.
// In associative containers, every operation except random access is faster in comparison to any other containers, be it inserting or deleting any element.

// In associative containers, we cannot specifically tell which operation is faster or slower, we’ll have to inspect every data structure separately


    return 0;
}