a = input('ENTER THE BASE : ');
b = input('ENTER THE EXPONENT : ');
disp(exponent(a,b));
function z = exponent(x,y)
    z = 1;    
    for i=1:y
        z = z*x;
    end
end