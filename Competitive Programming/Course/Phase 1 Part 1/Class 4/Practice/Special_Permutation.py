
def result():
    n = int(input())
    print(n, end=" ")
    for i in range(1, n):
        print(i, end=" ")

    print()

t = int(input())

for _ in range(t):
    result()
