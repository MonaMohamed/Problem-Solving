# Different Problem Solutions with Hints in C++.
1- [LightOJ](https://lightoj.com/) <br />
2- Cracking the coding interview book

## HINTS
Hints to selected problems of LightOJ &  Cracking the coding interview book.<br/>
Feel free to add or update the hints by sending a pull a request.

#### 1 - Binary Simulation(https://lightoj.com/problem/binary-simulation)
Given a binary number, we are about to do some operations on the number. Two types of operations can be here:<br/>
I i j, inverts all the bits from i to j (inclusive).<br/>
Q i return whether the ith bit is 0 or 1.<br/>
The MSB (most significant bit) is the first bit (i.e. i=1). The binary number can contain leading zeroes.
#### 2 - Is Unique 
Implementing an algorithm to determine if a string has all unique characters.
#### 3 - Check Permutation 
Given two strings and check if one is a permutation of the other.
#### 4 - Palindrome Permutation 
Given a string, write a function to check if it is a permutation of a palindrome.<br/>
A palindrome is a word or phrase that is the same forwards and backwards.<br/>
A permutation is a rearrangement of letters.<br/>
The palindrome does not need to be limited to just dictionary words.<br/>
You can ignore casing and non-letter characters.<br/>
Input: Tact Coa <br/>
Output: True (permutations: “taco cat”. “atco cta”. etc.)
#### 5 - One Away
Given two strings, return true if they are one edit away from each other,else return false.<br/>
An edit is insert/replace/delete a character. <br/>
Ex. {"abc","ab"}->true, {"abc","adc"}->true, {"abc","cab"}->false 
#### 6 - String Compression
Implement a method to perform basic string compression using the counts of repeated characters. <br/>
For example, the string aabcccccaaa would become a2b1c5a3.<br/>
If the compressed string would not become smaller than the original string, your method should return the original string.
You can assume the string has only uppercase and lowercase letters (a-z).