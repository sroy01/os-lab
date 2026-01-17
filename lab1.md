administrator@administrator-VirtualBox:~$ pwd
/home/administrator
administrator@administrator-VirtualBox:~$ pwd
/home/administrator
administrator@administrator-VirtualBox:~$ cd Downloads
administrator@administrator-VirtualBox:~/Downloads$ pwd
/home/administrator/Downloads
administrator@administrator-VirtualBox:~/Downloads$ cd ..
administrator@administrator-VirtualBox:~$ pwd
/home/administrator
administrator@administrator-VirtualBox:~$ cd Downloads
administrator@administrator-VirtualBox:~/Downloads$ cd osK1
administrator@administrator-VirtualBox:~/Downloads/osK1$ pwd
/home/administrator/Downloads/osK1
administrator@administrator-VirtualBox:~/Downloads/osK1$ cd ~
administrator@administrator-VirtualBox:~$ pwd
/home/administrator
administrator@administrator-VirtualBox:~$ cd Downloads/osK1
administrator@administrator-VirtualBox:~/Downloads/osK1$ cd ~/Documents
administrator@administrator-VirtualBox:~/Documents$ cd a1
administrator@administrator-VirtualBox:~/Documents/a1$ cd ../a2
administrator@administrator-VirtualBox:~/Documents/a2$ cd ~
administrator@administrator-VirtualBox:~$ ls
Desktop    Downloads         Music     Public     Videos
Documents  examples.desktop  Pictures  Templates
administrator@administrator-VirtualBox:~$ ls -r
Videos     Public    Music             Downloads  Desktop
Templates  Pictures  examples.desktop  Documents
administrator@administrator-VirtualBox:~$ ls -R
.:
Desktop    Downloads         Music     Public     Videos
Documents  examples.desktop  Pictures  Templates

./Desktop:
file1.txt  file2.txt  folder1  Lab

./Desktop/folder1:

./Desktop/Lab:

./Documents:
a1  a2

./Documents/a1:

./Documents/a2:

./Downloads:
osK1

./Downloads/osK1:

./Music:

./Pictures:
'Screenshot from 2026-01-12 15-54-02.png'
'Screenshot from 2026-01-12 15-54-07.png'
'Screenshot from 2026-01-12 15-54-58.png'
'Screenshot from 2026-01-12 15-54-59.png'
'Screenshot from 2026-01-12 16-02-40.png'
'Screenshot from 2026-01-12 16-03-59 - 1.png'
'Screenshot from 2026-01-12 16-03-59.png'
'Screenshot from 2026-01-12 16-04-00.png'
'Screenshot from 2026-01-12 16-05-05.png'
'Screenshot from 2026-01-12 16-13-40.png'

./Public:

./Templates:

./Videos:
administrator@administrator-VirtualBox:~$ ls -a
.              .cache     examples.desktop  Music             .ssh
..             .config    .gnupg            .pam_environment  Templates
.bash_history  Desktop    .ICEauthority     Pictures          Videos
.bash_logout   Documents  .local            .profile
.bashrc        Downloads  .mozilla          Public
administrator@administrator-VirtualBox:~$ ls -s
total 44
 4 Desktop     4 Downloads          4 Music      4 Public      4 Videos
 4 Documents  12 examples.desktop   4 Pictures   4 Templates
administrator@administrator-VirtualBox:~$ ls -t
Documents  Desktop   Music   Templates  examples.desktop
Downloads  Pictures  Public  Videos
administrator@administrator-VirtualBox:~$ ls -lh
total 44K
drwxr-xr-x 4 administrator administrator 4.0K Jan 17 13:13 Desktop
drwxr-xr-x 4 administrator administrator 4.0K Jan 17 13:34 Documents
drwxr-xr-x 3 administrator administrator 4.0K Jan 17 13:24 Downloads
-rw-r--r-- 1 administrator administrator 8.8K Aug 22 16:30 examples.desktop
drwxr-xr-x 2 administrator administrator 4.0K Aug 22 16:36 Music
drwxr-xr-x 2 administrator administrator 4.0K Jan 12 16:13 Pictures
drwxr-xr-x 2 administrator administrator 4.0K Aug 22 16:36 Public
drwxr-xr-x 2 administrator administrator 4.0K Aug 22 16:36 Templates
drwxr-xr-x 2 administrator administrator 4.0K Aug 22 16:36 Videos
administrator@administrator-VirtualBox:~$ cd Downloads
administrator@administrator-VirtualBox:~/Downloads$ mkdir ok
administrator@administrator-VirtualBox:~/Downloads$ mkdir 'Hello SR'
administrator@administrator-VirtualBox:~/Downloads$ mkdir Hello\ PC
administrator@administrator-VirtualBox:~/Downloads$ mkdir ~/Documents/a3
administrator@administrator-VirtualBox:~/Downloads$ mkdir b{1..5}
administrator@administrator-VirtualBox:~/Downloads$ 
administrator@administrator-VirtualBox:~/Downloads$ touch os.txt
administrator@administrator-VirtualBox:~/Downloads$ nano os.txt
administrator@administrator-VirtualBox:~/Downloads$ cat os.txt
Hello SR
administrator@administrator-VirtualBox:~/Downloads$ 
administrator@administrator-VirtualBox:~/Downloads$ touch ~/Documents/test/demo.txt
administrator@administrator-VirtualBox:~/Downloads$ ls
 b1   b3   b5         'Hello SR'   osK1     sample.txt
 b2   b4  'Hello PC'   ok          os.txt
administrator@administrator-VirtualBox:~/Downloads$ cd Documents
bash: cd: Documents: No such file or directory
administrator@administrator-VirtualBox:~/Downloads$ mkdir A{a..5}
administrator@administrator-VirtualBox:~/Downloads$ ls
 A{a..5}   b2   b4  'Hello PC'   ok     os.txt
 b1        b3   b5  'Hello SR'   osK1   sample.txt
administrator@administrator-VirtualBox:~/Downloads$ rm sample.txt
administrator@administrator-VirtualBox:~/Downloads$ ls
 A{a..5}   b1   b2   b3   b4   b5  'Hello PC'  'Hello SR'   ok   osK1   os.txt
administrator@administrator-VirtualBox:~/Downloads$ rm -r b2
administrator@administrator-VirtualBox:~/Downloads$ rmdir ~/Documents/test
rmdir: failed to remove '/home/administrator/Documents/test': Directory not empty
administrator@administrator-VirtualBox:~/Downloads$ rm ~/Documents/demo.txt
administrator@administrator-VirtualBox:~/Downloads$ 
