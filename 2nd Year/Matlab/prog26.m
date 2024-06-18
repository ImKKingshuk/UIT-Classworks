[x,y] = meshgrid(-5:1:5,-5:1:5);
z = (x.^2) + (y.^2);
surf(x,y,z);
xlabel('x');
ylabel('y');
zlabel('f(x,y)');
legend('f(x,y) = x^2 + y^2');
