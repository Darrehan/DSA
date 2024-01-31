# coding for random module
import random

from sympy import N
names=["rehan","arman","sultan",  "khan","arif"]
total_size=len(names)
# here list index start from 0 to 4
random_number=random.randint(0,total_size-1)
print(f"{names[random_number]} is going to buy the meal today!")
for name  in names:
    print(name)