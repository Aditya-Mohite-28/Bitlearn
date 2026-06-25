old_hw = ["math", "science", "art"]
new_hw = ["math", "history", "science"]

set_old = set(old_hw)
set_new = set(new_hw)

missing = set_old - set_new
additional = set_new - set_old

for item in missing:
    print(f"Missing: {item}")
for item in additional:
    print(f"Additional: {item}")