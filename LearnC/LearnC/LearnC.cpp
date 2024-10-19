// LearnC.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include "leetcode_solutions.h"
int main()
{
    ////***************leetcode0704************************
    //leetcode0704_solution solution;
    //vector<int> nums = { -1,0,3,5,9,12 };
    //int target = 3;
    //int result = solution.search(nums, target);
    //std::cout << result;
    

    ////***************leetcode0027************************
    //leetcode0027_solution solution;
    //vector<int> nums = { 0,1,2,2,3,0,4,2 };
    //int val = 2;
    //int result = solution.removeElement(nums, val);
    //std::cout << result;

    ////***************leetcode0977************************
    //leetcode0977_solution solution;
    //vector<int> nums = { -7,-3,2,3,11 };
    //vector<int> result = solution.sortedSquares(nums);
    //std::copy(result.begin(), result.end(), std::ostream_iterator<int>(std::cout, " "));

    ////***************leetcode0209************************
    //leetcode0209_solution solution;
    //vector<int> nums = { 1,2,1,3,1,1 };
    //int target = 5;
    //int result = solution.minSubArrayLen(target,nums);
    //std::cout << result;

    ////***************leetcode0209************************
    leetcode0059_solution solution;
    int n = 4;
    vector<vector<int>> result = solution.generateMatrix(n);
    print2DVector(result);


    return 0;
}

void print1DVector(vector<int>& vec)
{
    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
}
void print2DVector(vector<vector<int>>& vec)
{
    for (const auto& row : vec) {
        for (const auto& col : row) {
            std::cout << col << " ";
        }
        std::cout << std::endl;
    }
}
