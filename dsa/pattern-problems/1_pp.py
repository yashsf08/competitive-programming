def print_1(n: int) -> None:
    """Solve the following pattern problem.
    ****
    ****
    ****
    ****
    """
    for _ in range(n):
        print()
        for _ in range(n):
            print("*", end="")
    print()
    print()

    return


def print_2(n: int) -> None:
    """Solve the following pattern problem.
    *
    **
    ***
    ****
    *****
    """
    for i in range(n):
        for j in range(i + 1):
            print("*", end="")
        print()
    print()
    print()
    return


def print_3(n: int) -> None:
    for i in range(1, n + 1):
        for j in range(i):
            print(j + 1, end="")
        print()
    print()
    print()
    return


def print_10(n: int) -> None:
    flag = 1
    for i in range(n):
        if i % 2 == 0:
            flag = 1
        else:
            flag = 0
        for j in range(i + 1):
            print(flag, end="")
            flag = 1 - flag
        print()

    return




def main():
    n = int(input())
    print_11(n)
    print_10(n)


if __name__ == "__main__":
    main()
