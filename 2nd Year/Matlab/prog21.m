r = input('ENTER RESISTANCE IN OHM : ');
x = 0:50;
y = x/r;
plot(x,y);
xlabel('VOLTAGE');
ylabel('CURRENT');
xlim([0 50]);
ylim([0 50]);
legend('V = IR');
