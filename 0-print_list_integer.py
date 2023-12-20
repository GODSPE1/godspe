
courses = ['History', 'Microbiolgy', 'Math', 'Physics', 'CompSci']
print("my_list before pop: {}".format(courses))
popped = courses.pop()
print("my_list after pop: {}".format(courses))
print("popped value is {}".format(popped))
courses.reverse()
print("reversed: {}".format(courses))
alpha = ['a','b','c','d','e','f','g','h']
print(alpha)
c_str = ' - '.join(alpha)
print(c_str)
courses.sort()
print("sorted: {}".format(courses))
courses.sort(reverse=True)
print("sorted in reversed order: {}".format(courses))


new_list =c_str.split(' - ')
print("new_list is {}".format(new_list))

print(courses)
my_list = [11, 7, 12, 3, 1, 10, 8, 2, 9, 1,6, 4, 5]
print("sum = {}".format(sum(my_list)))
print("index: {}".format(my_list.index(5)))
for i in my_list:
    print(i)
for index, i in enumerate(my_list, start=1):
    print("{} : {}".format(index, i))

print("before: {}".format(my_list))
removed_4rm_list = my_list.remove(1)
my_list.remove(1)
print("4rm_removed: {}".format(removed_4rm_list))
print("after: {}".format(my_list))

"""
if my_list != 0:
    largest = my_list[0]

    for num in my_list:
        if num > largest:
            largest = num
        else:
            largest

    print("{}".format(largest))
    """