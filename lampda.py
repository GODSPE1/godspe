sum = lambda x, y : x + y
print(sum(3,4))

my_dict = {'age': '25', 'name':'oge','city':'wonderland'}
print(my_dict)
my_dict.get('hi')
a = { 'id': 89, 'name': "John",'pro':[1,2,3,4], 'friends': [ { 'id': 82, 'name': "Bob" }, { 'id': 83, 'name': "Amy" } ] }
print(a.get('friends')[0])
agetvalue = a.get('age')
print(agetvalue )
""""
def time_2(num):
    return num * 2


two_time2 = time_2
print("4 * 2 = {}".format(time_2(4)))
     
     
     
def get_func_by_num(num):


    def mult_by(value):
        return num * value
    a
    return mult_by

generated_func = get_func_by_num(5)

print("5 * 10 = ", generated_func(10))
"""
     