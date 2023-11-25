a = input('ENTER THE FIRST NUMBER : ');
b = input('ENTER THE OPERATOR - (+,-,*,/,^,%) : ',"s");
c = input('ENTER THE SECOND NUMBER : ');
if(calculator(a,b,c) == 0)
    disp('INVALID OPERATOR');
else
    disp(calculator(a,b,c));
end
function val = calculator(x,y,z)
    switch y
        case '+'
            val = x + z;
        case '-'
            val = x - z;
        case '*'
            val = x * z;
        case '/'
            val = x / z;
        case '^'
            val = x .^ z;
        case '%'
            val = mod(x,z);
        otherwise
            val = 0;
    end
end