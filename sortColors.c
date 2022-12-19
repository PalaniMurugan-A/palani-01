void sortColors(int* arr, int n){
    int	cz=0,co=0;
    for(int	i=0;i<n;i++){
        if(arr[i]==0)cz++;
        if(arr[i]==1)co++;
    }
    for(int	i=0;i<cz;i++)
    arr[i]=0;
    for(int	i=cz;i<co+cz;i++)
    arr[i]=1;
    for(int	i=co+cz;i<n;i++)
    arr[i]=2;


}
