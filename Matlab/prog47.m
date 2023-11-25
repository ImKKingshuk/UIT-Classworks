I = imread('image.jpeg');
subplot(1,2,1);
imshow(I);
title('IMAGE BEFORE CONVERTION(COLOUR IMAGE)');
grayscale_image = rgb2gray(I);
subplot(1,2,2);
imshow(grayscale_image);
title('IMAGE AFTER CONVERTION(GRAYSCALE IMAGE)');