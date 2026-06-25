power_on, overcurrent, overvoltage = [x.strip() == 'True' for x in input().split(',')]
if overcurrent and overvoltage:
    print("Critical Failure")
elif overcurrent:
    print("Shut Down: Overcurrent")
elif overvoltage:
    print("Shut Down: Overvoltage")
elif power_on:
    print("System Safe")