This repository contains my implementation of useful data structures, algorithms, 
games, as well as my solutions to programming puzzles. 

Each item is marked with a difficulty level.
1 - easy
2 - medium
3 - hard

If a file name starts with 'lc', it's a problem from leetcode.com

Written in cpp/python3. Thanks Huyen Chip(@chiphuyen) for the inspiration.

Data structures
---------------

### Linked lists

- [x] List class (linked_list.cpp) - 1
- [ ] Remove duplicates (linked_list_algos.cpp)
- [ ] Find nth last element (linked_list_algos.cpp)
- [ ] Remove node given only its object (linked_list_algos.cpp)
- [ ] Sum linked lists with one digit per node (linked_list_algos.cpp)
- [ ] Find beginning of circle (linked_list_algos.cpp)

### Trees

- [ ] Binary heap class (binary_heap.cpp) - 2
- [ ] Binary tree class (binary_tree.cpp) - 1
- [ ] Binary search tree class that allows duplicate values (binary_search_tree.cpp) - 2
	  BST class inherits binary tree class
- [ ] Red black tree class (red_black_tree.cpp)
- [ ] B+ tree class (b_tree.cpp) - 3
- [ ] Trie class that allows word removal (trie.cpp) - 2
- [ ] Check if a binary tree is a binary search tree (binary_tree_algos.cpp) - 2
- [ ] Check if a binary tree is balanced (binary_tree_algos.cpp)
- [ ] Find first common ancestor of two nodes in a binary tree (binary_tree_algos.cpp)
- [ ] Get all nodes of depth n in a binary tree (binary_tree_algos.cpp)
- [ ] Given two large trees, check if the first is a subtree of the second (binary_tree_algos.cpp)
- [ ] Find all sub paths in a binary tree that sum up to x (binary_tree_algos.cpp)
- [ ] Create a balanced binary search tree from a sorted array (bst_algos.cpp)

### Graphs

- [ ] Undirected graph class
- [ ] Directed graph class
- [ ] Breadth first search (search.cpp)
- [ ] Depth first search (search.cpp)
- [ ] A-star (search.cpp)

### Stacks and queues

- [x] Queue class (queue.cpp)
- [ ] Heap priority queue (priority_queue.cpp) - 1
- [x] Stack class (stack.cpp)
- [ ] Stack that finds min in O(1) (min_stack.cpp)
- [ ] Solve Hanoi towers using stacks (stack_algos.cpp)
- [ ] Sort stack using only push, pop, peek and empty (stack_algos.cpp)
- [ ] Build a queue using two stacks (stack_algos.cpp)

Algorithms
----------

### Sorting
- [ ] Insertion sort (sort.cpp) - 1
- [ ] Selection sort (sort.cpp) - 1
- [ ] Merge sort (sort.cpp) - 2
- [ ] Heap sort (sort.cpp) - 2
- [ ] Quick sort (sort.cpp) - 2
- [ ] Counting sort (sort.cpp) - 2
- [ ] Radix sort (sort.cpp) - 2
- [ ] Bucket sort (sort.cpp) - 2

### Dynamic Programming
- [ ] Computing a Fibonacci sequence
- [ ] Find the longest common subsequence between two strings

### Recursion

- [ ] Find all permutations of a string
- [ ] Find all subsets of a set
- [ ] Find all proper combinations of n parentheses
- [ ] Bucket fill
- [ ] Check if it's possible to make a change with a set of coins
- [ ] Check if it's possible to weight two objects with a set of weights
- [ ] Eight queen

Programming Puzzles
-------------------

### String Manipulation
- [ ] Check if two strings are anagrams in O(n + m) time (anagrams.cpp) - 1
- [ ] Find the longest palindromic substring in O(n^2) time (lc_longest_palindrome.cpp) - 2
- [ ] Check if a string has balanced delimiters in O(n) time (delim_balanced.cpp) - 2
- [ ] Reverse words while maintaining spaces and tabs in O(n) time (reverse_words.cpp) - 2
- [ ] Longest substring without repeating characters in O(n) time (lc_longest_nonrepeat_substring.cpp) - 2
- [ ] Longest contiguous substring of 2 distinct characters in O(n) time (substring_two_chars.cpp) - 2
- [ ] Remove duplicate chars in a string
- [ ] Encode and decode Caesar cipher (caesar.cpp)
- [ ] Check if a string is a rotation of another

### Mathematical
- [ ] Reverse integers (lc_reverse_int.cpp) - 1
- [ ] Sieve of Eratosthenes (sieve_prime.cpp) - 1
- [ ] Two sum in O(n) time (lc_two_sum.cpp) - 1
	  Given an array of integers, return indices of the two numbers 
	  such that they add up to a specific target.
- [ ] Year with maximum population (year_max_pop.cpp) - 1
	  Given a list of people with their years of birth and death, 
	  find the year with max population
- [ ] FizzBuzz (fizzbuzz.cpp) - 1
- [ ] ZigZag conversion (lc_zigzag_convert.cpp) - 2
- [ ] Find sum of all subarrays of an array (subarray_sum.cpp) - 2
- [ ] Add two numbers, each represented by a reverse linked list (lc_add_number_reverse.cpp) - 2
- [ ] Find the median of two sorted arrays in O(log(m+n)) time (lc_median_arrays.cpp) - 3
- [ ] Find nth smallest number that can be created using a list of prime factors
- [ ] Count occurences of given digit in all numbers up to n
- [ ] Rotate N x N matrix in place
