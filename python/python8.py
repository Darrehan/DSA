#coding for 100 days of code
print("welcome to the Roller coster buddy 😌!")
# doing explicit type casting
height=int(input("what is your height in cm buddy ?\n"))
age=int(input("what is your age buddy ?\n"))
bill=0
if height>=120:
   if age<12:
       bill = 5
       print("pay $5 buddy !")
       want_photo= input("do you want a photo buddy  type y or n?\n")
       if want_photo=="y":
         bill+=3
         print(f"your total bill is ${bill}")
   elif age<=18:
        bill = 7
        print("pay $7 buddy !")
        want_photo= input("do you want a photo buddy  type y or n?\n")
        if want_photo=="y":
          bill+=3
          print(f"your total bill is ${bill}")
   elif age>=45 and age<=55:
       print("pay $ 0 buddy !")
       want_photo= input("do you want a photo buddy  type y or n?\n")
       if want_photo=="y":
         bill+=3
         print(f"your total bill is ${bill}")
else:
    print("you need to grow taller buddy !")