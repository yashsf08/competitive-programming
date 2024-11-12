def binary_search(arr: list[int], size: int, key: int) -> int:

    start: int = 0
    end: int = size - 1
    mid: int = start + (end - start) // 2

    while start <= end:
        if arr[mid] == key:
            return mid
        elif arr[mid] < key:
            start = mid + 1
        else:
            end = mid - 1

        mid = start + (end - start) // 2

    return -1


def main():
    """arr: list[int] = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]"""
    arr: list[int] = [1, 2, 3, 4, 5]
    key: int = 5
    result: int = binary_search(arr, len(arr), key)
    print(result)
    if result > -1:
        print("Element Present!")
    else:
        print("Element missing!")


if __name__ == "__main__":
    main()
