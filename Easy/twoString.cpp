void FillSet(string s , unordered_set<string>& Set){
    for(int i = 0 ; i < s.size() ; i++){
        Set.insert(s.substr(i,1));       
    }
}

// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {
    unordered_set<string> setS1,setS2;
    FillSet(s1 , setS1);
    FillSet(s2 , setS2);

    if(setS1.size() < setS2.size()){
        for(auto x:setS1){
            if(setS2.find(x) != setS2.end()){
                return "YES";
            }
        }
        return "NO";
    }else{
      for (auto x : setS2) {
        if (setS1.find(x) != setS1.end()) {
          return "YES";
        }
      }
      return "NO";
    }
}
