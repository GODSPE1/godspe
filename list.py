
letters = ['a', 'b', 'c','g','g','g', 'd', 'e', 'f', 'g']
print(letters)
letters.append('zipper')
letters.append('u')
letters.append('t')
print(letters)
ont = list(range(10))
print(ont,end="\n")
print(len(ont))
list2 = ont + letters
print("list2 = {}".format(list2))
print ('u' in letters)
print("count = {}".format(list2.count('g')))
print("the index is: {}".format(list2.index('u')))
print(letters)
print(ont)
letters.reverse()
ont.reverse()
print("reversed of letters is: {}".format(letters))
print("list reversed  ={}".format(ont))
print("using slicing to get the orignal letters string is: {}".format(letters[::-1]))
print("using slicing to get the original list string is: {}".format(ont[::-1]))

"""
names = ["Harry", "Obi", "ada", "Ngoo"]
# Define alist of names
names.append("Dragon")
names.append("Transformer")
names.append("Ngozi")
names.append("Obi")

names[0] = "jon"
print(names)
"""