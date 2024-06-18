dataset1 = randi([0 100],10,1);
dataset2 = randi([0 100],100,1);
dataset3 = randi([0 100],1000,1);
dataset4 = randi([0 100],10000,1);
dataset5 = randi([0 100],100000,1);
compare_execution_times(dataset1,dataset2,dataset3,dataset4,dataset5);
function y = compare_execution_times(a,b,c,d,e)
disp('EXECUTION TIME FOR -----');
disp('DATASET 1 BY BUBBLE SORT ALGORITHM');
bubblesort_executiontime(a,10);
disp('DATASET 1 BY INSERTION SORT ALGORITHM');
insertionsort_executiontime(a,10);
disp('DATASET 1 BY SELECTION SORT ALGORITHM');
selectionsort_executiontime(a,10);
disp('DATASET 2 BY BUBBLE SORT ALGORITHM');
bubblesort_executiontime(b,100);
disp('DATASET 2 BY INSERTION SORT ALGORITHM');
insertionsort_executiontime(b,100);
disp('DATASET 2 BY SELECTION SORT ALGORITHM');
selectionsort_executiontime(b,100);
disp('DATASET 3 BY BUBBLE SORT ALGORITHM');
bubblesort_executiontime(c,1000);
disp('DATASET 3 BY INSERTION SORT ALGORITHM');
insertionsort_executiontime(c,1000);
disp('DATASET 3 BY SELECTION SORT ALGORITHM');
selectionsort_executiontime(c,1000);
disp('DATASET 4 BY BUBBLE SORT ALGORITHM');
bubblesort_executiontime(d,10000);
disp('DATASET 4 BY INSERTION SORT ALGORITHM');
insertionsort_executiontime(d,10000);
disp('DATASET 4 BY SELECTION SORT ALGORITHM');
selectionsort_executiontime(d,10000);
disp('DATASET 5 BY BUBBLE SORT ALGORITHM');
bubblesort_executiontime(e,100000);
disp('DATASET 5 BY INSERTION SORT ALGORITHM');
insertionsort_executiontime(e,100000);
disp('DATASET 5 BY SELECTION SORT ALGORITHM');
selectionsort_executiontime(e,100000);
y = 0;
end
function z = bubblesort_executiontime(x,y) 
    tic
    for i = 1:y
        for j = 1:(y-i) 
            if(x(j) > x(j+1))
                temp = x(j);
                x(j) = x(j+1);
                x(j+1) = temp;
            end            
        end
    end
    toc
    z = x;
end
function z = insertionsort_executiontime(x,y) 
    tic
    for i = 1:y
        key = x(i);
        j = i - 1;
        while((j >= 1) && (x(j) > key)) 
            x(j+1) = x(j);
            j = j - 1;          
        end
        x(j + 1) = key;
    end
    toc
    z = x;
end
function z = selectionsort_executiontime(x,y) 
    tic
    for i = 1:(y - 1) 
        min_index = i;
        for j = (i + 1):y
            if(x(j) < x(min_index)) 
                min_index = j;
            end
        end
        temp = x(i);
        x(i) = x(min_index);
        x(min_index) = temp;
    end
    toc
    z = x;
end