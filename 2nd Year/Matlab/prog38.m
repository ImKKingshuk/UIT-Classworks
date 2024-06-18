a = cat(3,[1 2 3; 4 5 6; 7 8 9],[12 3 6; 5 64 12; 85 46 91],[3 21 31; 4 78 94; 6 56 12]);
b = input('ENTER THE ELEMENT YOU WANT TO FIND : ');
search_and_return_index(a,b);
function z = search_and_return_index(x,y)  
    count = 0;
    for i = 1:3
        for j = 1:3
            for k = 1:3
                if(x(i,j,k) == y)
                    disp('INDEX : ');
                    disp([i, j, k]);
                    count = count + 1;
                end    
            end
        end
    end
    if(count == 0) 
        disp('ELEMENT NOT FOUND');
    end
    z = 0;
end