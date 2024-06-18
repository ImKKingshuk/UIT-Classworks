t1 = 0;
t2 = 1;
nextTerm = t1 + t2;
n = input('Enter the number of terms: ');
disp(t1);
disp(t2);
  for i = 3:1:n 
    disp(nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  end
