a = [12 2 53; 41 25 6; 7 80 19];
disp(average(a));
function z = average(x)
    sum = 0;
    count = 0;
    for i = 1:3
        for j = 1:3
            sum = sum + x(i,j);
            count = count + 1;
        end
    end
    z = sum/count;
end