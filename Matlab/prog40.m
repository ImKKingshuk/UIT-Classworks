a = [64 34 25 12 22 11 90];
disp('ARRAY BEFORE SORTING');
disp(a);
disp('ARRAY AFTER SORTING')
disp(bubblesort(a,7));
function z = bubblesort(x,y) 
    for i = 1:y
        for j = 1:(y-i) 
            if(x(j) > x(j+1))
                temp = x(j);
                x(j) = x(j+1);
                x(j+1) = temp;
            end            
        end
    end
    z = x;
end