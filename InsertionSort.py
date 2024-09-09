
# ! Insertion Sort

# * Time Complexity O(n^2) (Best, Avg and Worst Case time complexity differs a lot)

n = [7, 12, 9, 11, 3]

lengthofarray = len(n)

# * The array is divided(theoretically) in 2 parts:

# * The First Part is sorted

# * The Second Part is not Sorted

# * Values are taken from second part and put in place in the first part

# * In Insertion Sort, The first value is ignored as it is considered to be part of the sorted array

for i in range(1, lengthofarray):
    
    insertvalueatindex = i
    
    currentvalueofi = n.pop(i)
    
    for j in range(i - 1, -1, -1):
        
        if n[j] > currentvalueofi:
        
            insertvalueatindex = j

    n.insert(insertvalueatindex, currentvalueofi)

print(n)

# * As always the above program can be imporved by not popping and inserting (because of course doing those two things would lead to changing positions of other elements in the array)

# * We can always shift places of the elements!!! (Who could have guessed?)

n = [7, 12, 9, 11, 3]

lengthofarray = len(n)

for i in range(1, lengthofarray):

    wheretoputvalueatindex = i

    currentvalue = n[i]

    for j in range(i - 1, -1, -1):

        if n[j] > currentvalue:

            n[j + 1] = n [j]

            wheretoputvalueatindex = j
        
        else:
    
            break
    
    n[wheretoputvalueatindex] = currentvalue

print(n)