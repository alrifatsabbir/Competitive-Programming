# String Palindrome

string = input("")
reverse_string = string

reverse_string = string[::-1]
if (reverse_string == string):
  print("Yes - It's Palindrome")
else:
  print("No, It's not")