arr = []

print("Enter numbers (-1 to stop):")
while True:
    num = int(input())
    if num == -1:
        break
    arr.append(num)

print("Your values:", arr)
