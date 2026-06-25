class Vehicle:
    pass

class Bus(Vehicle):
    def __init__(self):
        pass
        
Bus1 = Bus()
print(issubclass(Bus, Vehicle))