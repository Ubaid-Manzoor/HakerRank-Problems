vector<int> missingNumbers(vector<int> arr, vector<int> brr) {
    unordered_map<int,int> ValueFreq;
    set<int> missingValues;
    for(int i = 0,j=0 ; i < brr.size() ;i++,j++){
        if(ValueFreq.find(brr[i]) == ValueFreq.end()){
            ValueFreq[brr[i]] = -1;
        }else{
            ValueFreq[brr[i]] -= 1;
        }
        if(j < arr.size()){
            if(ValueFreq.find(arr[j]) == ValueFreq.end()){
                ValueFreq[arr[j]] = 1;
            }else{
                ValueFreq[arr[j]] += 1;
            }
        }  
    }
    for(auto x:ValueFreq){
        if(x.second < 0){
            missingValues.insert(x.first);
        }
    }
    vector<int> missingValuesVec;
    for(auto x:missingValues){
        missingValuesVec.push_back(x);
    }
    return missingValuesVec;
}
