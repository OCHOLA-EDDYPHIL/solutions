def find_duplicates(nums):
    duplicates = []
    for num in nums:
        if nums[abs(num) - 1] < 0:
            duplicates.append(abs(num))
        else:
            nums[abs(num) - 1] *= -1
    return duplicates

input_array = [4, 3, 2, 7, 8, 2, 3, 1]
output = find_duplicates(input_array)
print(output)
