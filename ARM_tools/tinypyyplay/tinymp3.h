#ifndef TINYMP3_H
#define TINYMP3_H

#define MPEG1 	0
#define MPEG2 	1
#define MPEG25 	2

#define MONO 	3

// the value is MPEG 采样率索引表
const unsigned int mp3_sample_rates[3][3] = {
    {44100,48000,32000 }, // MPEG-1
    {22050,24000,16000 }, // MPEG-2
    {11025,12000,8000  }  // MPEG-2.5
};

// the value is 比特率 索引表
// 比特率的单位是 kbit/s
const unsigned int mp3_bit_rates[3][3][15] = {
    { // MPEG1
        {0,32,64,96,128,160,192,224,256,288,320,352,384,416,448},
        {0,32,48,56,64 ,80 ,96 ,112,128,160,192,224,256,320,384},
        {0,32,40,48,56 ,64 ,80 ,96 ,112,128,160,192,224,256,320}
    },
    { //MPEG2
        {0,32,48,56,64 ,80 ,96 ,112,128,144,160,176,192,224,256},
        {0,8 ,16,24,32 ,40 ,48 ,56 ,64 ,80 ,96 ,112,128,144,160},
        {0,8 ,16,24,32 ,40 ,48 ,56 ,64 ,80 ,96 ,112,128,144,160}
    },
    { // MPEG25 is the same value with MPEG2
        {0,32,48,56,64 ,80 ,96 ,112,128,144,160,176,192,224,256},
        {0,8 ,16,24,32 ,40 ,48 ,56 ,64 ,80 ,96 ,112,128,144,160},
        {0,8 ,16,24,32 ,40 ,48 ,56 ,64 ,80 ,96 ,112,128,144,160}
    }
};

#endif
