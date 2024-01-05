#coding for 100 days of code
year=int(input("enter the year buddy !\n"))
if year%4==0:
    if year%100==0:
        if year%400==0:
            print("leap year buddy !")
        else:
            print("not a leap year buddy !")
    else:
        print("leap year buddy !")
else:
    print("not a leap year buddy !")
