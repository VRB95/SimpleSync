<!-- PROJECT LOGO -->
<p align="center">
  <img src="img\logo.png" alt="Logo" width="80" height="80">
</p>

  <h3 align="center">SimpleSync</h3>

<p align="center">
    <b>Simple</b> user interface for <b>Simple</b> synchronize
</p>




<!-- TABLE OF CONTENTS -->
## Table of Contents


- [Table of Contents](#table-of-contents)
- [About The Project:](#about-the-project)
  - [Built With:](#built-with)
- [Prerequisites](#prerequisites)
- [Compiling](#compiling)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)
- [Contact](#contact)



<!-- ABOUT THE PROJECT -->
## About The Project:

<p align="center">
  <img src="img\screensh_1.png" alt="screenshot_1">
</p>

SimpleSync is a graphical user interface for [rsync](https://rsync.samba.org) wich is a utility for efficiently transferring and synchronizing files between a computer and an external hard drive and across networked computers by comparing the modification times and sizes of files.

### Built With:
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
6. From left side of Qt window, select "Release" and hit build.
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

Use this space to show useful examples of how a project can be used. Additional screenshots, code examples and demos work well in this space. You may also link to more resources.

_For more examples, please refer to the [Documentation](https://example.com)_



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
