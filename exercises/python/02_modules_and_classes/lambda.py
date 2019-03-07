# Exercises - Python session 2
# Lambda


# Given a list of words (`str`), construct a new **ordered** list from the former
# where words are sorted by their reversed spelling using a `lambda` function.


mylist = ["alphabet", "narrow", "programming"]

mylist2 = sorted(mylist, key = lambda x: x[::-1])

print (mylist2)
