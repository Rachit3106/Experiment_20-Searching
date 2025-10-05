# EXP-20-Search-Algorithms-In-cpp

# Experiment 20 – Searching in C++

**Student:** Rachit Deshpande  
**PRN:** 24070123035  
**Batch:** A2  

---

## Aim  
To implement different **searching techniques** in C++.  
- **Experiment 20 A**: Linear Search  
- **Experiment 20 B**: Sequential Search  
- **Experiment 20 C**: Binary Search  

---

## Theory  

- **Linear Search (20 A):**  
  - Compares each element sequentially with the target value.  
  - Works on both sorted and unsorted arrays.  
  - Time Complexity: O(n).  

- **Sequential Search (20 B):**  
  - A form of linear search where elements are checked one by one.  
  - Stops when element is found.  
  - Time Complexity: O(n).  

- **Binary Search (20 C):**  
  - Works on **sorted arrays** only.  
  - Divides the array into halves and eliminates one half in each step.  
  - Time Complexity: O(log n).  

---

## Algorithm  

### 20 A – Linear Search  
1. Start the program.  
2. Input size and array elements.  
3. Input the value to search.  
4. Traverse the array:  
   - If `arr[i] == val`, return index.  
5. If not found, return -1.  
6. End program.  

### 20 B – Sequential Search  
1. Start
2. Input the number of elements n.
3. Declare an array arr of size n.
4. Input n elements into the array.
5. Input the element to search, called key.
6. Initialize a boolean variable found as false.
7. Loop through the array from index 0 to n-1:
    - If arr[i] == key:
    - Print "Element found at index i".
    - Set found = true.
    - Break the loop.
8. If found is still false:
    - Print "Element not found in the array."
9. End


### 20 C – Binary Search  
1. Start the program.  
2. Input size and **sorted** array elements.  
3. Input search value.  
4. Set `left = 0`, `right = size-1`.  
5. While `left <= right`:  
   - Find `mid = (left+right)/2`.  
   - If `arr[mid] == val`, return index.  
   - Else if `arr[mid] < val`, search in right half.  
   - Else search in left half.  
6. Print result.  
7. End program.  

---

## Conclusion  

- Understood **Linear Search**, **Sequential Search**, and **Binary Search**.  
- Learned that linear/sequential are simple but less efficient.  
- Binary search is efficient but requires a **sorted array**.  
