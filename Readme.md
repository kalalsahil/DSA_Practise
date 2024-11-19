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
