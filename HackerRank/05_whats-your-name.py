# Problem Name- Whats Your Name
# Problem Link- https://www.hackerrank.com/challenges/whats-your-name/problem
# 
# Description- Complete the 'print_full_name' function below.
# The function is expected to return a STRING.
# The function accepts following parameters:
#  1. STRING first
#  2. STRING last
#

def print_full_name(first, last):
    # Write your code here
    print(f"Hello {first} {last}! You just delved into python.")

if __name__ == '__main__':
    first_name = input()
    last_name = input()
    print_full_name(first_name, last_name)