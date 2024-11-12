# Binary Search

## Some Important Points
- Elements must be in monotonic functions

## Intuition Behind Finding the Middle Point
### Problme of overflowing integers, Using the Formula: `(start+end)/2`
This formula can cause integer overflow as, for example if both start and end integers are 2^31-1.
Then adding them together would cause integer overflow issues.

### Using the Formula: `start + (end - start) / 2`
This formula can be read as: "start with the left boundary, then add half the distance to the right boundary." 

Think of it like standing at the start point and walking halfway towards the end point. 

**Example:**
- If you're at position 8 and your end is at 12:
  - You're at 8
  - The distance to the end (12 - 8) is 4
  - Half that distance is 2
  - So you move 2 steps from 8, landing at 10

### Why Not Use: `start / 2 + end / 2`
This formula can be read as: "take the halfway point of start and the halfway point of end, then combine them." 

While this gives the same mathematical result, it's:
- Less intuitive to think about (what does half of each endpoint mean geometrically?)
- More prone to integer overflow in programming
- More computationally expensive (two divisions instead of one)

## Logarithmic Complexity of Binary Search
Let me explain the log(n) complexity of binary search using intuitive examples! 

Think of it this way - imagine you're playing a number guessing game with a friend using numbers from 1 to 100:

1. **First guess (n = 100):** "Is it 50?"  
   - Search space reduced to 50 numbers

2. **Second guess (n = 50):** "Is it 75?"  
   - Search space reduced to 25 numbers

3. **Third guess (n = 25):** "Is it 87?"  
   - Search space reduced to 12 numbers

4. **Fourth guess (n = 12):** "Is it 93?"  
   - Search space reduced to 6 numbers

And so on...

The key insight is: "How many times do I need to divide my search space by 2 to get down to 1?"

**Example of Reductions:**
- 100 → 50 → 25 → 12 → 6 → 3 → 1  
  It took about 7 steps.

This is exactly what log₂(n) means! For any number n, log₂(n) tells you "how many times do you need to divide by 2 to get to 1?"

**Some Examples:**
- log₂(8) = 3 because: 8 → 4 → 2 → 1 (3 steps)
- log₂(16) = 4 because: 16 → 8 → 4 → 2 → 1 (4 steps)
- log₂(1024) = 10 because: 1024 → 512 → 256 → 128 → 64 → 32 → 16 → 8 → 4 → 2 → 1 (10 steps)

This is why binary search is so powerful - even if you double the size of your input array:
- n = 1000 takes ~10 steps
- n = 2000 takes ~11 steps
- n = 4000 takes ~12 steps

Just one extra step for double the data! That's the beauty of logarithmic complexity.

## Types of Problems Solvable with Binary Search
Binary search can be applied to a variety of problems, including but not limited to:

1. **Finding an Element in a Sorted Array:** Quickly locate a target value in a sorted array.
2. **Finding the First or Last Occurrence:** Determine the first or last position of a target value in a sorted array.
3. **Finding the Square Root:** Calculate the square root of a number using binary search.
4. **Finding the Peak Element:** Identify a peak element in an array where an element is greater than or equal to its neighbors.
5. **Searching in Rotated Sorted Array:** Locate an element in a rotated sorted array.
6. **Finding Minimum in a Rotated Sorted Array:** Determine the minimum element in a rotated sorted array.
7. **Finding the Kth Smallest/Largest Element:** Find the Kth smallest or largest element in a sorted or unsorted array.
8. **Finding Lower and Upper Bound of Occurrences:** Determine the lower and upper bounds of a target value's occurrences in a sorted array, book allocation problme, roti,  parathas'
9. **Finding the Pivot Element:** Identify the pivot element in a rotated sorted array.
10. **Reducing Search Space (e.g., Aggressive Cow Problem):** Use binary search to optimize placement or allocation problems, such as maximizing the minimum distance between cows, book allocation problme, roti,  parathas.
11. **Solving Optimization Problems:** Use binary search to optimize a function, such as minimizing or maximizing a value.

These examples illustrate the versatility of binary search in solving various computational problems efficiently.

