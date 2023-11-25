marks = randi([0 100],60,10);
bar_plots(marks);
function y = bar_plots(a)
    nexttile;
    disp(bar(mean(a)));
    xlabel('SUBJECTS');
    ylabel('MEAN');
    legend('MEAN');
    nexttile;
    disp(bar(std(a)));
    xlabel('SUBJECTS');
    ylabel('STANDARD DEVIATION');
    legend('STANDARD DEVIATION');
    nexttile;
    disp(bar(skewness(a)));
    xlabel('SUBJECTS');
    ylabel('SKEWNESS');
    legend('SKEWNESS');
    nexttile;
    disp(bar(kurtosis(a)));
    xlabel('SUBJECTS');
    ylabel('KURTOSIS');
    legend('KURTOSIS');
    y = 0;
end