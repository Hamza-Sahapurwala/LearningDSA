
# ! Counting Sort

# * General Time Complexity is O(n + k)

# * Where n represents the no. of values in the array

# * And K represents no. of actual values if there were not repeated in the original array

# * It is O(n+k) because O(n) is the time taken to count no. of times an element is repeated

# * And O(k) is the new array we have created to keep track of that counting
  
# * k will always be max no. in the array plus 1 cause we will count the no. of times zero is also repeated in the array

# * The Best Case Scenario is when k < n, the Time Complexity is O(n)

# * The Worst Case Scenario is when k > n, the TIme Complexity tends to O(n^2) or worse

# * This arrays works by counting how many times a no. repeats by taking the no. itself as a index in another array and then printing it in the desired order

# ! This array works only for limited range(means that counting array should not be ridiculously bigger than given array) of non-negative integers values

def countsort():

    count = [0] * (max(n) + 1) # * This array is related to O(k)and the whole basis of this algorithm

    while len(n) > 0:

        value = n.pop() # * We emty out the array to fill it in with the correct order later

        count[value] += 1 # * Using the value from the array n as the index of the array count, we count how many times this no. has been repeated (This makes it lot easier to count)

    for i in range(len(count)):

        while count[i] > 0:
            
            n.append(i) # * Here, we append the repeating no. in their order

            count[i] -= 1 # * Decrease the no. of repitions as we keep on appending them

n = [4, 2, 2, 6, 3, 3, 1, 6, 5, 2, 3]

countsort()

print(n)