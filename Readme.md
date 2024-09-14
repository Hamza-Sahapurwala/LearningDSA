# Learning DSA

I am learning DSA via [W3Schools](https://www.w3schools.com/dsa/index.php).

## Stable and Unstable Algorithms

An algorithm which maintains the relative order between 2 equal values(or key:value pairs, in cases of maps) when an array(or map) is sorted is known as **Stable Algorithm**.

**Unstable Algorithms** do not maintain the relative order mentioned above.

### Example

Here, we have a map with random values.

```python
a = {'A':23, 'B':19, 'C':23, 'D':57}
```

When we sort the values in ascending order using a **Stable Algorithm**, we get this:

```python
a = {'B':19, 'A':23, 'C':23, 'D':57}
```

With an **Unstable Algoritm**, we get this:

```python
a = {'B':19, 'C':23, 'A':23, 'D':57}
```

As we can see,

With **Stable Algorithm**, key 'A' will be placed before key 'C' as it was the first to be encountered in the map.

With **Unstable Algorithm**, key 'A' can be placed after key 'C' which is not how it was encountered in the map.(It is not garenteed that key 'A' will be placed before key 'C')

**Stable Algorithms** also ensure if you are sorting an array or map again with a different criteria, it **respects** the previous sorting order.

## Stable Algorithms

- Bubble Sort

- Insertion Sort

- Counting Sort

- Radix Sort

- Merge Sort

- Tim Sort

- Bucket Sort

## Unstable Algorithms

- Selection Sort

- Quick Sort

- Heap Sort

- Tree Sort

# Thank You!!!
