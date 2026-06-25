last_week = ["hide", "seek", "tag"]
this_week = ["hide", "seek", "jump", "run"]

diff = list(set(this_week) - set(last_week))

print(sorted(diff))