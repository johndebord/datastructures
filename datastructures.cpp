#include <iostream>

// Array
// - linear data structure.
// - stores homogeneous elements.
// - contiguous locations.
// - size must be provided before storing data.
//
// Accessing Time:  O(1)      Possible because stored at contiguous locations.
//
// Search Time:     O(n)      For sequential search.
//                  O(log n)  For binary search (if array is sorted)
//
// Insertion Time:  O(n)      Worst case at the beginning of array because all elements must be shifted.
//
// Deletion Time:   O(n)      Worst case at the beginning of array because all elements must be shifted.

// Linked Lists
// - linear data structure.
// - each element is a separate object.
// - each element (node) comprising of two items: data, reference to next node.
// - random access is not allowed.
//
// Types of Linked List:
// 1) Singly Linked List:    Every node stores reference or address of next node in list; the last node has next reference or address as NULL.
// 2) Doubly Linked List:    Every node stores reference or address of next and previous node in list; first and last node has previous and next reference or address as NULL respectively. 
// 3) Circular Linked List:  All nodes are connected to form a circle; there is no NULL at the beginning nor end; can be singly circular or doubly circular.
//
// Accessing Time:  O(n)
//
// Search Time:     O(n)
//
// Insertion Time:  O(1)  If at the position where element is to be inserted.
//
// Deletion Time:   O(1)  If address of previous node of to be deleted node is known.

// Stack
// - LIFO (Last In First Out).
// - two principal operations: push and pop.
// - can be implemented using both array and linked list.
//
// Accessing Time:  O(n)  Worst case.
//
// Insertion Time:  O(1)  Obviously allowed only at one end.
//
// Deletion Time:   O(1)  Obviously allowed only at one end.

// Queue
// - FIFO (First In First Out).
// - two principal operations: enqueue (added to back side) and dequeue (removing from front side).
// - can be implemented using both array and linked list.
//
// Accessing Time:  O(n) Worst case.
//
// Insertion Time:  O(1) Obviously allowed only at one end.
//
// Deletion Time:   O(1) Obviously allowed only at one end.

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ //

// Binary Tree
// - unlike arrays, linked lists, stacks, and queues, which are linear data structures, trees are hierarchial data structures.
// - each node has at most two children: left child and right child respectively.
// - implemented using Links.
// - represented by a pointer to the topmost node in tree. If the tree is empty, then the value of the root is NULL.
// - contains three parts: data, pointer to left child, and pointer to right child.
//
// Related Concept:
// Depth First Traversal (DFT)
// - linear data structures have only one logical way to traverse them.
// - trees can be traversed in different ways:
//                     1
//                 2       3
//               4   5
// Inorder   (Left, Root, Right):           4 2 5 1 3
// Preoder   (Root, Left, Right):           1 2 4 5 3
// Postorder (Left, Right, Root):           4 5 2 3 1
//
// Related Concept:
// Breadth First Traversal (BFT)
//                     1
//                 2       3
//               4   5
// Level Order Traversal of a tree is BFT:  1 2 3 4 5
//
// Binary Tree cont.
// - maximum number of nodes at level 'l:  2^(l-1) 
// - maximum number of nodes:              2^h-1
// - minimum possible height:              ceil(Log2(n+1))
//
// Time Complexity of Tree Traversal:      O(n)

// Binary Search Tree (BST)
// - BST provides moderate access/search (faster than linked list, slower than array).
// - BST provides moderate insertion/deletion (faster than array, slower than linked list).
// - binary search tree is a binary tree with the additional properties:
//   a) left subtree of a node contains only nodes with keys less than that node's key.
//   b) right subtree of a node contains only nodes with keys greater than that node's key.
//   c) the left and right subtree must also be a binary search tree.
//
// Search Time:                     O(h)
//
// Insertion:                       O(h)
//
// Deletion:                        O(h)
//
// Extra Space:                     O(n)
//
// If BST height is balanced h is:  O(Log n)

// Binary Heap
// - a binary heap has the following properties:
// - it's a complete tree; all levels are completely filled except possibly the last node.
// - either a min heap or a max heap; where in a min heap, the key at the root must be the minimum of all keys and vice versa.
//
// Getting minimum in min heap:   O(1)
//
// Extract minimum in min heap:   O(Log n)
//
// Decrease minimum in min heap:  O(Log n)
// 
// Insertion Time:                O(Log n)
// 
// Deletion Time:                 O(Log n)

// HashingHash Function
// - a function that converts a given large input into a smaller more practical integer value.
// - the situation where a newly inserted key maps to an already occupied slot in a hash table is called collision.
// - in hashing, elements are unordered as opposed to BSTs, which are stored in an ordered manner.
// - a BST is easier to implement than a hash table.
// - hashing can be used in any situation where we want search() insert() and delete() in O(1) time.
//
// Space:                         O(n)
//
// Search Time:                   O(1) [Average]  O(n) [Worst Case]
//
// Insertion Time:                O(1) [Average]  O(n) [Worst Case]
//
// Deletion Time:                 O(1) [Average]  O(n) [Worst Case]

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ //

// Graph
// - V = # of vertices.
// - E = # of edges.
// - used in google maps and social networking websites.
// - consists of the following two components:
// 1) a finite set of vertices also called nodes.
// 2) a finite set of ordered pairs called edges.
//
// Adjacency Matrix:
//
// Space:             O(V^2)
// 
// Traversal Time:    O(V^2) (By BFS or DFS) 
//
// Adjaceny List:
//
// Space:             O(V+E)
//
// Traversal Time:    O(ElogV) (By BFS or DFS)

// Trie
// - also known as radix tree or prefix tree.
// - efficient data structure for searching words in dictionaries.
// - search complexity is linear in terms of word (key) length to be searched.
// - no collisions, unlike hashing.
// - they require lots of space.
//
// Space:             O(ALPHABET_SIZE * M * N) (M = string length, N = number of keys)
//
// Search Time:       O(M)
//
// Insertion Time:    O(M)
//
// Deletion Time:     O(M)

// Segment Tree
// - used when we need to find the max/min/sum/product of numbers in a range.
//
// Space:                         O(N)
//
// Construction of Segment Tree:  O(N)
//
// Query Time:                    O(log N)
//
// Update Time:                   O(log N)

// Suffix Tree
// - used to search a pattern in a text.
// - preprocesses the text so that the search operation can be done in linear time in terms of pattern length.
// - suffix tree is compressed trie of all suffixes.
// - think tri but with possible multiple letter values in a node.

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ //

// Abstract Data Types (ADT)
// - a type (or class) for objects whos behavior is defined by a set of values and operations.
// - the definition of ADT only mentions what operations will be performed, not how they're implemented.
// - does not specify how data will be organized in memory nor what algorithms will be used for implementing operation.
// - the process of providing only the essentials and hiding the details is known as abstraction.
// - think of an ADT as a black box.
//
// List ADT
// - a list contains elements of the same type arranged in sequential order.
// - the following operations can be performed on a list:
// get()           return an element form the list at any given position.
// insert()        insert an element at any given position.
// remove()        remove the first occurrence of any element from a non-empty list.
// removeAt()      remove the element at a specified posision from a non-empty list.
// replace()       replace an element at any given position by another element.
// size()          returns the number of elemets in the list.
// isEmpty()       returns true if empty, else false.
// isFull()        return try if full, else false.
//
// Stack ADT
// - containts elements of the same type in sequential order.
// - all operations take place at a single end that is at the top of the stack.
// - the following operations can be performed on a stack:
// push()          insert an element at the top of the stack.
// pop()           remove and return the element at the top of the stack.
// peek()          return the element at the top of the stack without removing it.
// size()          return the number of elements in the stack.
// isEmpty()       return true if empty, else false. 
// isFull()        return try if full, else false.
//
// Queue ADT
// - contains elements of the same type arranged in sequential order.
// - operations take place on both ends; insertion at the end, deletion at the beginning.
// - the following operations can be performed on a stack:
// enqueue()       insert an element at the end of the queue.
// dequeue()       remove and return the first element of the queue.
// peek()          return the element the element of the queue qithout removing it.
// size()          return the number of elements in the queue.
// isEmpty()       return true if empty, else false. 
// isFull()        return try if full, else false.

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ //

int main(int argc, char *argv[])
{
        
    return 0;
}
