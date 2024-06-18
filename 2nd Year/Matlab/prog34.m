n = input('ENTER THE NUMBER : ');
if(armstrongnumbercheck(n) == 1)
    disp('YES, ITS AN ARMSTRONG NUMBER');
else
    disp('NO, ITS NOT AN ARMSTRONG NUMBER');
end
function z = armstrongnumbercheck(x)
    temp = x;
    cubic_sum = 0;
    while(temp > 0)
        i = mod(temp,10);
        cubic_sum = cubic_sum + (i.^3);
        temp = floor(temp/10);
    end
    if(cubic_sum == x)
        z = 1;
    else
        z = 0;
    end
end