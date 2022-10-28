class Parent():
    def get_name(self,name):
        self.name=name
    def show_name(self):
        print(self.name)
class Child(Parent):
    def get_age(self,age):
        self.age=age
    def show_age(self):
        print(self.age)
class Grandchild(Child):
    def get_gender(self,gender):
        self.gender=gender
    def show_gender(self):
        print(self.gender)
gc=Grandchild()
gc.get_name("Aryan")
gc.get_age(21)
gc.get_gender("Male")
gc.show_name()
gc.show_age()
gc.show_gender()