# Day1_Problem1

**Leetcode Problem 1512: Number of good pairs**
<br>_link_ - https://leetcode.com/problems/number-of-good-pairs/description/
<br>Given an array of integers nums, return the number of good pairs.
<br>A pair (i, j) is called good if nums[i] == nums[j] and i < j.

<br>Example 1:
<br>Input: nums = [1,2,3,1,1,3]
<br>Output: 4
<br>Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.

<br>Example 2:
<br>Input: nums = [1,1,1,1]
<br>Output: 6
<br>Explanation: Each pair in the array are good.

<br>Example 3:
<br>Input: nums = [1,2,3]
<br>Output: 0

<br>Constraints:
<br>1 <= nums.length <= 100
<br>1 <= nums[i] <= 100

# Day2_Problem1

**Geeks for Geeks: Count Digits**
<br>_link_ - https://www.geeksforgeeks.org/problems/count-digits5716/1
<br>Given a positive integer n, count the number of digits in n that divide n evenly (i.e., without leaving a remainder). Return the total number of such digits.

<br>A digit d of n divides n evenly if the remainder when n is divided by d is 0 (n % d == 0).
<br>Digits of n should be checked individually. If a digit is 0, it should be ignored because division by 0 is undefined.

<br>Examples :
<br>Input: n = 12
<br>Output: 2
<br>Explanation: 1, 2 when both divide 12 leaves remainder 0.

<br>Input: n = 2446
<br>Output: 1
<br>Explanation: Here among 2, 4, 6 only 2 divides 2446 evenly while 4 and 6 do not.

# Day3_Problem1

**Leetcode Problem 1512: Number of good pairs**
<br>_link_ - https://leetcode.com/problems/reverse-integer/
<br>Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

<br>Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

<br>Example 1:
<br>Input: x = 123
<br>Output: 321

<br>Example 2:
<br>Input: x = -123
<br>Output: -321

<br>Example 3:
<br>Input: x = 120
<br>Output: 21

# Day3_Problem2

**Leetcode Problem 9: Palindrome Number**
<br>_link_ - https://leetcode.com/problems/palindrome-number/description/
<br>Given an integer x, return true if x is a
palindrome
, and false otherwise.

<br>Example 1:
<br>Input: x = 121
<br>Output: true
<br>Explanation: 121 reads as 121 from left to right and from right to left.

<br>Example 2:
<br>Input: x = -121
<br>Output: false
<br>Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

<br>Example 3:
<br>Input: x = 10
<br>Output: false
<br>Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

<br>Constraints:
<br>-2^31 <= x <= 2^31 - 1

**Approach :**
Negative Numbers: Any negative number is not a palindrome since the negative sign will not match in the reverse order.
Reverse the Number:
Reverse the digits of the number.
Compare the reversed number with the original number. If they are the same, then the number is a palindrome.
Efficient Check:
Instead of reversing the entire number, we can reverse half of the number and compare the two halves.

# Day3_Problem3

**Geeks for Geeks: LCM And GCD**
<br>_link_ - https://www.geeksforgeeks.org/problems/lcm-and-gcd4516/1
<br>Given two integers a and b, write a function lcmAndGcd() to compute their LCM and GCD. The function inputs two integers a and b and returns a list containing their LCM and GCD.

<br>Examples:
<br>Input: a = 5 , b = 10
<br>Output: [10, 5]
<br>Explanation: LCM of 5 and 10 is 10, while their GCD is 5.
<br>Input: a = 14 , b = 8
<br>Output: [56, 2]
<br>Explanation: LCM of 14 and 8 is 56, while their GCD is 2.
<br>Input: a = 1 , b = 1
<br>Output: [1, 1]
<br>Explanation: LCM of 1 and 1 is 1, while their GCD is 1.
<br>Expected Time Complexity: O(log(min(a, b)))
<br>Expected Auxiliary Space: O(1)

<br><br>Constraints:
<br>1 <= a, b <= 109

# Day4_Problem1

**Coding Ninjas : Check Armstrong**
<br>_link_ - https://www.naukri.com/code360/problems/check-armstrong_589
<br>Problem statement
<br>You are given an integer 'n'. Return 'true' if 'n' is an Armstrong number, and 'false' otherwise.

<br>An Armstrong number is a number (with 'k' digits) such that the sum of its digits raised to 'kth' power is equal to the number itself. For example, 371 is an Armstrong number because 3^3 + 7^3 + 1^3 = 371.

<br>Detailed explanation ( Input/output format, Notes, Images )
<br>Sample Input 1 : 1

<br>Sample Output 1 : true

<br>Explanation of Sample Input 1 :
<br>1 is an Armstrong number as, 1^1 = 1.

<br>Sample Input 2 : 103
<br>Sample Output 2 : false

<br>Sample Input 3 : 1634
<br>Sample Output 3 : true

<br>Explanation of Sample Input 3 :
<br>1634 is an Armstrong number, as 1^4 + 6^4 + 3^4 + 4^4 = 1634

# Day4_Problem2

**Geeks for Geeks : Sum of all divisors from 1 to n**
<br>_link_ - https://www.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1
<br>Given a positive integer n, The task is to find the value of Σi from 1 to n F(i) where function F(i) for the number i is defined as the sum of all divisors of i.

<br>Examples:
<br>Input: n = 4
<br>Output: 15
<br>Explanation:
<br>F(1) = 1
<br>F(2) = 1 + 2 = 3
<br>F(3) = 1 + 3 = 4
<br>F(4) = 1 + 2 + 4 = 7
<br>So, F(1) + F(2) + F(3) + F(4) = 1 + 3 + 4 + 7 = 15
<br>Input: n = 5
<br>Output: 21
<br>Explanation:
<br>F(1) = 1
<br>F(2) = 1 + 2 = 3
<br>F(3) = 1 + 3 = 4
<br>F(4) = 1 + 2 + 4 = 7
<br>F(5) = 1 + 5 = 6
<br>So, F(1) + F(2) + F(3) + F(4) + F(5) = 1 + 3 + 4 + 7 + 6 = 21
<br>Input: n = 1
<br>Output: 1
<br>Explanation:
<br>F(1) = 1
<br>So, F(1) = 1
<br><br>Constraints:
<br>1 <= n <= 106

# Day4_Problem3

**Coding Ninjas : Check Prime**
<br>_link_ - https://www.naukri.com/code360/problems/check-prime_624934
<br>Problem statement
<br>A prime number is a positive integer that is divisible by exactly 2 integers, 1 and the number itself.
<br>You are given a number 'n'.
<br>Find out whether 'n' is prime or not.

Example :
<br>Input: 'n' = 5

<br>Output: YES

<br>Explanation: 5 is only divisible by 1 and 5. 2, 3 and 4 do not divide 5.
Detailed explanation ( Input/output format, Notes, Images )
<br>Sample Input 1: 5

<br>Sample Output 1: YES

<br>Explanation of sample input 1 :
5 is only divisible by 1 and 5. 2, 3 and 4 do not divide 5.

<br>Sample Input 2:
6

<br>Sample Output 2:
NO

<br>Explanation of sample input 2 :
6 is divisible by 1, 2, 3, and 6. Therefore it is not a prime number.
Numbers having more than two factors are known as composite numbers.

<br>Sample Input 3:
1
<br>Sample Output 3:
<br>NO

<br>Explanation of sample input 3 :
<br>1 is divisible only by 1, having only one factor. Therefore it is not a prime number.
<br>1 is neither a prime nor a composite number.

<br>Expected time complexity :
The expected time complexity is O(sqrt('n')).

<br>Constraints :
<br>1 <= 'n' <= 10 ^ 9

<br>Time limit: 1 second

# Day5_Problem1

**TakeUForward: Print n times using Recursion**
<br>_link_ -https://takeuforward.org/recursion/introduction-to-recursion-understand-recursion-by-printing-something-n-times/
<br>Print Your Name n times.
<br>Print 1 to n using recursion.
<br>Print n to 1 using recursion.
<br>Sum of first n natural numbers using recursion.
<br>Factorial of n using recursion.
<br>Reverse array using recursion.

# Day5_Problem2

**Leetcode Problem 125: Valid Palindrome**
<br>_link_ - https://leetcode.com/problems/valid-palindrome/description/
<br>A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.

# Day6_Problem1

**Leetcode Problem 509: Fibonacci Number**
<br>_link_ - https://leetcode.com/problems/fibonacci-number/description/
<br>The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.
Given n, calculate F(n).

Example 1:

Input: n = 2
Output: 1
Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.
Example 2:

Input: n = 3
Output: 2
Explanation: F(3) = F(2) + F(1) = 1 + 1 = 2.
Example 3:

Input: n = 4
Output: 3
Explanation: F(4) = F(3) + F(2) = 2 + 1 = 3.

<br>Constraints:
<br>0 <= n <= 30

# Day6_Problem2

**Geeks for Geeks: Frequencies of limited range array**
<br>_link_ - https://www.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/0
<br>You are given an array arr[] containing positive integers. These integers can be from 1 to p, and some numbers may be repeated or absent. Your task is to count the frequency of all numbers that lie in the range 1 to n.

Note:

Do modify the array in-place changes in arr[], such that arr[i] = frequency(i) and assume 1-based indexing.
The elements greater than n in the array can be ignored when counting.

Examples

Input: n = 5, arr[] = [2, 3, 2, 3, 5], p = 5
Output: [0, 2, 2, 0, 1]
Explanation: Counting frequencies of each array element We have: 1 occurring 0 times. 2 occurring 2 times. 3 occurring 2 times. 4 occurring 0 times. 5 occurring 1 time, all the modifications done in the same given arr[].

Input: n = 4, arr[] = [3, 3, 3, 3], p = 3
Output: [0, 0, 4, 0]
Explanation: Counting frequencies of each array element We have: 1 occurring 0 times. 2 occurring 0 times. 3 occurring 4 times. 4 occurring 0 times.
Input: n = 2, arr[] = [8, 9], p = 9
Output: [0, 0]
Explanation: Counting frequencies of each array element We have: 1 occurring 0 times. 2 occurring 0 times. Since here P=9, but there are no 9th Index present so can't count the value.

Constraints:
1 ≤ n ≤ 105
1 ≤ p ≤ 4\*104
1 <= arr[i] <= p

# Day7_Problem1

**Geeks for Geeks: Largest element in array**
<br>_link_ - https://www.geeksforgeeks.org/problems/largest-element-in-array4009/0
<br>Given an array arr[]. The task is to find the largest element and return it.

Examples:

Input: arr = [1, 8, 7, 56, 90]
Output: 90
Explanation: The largest element of the given array is 90.

Input: arr = [5, 5, 5, 5]
Output: 5
Explanation: The largest element of the given array is 5.

Input: arr = [10]
Output: 10
Explanation: There is only one element which is the largest.

Constraints:
1 <= arr.size()<= 106
0 <= arr[i] <= 106

# Day7_Problem2

**Geeks for Geeks: Second largest element in array**
<br>_link_ - https://www.geeksforgeeks.org/problems/second-largest3735/1
<br>Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.

Note: The second largest element should not be equal to the largest element.

Examples:

Input: arr[] = [12, 35, 1, 10, 34, 1]
Output: 34
Explanation: The largest element of the array is 35 and the second largest element is 34.

Input: arr[] = [10, 5, 10]
Output: 5
Explanation: The largest element of the array is 10 and the second largest element is 5.

Input: arr[] = [10, 10, 10]
Output: -1
Explanation: The largest element of the array is 10 and the second largest element does not exist.

Constraints:

2 ≤ arr.size() ≤ 105

1 ≤ arr[i] ≤ 105

# Day7_Problem3

**Leetcode 1752: Check if array is Sorted and Rotated**
<br>_link_ - https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
<br>Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

There may be duplicates in the original array.

Note: An array A rotated by x positions results in an array B of the same length such that A[i] == B[(i+x) % A.length], where % is the modulo operation.

Example 1:

Input: nums = [3,4,5,1,2]
Output: true
Explanation: [1,2,3,4,5] is the original sorted array.
You can rotate the array by x = 3 positions to begin on the the element of value 3: [3,4,5,1,2].
Example 2:

Input: nums = [2,1,3,4]
Output: false
Explanation: There is no sorted array once rotated that can make nums.
Example 3:

Input: nums = [1,2,3]
Output: true
Explanation: [1,2,3] is the original sorted array.
You can rotate the array by x = 0 positions (i.e. no rotation) to make nums.

Constraints:

1 <= nums.length <= 100
1 <= nums[i] <= 100

# Day8_Problem1

**Leetcode 26: Remove duplicates from Sorted array**
<br>_link_ - https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
<br>Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
Return k.
Custom Judge:

The judge will test your solution with the following code:

int[] nums = [...]; // Input array
int[] expectedNums = [...]; // The expected answer with correct length

int k = removeDuplicates(nums); // Calls your implementation

assert k == expectedNums.length;
for (int i = 0; i < k; i++) {
assert nums[i] == expectedNums[i];
}
If all assertions pass, then your solution will be accepted.

Example 1:

Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
Example 2:

Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).

Constraints:

1 <= nums.length <= 3 \* 104
-100 <= nums[i] <= 100
nums is sorted in non-decreasing order.

# Day8_Problem2

**Leetcode 189: Rotate array**
<br>_link_ - https://leetcode.com/problems/rotate-array/description/
<br>Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation:
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]

Constraints:

1 <= nums.length <= 105
-231 <= nums[i] <= 231 - 1
0 <= k <= 105

# Day9_Problem1

**Leetcode 283: Move Zeroes**
<br>_link_ - https://leetcode.com/problems/move-zeroes/description/

Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

Example 1:

Input: nums = [0,1,0,3,12]

Output: [1,3,12,0,0]

Example 2:

Input: nums = [0]

Output: [0]

Constraints:

1 <= nums.length <= 104

-231 <= nums[i] <= 231 - 1

# Day9_Problem2

**Geeks for Geeks: Sorted array Search/ Linear Search**
<br>_link_ - https://www.geeksforgeeks.org/problems/who-will-win-1587115621/1

Sorted Array Search

Given an array, arr[] sorted in ascending order and an integer k. Return true if k is present in the array, otherwise, false.

Examples:

Input: arr[] = [1, 2, 3, 4, 6], k = 6

Output: true

Exlpanation: Since, 6 is present in the array at index 4 (0-based indexing), output is true.

Input: arr[] = [1, 2, 4, 5, 6], k = 3

Output: false

Exlpanation: Since, 3 is not present in the array, output is false.

Input: arr[] = [2, 3, 5, 6], k = 1

Output: false

Constraints:

1 <= arr.size() <= 106

1 <= k <= 106

1 <= arr[i] <= 106

# Day10_Problem1

**Geeks for Geeks: Union of 2 Sorted with Duplicates**
<br>_link_ - https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1

Given two sorted arrays a[] and b[], where each array may contain duplicate elements , the task is to return the elements in the union of the two arrays in sorted order.

Union of two arrays can be defined as the set containing distinct common elements that are present in either of the arrays.

Examples:

Input: a[] = [1, 2, 3, 4, 5], b[] = [1, 2, 3, 6, 7]

Output: 1 2 3 4 5 6 7

Explanation: Distinct elements including both the arrays are: 1 2 3 4 5 6 7.

Input: a[] = [2, 2, 3, 4, 5], b[] = [1, 1, 2, 3, 4]

Output: 1 2 3 4 5

Explanation: Distinct elements including both the arrays are: 1 2 3 4 5.

Input: a[] = [1, 1, 1, 1, 1], b[] = [2, 2, 2, 2, 2]

Output: 1 2

Explanation: Distinct elements including both the arrays are: 1 2.

Constraints:

1 <= a.size(), b.size() <= 105

-10^9 <= a[i] , b[i] <= 10^9

# Day11_Problem1

**LeetCode 268: Missing Number**
<br>_link_ - https://leetcode.com/problems/missing-number/description/

Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

Example 1:

Input: nums = [3,0,1]

Output: 2

Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.

Example 2:

Input: nums = [0,1]

Output: 2

Explanation: n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in the range since it does not appear in nums.

Example 3:

Input: nums = [9,6,4,2,3,5,7,0,1]

Output: 8

Explanation: n = 9 since there are 9 numbers, so all numbers are in the range [0,9]. 8 is the missing number in the range since it does not appear in nums.

Constraints:

n == nums.length

1 <= n <= 104

0 <= nums[i] <= n

All the numbers of nums are unique.

# Day11_Problem2

**LeetCode 485: Max Consecutive Ones**
<br>_link_ - https://leetcode.com/problems/max-consecutive-ones/description/

Given a binary array nums, return the maximum number of consecutive 1's in the array.

Example 1:

Input: nums = [1,1,0,1,1,1]

Output: 3

Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
Example 2:

Input: nums = [1,0,1,1,0,1]

Output: 2

Constraints:

1 <= nums.length <= 105

nums[i] is either 0 or 1.

# Day12_Problem1

**LeetCode 136: Single Number**
<br>_link_ - https://leetcode.com/problems/single-number/description/

Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

Example 1:

Input: nums = [2,2,1]

Output: 1

Example 2:

Input: nums = [4,1,2,1,2]

Output: 4

Example 3:

Input: nums = [1]

Output: 1

Constraints:

1 <= nums.length <= 3 \* 10^4

-3 \* 10^4 <= nums[i] <= 3 \* 10^4

Each element in the array appears twice except for one element which appears only once.

# Day12_Problem2

**Geeks for Geeks: Longest Sub-Array with Sum K**
<br>_link_ - https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1

Given an array arr[] containing integers and an integer k, your task is to find the length of the longest subarray where the sum of its elements is equal to the given value k. It is guaranteed that a valid subarray exists.

Examples:

Input: arr[] = [10, 5, 2, 7, 1, 9], k = 15

Output: 4

Explanation: The subarray [5, 2, 7, 1] has a sum of 15 and length 4.

Input: arr[] = [-1, 2, -3], k = -2

Output: 3

Explanation: The subarray [-1, 2, -3] has a sum of -2 and length 3.

Input: arr[] = [1, -1, 5, -2, 3], k = 3

Output: 4

Explanation: The subarray [1, -1, 5, -2] has a sum of 3 and a length 4.

Constraints:

1 ≤ arr.size() ≤ 106

-109 ≤ arr[i], k ≤ 109

# Day13_Problem1

**LeetCode 7: Reverse Integer**
<br>_link_ - https://leetcode.com/problems/reverse-integer/description/
<br>Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21

Constraints:

-231 <= x <= 231 - 1

# Day14_Problem1

**LeetCode 231: Power of Two**

Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.

Example 1:

Input: n = 1
Output: true
Explanation: 20 = 1
Example 2:

Input: n = 16
Output: true
Explanation: 24 = 16
Example 3:

Input: n = 3
Output: false

Constraints:

-231 <= n <= 231 - 1

# Day15_Problem1

**LeetCode 1009: Complement of Base 10 Integer**

The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
Given an integer n, return its complement.

Example 1:

Input: n = 5
Output: 2
Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in base-10.
Example 2:

Input: n = 7
Output: 0
Explanation: 7 is "111" in binary, with complement "000" in binary, which is 0 in base-10.
Example 3:

Input: n = 10
Output: 5
Explanation: 10 is "1010" in binary, with complement "0101" in binary, which is 5 in base-10.

Constraints:

0 <= n < 109

# Day16_Problem1

**Swap Alternate Elements**
arr = 1, 2, 3, 4, 5
output: 2 1 4 3 5

arr = 1, 2, 3, 4, 5, 6
output: 2 1 4 3 6 5

# Day16_Problem2

**Coding Ninjas: Duplicate In Array**
<br>_link_ - https://www.naukri.com/code360/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1
<br>Problem statement
You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.

For example:

Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.

Note :
A duplicate number is always present in the given array.
Detailed explanation ( Input/output format, Notes, Images )

Constraints:

1 <= T <= 10

2 <= N <= 10 ^ 5

1 <= ARR[i] <= N - 1

# Day17_Problem1

**LeetCode 1207: Unique Number of Occurrences**
<br>_link_ - https://leetcode.com/problems/unique-number-of-occurrences/description/
<br>Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
Example 2:

Input: arr = [1,2]
Output: false
Example 3:

Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true

Constraints:

1 <= arr.length <= 1000

-1000 <= arr[i] <= 1000

# Day17_Problem2

**LeetCode 442: Find All Duplicates in an Array**
<br>_link_ - https://leetcode.com/problems/find-all-duplicates-in-an-array/description/
<br>Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears at most twice, return an array of all the integers that appears twice.

You must write an algorithm that runs in O(n) time and uses only constant auxiliary space, excluding the space needed to store the output

Example 1:

Input: nums = [4,3,2,7,8,2,3,1]
Output: [2,3]
Example 2:

Input: nums = [1,1,2]
Output: [1]
Example 3:

Input: nums = [1]
Output: []

Constraints:

n == nums.length

1 <= n <= 105

1 <= nums[i] <= n

Each element in nums appears once or twice.

# Day18_Problem1

**Intersection Of Two Sorted Arrays**
<br>_link_ - https://www.naukri.com/code360/problems/intersection-of-2-arrays_1082149?source=youtube&campaign=love_babbar_codestudio1
<br>Problem statement

You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order. You have to find the intersection of these two arrays.

Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.

Note :

1. The length of each array is greater than zero.

2. Both the arrays are sorted in non-decreasing order.

3. The output should be in the order of elements that occur in the original arrays.

4. If there is no intersection present then return an empty array.

Detailed explanation ( Input/output format, Notes, Images )

Constraints :

1 <= T <= 100

1 <= N, M <= 10^4

0 <= A[i] <= 10^5

0 <= B[i] <= 10^5

Time Limit: 1 sec

# Day18_Problem2

**LEETCODE 1: Two Sum**
<br>_link_ - https://leetcode.com/problems/two-sum/description/
<br>Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9

Output: [0,1]

Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:

Input: nums = [3,2,4], target = 6

Output: [1,2]

Example 3:

Input: nums = [3,3], target = 6

Output: [0,1]

Constraints:

2 <= nums.length <= 10^4

-10^9 <= nums[i] <= 10^9

-10^9 <= target <= 10^9

Only one valid answer exists.

# Day19_Problem1

**LEETCODE 75: Sort Colors**
<br>_link_ - https://leetcode.com/problems/sort-colors/description/
<br>Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

Example 1:

Input: nums = [2,0,2,1,1,0]

Output: [0,0,1,1,2,2]

Example 2:

Input: nums = [2,0,1]

Output: [0,1,2]

Constraints:

n == nums.length

1 <= n <= 300

nums[i] is either 0, 1, or 2.

# Day20_Problem1

**LEETCODE 15: 3Sum**
<br>_link_ - https://leetcode.com/problems/3sum/description/
<br>Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

Example 1:

Input: nums = [-1,0,1,2,-1,-4]

Output: [[-1,-1,2],[-1,0,1]]

Explanation:

nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.

nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.

nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.

The distinct triplets are [-1,0,1] and [-1,-1,2].

Notice that the order of the output and the order of the triplets does not matter.

Example 2:

Input: nums = [0,1,1]

Output: []

Explanation: The only possible triplet does not sum up to 0.

Example 3:

Input: nums = [0,0,0]

Output: [[0,0,0]]

Explanation: The only possible triplet sums up to 0.

Constraints:

3 <= nums.length <= 3000

-105 <= nums[i] <= 105
