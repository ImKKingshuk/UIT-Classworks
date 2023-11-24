x = -pi:0.01:pi;
y1 = sin(x);
y2 = cos(x);
plot(x,y1,x,y2);
xlabel('x');
ylabel('y');
xlim([-pi pi]);
legend('y = sinx','y = cosx');
