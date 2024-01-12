# This is a program to calculate the score between two people
print("The  Calculator is calculating your score...")
name1 = input("What is your name?") 
name2 = input("What is their name?") 
combined_names=name1+name2
lower_names=combined_names.lower()
t=lower_names.count("t")
r=lower_names.count("r")
u=lower_names.count("u")
e=lower_names.count("e")
first_digit=t+r+u+e
l=lower_names.count("l")
o=lower_names.count("o")
v=lower_names.count("v")
e=lower_names.count("e")
second_digit=l+o+v+e
# here we are doing type casting
final=int(str(first_digit)+str(second_digit))
if (final<10) or (final>90):
  print(f"Your score is {final}, you go together like coke and mentos.")
elif (final>=40) and (final<=50):
  print(f"Your score is {final}, you are alright together.")
else:
  print(f"Your score is {final}.")