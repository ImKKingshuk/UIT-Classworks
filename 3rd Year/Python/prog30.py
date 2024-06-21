# Write a function that takes a list of words and returns the length of the longest one.

def longest_word_length(words):
    return max(len(word) for word in words)

words = input("Enter words separated by space: ").split()
print(f"Length of the longest word: {longest_word_length(words)}")
