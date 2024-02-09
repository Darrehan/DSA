# coding for high score
student_scores = input("Input a list of student scores\n").split()
for n in range(0, len(student_scores)):
  student_scores[n] = int(student_scores[n])
height_score=0
for student in student_scores:
  if student>height_score:
     height_score=student
print(f"The highest score in the class is:{height_score}")
# this is the code for fizzbuzz game
for number in range(1,101):
  if number%3==0 and number%5==0:
      print("FizzBuzz")
  elif number%3==0:
     print("Fizz")
  elif number%5==0:
     print("Buzz")
  else:
      print(number)