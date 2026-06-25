spells = {'fireball': 5, 'healing': 10, 'curse': 2}
banned = ['curse', 'fireball']

filtered_spells = {k: v for k, v in spells.items() if k not in banned}
print(filtered_spells)