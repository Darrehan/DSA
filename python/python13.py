# coding for average height calculator
student_heights = input("enter the students height here buddy ").split()
for n in range(0, len(student_heights)):
  student_heights[n] = int(student_heights[n])
total=0
for height in student_heights:
  total+=height
student=0
for student_count in student_heights:
   student+=1
Average=round(total/student)
print(f"total height = {total}")
print(f"number of students = {student}")
print(f"average height = {Average}")
