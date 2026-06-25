v, c = map(float, input().split(','))
v_err = not (3.0 <= v <= 3.3)
c_err = not (10 <= c <= 500)
if v_err and c_err:
    print("Power Error")
elif v_err:
    print("Voltage Error")
elif c_err:
    print("Current Error")
else:
    print("Power OK")