# .bashrc

# Source global definitions
if [ -f /usr/socs/Profile ]; then
        . /usr/socs/Profile
fi

# User specific aliases and functions

./Source/backup

# User specific aliases and functions
alias lsa='ls -l -a'
PS1='[\u][\h][\w][COMPANY_MOTTO]'
