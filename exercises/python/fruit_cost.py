from typing import List

def solution(a: List[str]) -> int: 
    max_cost = float("-inf")
    for str_ in a: 
        str_len = 0
        letter_found = False
        for char_ in str_: 
            str_len += 1
            if (97 <= ord(char_) and ord(char_) <= 122) or (65 <= ord(char_) and ord(char_) <= 90): 
                letter_found = True
        if letter_found = True: 
            max_cost = max(max_cost, str_len)
        else: 
            max_cost = max(max_cost, int(str_))
    return max_cost
    
if __name__ == '__main__': 
    line = input() 
    arr = line.strip().split()
    output = solution(arr)
    print(output)
    
