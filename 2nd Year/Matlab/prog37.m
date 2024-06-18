a = cat(3,[1 2 3; 4 5 6; 7 8 9],[12 3 6; 5 64 12; 85 46 91],[3 21 31; 4 78 94; 6 56 12]);
b = cat(3,[19 21 13; 5 7 26; 70 8 29],[12 53 65; 52 60 11; 82 49 81],[33 24 31; 44 77 35; 76 86 12]);
c = cat(3,[11 2 83; 40 58 6; 7 77 19],[13 30 6; 5 54 2; 8 4 91],[39 21 31; 14 78 75; 61 56 22]);
d = cat(4,a,b,c);
[max_no,min_no] = min_and_max(d);
disp(max_no);
disp(min_no);
function [a1,b1] = min_and_max(x)
    a1 = x(1,1,1,1);
    b1 = x(1,1,1,1);
    for i = 1:3
        for j = 1:3
            for k = 1:3
                for l = 1:3
                    if(x(i,j,k,l)>a1)
                        a1 = x(i,j,k,l);
                    end
                    if(x(i,j,k,l)<b1)
                        b1 = x(i,j,k,l);
                    end
                end
            end
        end
    end
end