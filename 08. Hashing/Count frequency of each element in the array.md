# 01. Count frequency of each element in the array

**Problem Statement:**

You are given an array of integers, `nums`, which may contain duplicate elements. Your task is to write a C++ program that prints all unique elements in the array along with their respective frequencies of occurrence.

Implement the following function in C++:

```
void printFrequency(const std::vector<int>& nums);
```

Where:

```nums (1 <= |nums| <= 10^5)```: A std::vector of integers where ```1 <= nums[i] <= 1000``` (the range of integers in the array).
The printFrequency function should print the unique elements from the nums vector in ascending order, along with their frequencies, in the following format:


```Element: Frequency```
Ensure that there are no extra spaces or characters in the output, and the elements should be printed in ascending order.

Example:

Input:

```
std::vector<int> nums = {4, 2, 2, 8, 3, 3, 1};
printFrequency(nums);

```


Output:

```
1: 1
2: 2
3: 2
4: 1
8: 1
```

Note:

Your C++ program should read the input vector nums, call the printFrequency function, and produce the specified output.
The order in which the elements appear in the output does not matter, as long as the elements and their frequencies are correct.
Your solution should have a time complexity of O(n), where n is the number of elements in the nums vector.

