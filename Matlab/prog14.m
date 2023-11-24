a = input('ENTER A NUMBER : ');
count = 0;
for i = 2:(a-1)
    if(mod(a,i) == 0)
        count = count +1;
    end
end
if(count == 0)
    disp('IT IS A PRIME NUMBER');
else
    disp('IT IS NOT A PRIME NUMBER');
end
