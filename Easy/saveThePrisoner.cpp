int saveThePrisoner(int n , int m , int startat){
    startat -= 1;
    return (m-1 +startat)%n +1;
}
