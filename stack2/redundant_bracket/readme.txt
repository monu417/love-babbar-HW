Problem Statement
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
2
(a+b)
(a+c*b)+(c))
Sample Output 1 :
No
Yes
Explanation Of Sample Input 1 :
In the first test case, there are no redundant brackets. Hence, the output is “No”. 


In the second test case, the brackets around the alphabet ‘c’( index 8 and index 10) are redundant. Hence the output is “Yes”.
Sample Input 2 :
2
(a*b+(c/d))
((a/b))
Sample Output 2 :
No
Yes
Explanation Of Sample Input 2 :
In the first test case, there are no redundant brackets. Hence, the output is “No”. 


In the second test case, the brackets around the subexpression “(a+b)” ( index 0 and index 6) are redundant. Hence the output is “Yes”.
