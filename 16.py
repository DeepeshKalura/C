''' 
    Write a python program to read an entire text file 
    and display each other word on the screen.
    
    Made by Deepesh Kalura 
'''

f = open("sample.txt", 'w')

f.write('''
    Deepesh Is my Name.

    I like To Play Game.

    One Day I see someone and I start goes to talk her.

    I just say Roses are blue Tulip is red, I just said I love you to you.

    She become angry and make Deepesh red nose.

    Now Everybody say Deepesh We all Love you.

''')
f.close()
f = open("sample.txt", 'r')
for lines in f:
    print(lines)
f.close()