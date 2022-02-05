// CODESIGNAL INTRO 
// 4: adjacentElementsProduct

/*

Given an array of integers, find the pair of adjacent elements that has 
the largest product and return that product.

*/

int solution(vector<int> inputArray) {
    int product;
    int maxProduct = INT_MIN;
  
    for (int index = 0; index < size(inputArray) - 1; index++) {
        
        product = inputArray[index] * inputArray[index + 1];
        
        if (product > maxProduct) {
            maxProduct = product;
        }
    }

    return maxProduct;
}


