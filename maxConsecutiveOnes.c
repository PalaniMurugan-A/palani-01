int findMaxConsecutiveOnes(int* nums, int n){
    int	cnt=0;
    int	maxcnt=0;
    for(int	i=0;i<n;i++){
        if(nums[i]==1)cnt++;
        else	cnt=0;
        if(cnt>maxcnt)maxcnt=cnt;
    }
    return	maxcnt;

}
