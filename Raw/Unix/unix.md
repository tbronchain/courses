# Unix

## Part 1

**Goal:** Get familiar with the system

### Step 1

- Discover the system
- Start a terminal
- Use `man man` command, and read the manual

		hint:	hit `q` to quit, read `man less` to learn more about the reader

- Get familiar with `echo`, `cd`, `ls`, `mkdir`, `cp`, `mv`, `rm`, `touch`, `env`, `export`, `unset`

		hint:	RTFM! (Read The Fucking Manual =) )

### Step 2

- Create a directory `~/share/ex/unix/part1`

		hint:	What is `~`?
				RTFM!

- Create an empty file `~/share/ex/unix/part1/file1`

		hint:	`man touch`

- Create a file `~/share/ex/unix/part1/file2` containing `Unix Step 2`

		hint:	Inputs, Outputs and redirections (`>`, `>>`, `<`, `<<`)

- Create a link `~/share/ex/unix/part1/file3` to `~/share/ex/unix/part1/file2`

		hint:	`man ln`

### Step 3

- Write a command in the file `~/share/ex/unix/part1/list` which should be able to write a detailed list of all files and directories in `~/share/ex/unix/part1`, with colors, human readable file sizes, and a "/" at the end of directories

		hint:	man ls
				man touch

- Change the rights to `~/share/ex/unix/part1/list`, giving "read", "write", and "execution" rights to the owner, "read" and "write" rights to the group, and "read" only rights to all other user.

		hint:	man chmod
				(man chown)

### Step 4

- Push the content of `~/share` repository

		hint:	man git
				man git add
				man git commit
				man git push

## Part 2

**Goal:** Learn text editor, go deeper in console usage

### Step 1

- Write a command in the file `~/share/ex/unix/part2/list` which should be able to write a detailed list of all files and directories in `~/share/ex/unix/part1`, with colors, human readable file sizes, and a "/" at the end of directories.<br>In addition, in the content displayed, all "i" should be replaced by a "z".

		hint:	man sed
				What is a `pipe` (`|`)?

- Write a command in the file `~/share/ex/unix/part2/root` which should be able to write a detailed list of all files and directories in `/`, with colors, human readable file sizes, and a "/" at the end of directories.<br>Don't display any directory containing the letter "e" and "m".

		hint:	man grep

### Step 2

- Get familiar with the editor `vi`

		hint:	"vi" is hard to use at the begining! Spend some time reading the manual, and search some tricks online! Spend enough time to understand the "insert" modes.

### Step 3

- Write a bash script in `~/share/ex/unix/part2/script.sh` which runs the scripts done in Step 1 and 2. I should be able to run it using `cd ~/share/ex/unix/part2/ && ./script.sh`

		hint:	man bash
				search online how to write and execute bash scripts
				man chmod

- Learn about local and environment variables

		hint:	man bash
				man env

### Step 4

- Push the content of `~/share` repository

		hint:	man git
				man git add
				man git commit
				man git pull
				man git push
