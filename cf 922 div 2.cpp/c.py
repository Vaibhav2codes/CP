def take_input():
    x, y, z = map(int, input().split())
    return x, y, z

def swap_if_needed(a, b):
    if a > b:
        return b, a
    return a, b

def calculate_difference(a, b):
    return b - a

def find_smallest_value(a, b, c, difference):
    result = 0

    for i in range(60, -1, -1):
        if ((a ^ b) >> i & 1):
            if (result + (1 << i) <= c):
                if (0 == (a >> 1) & 1):
                    if (1 << (i + 1) <= difference):
                        result += (1 << i)
                        difference -= (1 << (1 + i))

    return result

t = int(input())

for _ in range(t):
    x, y, z = take_input()
    x, y = swap_if_needed(x, y)
    difference = calculate_difference(x, y)
    smallest_value = find_smallest_value(x, y, z, difference)

    z=abs((x ^ smallest_value) - (y ^ smallest_value))

    print(smallest_value)



