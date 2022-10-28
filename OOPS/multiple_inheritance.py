class Parent1():
    def assign_string_one(self,str1):
        self.str1= str1
    def show_string_one(self):
        print (self.str1)
class Parent2():
    def assign_string_two(self,str2):
        self.str2=str2
    def show_string_two(self):
        print (self.str2)
class Derived(Parent1,Parent2):
    def assign_string_three(self, str3):
        self.str3=str3
    def show_string_three(self):
        print (self.str3)   
d1=Derived()
d1.assign_string_one("one")
d1.assign_string_two("two")
d1.assign_string_three("three")
d1.show_string_one()
d1.show_string_two()
d1.show_string_three()

    