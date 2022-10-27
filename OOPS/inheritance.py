from cgi import print_arguments


class Vehicle:
    def __init__(self,milege,cost):
        self.milege=milege
        self.cost=cost
    def show_details(self):
        print("I am Vehicle")
        print("Milege of Vechile is",self.milege)
        print("Cost of Vechile id",self.cost)
        
v1=Vehicle(500,500)
v1.show_details()

class Car(Vehicle):
    def __init__(self,milege,cost,tyres,hp):
        super().__init__(milege,cost)
        self.tyres=tyres
        self.hp=hp
        
    def show_car_details(self):
        print("I am a car")
        print("Number of tyres are",self.tyres)
        print("value of horse power is",self.hp)

c1=Car(200,12000,4,300)
c1.show_details()
c1.show_car_details()