class Dog:
    def  __init__(self, name="", height = 0, weight = 0):
        self.name = name
        self.height = height
    def run(self):
        print("{} the dog runs".format(self.name))

    def eat(self):
        print("{} the dog eat".format(self.name))

    def barks(self):
        print("{} dog barks".format(self.name))


def main():

    bowser = Dog("f", 45, 22)
    bowser.height()



main()

#Spot
"""class Point():
    def __init__(self, x, y):
        self.x = x
        self.y = y

        yi = Point(2, 8)

        print(yi.x)
        print(yi.y)"""