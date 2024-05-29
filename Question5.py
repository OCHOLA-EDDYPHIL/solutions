def twosum(nums, target):
    # Creating8 a dictionary to store the value and its index
    numindex = {}

    # Iterate over the array
    for i, num in enumerate(nums):
        # Calculate the complement of the current number
        complementno = target - num

        # Check if the complement is already in the dictionary
        if complementno in numindex:
            # If found, return the indices
            return [numindex[complementno], i]

        # Otherwise, add the current number and its index to the dictionary
        numindex[num] = i

    # If no solution is found, return an empty list
    return []



def main():

    nums = [5, 8, 15, 29]
    target = 24
    result = twosum(nums, target)
    print(result)



if _name_ == '_main_':
    main()