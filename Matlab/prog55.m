I = imread('image.jpeg');
[cropped_image] = imcrop(I,[100 50 150 200]);
subplot(1,2,1);
imshow(I);
title('THE COLOUR IMAGE');
subplot(1,2,2);
imshow(cropped_image);
title('THE CROPPED IMAGE');