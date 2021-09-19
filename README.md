# SUrl (задание №3)
## Installing
You can install .deb package on your debian-based machine:
```bash
wget https://github.com/EpicStep/surl-hackathon/releases/download/1.0/surl-0.1.1-Linux.deb
dpkg -i surl-0.1.1-Linux.deb
```
After this you can use this util:
```bash
surl <METHOD (default: systemInfo)>
```
## Build
You must install libssl-dev (```sudo apt install libssl-dev```).
```bash
cmake .
cmake --build .
```
## Run
```bash
./surl <METHOD (default: systemInfo)>
```