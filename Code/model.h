#pragma once
//#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class DecisionTree {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        if (x[2] <= 100.05038452148438) {
                            if (x[1] <= 72.48319625854492) {
                                if (x[2] <= 82.10353469848633) {
                                    return 1;
                                }

                                else {
                                    return 5;
                                }
                            }

                            else {
                                if (x[2] <= 60.20680809020996) {
                                    return 8;
                                }

                                else {
                                    return 4;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 87.48764419555664) {
                                if (x[1] <= 75.03537368774414) {
                                    if (x[2] <= 107.98443603515625) {
                                        return 5;
                                    }

                                    else {
                                        return 3;
                                    }
                                }

                                else {
                                    return 7;
                                }
                            }

                            else {
                                if (x[2] <= 128.0365867614746) {
                                    if (x[0] <= 24.059374809265137) {
                                        if (x[0] <= 21.03426456451416) {
                                            return 6;
                                        }

                                        else {
                                            return 0;
                                        }
                                    }

                                    else {
                                        return 6;
                                    }
                                }

                                else {
                                    return 2;
                                }
                            }
                        }
                    }

                    /**
                    * Predict readable class name
                    */
                    const char* predictLabel(float *x) {
                        return idxToLabel(predict(x));
                    }

                    /**
                    * Convert class idx to readable name
                    */
                    const char* idxToLabel(uint8_t classIdx) {
                        switch (classIdx) {
                            case 0:
                            return "Apple";
                            case 1:
                            return "Blackgram";
                            case 2:
                            return "Coconut";
                            case 3:
                            return "Coffee";
                            case 4:
                            return "Cotton";
                            case 5:
                            return "Mango";
                            case 6:
                            return "Orange";
                            case 7:
                            return "Rice";
                            case 8:
                            return "Watermelon";
                            default:
                            return "Error";
                        }
                    }

                protected:
                };
            }
        }
    }
