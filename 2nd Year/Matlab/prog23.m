x = 1:70;
y = randi([0 100],70,1);
nexttile;
histogram(x);
ylabel('NUMBER OF STUDENTS');
xlabel('MARKS DENSITY');
nexttile;
scatter(x,y);
ylabel('MARKS OBTAINED');
xlabel('STUDENT NUMBERS');