all: test
	cp strftime_millis.* ${ffmpeg_dir}/libavutil/
	cp libavutil_makefile ${ffmpeg_dir}/libavutil/Makefile
	cp segment.c ${ffmpeg_dir}/libavformat/

test:
	gcc test.c strftime_millis.c -o test
	echo "testing strftime_millis"
	echo "strftime_millis(buf,sizeof(buf),"%Y-%m-%d %H:%M:%S.%%03u",&tv);"
	./test
