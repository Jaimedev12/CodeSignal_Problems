// CODESIGNAL INTRO 
// 3: checkPalindrome

/*

Given the string, check if it is a palindrome.

*/

bool solution(string inputString) {
    string inputString_ = inputString;
    reverse(inputString_.begin(), inputString_.end());
    return inputString == inputString_;
}


