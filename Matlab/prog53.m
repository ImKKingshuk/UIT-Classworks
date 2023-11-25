I = imread('image.jpeg');
grayscale_image = rgb2gray(I);
threshold_value = input('ENTER THE THRESHOLD VALUE : ');
binary_image = grayscale2binary(grayscale_image,threshold_value);
subplot(1,2,1);
imshow(grayscale_image);
title('THE GRAY SCALE IMAGE');
subplot(1,2,2);
imshow(binary_image);
title('THE BINARY IMAGE CORRESPONDING TO THE THRESHOLD VALUE');
function z = grayscale2binary(x,y)
    binary_image = im2bw(x,y);
    z = binary_image;
end