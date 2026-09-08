class Solution {
public:
    int countCommas(int n) { 
    if(n<1000){
        return 0;
    } 
    else if(1000<=n<10000){
        return n-999;
    } 
    else if(10000<=n<100000){
        return n-9999;
    } 
    else 
    return n-99999;
    }
};