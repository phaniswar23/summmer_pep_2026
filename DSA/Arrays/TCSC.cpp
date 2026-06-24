/*
Time Complexity - How much time an algorithm takes as input size increases
Big O - Represets Upper Bound of running time,it gives the worst case scenerio for an algorithm,it describes the maximum

O(1) => Constant time -> The times taken donesn't depand on the input size,algorithm always run in the same time
that divides that input in half like Binary Search

O(n) => Linear time -> The time grows directly proportional to input size

O(log n) => Logarathemic time -> The time grows logaramthmically as input size increases,often seen in algos

O(n log n) => Linearithemic -> Mix of Linear and Logarathmic,example :- Quick sort and Merge Sort

O(n^2) => Quadratic -> Time will  grow proportinally to square of input k


One loop              → O(n)

Two nested loops      → O(n²)

Three nested loops    → O(n³)

Divide by 2           → O(log n)

Sort()                → O(n log n)

Binary Search         → O(log n)

Linear Search         → O(n)
*/