x = 0:10;
for i = 0:10
    y(i+1) = 2.*(x(i+1).^2) + 3.*x(i+1) + 5;
end
plot(x,y);
xlabel('X');
ylabel('Y');
xlim([0 10]);
ylim([0 400]);
legend('y = 2x^2 + 3x + 5');

    
