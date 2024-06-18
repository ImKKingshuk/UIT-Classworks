n = input('ENTER A NUMBER : ');
sum = 0;
while(n > 0)
    x = mod(n,10);
    sum = sum + x;
    n = floor(n/10);
end
disp(sum);
