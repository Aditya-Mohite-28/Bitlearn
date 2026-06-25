a = ["Toy Story", "Frozen", "Moana"]
b = ["Moana", "Coco", "Frozen"]
c = ["Frozen", "Moana", "Up"]

common_movies = list(set(a).intersection(b, c))
print(sorted(common_movies, reverse=True))