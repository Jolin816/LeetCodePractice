#include <iostream>

int main();
int* twoSum(int* nums, int numsSize, int target, int returnSize);
int size; int* input;
int target;
int* output;

int main() {
    std::cin >> size;
    input = new int[size];
    for(int i=0;i<size;++i) {
        std::cin >> input[i];
    }
    std::cin >> target;
    output = twoSum(input, size, target, 2);
    for(int i=0;i<2;++i) {
        std::cout << output[i] << " ";
    }
}

int* twoSum(int* nums, int numsSize, int target, int returnSize) {
    int* out;
    out = new int[returnSize];

    for(int i=0;i<numsSize-1;++i) {
        for(int j=i+1;j<numsSize;++j) {
            if(nums[i] + nums[j] == target) {
                out[0] = i;
                out[1] = j;
                return out;
            }
        }
    }
    return out;
}