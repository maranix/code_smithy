"""
Task
Read an integer N. For all non-negative integers i<N, print i^2. See the sample for details.
"""

import sys

n=int(input())
i=0
c=0

while i < n:
        c=i*i
        print(c)
        i+=1