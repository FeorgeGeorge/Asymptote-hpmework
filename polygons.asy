unitsize(1cm);
import geometry;
real n = 6;
real r = 2;
for (int k=1;k<=n;++k) 
{  point A = (r*cos(2*pi*k/n),r*sin(2*pi*k/n));
   point B = (r*cos(2*pi*(k+1)/n),r*sin(2*pi*(k+1)/n));
   draw(A--B);
}
                             
