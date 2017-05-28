# FFmpeg STRFTIME with milliseconds
## Building
```
make ffmpeg_dir=/path/to/ffmpeg/source
cd /path/to/ffmpeg/source
./configure ..flags
make
make install
```

## Test
`make test; ./test`

## provide format with milliiseconds
the format should be for example: `%Y-%m-%d %H:%M:%S.%%03u`

## example
* `ffmpeg -f alsa -i default -ac 1 -f segment -strftime 1 -segment_time 00:00:01.200 -segment_format wav -segment_list seg-list out%Y-%m-%d_%H-%M-%S.%%03u.wav`
* output:
`out2017-05-28_12-26-33.599.wav,out2017-05-28_12-26-34.806.wav,out2017-05-28_12-26-36.006.wav`
