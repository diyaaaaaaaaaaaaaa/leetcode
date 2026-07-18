# 1291. Sequential Digits

> **Difficulty:** Medium  
> **Topics:** Enumeration, DFS  
> **Pattern:** 
> **Link:** https://leetcode.com/problems/sequential-digits/

---


##  Approach to solution 1

### Key Insight

generate an array of all the possible sequential numbers and push the ones within the range to the answer array.

### Why it works

there's not too many possible sequential numbers

---

##  Approach to solution 2

### Key Insight

sliding winfow over a string og all digits.

### Algorithm

1. declare a string and initialise it with all the digits.
2. convert ints low and high to strings l and h
3. loop from number of digits in low (equal to size of l) to number of digits in high.
4. nested for loop from the current iteration of the first loop (i) to 9-i. for example, if 3 digits sequential numbers are being generated that is i=3, the last number we would want is 789 ie 6th position to 8th position.
5. generate substring from position j of lenght i for each iteration.
6. convert substring back to int.
7. check if int falls within the range of high and low, if yes, push to the answer array.


---

### ⏱ Complexity

| Time | Space |
|------|-------|
| `O(1)` | `O(1)` |

Time is O(1) since loops are over constants (less than 9)

---

###  Takeaways

- stoi() converts strings to integers
- substr(pos, len)
- think sliding window whenever substrings