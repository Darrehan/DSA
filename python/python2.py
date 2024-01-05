# coding for 100 days of code
print("welcome to the BMI calculator.")
# implicit coversion of data type ie type casting
weight=input("what is your weight in kg buddy ?\n")
height=input("what is height in m buddy ?\n")
weight_1=int(weight)
height_1=float(height)
bmi=weight_1/(height_1**2)
print(type(bmi))
# f string 
print(f"your BMI is {bmi}")
