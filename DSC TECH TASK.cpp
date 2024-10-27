#include <iostream>
#include <vector>
#include <cmath>

double mean(const std::vector<double>& values) {
    double sum = 0;
    for(double value : values) {
        sum += value;
    }
    return sum / values.size();
}

double calculateCorrelation(const std::vector<double>& hours, const std::vector<double>& scores) {
    double meanHours = mean(hours);
    double meanScores = mean(scores);

    double numerator = 0, denominatorHours = 0, denominatorScores = 0;

    for(size_t i = 0; i < hours.size(); ++i) {
        double diffHours = hours[i] - meanHours;
        double diffScores = scores[i] - meanScores;
        numerator += diffHours * diffScores;
        denominatorHours += diffHours * diffHours;
        denominatorScores += diffScores * diffScores;
    }

    return numerator / sqrt(denominatorHours * denominatorScores);
}

int main() {
    std::vector<double> hoursStudied = {23, 19, 24, 29, 19}; 
    std::vector<double> examScores = {67, 61, 74, 71, 70};   

    if(hoursStudied.size() != examScores.size()) {
        std::cerr << "Error: The size of Hours_Studied and Exam_Score vectors must match!" << std::endl;
        return 1;
    }

    double correlation = calculateCorrelation(hoursStudied, examScores);

    std::cout << "The correlation between Hours Studied and Exam Score is: " << correlation << std::endl;

    if(correlation > 0) {
        std::cout << "This indicates a positive relationship. As study hours increase, exam scores tend to increase." << std::endl;
    } else if(correlation < 0) {
        std::cout << "This indicates a negative relationship. As study hours increase, exam scores tend to decrease." << std::endl;
    } else {
        std::cout << "There is no relationship between study hours and exam scores." << std::endl;
    }

    return 0;
}