# Study Hours and Exam Score Analysis

This project analyzes the relationship between hours studied and exam performance scores. 
Using a simple C++ program, it calculates the correlation coefficient between the two variables: `Hours_Studied` and `Exam_Score`. 
The correlation coefficient gives insights into whether there is a positive, negative, or no relationship between study hours and exam performance.

## Project Structure

The main program file is written in C++ and includes functions to:
- Calculate the mean of a set of values.
- Compute the correlation coefficient between two data sets: `Hours_Studied` and `Exam_Score`.

## How It Works

1. **Mean Calculation**: The program calculates the average study hours and exam scores.
2. **Correlation Calculation**: Using the calculated means, the program computes the correlation coefficient between the `Hours_Studied` and `Exam_Score` data.
3. **Result Interpretation**: Based on the value of the correlation coefficient:
   - **Positive Correlation**: A positive value indicates that increased study hours tend to result in higher exam scores.
   - **Negative Correlation**: A negative value suggests that more study hours may lead to lower scores (unlikely but possible in this context).
   - **No Correlation**: A value of zero implies no relationship between study hours and exam scores.

## Code Overview

```cpp
#include <iostream>
#include <vector>
#include <cmath>

double mean(const std::vector<double>& values);
double calculateCorrelation(const std::vector<double>& hours, const std::vector<double>& scores);

int main() {
    std::vector<double> hoursStudied = {23, 19, 24, 29, 19}; 
    std::vector<double> examScores = {67, 61, 74, 71, 70};   

    double correlation = calculateCorrelation(hoursStudied, examScores);
    std::cout << "The correlation between Hours Studied and Exam Score is: " << correlation << std::endl;
}
```

## Sample Output

The output will display the correlation coefficient and a message indicating the nature of the relationship. Example:

```
The correlation between Hours Studied and Exam Score is: 0.76
This indicates a positive relationship. As study hours increase, exam scores tend to increase.
```

