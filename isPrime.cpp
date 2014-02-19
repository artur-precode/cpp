bool MaR(LL x, LL n) {
  if (x >= n) return 0;
  LL d = 1, y;
  int t = 0, l = n - 1;
  
  while (!(l & 1)) { ++t; l >>= 1; }

  for (; l > 0 || t--; l >>= 1) {
    if (l & 1) d = (d * x) % n;
    if (!l) { x=d; l=-1; }

    y = (x * x) % n;
    if (y == 1 && x != 1 && x != n - 1) return 1;
    x = y;
  }
  
  return x != 1;
}
 
bool IsPrime(int x) { return !(x < 2 || MaR(2, x) || MaR(3, x) || MaR(5, x) || MaR(7, x)); }
