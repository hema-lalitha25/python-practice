# prime_checker.py
# Check whether a number is prime (efficient trial division)

import math

def is_prime(n: int) -> bool:
    if n <= 1:
        return False
    if n <= 3:
        return True
    if n % 2 == 0:
        return False
    r = int(math.isqrt(n))
    for i in range(3, r+1, 2):
        if n % i == 0:
            return False
    return True

def main():
    try:
        n = int(input("Enter an integer: "))
    except ValueError:
        print("Please enter a valid integer.")
        return
    print(f"{n} is", "prime" if is_prime(n) else "not prime")

if __name__ == "__main__":
    main()
