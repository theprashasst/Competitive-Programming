"""
-------------------------------------------------------------------------------
      competitive-programming-python
     Last updated: 2025-06-18
-------------------------------------------------------------------------------
"""
import sys
from collections import *
from itertools import *
from functools import *
from math import *

# ------------------------------------------------------------------------------
# Fast I/O
# ------------------------------------------------------------------------------

def r_int():
    return int(sys.stdin.readline().strip())

def r_str():
    return sys.stdin.readline().strip()

def r_ints():
    return list(map(int, sys.stdin.readline().split()))

def r_strs():
    return list(map(str, sys.stdin.readline().split()))

# ------------------------------------------------------------------------------
# Main Logic
# ------------------------------------------------------------------------------
from collections import defaultdict
def solve():
    """Your main solution logic goes here."""
    n=r_int()
    m=r_int()
    cols=r_int()
    edges = [r_ints() for i in range(m)]

 
    tree= defaultdict(set)
    for u,v in edges:
        tree[u].add(v)
    # print(tree)

    def rec(node,sub):
        if len(tree[node])==0: return 1,set([node])
        curr=0
        for child in tree[node]:
            cuse,csub=rec(child,set())
            curr+=cuse
            for s in csub:
                sub.add(s)
        return (sum(1 if node%child==0 else 0 for child in sub)+curr+1, sub)
    
    print( rec(1,set())[0])


    

# ------------------------------------------------------------------------------
# Entry Point
# ------------------------------------------------------------------------------

if __name__ == "__main__":
    # To run a single test case
    solve()

    # To run multiple test cases
    # try:
    #     t = r_int()
    #     for _ in range(t):
    #         solve()
    # except (IOError, ValueError):
    #     # Handles cases where 't' is not provided
    #     solve()

    