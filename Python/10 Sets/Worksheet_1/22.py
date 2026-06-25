friends_colors = [
  ["red", "blue"],
  ["green", "red"],
  ["yellow", "blue"]
]

all_colors = set()
for color_list in friends_colors:
    all_colors.update(color_list)

print(all_colors)