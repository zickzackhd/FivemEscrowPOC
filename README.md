## ❗ Info

### Languages
![cplusplus](https://img.shields.io/badge/c++-black?style=flat-square&logo=cplusplus&logoColor=blue)
![lua](https://custom-icon-badges.herokuapp.com/badge/lua-black.svg?logo=lua&logoColor=blue)

### DevOps & Tools
![vscom](https://img.shields.io/badge/vscommuntiy-black?style=flat-square&logo=visual-studio-code&logoColor=ac68c4)

## ❓Usage
Setup an normal [custom FiveM server build](https://github.com/citizenfx/fivem/blob/master/docs/building.md) and edit the citizen-scripting-lua.cpp in \fivem\code\components\citizen-scripting-lua\src\. Add the code from POC.cpp in "LoadFileInternal" and the 2 Functions anywhere above it.

After that just build it and go to \fivem\code\bin\server\windows\release\
there just add svadhesive.dll from the [latest FiveM build](https://runtime.fivem.net/artifacts/fivem/build_server_windows/master/) and add "svadhesive", to components.json in the same path.

## 🧠 For Retardos
Heres an [already finished build for FiveM](https://workupload.com/file/yrBfkx3bnLv) just replace this with your server Folder.
The resource name of the resource you want to dump MUST be: **dumpresource**
AND if you need to dump client files just edit the fxmanifest from client_script to server_script(ONLY ONE SERVER_SCRIPT PER RESTART! DELETE OTHER SERVER_SCRIPT ENTRIES)


## If you need help HMU
