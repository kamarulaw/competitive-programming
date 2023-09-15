from typing import List
from collections import defaultdict

# Coding Challenge completed in a Starbucks 9/15/23
# fruit_cost.py was also completed on the same date in a Starbucks
def solution(s: str) -> int: 
    # write your solution here
    substrings = []
    for i in range(len(s)): 
        substring = ""
        for j in range(i, i+4): 
            if (j < len(s)): 
                substring += s[j]
            if (len(substring) == 4): 
                substrings.append(substring)
    for ss in substrings: 
        cool_ss_count = 0
        for char in ss: 
            dd = defaultdict(int)
            dd[char] += 1
            if (dd[char] > 1): 
                continue
        cool_ss_count += 1
    return cool_ss_count
    
if __name__ == '__main__': 
    a = input()
    output = solution(a)
    print(output)
