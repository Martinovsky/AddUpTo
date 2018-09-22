#include "addUpTo.hpp"

bool addUpTo(std::size_t sum, std::vector<std::size_t> &set)
{
    std::vector<bool> individualyPossible(sum + 1, false);
    individualyPossible[0] = true;
    std::vector<std::vector<bool>> possibility(set.size() + 1, individualyPossible);
    for (std::size_t subSet = 1; subSet <= set.size(); ++subSet)
    {
        for (std::size_t lesserSum = 1; lesserSum <= sum; ++lesserSum)
        {
            if (lesserSum < set[subSet - 1])
            {
                possibility[subSet][lesserSum] = possibility[subSet - 1][lesserSum];
            }
            else
            {
                possibility[subSet][lesserSum] = possibility[subSet - 1][lesserSum] || possibility[subSet - 1][lesserSum - set[subSet - 1]];
            }
        }
    }
    return possibility[set.size()][sum];
}