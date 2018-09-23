import subprocess
test = subprocess.check_output(['git', 'diff','ae74ec8','66d85f1','--color-words'],universal_newlines=True)

#test = subprocess.check_output(["ls","-l"])
print(test)
