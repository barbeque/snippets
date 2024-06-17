import random

x = int(random.random() * 999)

high = 999
low = 0

guess = 1

while True:
    j = (high + low) // 2
    print(j)

    if x < j:
        high = j
    elif x > j:
        low = j
    else:
        print(f"Got it ({x}) in {guess} guesses")
        break

    guess += 1
