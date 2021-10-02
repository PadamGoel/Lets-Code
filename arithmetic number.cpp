class Solution{
public:
    int inSequence(int A, int B, int C){
        // code here
        if(C!=0){
        int ans=(B-A)/C;
        ans++;
        if(ans<=0)
        return 0;
        if(A+(ans-1)*C==B)
        return 1;
        else
        return 0;}
        else{
            if(A==B)
            return 1;
            else
            return 0;
        }
    }
};
