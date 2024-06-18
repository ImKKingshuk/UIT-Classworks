I = imread('image.jpeg');
grayscale_image = rgb2gray(I);
[cropped_image] = imcrop(grayscale_image,[100 50 150 200]);
subplot(1,2,1);
imshow(grayscale_image);
title('THE GRAY SCALE IMAGE');
subplot(1,2,2);
imshow(cropped_image);
title('THE CROPPED IMAGE');