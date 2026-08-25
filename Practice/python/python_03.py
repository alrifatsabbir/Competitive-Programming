# Exchange value in two variable without using third variable

a = int(input())
b = int(input())
print("Before Swap: A = ", a ," and B = ", b)

a = a + b
b = a - b
a = a -b
print("After Swap: A = ", a ," and B = ", b)