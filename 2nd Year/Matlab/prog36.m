a = [1 2 3; 3 4 2; 2 5 6];
disp(replace_duplicate(a));
function z = replace_duplicate(x)
    y = unique(x);
    temp_count = 1;
    for k = 1:size(y)
        duplicate_count = 0;
        for i = 1:3
            for j = 1:3
                if(x(i,j)==y(temp_count))
                    duplicate_count = duplicate_count + 1;
                    if(duplicate_count > 1)
                        x(i,j) = 0;
                    end
                end
            end    
        end
        temp_count = temp_count + 1;
    end
    z = x;
end