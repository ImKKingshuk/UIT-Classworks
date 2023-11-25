I = imread('image.jpeg');
grayscale_image = rgb2gray(I);
subplot(1,2,1);
imshow(grayscale_image);
title('THE GRAY SCALE IMAGE');
subplot(1,2,2);
imhist(grayscale_image);
legend('CORRESPONDING HISTOGRAM');