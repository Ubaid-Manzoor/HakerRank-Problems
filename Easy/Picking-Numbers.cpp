int left(unordered_map<int, int> count , int num) {
    int leftnum = num-1;
    if(count.find(leftnum) != count.end()){
        return count[num] + count[leftnum];
    } else {
      return count[num];
    }
}

int right(unordered_map<int, int> count , int num){
  int rightnum = num + 1;
  if (count.find(rightnum) != count.end()) {
    return count[num] + count[rightnum];
  }else{
      return count[num];
  }
}

int pickingNumbers(vector<int> a) {
    int maxlen=0;
    unordered_map<int , int> count;
    for(auto x:a){
        if(count.find(x) == count.end()){
            count[x] = 1;
        }else{
            count[x] += 1;
        }
    }
    // for(auto x:count){
    //     cout << x.first << " " << x.second << endl; 
    // }
    for(auto x:count){
        int num = x.first;
        int leftArray = left(count , num);
        int rightArray = right(count , num);
        // cout<<"Left "<<leftArray <<"Right "<<rightArray<<endl;
        if(leftArray > rightArray && leftArray > maxlen){
            maxlen = leftArray;
        } else if (leftArray < rightArray && rightArray > maxlen) {
            maxlen = leftArray;
        }else if(leftArray == rightArray && leftArray > maxlen){
            maxlen = leftArray;
        }
    }
    return maxlen;
}

