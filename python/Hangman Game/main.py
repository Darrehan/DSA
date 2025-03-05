import random
from hangman_words import word_list
from hangman_art import logo
chosen_word = random.choice(word_list)
word_length = len(chosen_word)
end_of_game = False
lives = 6
print(logo)
display = []
for _ in range(word_length):
    display.append("_")
while not end_of_game:
    guess = input("Guess a letter: ").lower()
    # HERE: - Check guessed letter
    if guess in display:
        print(f"You've already guessed {guess}")
    for position in range(word_length):
        letter = chosen_word[position]
        if letter == guess:
            display[position] = letter
    # in allows us to check element is present or not
    #Check if user is wrong.
    if guess not in chosen_word:
        # If the letter is not in the chosen_word, print out the letter and let them know it's not in the word.
        print(f"You guessed {guess}, that's not in the word. You lose a life.")
        lives -= 1
        if lives == 0:
            end_of_game = True
            print("You lose.")

    #Join all the elements in the list and turn it into a String.
    print(f"{' '.join(display)}")
    #Check if user has got all letters.
    if "_" not in display:
        end_of_game = True
        print("You win.")
    #- Import the stages from hangman_art.py and make this error go away.
    from hangman_art import stages
    print(stages[lives])