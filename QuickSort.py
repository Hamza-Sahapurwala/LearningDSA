
# ! Quick Sort

# * It's Avg Time Complexity is O(n log n) (which makes a less steeper curve in the graph of time taken vs no. of values which means it's fast af)

# * Though it's Worst Time Complexity is O(n^2)

# * Because of it's low time taken for Avg Cases, it's very popular

# * In Quick Sort, we choose the (random but for this we have chosen the last element in the array as the first) pivot element and arrange the other elements according to the pivot

# * Elements lesser than pivot go to the left of the pivot

# * Elements greater than pivot go to the right of the pivot

# * And then we choose a new (random but here we choose the first of the high elements present at the right of the last pivot) pivot and repeat the two above steps until sorted

# * Sounds easy, right?...

def partition(n, low, high):
    
    pivot = n[high]

    i = low - 1

    for j in range(low, high):

        if n[j] <= pivot:

            i += 1

            n[i], n[j] = n[j], n[i]
    
    n[i + 1], n[high] = n[high], n[i + 1]

    return i + 1

def quicksort(n, low = 0, high = None):

    if high is None:
    
        high = len(n) - 1

    if low < high:

        pivot_index = partition(n, low, high)

        quicksort(n, low, pivot_index - 1) # * Yes this uses recursion

        quicksort(n, pivot_index + 1, high)

n = [11, 9, 7, 12, 3]

quicksort(n)

print(n)

# * To be honest, I don't understand it