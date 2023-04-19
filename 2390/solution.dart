/// ## Angel Badillo Hernandez (https://github.com/It-Is-Legend27)
/// #### Solution to LeetCode Problem 2390.
/// ##### version 0.1
/// ##### 2023-04-09
/// ##### Copyright (c) 2023 

class Solution {
  /// Removes all asterisk characters in string [text] and character
  /// to the left of each asterisk. Returns resulting string.
  String removeStars(String text) {
    /// Convert to string to codeUnits
    List<int> chars = text.codeUnits;
    List<int> stack = [];

    /// Iterate through the codeUnits, remove last character if current is an asterisk.
    for (int i = 0; i < chars.length; i++) {
      if(chars[i] == 42)
      stack.removeLast();
      else
      stack.add(chars[i]);
    }
    
    /// Convert codeUnits back to string  
    return String.fromCharCodes(stack);
  }
}