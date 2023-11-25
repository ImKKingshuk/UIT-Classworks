a = [64 34 25 12 22 11 90];
disp('ARRAY BEFORE SORTING');
disp(a);
disp('ARRAY AFTER SORTING')
disp(insertionsort(a,7));
function z = insertionsort(x,y) 
    for i = 1:y
        key = x(i);
        j = i - 1;
        while((j >= 1) && (x(j) > key)) 
            x(j+1) = x(j);
            j = j - 1;          
        end
        x(j + 1) = key;
    end
    z = x;
end