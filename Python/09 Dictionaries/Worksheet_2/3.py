auction = {'lot1': 'coin', 'lot2': 'stamp', 'lot3': 'coin', 'lot4': 'comic'}

unique_collectibles = list(set(auction.values()))
print(f"Unique collectibles: {unique_collectibles}")