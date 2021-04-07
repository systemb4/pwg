## password generator(pwg)
pwg is a pseudo-suckless piece of software that generates completely random passwords that you won't be able to rememeber

---

#### sample output
<code>BF5b58dlBUI9</code> <code>AIKVpNzgbmkF</code> <code>OFgZIMj0fd90</code> <code>90iyRQugn32C</code>
<code>Q9PW0LT7I3up</code> <code>GOtRGkjayPGX</code> <code>uGXEKNkqJXaJ</code> <code>wUF5KXhezBW4</code>
<code>jDURoVqKDTEb</code> <code>ELf4a2UMVOIs</code> <code>crj7XAA62iMf</code> <code>21PuHjtbSz3T</code>
<code>YKUNTwSIkx4R</code> <code>EkSlJI3YllVz</code> <code>adSez36mDOZk</code> <code>9ISj4J1wUHHt</code>
<code>mDBNhpXgVEpM</code> <code>dd9XIDfM1iYy</code> <code>0C5ZWEf89GKf</code> <code>TwlE1yh4AdP9</code>
<code>hSFfpdi7zsBp</code> <code>OGheJUbgCJCq</code> <code>5meS1Ss6AVaN</code> <code>YhKmxbzbHGgg</code>
<br>
<code>1543LVm2L2TCsNMG5</code> <code><202DcJqCGX5aYxN30WAVp6/code>

## installation
to install pwg onto your system use the command <code>sudo make install</code><br>
<code>man pwg</code> will show you the manual for pwg<br>
to change defaults edit config.h to your likings<br>
<code>pwg</code> is also available in the aur as <code>pwg-git</code> (currently not functioning)

## options
**-h**
:show available commands

**-l**
:specify length of password

**-a**
:specify amount of passwords

**-m**
:specify to only output one password which also uses the numcounter algorithm to make sure that the single password contains a sufficient amount of numbers so that it is even stronger

**-n**
:specify amount of numbers to check for in the numcount algorithm

## EXAMPLES
<code>pwg -m -n 3 -l 15</code>
:outputs a single password with a length of 15 characters and makes sure that the password has at least three numbers in it for maximum security

## BUGS
submit bug reports and suggestions online at: https://github.com/systemb4/pwg/issues
