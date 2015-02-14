import fileinfo
#info = fileinfo.MP3FileInfo("/Users/qiaotang/Music/turn.mp3")
for info in fileinfo.listDirectory("/Users/qiaotang/Music/",[".mp3"]):
    print "\\n".join(["%s=%s" % (k,v) for k, v in info.items()])

