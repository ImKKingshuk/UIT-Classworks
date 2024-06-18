a = [64 34 25 12 22 11 90];
disp('ARRAY BEFORE SORTING');
disp(a);
disp('ARRAY AFTER SORTING')
disp(selectionsort(a,7));
function z = selectionsort(x,y) 
    for i = 1:(y - 1) 
        min_index = i;
        for j = (i + 1):y
            if(x(j) < x(min_index)) 
                min_index = j;
            end
        end
        temp = x(i);
        x(i) = x(min_index);
        x(min_index) = temp;
    end
    z = x;
end