my_favs = ["Tom", "Jerry", "Ben 10"]
friend_favs = ["Powerpuff", "Jerry", "Scooby"]

common = set(my_favs).intersection(friend_favs)

if common:
    common_item = next(iter(common)) 
    print(f'Yes! "{common_item}" is common.')