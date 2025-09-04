function twoSum(nums, target) {
    for (let i = 0; i < nums.length; i++) {
        for (let j = i + 1; j < nums.length; j++) {
            if (nums[i] + nums[j] === target) {
                return [i, j];
            }
        }
    }
    return [];
}

function response(nums, target, output) {
    console.log(`Input: nums = [${nums}], target = ${target}`);
    if (output.length === 2) {
        console.log(`Output: [${output}]`);
        console.log(
            `Explanation: Because nums[${output[0]}] + nums[${output[1]}] == ${target}, we return [${output}].\n`
        );
    } else {
        console.log("No valid pair found.\n");
    }
}

const nums_list = {
    9: [[2, 7, 11, 15]],
    6: [[4, 3, 2], [3, 3]],
    7: [[1, 2, 3, 4, 5, 6]]
};

console.log("=================================================================")
// Itera sobre cada alvo e suas listas de números
Object.entries(nums_list).forEach(([target, lists]) => {
    lists.forEach(nums => {
        const output = twoSum(nums, parseInt(target));
        response(nums, target, output);
        console.log("-----------------------------------------------------------------")
    });
});
