import numpy as np

array = np.random.randint(100, size = 50)
print(f"Unsorted Array : {array}")

for i in range(1,len(array)):
    key = array[i]
    for j in range(i-1,-1,-1):
        if array[j] > key :
            array[j+1] = array[j]
            array[j] = key
        else:
            break

print(f"Sorted Array : {array}")