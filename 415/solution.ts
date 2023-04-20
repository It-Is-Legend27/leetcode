/// ## Angel Badillo Hernandez (https://github.com/It-Is-Legend27)
/// #### Solution to LeetCode Problem 415.
/// ##### version 0.1
/// ##### 2023-04-19
/// ##### Copyright (c) 2023
function addStrings(num1: string, num2: string): string {
    let result = '';
    let carry = 0;

    let idx1 = num1.length-1;
    let idx2 = num2.length-1;

    while (idx1 > -1 || idx2 > -1 || carry) {
        let sum = 0;

        if (idx1 > -1) {
            sum += num1.charCodeAt(idx1) - '0'.charCodeAt(0)
            idx1--;
        }
        if (idx2 > -1) {
            sum += num2.charCodeAt(idx2) - '0'.charCodeAt(0)
            idx2--;
        }
        sum += carry;
        carry = Math.floor(sum / 10);
        result += (sum % 10).toString();
    }
    
    let res = '';

    for (let idx = result.length-1; idx > -1; idx--) {
        res+= result[idx];
    }
    return res;
}
