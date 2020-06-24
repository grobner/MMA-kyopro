long long modpow(long long a, long long n, long long mod) {
  long long res = 1;
  while (n > 0) {
    if (n & 1) res = res * a % mod;
      a = a * a % mod;
      n >>= 1;
    }
        return res;
}
// 逆元を求める関数
long long modinv(long long a,long long mod){
  return modpow(a,mod-2,mod);
}

//二項係数を求める関数
long long comb(long long n, long long k, long long int mod){
  //例外処理(なくても良い)
  if(n<k) return 0;
  if(n<0||k<0) return 0;
  ll ans = 1;
  rep(i,k){
    ans=ans*(n-i)%mod;
  }//これはゼロから
  for(int i=1; i<=k; i++){
    ans=ans*modinv(i,mod)%mod;
  }//これはイチから
  return ans;
}
