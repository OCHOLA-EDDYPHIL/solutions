def twosum(nums, target):
    # Creating a dictionary to store the value and its index
    num_index = {}

    # Iterate over the array
    for i, num in enumerate(nums):
        # Calculate the complement of the current number
        complement_no = target - num

        # Check if the complement is already in the dictionary
        if complement_no in num_index:
            # If found, return the indices
            return [num_index[complement_no], i], [complement_no, num]

        # Otherwise, add the current number and its index to the dictionary
        num_index[num] = i

    # If no solution is found, return an empty list
    return []


nums = [5, 8, 15, 29, 16]
target = 25
result = twosum(nums, target)
print(result)
