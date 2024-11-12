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
