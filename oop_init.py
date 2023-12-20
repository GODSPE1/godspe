class person:
    def __init__(self, name, age):
        self.name = name
        self.age = age
        self.height = 30

    def say_hi(self):
        print("hello my name is {} and am {} years old with {}cm  height".format(self.name, self.age, self.height,))

p = person('swap', 20)
p.say_hi()
