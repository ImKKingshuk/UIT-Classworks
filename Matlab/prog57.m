I = imread('image.jpeg');
grayscale_image = rgb2gray(I);
threshold_value = input('ENTER THE THRESHOLD VALUE : ');
yield_image = tresholding_above_userdefinedvalue(grayscale_image,threshold_value);
subplot(1,2,1);
imshow(grayscale_image);
title('THE GRAY SCALE IMAGE');
subplot(1,2,2);
imshow(yield_image);
title('THE IMAGE AFTER THRESHOLDING');
function z = tresholding_above_userdefinedvalue(x,y)
    z = x;
    [a,b]=size(x);
    for i=1:a
        for j=1:b
            if(x(i,j) <= y)
                z(i,j) = 0;
            end
        end
    end    
end