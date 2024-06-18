I = imread('image.jpeg');
rotation_angle = input('ENTER THE ANGLE THE IMAGE IS TO BE ROTATED ANTICLOCKWISE(IN DEGREES) : ');
rotated_image = rotate(I,rotation_angle);
subplot(1,2,1);
imshow(I);
title('THE IMAGE');
subplot(1,2,2);
imshow(rotated_image);
title('THE ROTATED IMAGE');
function z = rotate(x,y)
    [z] = imrotate(x,y);
end