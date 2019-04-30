bool isodd(int a){
    if(a % 2 != 0){
        return true;
    }
    return false;
}

void PrintVec(vector<int> B){
    for(auto x:B){
        cout<<x<<" ";
    }
    cout<<endl;
}

int fairRations(vector<int> B){
    int BreadGiven = 0;
    for(int i=0 ; i < B.size() ; i++){
        if( isodd(B[i]) && i+1 < B.size() ){
            B[i] += 1;
            B[i+1] += 1;
            BreadGiven += 2;
        }
    }
    if( isodd(B[B.size()-1])){
        return -1;
    }
    return BreadGiven;
}

