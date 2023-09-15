# Reversing-String-in-Cpp

To reverse a string, we follow the same approach as reversing an integer array, i.e. swapping the elements at start with elements at the end. First we need to find the length of our string to initialize the pointers for start and end in the reverseString function. 

For calculating the length we need to initialize a count variable as 'int count=0;', then inside a for loop that runs until the null character is reached in the string we keep incrementing the count variable by 1, and then return this count.

Inside the reverseString function, we first initialize two integer variables 's' and 'e'. Then we run a while loop until 's' is less than 'e' and keep swapping the character at sth index with the eth index character, after which we increment s and decrement e.
