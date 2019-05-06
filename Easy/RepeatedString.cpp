long int repeatedString(string s, long int n) {
  cout << n << endl;
  long int lengthOfString = s.length();
  int countOf_a = count(s.begin(), s.end(), 'a');
  long int NumberOfFull_s = n / lengthOfString;
  int RemainingString = n % lengthOfString;
  long int result = (countOf_a * NumberOfFull_s) +
                    (count(s.begin(), s.begin() + RemainingString, 'a'));
  return result;
}
