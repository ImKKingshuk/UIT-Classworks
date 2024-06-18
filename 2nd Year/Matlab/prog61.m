I = imread('image.jpeg');
grayscale_image = rgb2gray(I);
immod = grayscale_image;
text = input('ENTER THE TEXT YOU WANT TO EMBED : ','S');
asciitext = double(text);
binary_8_text = dec2bin(asciitext,8);
s = size(binary_8_text,1)*size(binary_8_text,2);
row = input('ENTER THE ROW NUMBER : ');
col = input('ENTER THE COLUMN NUMBER : ');
bit_vector = [];
for i = 1:size(binary_8_text,1)
    bits = binary_8_text(i,:);
    bit_vector = horzcat(bit_vector,bits);
end
embedlocation = immod(row, col:col+s-1);
for i = 1:s
    embedlocation(1,i) = bit_vector(1,i); 
end
immod(row, col:col+s-1) = embedlocation;
subplot(1,2,1);
imshow(grayscale_image);
subplot(1,2,2);
imshow(immod);
disp('CORRELATION : ');
disp(corr2(immod,grayscale_image));
disp('PSNR : ');
disp(psnr(immod,grayscale_image));
%extraction
[extracted_text] = extract(immod,row,col,size(binary_8_text,1));
disp('THE EXTRACTED MESSAGE IS : ');
disp(extracted_text);
function [extract_text] = extract(img,row,col,length)    
    location_values = img(row, col:col+(length*8)-1);
    location_min = min(location_values);
    binary_array = location_values - location_min;
    binary_array_2d = zeros(length,8);
    k = 1;
    for i = 1:length
        for j = 1:8
            binary_array_2d(i,j) = binary_array(1,k);
            k = k + 1;
        end
    end
    characters = [];
    for i = 1:length
            ascii_character_array = strcat(bin2dec(num2str(binary_array_2d(i,:))));
            characters = horzcat(characters,ascii_character_array);
    end
    extract_text = strcat(characters);
end
    