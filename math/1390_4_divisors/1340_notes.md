# 1340. Four Divisors 
> **Difficulty:**   
> **Topics:** 
> **Pattern:** 

---

##  Approach

### Key Insight

brute force works
Divisors always occur in pairs around √n

### Algorithm

1. for all the integers in the array, nums[i] , keep a var for temp sum and count.
2. another nested loop starts from 1 and goes up till sqrt(n) and these are the numbers that we divide the nums[i] with
3. if a divisor is found, we check if the nums[i] is a perfect square.
4. if not, we increase count by 2 and add the divisor and nums[i]/divisor to temp sum.
5. if yes, we only increase the count by 1 and add the divisor to temp sum.
6. after all the numbers till sqrt(n) are checked to be divisors, we check if count is equal to 4.
7. if yes, add the temporary sum to the permanent sum.
8. Repeat the process for every element in the array.
9. return sum

### Why it works

Every divisor greater than √n has a corresponding divisor smaller than √n. Therefore, by checking divisibility only up to √n, we discover every divisor exactly once through its divisor pair.
The fact that 4 divisors would only exist if n is a perfect cube (n=1*p*p^2*p^3) or n=1*p*q*pq can also be used here.

---

## ⏱ Complexity

| Time | Space |
|------|-------|
| `O(n * sqrt(m))` | `O(1)` |

---

##  Takeaways

- only loop till sqrt(n) when working with divisors for (int i = 1; i * i <= n; i++)
- whole squares work a lil different as unique divisors are to be counted if(nums[i]/j == j)
- 4 divisors would only exist if n is a perfect cube (n=1*p*p^2*p^3) or n=1*p*q*pq

![1340 submission ](image.png)