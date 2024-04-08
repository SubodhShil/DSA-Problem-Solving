def isSubset(a1, a2, n, m):
    # Create an empty dictionary
    hashmap = {}

    # Storing the frequencies of a1
    for item in a1:
        # Existing element would be add 1 
        # with its previous frequency
        if item in hashmap:
            hashmap[item] += 1
        # New items would be added to the hashmap 
        # with the frequency of 1
        else:
            hashmap[item] = 1

    # Check if each element in a2 is present in a1
    for i in a2:
        # if hashmap.get(i, 0) == 0:
            return "No"
        else:
            hashmap[i] -= 1
   
    return "Yes"


print(isSubset([1, 1, 2, 3, 2, 2, 3], [1, 1, 2, 2, 2], 7, 5))