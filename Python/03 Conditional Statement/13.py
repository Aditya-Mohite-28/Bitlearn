led1, led2, led3 = map(int, input().split(','))
on_leds = []
if led1: on_leds.append("LED1 ON")
if led2: on_leds.append("LED2 ON")
if led3: on_leds.append("LED3 ON")
if on_leds:
    print(", ".join(on_leds))
else:
    print("All LEDs off")