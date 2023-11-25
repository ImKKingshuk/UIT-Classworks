a = [1 2 3 4 5 6 7 8 9];
b = input('ENTER A INDEX : ');
c = input('ENTER THE INDEX YOU WANT TO SWAP IT WITH : ');
disp('ARRAY BEFORE SWAPPING');
disp(a);
disp('ARRAY AFTER SWAPPING');
disp(swap_indexes(a,b,c));
function w = swap_indexes(x,y,z)  
    temp = x(y);
    x(y) = x(z);
    x(z) = temp;
    w = x;
end