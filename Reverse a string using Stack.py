'''You are given a string S, 
the task is to reverse the string using stack.

 

Example 1:


Input: S="GeeksforGeeks"
Output: skeeGrofskeeG
 

Your Task:
You don't need to read input or print anything. 
Your task is to complete the function reverse() 
which takes the string S as an input parameter
and returns the reversed string.'''

def reverse(S):
    str = ""

    for i in S:

        str = i + str

    return str
 
    
    
