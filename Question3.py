def is_prime(num: int) -> bool:
    """This is a solution aimed at showing whether a number is prime or not using a boolean function"""
    if num <= 1:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

num = int(input("Please enter a positive number: "))
if is_prime(num):
    print(f"{num} is a prime number.")
else:
    print(f"{num} is not a prime number.")
