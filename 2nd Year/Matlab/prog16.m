a = [12 2 53; 41 25 6; 7 80 19];
max_no_2d = a(1,1);
min_no_2d = a(1,1);
for i = 1:3
    for j = 1:3
        if(a(i,j)>max_no_2d)
            max_no_2d = a(i,j);
        end
        if(a(i,j)<min_no_2d)
            min_no_2d = a(i,j);
        end
    end
end
b = cat(3,[1 2 3; 4 5 6; 7 8 9],[12 3 6; 5 64 12; 85 46 91],[3 21 31; 4 78 95; 6 56 12]);
max_no_3d = b(1,1,1);
min_no_3d = b(1,1,1);
for i = 1:3
    for j = 1:3
        for k = 1:3
            if(b(i,j,k)>max_no_3d)
                max_no_3d = b(i,j,k);
            end
            if(b(i,j,k)<min_no_3d)
                min_no_3d = b(i,j,k);
            end
        end
    end
end
disp(max_no_2d);
disp(min_no_2d);
disp(max_no_3d);
disp(min_no_3d);

        
