class Solution {
public:
    unordered_map<int, vector<int>> primeFactorsToIndices;
    unordered_map<int, vector<int>> indexToPrimeFactors;    
    bool canTraverseAllPairs(vector<int>& numbers) {
        preprocess(numbers);
        vector<bool> visitedIndices(numbers.size(), false);
        unordered_map<int, bool> visitedPrimeFactors;
        depthFirstSearch(0, visitedIndices, visitedPrimeFactors);     
        for(size_t i = 0; i < visitedIndices.size(); i++) 
            if(!visitedIndices[i]) 
                return false;
        return true;    
    }
    void preprocess(vector<int>& numbers) {
        for (size_t i = 0; i < numbers.size(); i++) {
            int currentNumber = numbers[i];
            for (int factor = 2; factor * factor <= currentNumber; factor++) {
                if (currentNumber % factor == 0) {
                    primeFactorsToIndices[factor].push_back(i);
                    indexToPrimeFactors[i].push_back(factor);
                    while (currentNumber % factor == 0)
                        currentNumber /= factor;
                }
            }
            if (currentNumber > 1) {
                primeFactorsToIndices[currentNumber].push_back(i);
                indexToPrimeFactors[i].push_back(currentNumber);
            }
        }
    }
    void depthFirstSearch(int index, vector<bool>& visitedIndices, unordered_map<int, bool>& visitedPrimeFactors) {
        if(visitedIndices[index]) return;
        visitedIndices[index] = true;
        for(auto &primeFactor : indexToPrimeFactors[index]) {
            if(visitedPrimeFactors[primeFactor]) 
                continue;
            visitedPrimeFactors[primeFactor] = true;
            for(auto &neighbourIndex : primeFactorsToIndices[primeFactor]) 
                if(!visitedIndices[neighbourIndex]) 
                    depthFirstSearch(neighbourIndex, visitedIndices, visitedPrimeFactors);
        }
    }
};