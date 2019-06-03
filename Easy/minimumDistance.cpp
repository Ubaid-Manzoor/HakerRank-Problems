int minimumDistances(vector<int> a) {
    unordered_map<int,int> distanceMap;
    int minDistance = NULL;
    int i = 0;
    for(auto x:a){
        if(distanceMap.find(x) == distanceMap.end()){
            distanceMap[x] = i;
        }else{
            distanceMap[x] = i - distanceMap[x];
            if(minDistance==NULL || minDistance > distanceMap[x]){
                minDistance = distanceMap[x];

            }
        }
        i++;
    }
    return (minDistance!=NULL) ? minDistance : -1 ;
}
