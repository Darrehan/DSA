#coding for 100 days of code
print("welcome to the tip calculator buddy.")
total_Bill=input("What was the total bill buddy ie Rs?\n")
total_tip=input("What percentage tip you wana give to the person buddy ie 10,12,11?\n")
total_people=input("in how many people you wana distribute the bill buddy ?\n")
total_tip_value=int(total_Bill)*(int(total_tip)/100)
total_bill_with_tip=int(total_Bill)+total_tip_value
bill_per_person=total_bill_with_tip/int(total_people)
# another way of rounding off the value
final_amount="{:.2f}".format(bill_per_person)
print(f"each person should pay {final_amount} buddy , tip is {round(total_tip_value,4)} and total bill is {total_bill_with_tip} ")