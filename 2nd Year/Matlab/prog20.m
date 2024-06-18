x = 0:0.01:10;
y1 = x.^(2.*log(x));
y2 = x.^(2.*((log(x)).^(-1)));
plot(x,y1,x,y2);
xlabel('x');
ylabel('y');
xlim([0 10]);
ylim([0 400]);
legend('y1 = x^(2log(x))','y2 = x^(2/log(x))');
