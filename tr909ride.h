#define sample_NUM_CELLS 6000
#define sample_SAMPLERATE 8192
 

const int8_t PROGMEM sample_DATA[] = {5, 22, 88, -9, 17, 66, -25, 22, 59, 8, 45, 125, 89, 8, 128, 118, -21, 67, -21, -43, 52, 111, 67, 23, 125, -6, 67, 118, 1, 96, 30, 16, 30, 125, 16, -21, 128, 45, 30, 81, 1, 67, 103, 111, 8, 125, 103, -72, 74, 16, -43, 67, 125, 74, 30, 81, 16, 67, 59, -43, 8, 81, 52, 38, 125, 111, 1, 67, 38, 23, 67, 16, 30, 16, 96, 111, 45, 59, 8, 52, 74, 52, 30, 1, -28, 23, 45, 52, 74, 38, 103, 59, 23, 16, 52, 38, -6, 23, -36, 23, 8, 89, 128, 23, 30, 74, 23, 45, 16, -6, -14, -6, 16, 74, 67, 23, 52, 16, 45, -14, -28, 1, -50, -50, 23, 103, 45, -14, 74, 16, 30, 38, 8, -43, -50, 59, 30, -6, 38, -21, 23, 16, 67, 52, 96, 89, -43, 30, 30, -28, 30, 30, 30, 23, 38, 81, -50, 16, 38, -28, -21, 1, 45, 16, 45, 45, 16, 45, 16, 23, -6, 16, 30, -36, 45, 30, 1, 45, -14, 8, 1, 16, 16, 23, 45, -6, 23, 16, 52, 8, -21, 38, -50, 1, -36, -21, 38, -72, 38, 38, 38, 38, 45, 67, -36, 81, 23, -28, 1, -21, 59, -43, 23, 8, -65, 59, -14, 30, -43, 23, 1, -50, 67, -6, 1, -28, 16, 52, -57, 45, -14, -36, -28, -36, 52, -6, 81, -28, -6, 45, -21, 96, -6, -36, -21, -6, 8, -79, 52, -28, 1, 23, -28, 30, 8, 38, -50, -36, 45, -50, 38, 8, -14, -6, 30, 67, -50, 45, -28, -14, 16, -6, -14, -21, 8, 1, 81, 38, 23, 16, -43, -28, -43, -6, -28, -14, 1, -43, 1, -36, 1, 1, 16, -14, -57, 23, -6, 23, -6, -36, 23, -43, 52, -6, 16, -28, -72, 8, -57, 8, 8, -21, -6, 23, 45, -21, 8, -21, -72, -14, -6, 23, -28, 16, -21, -14, 45, -36, -36, -28, -28, 8, 1, 38, -21, 8, 1, -28, -50, 30, 16, -36, -14, -21, 8, -14, -28, -14, -6, -28, -14, -6, -21, -6, 67, 74, -36, -43, -21, -50, 30, -14, -6, 1, -28, 8, -43, 1, 1, -21, 8, -65, 52, 16, 8, 1, -57, 8, -57, 8, -57, -21, 8, -79, 52, -36, -6, 30, -6, 59, -43, 74, -43, -36, 23, -79, 1, -28, -36, -43, 8, 38, -79, 45, -28, -43, 52, 8, 30, -65, 30, 1, -14, 1, -57, 89, -57, -57, 16, -36, 16, -50, 74, -14, -28, 1, -36, 38, -43, 38, -14, -43, 45, -28, 30, -43, 16, 1, -65, -6, -72, 16, -43, -21, -14, -36, -6, -28, 30, 38, -28, 38, -6, 8, 16, -6, -36, -36, 23, -36, -36, -14, -43, 16, 8, -28, -36, -6, 23, -21, 1, 23, 23, -14, 38, 38, -43, -57, -36, -36, -28, -6, -43, -43, -43, 1, 23, 1, 16, -28, -6, 8, 16, 8, -43, -6, -57, 1, -6, -28, 8, 1, -50, -57, -6, -14, -28, -6, 1, -36, -28, 1, -21, -28, 1, -14, 8, -6, -21, -36, 1, -28, -65, -14, -36, -28, 1, 8, -21, -43, -14, -57, 16, -6, -43, -14, -36, 1, 16, 16, -14, -50, 8, -57, -36, -28, -94, -50, -57, -28, -21, 30, -21, -14, 16, -14, 1, -6, 23, -50, -6, -6, -57, -6, -94, -14, -36, -28, 8, -14, 16, -36, 16, 23, -36, 8, -36, -14, 8, 16, 45, 1, 8, -72, 1, -14, -57, -14, -28, -36, -57, 23, 8, -72, 23, -57, 23, 38, 23, 8, -57, 1, -65, 8, -6, -57, 8, -50, -14, -21, -14, 1, -50, 16, -50, 8, 23, -21, 1, -28, -21, -28, 8, 16, -28, 30, -28, 1, -6, -28, -50, -65, 8, -6, 30, -6, -21, 1, -21, 30, 8, -28, -50, -50, 8, -6, 16, -28, -50, -14, -28, 23, -6, -36, -50, -50, 8, 1, -6, 8, -36, -43, 1, 8, -6, -6, -6, -36, -28, 16, -50, -28, -36, -57, -6, 8, 30, -43, -21, -14, -43, 1, -28, -36, -28, 8, 38, -14, 8, -57, -65, -57, -21, 16, -36, -28, -14, 8, 8, -14, -28, -79, -50, -21, 30, 38, 1, 1, -21, 8, -6, -14, -36, -57, -21, -43, 23, 16, -21, -21, -36, -6, 1, 16, -43, -21, 8, -43, -6, -14, -28, -50, -14, -14, -43, 8, -50, -21, -6, 16, -6, -50, 16, -36, -6, 8, -6, -21, -72, 1, -36, 1, 16, -50, -6, -50, 30, 23, 30, -6, -57, 23, -21, 16, -6, -50, -21, -79, 23, 16, 52, 1, -57, 23, -36, 52, 8, 16, -14, -65, 8, -65, -6, -21, -21, 23, -57, 38, -21, -6, -28, -50, 16, -57, 59, -14, -28, 16, -36, 1, -43, 8, -50, -43, 38, -57, 38, -6, -57, -21, -14, 38, -57, 30, -21, -43, 30, -6, 8, -57, -6, -14, -50, 23, -36, -6, -43, -36, -6, -6, 52, -21, -21, -43, -14, 30, 30, 23, -36, -36, -6, 16, 16, 1, -6, -36, -14, 8, 1, -36, -36, -50, -21, 30, 30, 23, 16, 8, 1, 30, 30, -36, -28, -21, -28, -21, -14, -28, -50, -14, 16, 16, 16, -14, 8, 16, 8, 16, 1, -36, -65, 8, -14, 1, 8, 16, -36, -28, 1, -50, -6, -28, -36, 16, 59, 45, -6, 23, -43, -36, 30, 1, -6, -65, -6, -28, 1, 38, -21, 8, -28, 45, 23, -14, 1, -50, -6, -43, -6, -6, -21, 38, -28, 52, 1, -28, -36, -28, 16, -50, 45, -6, -50, 1, -14, 30, -28, 23, -50, -36, 38, -36, 16, -36, 1, -28, -6, 30, -43, 23, 1, -21, 1, -21, 23, -65, 8, -36, -28, 16, -28, 45, -21, -6, -21, 16, 38, -50, 38, -28, -28, 16, 1, 1, -50, 16, -43, -21, 30, -21, 8, -6, 1, 38, 23, 30, -50, 30, -28, -6, 30, 1, -36, -57, 16, 23, 30, 8, -28, -28, -28, 23, 23, 1, 8, -6, 8, 23, 45, 1, -6, -6, -28, -14, -6, -21, -43, -21, 8, 1, 45, 67, 16, -28, 8, 30, -36, 1, -21, -21, -43, 59, 23, 1, -6, -50, -21, 1, 1, -21, -6, 8, -36, 89, 30, -6, -6, -21, 23, -28, 38, -36, -50, -14, -36, 81, -14, -14, -14, -6, 30, -21, 67, -36, -50, 1, 8, 30, -21, 16, -28, -36, 30, 1, 16, -36, -36, -21, 30, 30, -21, 23, -50, -28, 23, 30, -28, -43, -6, -21, 38, 30, 8, 8, -43, 1, 16, 23, -50, -36, -6, -36, 30, -6, -14, -14, -28, 16, 8, 30, -36, -6, 8, -36, 38, 1, 1, -21, 8, 23, -28, 23, -21, -28, -36, -28, 16, -6, 23, 1, 23, 45, 16, 23, 8, 1, -50, -21, 16, -6, -6, -6, 30, 8, 8, 30, -6, 8, -36, 16, -6, -6, 16, -6, 52, 1, 45, 30, -6, 30, -28, 16, -36, -21, 8, -36, 30, -6, 45, 30, -14, 23, 1, 23, -28, 8, 23, -50, 8, 23, 16, -6, -14, 1, -21, 16, 8, 16, 8, -21, 1, 30, 23, -6, -14, -21, -28, 16, 16, 8, -21, -21, -6, 16, 23, 8, 16, -28, -28, 30, 1, -21, -21, -14, -14, -14, 38, 8, 8, -6, -28, 8, 16, -6, -21, -14, 16, -6, 16, 1, -14, -6, -21, -14, 1, 1, -21, -21, 8, 23, 8, 16, -21, 8, 8, -6, 8, 16, -14, -21, -14, 16, -28, 16, -6, 1, 1, -21, 30, 16, -6, -21, -14, 23, -28, 30, 30, 8, 1, -28, 23, -14, -21, -14, -28, -28, -21, 23, 38, -6, 38, 16, -6, -14, 16, 23, -36, -28, -14, -28, 1, 8, 23, 8, -50, 16, 30, 23, -28, -21, 23, -36, 16, 8, 1, 8, -28, 30, 8, 8, -21, -36, 8, -36, 16, -6, -21, 23, 16, 30, 8, 1, -6, -21, 23, -36, 1, -6, -14, 8, -6, 8, -21, 30, -14, -21, 30, -6, 16, -28, 38, -14, -21, 8, -36, 45, -6, 8, -14, -6, 38, -43, 38, -21, -6, -14, -21, 45, -21, 30, -6, -28, -6, 1, 52, -14, 1, 16, -28, 16, -6, 38, -36, -43, 1, -6, 38, -6, 23, 8, -28, 16, 1, 23, -21, -14, 1, -6, 23, -21, 1, 8, -14, 1, 8, 16, -21, 23, 30, -14, -14, 1, -21, -14, 16, 30, -14, -14, 8, 8, 16, 16, 1, -14, -28, 8, 23, 23, -6, -28, 1, -28, 8, 8, 16, 1, -28, 23, 1, 23, 16, -6, 8, -36, 30, -14, 23, 1, -14, 8, -28, 1, -21, 8, 16, -21, 30, 1, 8, 8, 23, 16, -43, 8, -21, 23, 16, -28, 8, -28, 8, -6, 8, 30, -43, 38, 1, 8, 16, 23, 8, -36, 16, 1, 1, 8, -21, 16, -21, -6, 1, 38, 1, -21, 30, 1, 8, -28, 23, -14, -14, 38, -14, 16, -14, 23, 30, -28, 8, -28, 23, -36, 8, 52, -21, 16, -28, 23, -6, -6, 45, -14, 8, -28, 1, 30, -28, 38, -21, 16, -36, 16, 45, -28, 30, -21, -21, -14, -14, 38, 30, 30, -14, -14, 8, 8, 45, -6, -14, -43, 8, 8, 1, 38, -21, -14, -14, 1, 52, -6, 1, -57, 16, 8, 8, 45, 1, -6, -14, 16, 23, -6, 16, -57, 1, 8, 8, 23, -14, 1, -28, 23, 8, -6, 16, -14, 8, 1, 1, -6, -6, 16, -6, 30, -21, 1, 1, 8, -14, 16, 8, -21, 16, 16, 16, 16, 1, -21, -28, 38, -36, 1, 23, -43, 16, 16, 23, -36, 8, 23, -36, 16, 8, 1, 1, 16, 23, 8, 45, -43, 1, -6, -14, 8, -21, 8, -36, 30, 16, -14, 23, -6, 16, -6, 16, 30, -28, -6, -43, 30, -6, 16, 23, -21, 16, 1, 45, 16, -14, -21, -43, 23, -6, 16, 16, -6, 23, -14, 38, -43, 1, -6, -14, 30, -21, 23, -28, 1, 30, 8, 59, -43, 23, -21, 8, 1, -14, 16, -50, 23, 1, 23, 16, 1, 8, -28, 30, 8, 1, -6, -36, 1, -14, 59, 1, -6, 1, -28, 30, -14, 38, -21, -6, 23, -21, 38, -21, 23, 16, -28, 16, -28, 45, -6, -6, 23, -50, 8, -14, 30, 8, -21, 45, -36, 38, 16, 23, 16, -36, 8, -43, 16, -28, -6, 8, -6, 23, 16, 23, 1, 16, 38, -21, 16, -21, -21, -36, 8, 23, 8, 45, -6, -6, 16, 8, 8, -28, -21, -43, 1, 23, 30, 38, 8, 16, 16, 8, 1, 1, -28, -28, -6, 1, -6, 38, -6, -14, 8, 16, -6, 30, 16, -21, 1, -6, -14, 16, 45, -14, 8, 16, -21, 8, 1, -6, -43, -21, -6, -6, 67, 23, 30, 1, -28, 16, 1, 23, -21, -6, -6, -43, 38, 8, 16, -14, -21, 8, -14, 45, 1, 8, 16, -21, 8, 23, 16, 1, -21, 8, -43, 8, -6, -6, 8, -6, 16, 23, 38, 1, 8, 8, -28, 8, 1, 1, -14, 8, 1, -28, 30, 1, 30, 16, -6, 8, -28, -14, -28, 23, 23, -6, 45, 8, 1, -6, 1, -6, -28, -6, -14, 1, 30, 30, 23, 23, -14, -21, -14, -6, 1, -6, 1, -21, -6, 16, 16, 16, 16, -14, 1, -14, 23, 16, -6, -6, -28, 1, 1, 16, 23, -14, 1, -14, 38, 16, -14, 1, -28, 1, -21, 45, 23, -6, 1, -21, 8, -21, 1, 8, -14, 16, -21, 30, -6, 1, 16, 1, -6, -21, 1, 16, -6, 23, -6, -14, -14, 8, 38, 16, 8, -6, -36, -14, -14, 16, 23, 1, 1, 1, 16, 1, -6, 8, -6, -14, 1, 1, 16, 8, 16, 16, 1, -6, -14, -6, 8, -14, 1, -14, -14, 8, 38, 38, 23, 16, 1, -14, 1, 8, -28, -21, -21, 1, 23, 8, 30, 1, 8, 16, 8, 52, -36, -6, -14, -21, 16, -6, 52, -6, 16, 23, -14, 23, -28, 1, 1, -14, 8, -14, 45, -14, 16, 45, -6, 8, -14, 23, -14, -6, 16, -28, 16, -14, 23, 38, 8, 23, -14, 16, -36, -6, 23, -21, 16, 1, 38, 16, 8, 30, -6, 16, -28, 8, 16, -14, 1, -21, 8, -21, 30, 38, 16, 1, -21, 8, -14, 23, 30, 30, 1, -21, 16, 16, -6, 1, -21, -14, -28, 16, 30, 30, 30, 1, 16, 1, 1, 8, 16, -14, -21, 16, 1, 8, 8, 16, 8, -21, 8, -21, 16, -21, -14, 23, -6, 38, 23, 45, 8, -21, 23, -57, -6, -14, 8, -6, -28, 38, 1, 30, 30, 8, 16, -21, 8, -6, -6, -21, -28, 16, -14, 38, 45, 8, 1, 16, 30, 1, 1, -28, -28, -14, -14, 16, 23, 16, -6, 30, 16, 23, 1, -21, -14, -14, 8, 16, 16, -6, -6, 30, 8, 1, 1, -21, -21, -28, 45, 30, 23, 1, -6, 16, -6, 30, 8, -6, -36, -14, 23, -6, 16, 1, 1, -14, 1, 45, 16, 30, -28, 16, 1, -21, 1, -14, 8, -28, 23, 38, -6, 30, -14, 16, -21, 1, 23, -28, 30, -21, 38, 1, -14, 8, -21, 38, -21, 16, 30, -36, 23, -28, 30, -14, 1, 23, -28, 45, -6, 30, 8, -36, 16, -36, 30, -14, 38, 16, -28, 30, -14, 30, -6, 8, -21, -14, 30, -14, 23, 8, -6, 1, -6, 23, -14, 30, -14, -14, 30, -6, 23, -14, 30, -14, -14, 23, -28, 23, -6, 1, 8, 1, 30, -28, 30, -14, 1, 23, 1, 8, -6, 8, 1, -6, 1, -14, 8, 8, 23, 23, 16, -6, -21, 16, -6, 8, -21, 1, -6, 16, 30, 1, 8, -14, -14, 8, -6, 23, 1, 16, 8, 8, 23, -21, -6, 1, -6, -6, -21, 8, 8, 8, 30, 16, 8, -21, 1, 23, -14, -6, 1, -28, -14, -6, 38, 16, 8, 16, -6, 23, 8, -6, 16, -43, -21, -14, 23, 8, 1, 38, -28, 1, 23, 1, -6, -28, 8, -21, 23, 30, -6, 16, -14, 8, -6, 16, -21, -21, 8, -14, 16, 8, 16, 1, 1, 23, 1, 8, -14, -21, -6, -28, 16, 1, 30, -6, -6, 30, -6, 38, 1, -6, -6, -43, 16, -14, 23, -21, -21, 52, -21, 52, 8, 1, -28, -28, 45, -21, 30, 8, -36, 23, -28, 38, -14, 1, -6, -21, 45, -28, 30, 16, -28, -6, 8, 52, 1, 8, 8, -28, 1, -28, 23, -6, -6, -14, 16, 52, -14, 23, 8, -6, -6, 8, 23, -43, 16, -6, 1, 30, 1, 16, -14, 8, 1, 1, 8, -36, 30, 16, -14, 23, 1, 1, -14, 30, 16, 1, 8, -28, 16, 23, -28, 8, 8, -6, -6, 38, 30, -28, 16, -14, -14, 23, 16, 8, 8, 1, -14, 1, 1, -21, -6, 16, 1, 16, 45, -6, 1, 16, -6, 1, 1, -6, -21, 8, 8, 8, 30, -14, -14, 23, 23, 1, -14, 16, -21, 1, 23, -6, 16, -6, -21, 23, 1, 1, -14, 16, 8, -14, 38, 1, -14, 8, 1, 8, -14, 23, 1, 1, -6, -14, 23, -21, 8, 23, 1, 8, -14, 23, 1, -14, 16, -6, 8, -14, 16, 23, 1, 1, -6, 16, -28, 30, 23, 1, 1, -28, 8, -14, 16, 16, -28, 38, 1, 45, -6, -6, -6, -21, 30, -28, 8, -14, -6, 30, -6, 52, -21, -6, 16, -14, 38, -36, 16, -21, 8, 38, 8, 16, -43, -14, 16, 1, 16, -21, 30, -14, 8, 30, 1, 23, -28, 1, -14, 8, 23, -14, 8, -28, 1, 30, 1, 16, -6, 23, -28, 23, 23, -14, -6, -6, 30, -14, -14, 1, -6, 23, -14, 23, 1, -14, 16, 8, 23, -14, 16, -14, -6, 8, -6, 1, -6, -14, 30, 30, 1, -28, 16, -14, -36, 23, 16, -14, 1, 30, 1, -6, 1, -21, -6, 8, 1, 16, 16, -21, -6, 23, -6, -6, 8, 1, -28, 16, 8, -6, 1, -21, -6, 23, 30, 8, -6, 1, -36, 16, 23, -14, -14, -6, 8, 8, 38, -6, -14, -6, -6, 1, 16, 1, -21, 16, 8, -6, 23, 16, 1, -21, 16, -6, -14, -6, -6, 38, -6, 8, 8, -14, 1, 1, 30, -14, -21, 8, -21, 45, -21, 8, -6, -6, 1, 8, 52, -6, -14, 23, -28, 8, -14, 8, -21, -6, 52, -6, 30, -6, 8, -14, -21, 1, -6, 16, -6, 8, 38, -14, -6, -28, 23, 1, 30, 8, -36, 1, -21, 30, 16, 1, 1, -21, 30, -6, 23, 8, -57, 16, -28, 38, 1, 23, 23, -28, 38, -21, 16, -6, -28, 38, -36, 16, -21, 23, 23, -21, 45, -21, 16, -21, -6, 23, -28, 8, -6, 23, 8, -6, 52, -21, -21, -43, 16, 8, 16, 23, -6, -6, -6, 16, 30, 16, -21, -21, 16, 1, -6, 8, 1, -14, 1, 38, 1, 1, 1, -21, -6, 1, 1, 8, 8, 23, -6, 16, -6, 1, 23, -6, -21, -28, -6, 1, 16, 30, 16, -14, 1, -6, 23, 1, 1, 1, -36, -6, 8, 23, 8, -21, 16, -21, 16, 30, 23, 8, -43, -6, -14, -6, 8, -6, 38, -6, 8, 23, 1, -21, -43, 8, -6, 1, -6, 16, 8, 1, 8, 16, 16, -14, 1, 16, -14, -14, -21, 23, -6, 23, 23, -21, 1, -14, 1, 8, 8, 16, -28, 23, -6, 1, 38, -21, 8, -21, 30, -28, -14, 67, -28, 1, -14, 8, 16, -21, 52, -28, 23, -14, -43, 30, -21, 23, -14, 30, 16, -21, 23, -14, -6, -14, -21, -14, 1, 38, 23, 16, -6, -6, -6, 1, 23, 8, 8, -28, -6, 1, -21, 16, -14, 8, 8, 16, 38, -14, 30, -21, 8, -6, -28, 8, -6, 30, -6, -6, 16, -14, 30, -21, 8, -28, -28, 30, 1, 23, 16, 16, 1, -14, 38, -14, -21, 1, -28, -14, 8, 23, 1, 16, 30, -14, 8, 23, -36, -6, 1, -21, -6, 8, 8, -28, 8, 30, 1, 30, -6, -14, 16, 8, 1, -21, -6, -21, 8, 38, 1, 8, 1, -28, 8, 8, 1, -6, -6, 1, 8, 23, -6, -21, 8, -14, 1, 45, 8, 8, -14, 8, 1, -21, 8, -50, 8, 8, 1, 38, -21, 1, -21, 23, 8, -14, 30, -36, 8, 16, 1, 1, -28, -6, -6, 45, 8, 1, 23, -43, -6, 16, 16, -14, 1, 8, -36, 38, 16, 1, -21, -21, 1, -6, 52, -6, -6, 8, -36, 1, 1, 30, -6, 1, 45, -43, 16, -14, 1, 8, -36, 23, -14, 38, 8, 1, 8, -65, 16, 1, 23, 8, -21, 1, -43, 23, 8, 16, 30, -21, 30, 8, 16, -14, -36, 1, -43, 8, 16, 23, 16, 1, 16, -36, 8, 1, -6, 8, -6, 30, 1, 1, -28, -14, 16, 1, 23, -6, -6, -6, -6, 16, -21, 1, -28, 8, 23, 16, 52, -14, -21, -6, 16, 8, -21, 16, -21, -14, 16, -14, 1, -14, 16, 8, 16, 23, -14, 16, 1, -21, 1, -6, 1, -6, 30, 16, -14, 1, -14, -14, -6, 16, 8, -14, -14, 1, 23, 30, 1, -6, -14, -21, 8, 16, 8, -21, -21, -14, 1, 23, 30, 1, 1, -14, 8, 23, 1, -21, -6, 8, 1, 1, 30, -14, -6, 8, 1, 1, 1, 1, -6, 1, 23, 1, 8, 8, -6, 23, -6, -6, -28, -14, 1, -6, 16, 16, -6, 8, 1, 30, -21, 1, 8, -14, 16, 8, 23, -21, -14, 8, -28, 16, 8, 8, 8, -6, 8, -28, 16, -21, 1, 30, 16, 16, 8, 16, -21, -14, 1, -36, -6, -6, 30, 16, 8, 1, -21, 23, -14, 23, 8, -21, -6, -6, 30, -21, 1, 16, -21, 45, -6, 16, -28, -14, 8, -14, 45, -21, 8, 16, -6, 38, -14, 23, -43, -6, 16, -14, 30, -36, 1, -21, 16, 30, -6, 23, -28, 8, 1, 1, 16, -36, 8, -21, 30, 30, 16, 1, -50, 1, -14, 1, 23, 1, 8, -28, 38, 1, -6, 16, -21, 8, -14, 30, -6, -6, 8, -36, 16, -6, 1, 16, 8, 30, -28, 23, -21, -6, 8, 1, 8, -14, 8, 1, 8, 16, -21, -14, -21, 16, 30, 16, 1, -14, 1, -14, 23, 8, -6, -21, -6, 1, 16, 23, 1, -14, 1, 1, 23, 16, 16, -21, -21, -6, 1, 16, -6, 1, -14, 1, 16, 16, 1, -14, -6, 1, 1, 23, -14, -14, -6, 16, 8, 16, 8, -21, -6, 1, -6, -14, 8, -14, -14, 30, 8, 16, 23, 16, -21, -28, 23, -28, 23, -6, 1, -6, -6, 23, -6, 16, -14, -21, 30, 8, 23, -14, 1, -21, -21, 16, 1, 16, -6, 16, 16, 1, 8, -6, -6, -21, -14, 8, 1, 30, 1, 1, -14, 1, 8, 1, 16, -28, -6, 1, -6, 16, -6, 16, -21, 23, 8, -6, 16, -28, 8, -21, 1, 1, -6, 30, 1, 30, -6, -14, 16, -21, 8, -14, 1, -21, -6, 38, -6, 16, 1, 8, 1, -6, 8, -21, 8, -14, -14, 23, 8, 8, -21, 23, -6, -6, 16, -6, -14, -6, 1, 1, 1, 16, -14, 1, 8, -6, 8, 1, -14, -14, 8, 16, 8, 1, 1, -14, 8, 16, 8, -14, -21, -14, 16, 8, 16, 1, 16, 1, 8, 8, -14, -21, -14, 1, 1, 23, 16, -6, 1, 1, 1, -14, -6, -28, 1, 38, 8, 16, 1, 8, -14, 1, 16, -21, 1, -14, 1, 8, 1, 16, -14, 16, 8, 8, 16, -14, 1, -21, 8, 8, 8, 8, -14, 1, 1, 16, 23, -6, 1, -14, -6, 1, 16, 1, -14, 8, 1, 16, 16, 16, -6, -6, 1, -21, 1, 1, -6, 16, -14, 1, -14, 30, 8, 1, 16, -14, 8, -6, 1, 1, -14, 8, 1, 30, 1, 8, 8, -28, 1, 1, 1, -6, 1, 23, -6, 23, 1, -14, 8, -14, -6, -6, 23, -6, -6, 23, -14, 8, 1, 1, 1, -6, 16, -14, 16, -21, -14, 8, 1, 30, 8, 8, -21, 1, 16, -14, 16, -6, -6, 8, -6, 16, -14, 8, -14, 8, 23, -21, 8, 1, 1, 1, 1, 8, -14, 23, 16, -6, 1, -36, -6, 8, 16, 8, 1, 1, -21, 16, 16, -6, 1, -14, -6, -6, 23, 8, -6, -6, -21, 16, 8, 1, 8, 1, -14, 1, 23, 8, -28, -6, -6, -14, 16, 30, -6, -6, -14, 1, 8, 8, 1, -14, 8, 1, -6, 16, 1, -14, 1, 8, 1, -6, 8, 1, 1, 8, 16, 1, -6, 8, 1, 1, 1, 1, -6, -14, 8, 1, 16, 30, 1, 8, 8, -6, 1, -6, -6, -6, -14, 23, 8, 8, 1, -6, 8, -6, 16, 8, -14, 8, -6, 8, -6, -6, 1, -6, 8, -6, 16, -6, 1, 1, -6, 8, 1, 16, 8, -6, 8, -14, -6, -14, 1, 1, -6, 1, 8, 16, 1, -14, 16, 23, -6, 1, 16, -28, -6, 16, -6, -6, -6, 8, -14, 23, 23, -6, 8, -28, -14, 23, 1, 8, -6, 23, -21, -14, 30, -6, -6, -14, 8, 1, -6, 16, -6, 16, -14, 1, 16, 1, 8, -21, 8, -14, 8, 8, -6, 1, -6, 16, 1, -6, 8, 1, 8, -14, 1, -14, -6, 8, 8, 30, 1, -6, -14, 8, 8, -14, 1, -21, -14, 16, 30, 23, -21, 1, -21, 8, 23, -6, 8, -6, -6, -6, 16, 8, -21, 8, 8, -21, 23, 16, -6, -21, 16, 1, -6, 8, 1, -14, 16, 16, 1, 16, -14, -28, 8, 16, 16, 1, 16, -28, -21, 23, 23, 1, -14, 1, -14, 8, 23, 8, -21, -14, 1, 23, 8, 8, -14, -6, -21, 16, 23, 8, -6, -14, 1, 8, 8, 1, 8, -14, -14, 1, 8, 16, -14, -6, -6, -6, 23, 8, 16, -14, -14, 1, -6, 16, 1, 8, 1, -14, 23, -14, 1, -6, -6, -6, 1, 8, 1, 16, 1, -6, 8, 16, -6, -14, 16, -6, -21, 16, 1, 1, 1, 16, -6, -6, 30, -14, 1, 8, 1, 8, -14, 1, -14, 16, 1, -6, 8, 16, -6, -14, 16, -14, -14, 1, 8, 16, 1, 16, -6, -14, 1, -21, 8, 1, 16, 16, 1, 16, -14, -6, -14, -14, 16, 1, 1, 1, 16, 1, -14, 8, -6, -6, -14, 8, 8, 8, 8, -14, 1, 1, 16, 16, -6, 1, -21, 8, -6, 8, 16, -6, -6, 8, 23, 8, -14, 1, -14, 1, 16, 16, 8, -6, -14, -14, 8, 23, 8, 1, 1, -14, -6, 8, 8, -14, 8, 16, -6, 1, 8, -6, -14, 8, 1, -6, 16, 8, 1, 16, -6, -14, -14, 8, -6, 8, 38, 1, -14, 1, -6, 8, -6, 16, -6, -14, 8, -6, 23, -6, -6, -6, -6, 8, 1, 16, -6, -6, 8, 1, 8, -14, 8, -6, -6, 8, 1, 8, -6, 16, -6, -6, 8, -14, 1, 1, 1, 1, 8, 1, -14, 16, -14, -6, 8, 1, -6, 1, 23, -21, 1, 16, -6, 1, 8, 16, -6, 8, -6, -21, 16, 1, -14, 8, 8, -6, -6, 30, -6, -6, 8, -14, 1, 8, 16, 1, 8, -6, -21, 16, -6, 1, 8, -6, -6, -14, 23, 8, 8, 1, 1, 8, -14, 1, 16, 1, -6, -6, 8, -6, 1, 1, 8, 1, -14, 1, 8, 16, -6, -6, -6, -14, 8, 23, 16, 1, -6, -6, -14, 8, 8, 1, -14, -14, 1, 16, 23, 1, 1, -6, -21, 8, 23, 8, -14, -14, -14, -6, 23, 8, 8, 1, -6, -6, 8, 8, -6, -6, -14, 1, 30, 16, -14, -14, 1, 1, 1, 8, 1, -21, -14, 16, 8, 1, 1, 8, -6, 1, 8, -6, -6, -21, -14, 1, 16, 23, 1, 1, -14, -6, 16, 8, 1, -14, 1, 1, -6, 8, -6, -6, -21, -6, 23, 16, 16, -14, 1, -14, -14, 16, 8, 8, -6, 8, 8, 1, 8, -14, 1, -14, 1, 16, 8, 1, -6, 1, -6, 1, 16, 1, 8, 1, 8, 1, -6, 1, 1, -6, -6, 1, 1, 1, 8, 1, 1, 1, -6, -6, 8, 8, -6, 16, -6, -6, 8, 8, 1, -14, 1, -6, -6, 16, 8, -6, -14, 8, 1, 1, 16, -6, 1, -6, 1, 8, 1, -6, -6, 1, -6, -14, 8, 1, 8, 1, 8, 1, -6, 1, -6, 8, -14, 1, 8, 1, 1, 1, 8, -6, -6, 8, -6, 8, 1, 8, 8, -6, -6, -6, 1, -6, 1, 8, 1, 16, 1, 8, 1, -14, 1, 1, 8, -6, 1, 8, -6, 1, 1, 1, 1, 8, 16, -6, 1, 1, -6, 1, -6, -6, 1, 16, 8, 16, 16, -6, -14, -6, -14, -14, 16, 8, 1, 16, 16, -6, 1, 1, 1, -6, -6, -14, 1, 23, 1, 1, 1, 1, 1, 16, 1, -14, -6, 1, -6, -6, 8, 16, 8, 1, -6, 1, 8, 1, 1, 1, -14, -14, 1, 8, -6, 1, 16, -6, 8, 16, 8, -14, -21, -6, 1, 16, 16, 1, 1, -6, 1, -6, 1, -6, -6, 16, 1, 1, 8, 16, -6, -14, 1, 1, 1, 8, 1, -6, -6, -6, -6, 1, 8, 1, 16, 8, 8, 1, -6, 1, -14, 1, 1, 1, 8, 8, 8, -6, 16, -6, -6, 1, -6, 1, -6, 16, 8, 8, 8, -14, 8, 1, 1, -6, -6, 1, -6, 23, 8, 1, 1, 1, 8, -6, 8, -6, 1, -6, -6, 16, 8, 1, -6, 1, 1, -6, 16, 1, -6, -6, 1, 8, 1, 8, 1, 1, -6, -6, 8, 1, 1, -14, 1, -6, 1, 16, 8, 8, -14, 1, 1, -6, 8, -6, 1, 1, 8, 16, -14, 8, -6, -6, 1, 1, 8, 1, 16, 1, -6, 1, -6, 1, 8, 8, -6, 8, 1, 1, -6, 1, -6, -6, 16, 1, 8, 8, -6, -6, -6, 1, 1, 16, 8, -6, 1, -6, -6, -6, 8, 8, -6, 8, 1, 8, 1, -6, 1, -14, 1, 1, 16, 8, -6, 1, -6, -6, -6, 8, 8, 1, 8, 1, 1, -6, 8, 1, -6, 8, -6, 8, -14, 1, 1, 1, 8, -14, 16, 1, -6, 1, -6, 1, -21, 16, 16, 1, 16, 1, -6, -14, 8, 1, -6, 8, 1, 1, 16, 1, 1, -6, 1, -14, 8, 8, 1, 1, 1, 1, -14, 8, 8, 1, 8, 1, 1, -6, 1, 1, -6, 1, -14, 8, -6, 8, 1, 8, 8, -21, 8, 1, 8, 8, 1, 1, -21, 1, 1, 8, 8, -6, 1, 8, 8, 8, 1, -6, -21, -6, 8, 1, 1, 8, 1, 1, 8, 8, 1, -6, -6, 1, 1, 1, -6, 8, 1, 1, 8, 1, 1, -6, 8, 8, -6, 1, 1, 1, 1, 1, 1, -6, 8, 1, 1, -6, 1, 1, -6, 8, -6, 1, 8, 1, 1, 1, 8, 1, 1, 1, -6, -6, 1, -6, 1, 8, 8, 8, 1, 1, 1, 1, 1, -6, 8, 1, -14, 1, 1, 1, 1, 1, 1, 1, 16, 1, -6, -6, -14, 1, 1, 8, 8, 8, 1, -6, 8, 1, -6, 8, 1, 1, 1, 8, 1, 1, 1, -6, 1, 1, 1, 1, 16, 1, 1, -6, -6, 8, 1, 8, -6, -14, 1, 1, 16, -6, 8, 1, -14, 1, 1, 1, -14, -6, 1, 1, 16, 8, -6, 1, -14, 8, 8, 1, -6, 1, 8, -6, 1, 8, -14, 1, 8, 16, 1, -6, -6, -14, 8, -6, 1, 1, 1, 1, 16, 8, -6, -6, -6, -14, 1, 16, 1, -6, -6, -6, 8, 8, 8, -6, 1, 1, 1, 16, -6, -14, 1, 1, 8, 1, 8, 1, -14, 8, -6, 1, -6, -6, 8, 1, 8, 1, -6, 8, -6, 8, 1, 1, -6, -14, 8, 1, 1, 1, 1, -6, 1, 8, 8, -6, -6, 1, 1, 8, 8, 1, 1, -6, 1, 1, 8, 1, 1, 1, -6, -6, 8, 1, 1, 8, 1, 1, 1, 8, 1, 1, -6, -6, 1, 8, 8, 1, 1, -6, -6, 8, 1, 1, 1, -6, -6, 8, 16, 1, -6, 1, -6, 1, 8, -6, 8, 1, 1, 1, 8, -6, -14, 1, 8, 1, 8, 8, 1, -6, 8, 1, -6, -6, -6, 1, 8, 8, 1, -6, 1, -6, 1, 8, 1, 1, 1, 8, 1, 1, 1, -6, -6, 8, 8, 8, 1, 1, -6, 1, 1, 1, -6, 1, 1, 1, 16, -6, 1, -6, 8, 1, 1, 8, -6, 1, 8, 1, 1, -14, 1, -6, 16, 16, -6, 1, -14, 1, 8, 8, 1, -14, 1, -14, 8, 23, 1, 1, -6, 1, 1, 8, 8, -14, 1, 1, 1, 16, 8, -6, -6, 8, 1, 1, 8, -6, -6, 8, 1, -6, 1, 1, 1, 1, 8, 1, -6, 1, -6, 1, 8, -6, -6, -6, 8, 8, 1, 1, -6, 1, 1, 8, 8, -6, 1, -6, 1, 8, 1, 1, -6, 1, -6, 1, 8, -6, 1, 8, -6, 8, 8, -6, -6, 8, 1, -6, 8, 8, -6, 8, 1, -14, 1, 8, 1, 1, 8, -6, -6, 16, -6, 1, 8, -6, 1, 1, 16, -6, 1, 1, -14, 1, 8, 8, 1, 1, 1, -6, 1, 1, -6, 8, 1, 1, 8, 8, -6, -6, 1, 8, -6, 1, 1, -6, 8, 8, 8, -14, -6, 16, 1, 16, 1, -6, 1, 1, 8, 1, 1, -14, -14, 16, 1, 1, 8, 8, -6, -6, 16, -6, 1, 1, -6, 1, 8, 1, -6, 8, 1, -6, 1, -6, -6, 8, 16, -6, -6, 8, 1, 1, 8, 8, -6, -6, -6, -6, 16, 1, -6, -6, -6, 8, 8, 16, -6, -14, 1, 1, 16, 1, 1, -14, -6, 8, 1, 8, 1, -6, -6, 1, 8, -6, 1, 1, -6, 8, 8, -6, -6, 1, -6, 1, 16, 1, -6, 1, 1, -6, 8, 1, -14, -6, 8, 16, 1, 8, -6, -6, 8, 1, 8, 1, 1, -6, -6, 16, 1, -6, 1, -6, 1, 1, 16, 1, 1, -6, -6, 1, 8, 8, 1, 1, 1, -14, 1, 8, 1, 1, 8, -6, -6, 16, 1, -6, 1, -6, 1, 1, 8, 1, 8, 1, -14, 1, 1, -6, 1, 8, -6, 1, 16, 1, 1, 1, 1, -6, 1, -6, -6, 8, 1, 1, 1, 1, 1, 1, 8, -6, 1, 8, -6, -6, 8, 8, -6, -6, 1, 1, 8, 8, 1, -6, -6, 1, 1, 1, 1, -6, 1, 8, 8, 1, 8, 1, -6, 1, 8, 1, -6, 8, -6, 1, 8, 1, 1, 1, 8, 1, 1, -6, -6, 16, 1, 1, 1, 1, -6, 1, 16, 1, 1, 1, -6, 1, 1, 8, -6, -6, -6, 8, 16, 8, 1, 1, 1, -6, 1, 16, 1, -6, 1, 8, 1, 1, 1, -6, -6, 1, 1, 8, 1, 1, 1, 8, 1, -6, 1, 1, 8, 1, 8, 1, -6, 8, 1, 1, 1, 1, 1, -6, 8, 1, 1, 1, 1, -6, 1, 8, 1, 1, 1, -6, 1, 8, 1, -6, 8, -6, -6, 8, 8, 1, -6, 8, -6, 1, 8, 1, 1, 1, 1, 1, 1, 8, 1, 1, -6, -6, 8, 8, 8, 1, 1, -6, -6, 8, 8, 1, 1, 1, 1, 8, 1, 1, 1, -6, -6, 8, 8, 1, 1, 1, -6, 1, 1, 1, -6, 1, 8, 1, 1, 1, 8, 8, 1, 1, -6, -6, -6, 1, 8, 8, 1, -6, 1, 1, 1, 1, 1, -6, -6, 8, 8, 1, 1, -6, -6, 8, 8, 1, 1, 1, -6, 1, 1, 1, -6, 1, 1, 1, 8, 1, -6, 1, 1, 8, 1, 1, 1, 1, 8, 1, 1, -6, -6, 8, 8, 8, -6, -6, -6, 1, 8, 8, 1, -14, -6, 8, 8, 8, -6, -6, -6, 1, 8, 8, -6, -6, -6, 1, 8, 8, 1, -6, 1, 8, 1, 1, 1, -6, 1, 1, 8, 1, 1, 1, 1, 8, 1, 1, 1, 1, 1, 1, 1, -6, 1, 1, 1, 1, 1, 1, -6, 1, 1, 1, 1, -6, -6, 1, 8, 1, 1, 1, 1, 1, -6, 1, 1, 1, 1, 1, 1, -6, 1, 1, 1, 8, 1, 1, 1, 1, 1, 1, -6, -6, 8, 8, 1, 8, 1, -6, 1, 1, 1, 1, 1, -6, 8, 8, 1, 8, 1, -6, -6, 8, 1, 1, 8, 1, 1, 1, 8, 1, -6, 8, -6, 1, 1, -6, 1, 1, 1, -6, 8, 1, -6, 8, 1, 1, 1, 1, -6, 8, 16, 1, 1, -6, 1, 1, 1, 1, 1, 1, 1, 8, 8, 1, 1, -6, 1, -6, 1, 8, 1, 1, 1, 1, 1, 1, 8, 1, 1, -6, 1, 1, 1, 1, 1, 8, 1, 1, 1, 1, 1, 1, 8, -6, -6, 1, 1, 8, 1, 1, -6, 1, 1, 1, 8, 1, -6, 1, 8, 1, 1, 8, -6, 1, 1, 8, 1, -6, 1, 1, 8, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, -6, 1, 1, 1, 8, 1, 1, -6, 8, 1, 1, 8, 1, -6, 1, 8, 1, 1, 1, -6, 1, 1, 1, 1, 1, 8, -6, 1, 1, 1, 1, 1, 1, -6, 1, 1, -6, 8, 8, 8, -6, 1, 1, 1, 1, 1, -6, -6, 8, 8, 1, 1, 1, 1, 1, 8, 1, 1, 1, -6, 8, 8, 8, 1, 1, 1, 1, 8, 1, 8, 1, -6, 8, 1, 1, 1, 8, 1, -6, 1, 1, 1, 1, -6, 1, 1, 8, 1, 1, 1, 1, 1, 1, 1, -6, 8, 1, 1, 1, 1, 1, 1, 8, 1, -6, 1, 1, 1, 1, 1, 8, 1, 1, 1, 1, 1, 1, 1, 1, 8, 1, 1, 8, 1, 1, 1, 1, -6, 8, 8, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 8, 1, 1, 1, 1, -6, 1, 8, 1, 1, 1, 1, 1, 1, 1, -6, 1, 1, 1, 8, 1, 1, 1, 8, 1, 1, 8, 1, -6, 1, 1, 1, -6, 1, 1, 8, 1, 1, 1, -6, 1, 1, 1, -6, 1, 1, 8, 8, 1, 1, 1, -6, 1, 1, 1, -6, 1, 1, 1, 1, 1, 1, -6, 1, 1, 1, 1, 1, 8, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, -6, 1, 8, 1, 1, 1, 1, -6, 1, 8, -6, 1, 1, 1, 1, 1, 1, -6, 1, -6, 1, 8, 1, 8, 1, 1, 1, 1, 8, 1, 1, 1, 1, 1, 1, 8, 1, 1, 1, 1, 1, 1, 8, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, -6, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, -6, 1, 1, -5, 1, 1, 1, -3, 1, 1, 1, 4, 1, 1, 0, 1, 1, };
