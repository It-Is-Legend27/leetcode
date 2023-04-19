function addStrings(num1, num2) {
    var result = '';
    var carry = 0;
    var idx1 = num1.length - 1;
    var idx2 = num2.length - 1;
    while (idx1 > -1 || idx2 > -1 || carry) {
        var sum = 0;
        if (idx1 > -1) {
            sum += num1.charCodeAt(idx1) - '0'.charCodeAt(0);
            idx1--;
        }
        if (idx2 > -1) {
            sum += num2.charCodeAt(idx2) - '0'.charCodeAt(0);
            idx2--;
        }
        sum += carry;
        carry = Math.floor(sum / 10);
        result += (sum % 10).toString();
    }
    var res = '';
    for (var idx = result.length - 1; idx > -1; idx--) {
        res += result[idx];
    }
    return res;
}
console.log(addStrings('1', '159'));
