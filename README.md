<!-- PROJECT LOGO -->
<p align="center">
  <img src="img\logo.png" alt="Logo" width="80" height="80">
</p>

  <h3 align="center">SimpleSync</h3>

<p align="center">
    <b>Simple</b> user interface for <b>Simple</b> synchronize
</p>

## SimpleSync

[![HitCount](http://hits.dwyl.com/VRB95/VRB95/SimpleSync.svg)](http://hits.dwyl.com/VRB95/VRB95/SimpleSync) https://img.shields.io/github/license/VRB95/SimpleSync?style=flat-square
SimpleSync is a graphical user interface for [rsync](https://rsync.samba.org) wich is a utility for efficiently transferring and synchronizing files between a computer and an external hard drive and across networked computers by comparing the modification times and sizes of files.

<p align="center">
  <img src="img\screensh_1.png" alt="screenshot_1">
</p>

<!-- TABLE OF CONTENTS -->
## Table of Contents

- [Built With:](#built-with)
- [Prerequisites](#prerequisites)
- [Compiling](#compiling)
- [Usage](#usage)
    - [Local Sync:](#local-sync)
    - [Remote Sync:](#remote-sync)
    - [Example:](#example)
- [Contributing](#contributing)
- [License](#license)
- [Contact](#contact)


## Built With:
* [Qt](https://www.qt.io)

## Prerequisites

Firstly, install [rsync](https://rsync.samba.org) packages:

* for macOS
```sh
brew install rsync
```
* for Linux
```sh
sudo apt-get install rsync
```

## Compiling

1. Install Qt Creator from https://www.qt.io.
2. Clone the repo:
```sh
git clone https://github.com/Vesa95/SimpleSync.git
```
3. Open SimpleSync.pro file with QtCreator.
4. If a window with the message "No Valid Settings Found" appear, hit OK.
5. Select your compiler, and hit "Configure Project".
6. From left side of Qt window, select "Release" and hit "Build".
7. Now, the program is compiled, you can find the .exe in the same folder, where you cloned the repo. 
   
   Example:
```sh
\home\user\
  │
  ├── SimpleSync                                            <--- REPO CLONE                         
  └── build-SimpleSync-Desktop_Qt_5_9_6_GCC_64bit-Release   <--- RELEASE FOLDER (.exe)
```




<!-- USAGE EXAMPLES -->
## Usage

SimpleSync can be use to synchronize local directory, or remote directory (or synchronize an external HDD with a samba server, exactly why I used it).

This user guide is split in two: 1 - Local Sync and 2 - Remote Sync.

#### Local Sync: 
   
1.  Choose the folder with the files you want to transfer (sync) "Origin Folder: " <b>Attention: The contain of origin folder will be copied (sync), not the folder!</b>
2.  Choose the destination folder "Sync Folder: "
3.  By default, log file is check, if you don't want to make a log file, uncheck it. The path of log files folder is "\home\user\SimpleSync-logs\"
4. Hit Synchronize and wait to appear "DONE" on console widget.
5.  Now, the files from origin folder, will be also in sync folder, if you make changes on a file from origin folder, and synchronize them one more time, only the files that was changed will be transfered in sync folder.

#### Remote Sync:

   1. For this, will need to be done a few more setting, I highly recommend to use <b>Digital Ocean</b> ssh tutorial: [How To Configure SSH Key-Based Authentication on a Linux Server.](https://www.digitalocean.com/community/tutorials/how-to-configure-ssh-key-based-authentication-on-a-linux-server)
   2.  After you have done, all the steps from tutorial, you wil need one more sheel line to disable ssh for asking you passphrase every time you want to connect to server. 
  ```sh
  ssh-add -K ~/.ssh/id_rsa
  ```
   3. This is needed only if you enter a passphrase at the step 4 from tutorial, but I highly recommend to leave passphrase empty:
   ```sh
  # Step 4 from tutorial:

  Created directory '/home/username/.ssh'.
  Enter passphrase (empty for no passphrase):  <-- LEAVE EMPTY!
  Enter same passphrase again: 
  ```
  4. All ssh setting are done! Congrats!
  5. Now, on SimpleSync press in "Remote Setting" tab, check Remote Sync, and enter the Username and IP adress that you used to connect to server with ssh.
  <p align="center">
    <img src="img\screensh_2.png" alt="screenshot_1">
  </p>
  6. Go back on "Sync" tab, choose the exact path of your folder from server, your destination folder on pc or external hdd and hit Synchronize.
  
#### Example:
  For example I want to synchronize my photos folder from my backup server with my local folder. On my backup server, photos are in \mnt\SambaServer\Media\Photos\ <- this is the path for Origin Folder, and my local folder is \home\user\Photos <- this is the path for Sync Folder.



<!-- CONTRIBUTING -->
## Contributing

Contributions are what make the open source community such an amazing place to be learn, inspire, and create. Any contributions you make are **greatly appreciated**.

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request



<!-- LICENSE -->
## License

Distributed under the MIT License. See `LICENSE` for more information.



<!-- CONTACT -->
## Contact

Vesa Bogdan - vesabogdan95@gmail.com

Project Link: [https://github.com/vesa95/SimpleSync](https://github.com/vesa95/SimpleSync)





<!-- MARKDOWN LINKS & IMAGES -->
[build-shield]: https://img.shields.io/badge/build-passing-brightgreen.svg?style=flat-square
[contributors-shield]: https://img.shields.io/badge/contributors-1-orange.svg?style=flat-square
[license-shield]: https://img.shields.io/badge/license-MIT-blue.svg?style=flat-square
[license-url]: https://choosealicense.com/licenses/mit
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=flat-square&logo=linkedin&colorB=555
[linkedin-url]: https://linkedin.com/in/othneildrew
[product-screenshot]: https://raw.githubusercontent.com/othneildrew/Best-README-Template/master/screenshot.png
