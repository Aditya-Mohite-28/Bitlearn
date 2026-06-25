codes = {'alpha': 'ok', 'beta': 'wait'}
new_labels = {'alpha': 'red', 'beta': 'blue'}

renamed = {new_labels[k]: v for k, v in codes.items() if k in new_labels}
print(renamed)