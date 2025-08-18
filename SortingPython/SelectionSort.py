
# ! Selection Sort

# * Time Complexity is O(n^2) (Both it's worst case and best case)

# * The only difference between this sort and bubble sort is the no. of operations that we have to perform

# ! This is my try on the implementation of the Sort

a = [ 7, 12, 9, 11, 3] # * Test Case

b = len(a)

d = a[0]

for i in range(b):
    for j in range(b):
        if d > a[j]:
            d = a[j]
            print(d)
    a.remove(d)
    a.insert(i,d)

print(a)

# ! Above one doesn't work because of my glaring mistake thinking that no. greater than 3 will be considered the lowest in the array when 3 is still present

lengthofarray = len(a)

for i in range(lengthofarray - 1):

    min_index = i # * We want to place the no. in descending order so we keep the place ready

    for j in range(i + 1, lengthofarray):

        if a[j] < a[min_index]:

            min_index = j # * min_index is basically the location of the lowest value (we assume and assign the first value encountered as the lowest value and keep it's location)

    min_value = a.pop(min_index)

    a.insert(i, min_value)

print("Sorted array:", a)

# * Now the only problem with the above program is that we are shifting other elements whenever we pop or insert anything in or from the array
# * Shifting takes time and energy and as programmer, we have to save both
# * It would be a better idea to just exchange the places of the elements than pop and insert (exchange places like in bubble sort)

a = [7, 12, 9, 11, 3]

lengthofarray = len(a)

for i in range(lengthofarray - 1):

    min_index = i # * We are keeping this value here just to make the code readable (we can replace min_index with i and it will not hurt the code)
    
    for j in range(i + 1, lengthofarray):

        if a[j] < a[min_index]:

            a[min_index],a[j] = a[j],a[min_index]

print(a)