def merge(arr: list[int], low: int, mid: int, high: int) -> None:
    """Merge Two sorted arrays in O(n) time with O(n) space"""

    left: int = low
    right: int = mid + 1
    temp: list[int] = []

    while left <= mid and right <= high:
        if arr[left] <= arr[right]:
            temp.append(arr[left])
            left = left + 1
        else:
            temp.append(arr[right])
            right = right + 1

    while left <= mid:
        temp.append(arr[left])
        left = left + 1

    while right <= high:
        temp.append(arr[right])
        right = right + 1

    for i in range(low, high + 1):
        arr[i] = temp[i - low]

    return


def merge_sort(arr, low, high) -> None:
    """
    Performing Merge Sort
    """
    if low >= high:
        return

    mid: int = (low + high) // 2

    merge_sort(arr, low, mid)
    merge_sort(arr, mid + 1, high)
    merge(arr, low, mid, high)
    return


def print_array(arr):
    """
    For printing the array
    """
    print(*arr, sep=" ")
    print()


def main():
    """
    Main Function Call.
    """

    arr: list[int] = [4, 1, 3, 9, 8, 10, 3, 5, 2]
    # arr: list[int] = [4, 1]
    # arr: list[int] = [4]
    # arr: list[int] = []
    print("printing the array before")
    print_array(arr)
    merge_sort(arr, 0, len(arr) - 1)
    print("printing the array after")
    print_array(arr)


if __name__ == "__main__":
    main()
