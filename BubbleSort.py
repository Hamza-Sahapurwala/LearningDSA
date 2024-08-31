
# ! Bubble Sort

# * Allegedly very time consuming and memory intensive

# * Time Complexity is O(n^2)

n = [7, 12, 9, 11, 3] # * This is a test case

lengthofarray = len(n) - 1      # * This is for looping through the array (you can't access elements which don't exist in the loop) 

for i in range(lengthofarray):

    swapped = False # * This is a flag for when we are very lucky and that we want to stop looping through the array when it is already sorted

    for j in range(lengthofarray - i):

        if n[j]>n[j + 1]:

            n[j], n[j + 1] = n[j + 1], n[j]

            swapped = True
    
    if not swapped:
        
        break

print(n)