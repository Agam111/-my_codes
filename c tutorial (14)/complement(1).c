void complementSet(int n, int m){
    int universal[n], set[m];
    printf("Enter the elements of the universal set : \n");
    for(int i = 0; i < n; i++)
        scanf("%d",&universal[i]);

    printf("Enter the elements of the normal set : \n");
    for(int i = 0; i < m; i++)
        scanf("%d",&set[i]);

    printf("Complement of the normal set is : \n");
    printf("{");
    for(int i = 0 ; i < n; i++){
        int j = 0;

        for(j = 0; j < m ; j++)
            if(universal[i] == set[j])
                break;

        if(j == m)
            printf("%d ",universal[i]);
    }
    printf("}\n");
}

int main(){


    // Complement of Sets
    int n, m;
    printf("Enter the  size of universal set and normal Set : \n");
    scanf("%d%d",&n,&m);
    complementSet(n,m);

    return 0;
}
