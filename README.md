# Some Basics of Git

## Creation of a New Project
 - Create an account on [GitHub](http://github.com)
 - Create a new project on GitHub (do not check box `README.md`), say with name `ownProject`
 - Install git through package manager.
 - Execute
 ```
mkdir ownProject
cd ownProject
echo "# my own project" > README.md
git init
git add README.md
git commit -m "initial commit"
git remote add origin https://github.com/YOUR-GH-NAME/ownProject
git push -u origin master
```
Do no forget to replace YOUR-GH-NAME with your GitHub account name.
 - Browse to [https://github.com/YOUR-GH-NAME/ownProject] to look at the GitHub repository of `ownProject`.

## Make some local changes
1) For example, create a directory src under ownProject with files `src/hallowelt.cc` with content
```
#include<iostream>

int main(){
    std::cout << "Hallo Welt!" << std::endl;
    return 0;
}
```
and file `src/Makefile` with content
```
hallowelt: hallowelt.cc
	g++ hallowelt.cc -o hallowelt

```
Make sure there is only one tab and no spaces before `g++` in this makefile.

2) Add the two new files and their parent directory to the **staging area**. In the parent directory execute
```
git add src
git status
git commit -m "Added Hallo Welt program"
```

Output of `git status`:
```
On branch master
Your branch is up to date with 'origin/master'.

Changes to be committed:
  (use "git reset HEAD <file>..." to unstage)

        new file:   src/Makefile
        new file:   src/hallowelt
        new file:   src/hallowelt.cc

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git checkout -- <file>..." to discard changes in working directory)

        modified:   README.md

Untracked files:
  (use "git add <file>..." to include in what will be committed)

        create-project.md

```

After the commit, only your local repository is changed. To make the changes also in the remote repository on GitHub do
```

```

## MarkDown
