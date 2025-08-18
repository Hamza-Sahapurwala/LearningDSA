
# ! Quick Sort

# * It's Avg Time Complexity is O(n log n) (which makes a less steeper curve in the graph of time taken vs no. of values which means it's fast af)

# * Though it's Worst Time Complexity is O(n^2)

# * Because of it's low time taken for Avg Cases, it's very popular

# * In Quick Sort, we choose the (random but for this we have chosen the last element in the array as the first) pivot element and arrange the other elements according to the pivot

# * Elements lesser than pivot go to the left of the pivot

# * Elements greater than pivot go to the right of the pivot

# * And then we choose a new (random but here we choose the first of the high elements present at the right of the last pivot) pivot and repeat the two above steps until sorted

# * Sounds easy, right?...

# ! Think of this as we are moving an element to it's correct place

# * Please refer this link for extra understanding: https://www.youtube.com/watch?v=-qOVVRIZzao

def partition(low, high):
    
    pivot = n[high] # * In the first loop, we are giving the honour of pivot to the last element

    i = low - 1

    for j in range(low, high):

        if n[j] <= pivot: # * Here, j is the index of the element less than pivot and i is the index of the element greater than pivot

            i += 1

            n[i], n[j] = n[j], n[i] # * We are basically arranging things correctly (Like elements < pivot on the left and elements > pivot on the right)
    
    n[i + 1], n[high] = n[high], n[i + 1]

    return i + 1

def quicksort(low = 0, high = None): # * low represents the begginning of the list and high represents the end of the list

    if high is None:
    
        high = len(n) - 1

    if low < high:

        pivot_index = partition(low, high)

        quicksort(low, pivot_index - 1) # * This sorts between start of array to the sorted element (sorted element here means the element which is at it's correct place)

        quicksort(pivot_index + 1, high) # * This sorts between the sorted element to the end of array 

n = [11, 9, 7, 12, 3]

quicksort()

print(n)

# * To be honest, I don't understand it