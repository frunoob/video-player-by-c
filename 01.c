// tutorial01.c
// Code based on a tutorial by Martin Bohme (boehme@inb.uni-luebeckREMOVETHIS.de)
// Tested on Gentoo, CVS version 5/01/07 compiled with GCC 4.1.1
// With updates from https://github.com/chelyaev/ffmpeg-tutorial
// Updates tested on:
// LAVC 54.59.100, LAVF 54.29.104, LSWS 2.1.101 
// on GCC 4.7.2 in Debian February 2015

// A small sample program that shows how to use libavformat and libavcodec to
// read video from a file.
//
// Use
//
// gcc -o tutorial01 tutorial01.c -lavformat -lavcodec -lswscale -lz
//
// to build (assuming libavformat and libavcodec are correctly installed
// your system).
//
// Run using
//
// tutorial01 myvideofile.mpg
//
// to write the first five frames from "myvideofile.mpg" to disk in PPM
// format.
#include "ffmpeg/libavcodec/avcodec.h"
#include "ffmpeg/libavformat/avformat.h"
#include "ffmpeg/libswscale/swscale.h"

int main(int argc, charg *argv[]){
    av_register_all();
    AVFormatContext *pFormatCtx = NULL;
    if(avformat_open_input(&pFormatCtx,argv[1],NULL,0,NULL) != 0)
        return -1; // Couldn't open file
    if (avformat_find_stream_info(pFormatCtx, NULL)<0)
        return -1;
    av_dump_format(pFormatCtx, 0, argv[1], 0);
    int i;
    AVCodecContext *pCodecCtxOrig = NULL;
    AVCodecContext *pCodecCtx = NULL;

    // Find the first video stream
    VideoStream = -1;
    for(i=0; i<pFormatCtx->nb_streams;i++){
        if (pFormatCtx->Stream[i]->codec->codec_type==AVMEDIA_TYPE)
        {
            /* code */
        }
        
    }
    
}


