//
// Created by Oscar Gao on 4/22/22.
//

#ifndef LSTM_INFERENCE_TRANSLATION_LSTM_UNIT_H
#define LSTM_INFERENCE_TRANSLATION_LSTM_UNIT_H

#include <vector>

class LSTM_Unit {
public:
    void performInference(double, double, double, double);
    double hidden_state_ = 0;
    double cell_state_ = 0;
    static double sigmoid (double);
};

#endif //LSTM_INFERENCE_TRANSLATION_LSTM_UNIT_H
