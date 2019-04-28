bool canTakeit(int value, int k , vector<int> current){
    for(auto x:current){
        if((value+x)%k == 0){
            return false;
        }
    }
    return true;
}

void PrintVec(vector<int> C) {
  for (auto x : C) {
    cout << x << " ";
  }
  cout << endl;
}

void helper(int k , vector<int> S , vector<int> current , int& length){
    if(S.empty()){
        //Base Case
        return;
    }
    int ValueToCheck = S[S.size()-1];
    S.pop_back();
    if(canTakeit(ValueToCheck, k , current)){
        current.push_back(ValueToCheck);
        if (length < current.size()) {
          length = current.size();
        }
        helper(k , S , current , length);
    }else{//Leave it
      helper(k, S, current, length);
    }
    current.pop_back();
    helper(k , S , current , length);
}
