/*
 find the median in row wise sorted array

1- Brute force is that i will convert the 2d array into 1d array and then find the median after sorting the array

vector<int>rows;

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        rows.push_back(matrix[i][j]);
    }
}

sort(rows.begin(),rows.end());

if(rows.size()%2==0){
    return (rows[rows.size()/2]+rows[rows.size()/2-1])/2;
}
else{
    }

Time: O(n*m*log(n*m)) + O(n*m)

# if i want to reduce the time complexity from n*m to less then i have to skip some elements that is not process each element


*/