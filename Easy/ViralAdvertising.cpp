int viralAdvertising(int n) {
    int shared=5;
    int linked=0;
    int Cumulative=0;
    while(n != 0){
        linked = shared/2;
        shared = (linked)*3;
        Cumulative += linked;  
        n--;
    }
    return Cumulative;
}
