I = imread('image.jpeg');
subplot(1,2,1);
imshow(I);
title('THE COLOUR IMAGE');
subplot(1,2,2);
imhist(I);
legend('CORRESPONDING HISTOGRAM');