string superReducedString(string s) {
    int count = 1;
    while(count != 0){
        count = 0;
      for (int i = 0; i < s.size(); i++) {
        if (i != s.size() && s[i] == s[i + 1]) {
          cout << "out" << s << " ";
          s.erase(i, 2);
          i = i - 1;
          count++;
        }
      }
    }
    if(s.empty()){
        return "Empty String";
    }
    return s;
}
