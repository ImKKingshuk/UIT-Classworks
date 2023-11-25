I = imread('image.jpeg');
grayscale_image = rgb2gray(I);
subplot(1,2,1);
imshow(grayscale_image);
title('IMAGE BEFORE CONVERTION(GRAYSCALE IMAGE)');
subplot(1,2,2);
binary_image = im2bw(grayscale_image);
imshow(binary_image);
title('IMAGE AFTER CONVERTION(BINARY IMAGE)');