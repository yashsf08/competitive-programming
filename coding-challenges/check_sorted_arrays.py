"""
Program to check whether the array is sorted or sorted and cyclic.
"""


from typing import List


def check_sorted(arr: List) -> Bool:
    premier_element = arr[0]
    for i in range(len(arr) - 1):
        if (arr[i] > arr[i+1]):
            return False
        
    


        


    
    return True


def main():
    arr = [1, 2, 3, 4, 5]
    
    result = check_sorted(arr)

    if result:
        print("The list is sorted")
    else:
        print("It's not sorted!")


    return "Something's wrong with the program"

    
    



