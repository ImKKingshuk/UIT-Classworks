I = imread('image.jpeg');
grayscale_image = rgb2gray(I);
binary_image = im2bw(grayscale_image);
subplot(1,2,1);
imshow(binary_image);
title('THE BINARY IMAGE');
subplot(1,2,2);
imhist(binary_image);
legend('CORRESPONDING HISTOGRAM');
