roll = input('ENTER 8 - DIGIT ROLL NUMBER : ');
dept = mod(floor(roll/1000),10);
switch dept
    case 1
        disp('CSE');
    case 2
        disp('ECE');
    case 3
        disp('IT');
    case 4
        disp('EE');
    case 5
        disp('AEIE');
    case 6
        disp('CE');
    otherwise
        disp('INVALID ROLL');
end
