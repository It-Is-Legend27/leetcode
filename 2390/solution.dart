/// ## Angel Badillo Hernandez (https://github.com/It-Is-Legend27)
/// #### Solution to LeetCode Problem 2390.
/// ##### version 0.1
/// ##### 2023-04-09
/// ##### Copyright (c) 2023 

class Solution {
  /// Removes all star characters in string [text] and character
  /// to the left of each star. Returns resulting string.
  String removeStars(String text) {
    List<String> chars = text.split('');
    /// Index of first instance of star in text.
    int loc = chars.indexOf('*');
    /// Loop until no more stars in text.
    while (loc != -1) {
      /// Replace preceeding character and star with empty string.
      chars.removeRange(loc-1, loc+1);
      loc = chars.indexOf('*');
    }
    return chars.join();
  }
}
