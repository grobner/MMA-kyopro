MOD=10**9+7
def modinv(a, mod=10**9+7):
    return pow(a, mod-2, mod)

def comb(n, r, mod=10**9+7):
    r = min(r, n-r)
    res = 1
    for i in range(r):
        res = res * (n - i) % mod
        res = res * modinv(i+1, mod) % mod
    return res
