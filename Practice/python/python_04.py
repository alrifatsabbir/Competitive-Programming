# Largest/Smallest value in array

n = int(input())
arr = []

for i in range(n):
    arr.append(int(input()))

max_value = arr[0]
min_value = arr[0]

for i in range(1, n):
    if arr[i] > max_value:
        max_value = arr[i]
    if arr[i] < min_value:
       min_value = arr[i]

print("Largest: ", max_value)
print("Smallest: ", min_value)