int getMostFrequent(unordered_map<int,int> freq){
   int mostFreqValue = freq.begin()->second;
   int mostFreq = freq.begin()->first;
   for(auto x:freq){
       if(x.second > mostFreqValue){
           mostFreqValue = x.second;
           mostFreq = x.first;
       }
   }
   return mostFreq;
}

int equalizeArray(vector<int> arr) {
    unordered_map<int , int> freq;
    for(auto x:arr){
        if(freq.find(x) == freq.end()){
            freq[x] = 1;
        }else{
            freq[x]++;
        }
    }
    return arr.size() - freq[getMostFrequent(freq)];
}
