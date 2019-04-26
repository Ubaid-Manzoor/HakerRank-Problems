void getTime(long t , long& time , long& value){
    value = 3;
    time = 1;
    while(true){
        if(t < time){
            value /= 2;
            time -= value;
            return;
        }
        time += value;
        value *= 2;   
    }
}

// Complete the strangeCounter function below.
long strangeCounter(long t) {
    long startColumnTime,startColumnValue ;
    getTime(t , startColumnTime , startColumnValue);
    cout<<startColumnTime<<" : "<<startColumnValue<<endl;
    return startColumnValue - (t-startColumnTime);
}
