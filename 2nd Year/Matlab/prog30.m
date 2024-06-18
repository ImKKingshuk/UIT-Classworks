[x1,x2] = meshgrid(-5:1:5,-5:1:5);
z = 0.26.*((x1.^2) + (x2.^2)) - 0.48.*(x1.*x2);
surf(x1,x2,z);
xlabel('x1');
ylabel('x2');
zlabel('f(x1,x2)');
legend('f(x1,x2) = 0.26((x1^2) + (x2^2)) - 0.48(x1x2)');
