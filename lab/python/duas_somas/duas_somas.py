def twoSum(nums: list[int], target: int) -> list:
    for i in range(len(nums)):
        for j in range(i + 1, len(nums)):
            if nums[i] + nums[j] == target:
                output = [i, j]
                return output
    return []


def response(nums: list[int], target: int, output: list[int]) -> None:
    print(f"Input: nums = {nums}, target = {target}")
    print(f"Output: {output}")
    print(
        f"Explanation: Because nums[{output[0]}] + nums[{output[1]}]",
        f"== {target}, we return {output}."
    )


nums_list = {
    9: [[2, 7, 11, 15],],
    6: [[4, 3, 2], [3, 3],],
    7: [[1, 2, 3, 4, 5, 6],]
}

print("==" * 30)
for target in nums_list:
    if len(nums_list[target]) > 1:
        for nums in nums_list[target]:
            response(nums, target, twoSum(nums, target))
            print("--" * 30)
    else:
        response(
            nums_list[target][0], target, twoSum(nums_list[target][0], target)
        )
        print("--" * 30)
