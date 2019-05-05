bool checkit(int num){
    if(num == 1){
        return true;
    }
    long long int sqr = (long long int)pow(num,2);
    if((sqr / 10) != 0){
        string squarenum = to_string(sqr);
        int l = squarenum.length() - to_string(num).length();
        int sum = stoi(squarenum.substr(0,l)) + stoi(squarenum.substr(l));
        if(num == sum){
            return true;
        }else{
            return false;
        }
    }else {
        return false;
    }

}

void kaprekarNumbers(int p , int q){
    bool exits = false;
    for(int i = p ; i <= q ; i++){
        if(checkit(i)){
            exits = true;
            cout<<i<<" ";
        }
    }
    if(exits == false){
        cout<<"INVALID RANGE";
    }
}
