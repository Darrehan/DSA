# coding for 100 days of code
line1 = ["⬜️","️⬜️","️⬜️"]
line2 = ["⬜️","⬜️","️⬜️"]
line3 = ["⬜️️","⬜️️","⬜️️"]
map = [line1, line2, line3]
print("Hiding your treasure! X marks the spot.")
position = input("Where do you want to put the treasure? Provide input in the form of 'a1' or 'b3' or 'c2' :") 
first_letter = position[0].lower()
second_letter = int(position[1])
abc=['a','b','c']
first_letter_index=abc.index(first_letter)
second_letter_index=second_letter-1
map[first_letter_index][second_letter_index]="X"
print(f"{line1}\n{line2}\n{line3}")
