If reading through the OpenSplice documentation you will read that you need to source two different files
1) setup.env
2) release.com

Moving forward this repo may contain multiple version. To simplify setting up, the bin directory contains
a setup.env for each version of OpenSplice. Within the setup.env it also sources the release.com. This way
when downloading this repo onto any new machines you only source the setup.env for the OpenSplice you wish
to use. 

You need to modify the setup.env file for every machine, this repo contains a boilerplate. To ignore the
setup.env do `git update-index --assume-unchanged [<file> ...]`. This is explained in more depth here
https://stackoverflow.com/questions/3319479/can-i-git-commit-a-file-and-ignore-its-content-changes
