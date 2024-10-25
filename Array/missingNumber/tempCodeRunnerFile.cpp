 int n = nums.size(),xor1=0, xor2=0;
    for(int i = 0; i < n; i++){
        xor1 = xor1 ^ i;
        xor2 = xor2 ^ nums[i];
    }
    xor1 = xor1 ^ n;

    return xor1 ^ xor2;