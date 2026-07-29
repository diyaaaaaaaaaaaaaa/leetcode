# 7. Reverse Integer
> **Difficulty:**   easy
> **Topics:**  math

---

##  Approach

### Key Insight
    Reforming the reversed integer. 

### Algorithm

1. initialise the reversed int as equals to 0.
2.  while n
     - multiply reversed with 10
     - use n%10 to get the last digit of n
     - add n%10 to reversed
     - divide n by 10 at the end of each iteration
3. check if reversed exceeds the value of INY_MAX or is less than INT_MIN
     - if yes, reutrn 0
     - if no, reutrn reversed

---

## ⏱ Complexity

| Time | Space |
|------|-------|
| `O(n)` | `O(1)` |

---