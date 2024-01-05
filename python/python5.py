# Day-3 coding for 100 days of code
print("Thank you for choosing  Pizza Deliveries!")
size = input("What size pizza do you want? s, m, or l\n") 
add_pepperoni = input("Do you want pepperoni? y or n\n") 
extra_cheese = input("Do you want extra cheese? y or n\n") 
bill=0
if size=="s":
   bill+=15
elif size=="m":
   bill+=20
else :
   bill+=25
   
if add_pepperoni=="y":
   if size=="s":
     bill+=2
   else:
    bill+=3

if extra_cheese=="y":
   bill+=1
print(f"Your final bill is: {bill}.")
