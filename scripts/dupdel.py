import subprocess, os

n = int(input("How many paths? "))
pathmain = input("Enter the principal path: ")
paths = [ pathmain ]
for i in range(n-1):
    path = input(f"Enter path {i+1}: ")
    paths.append(path)
dbornot = intput("Database? (Recommended)\n y/n: ")
if dbornot != "y":
dbON =

    dbpath = input("Enter database path (Leave empty for default): ")
    if dbpath == "":
        dbpath = "~/jdupes.db"

        subprocess.run([ "jdupes", "-rSOm", "-y", os.path.expanduser(dbpath)] + paths)

subprocess.run([ "jdupes", "-rSOm", "-y", os.path.expanduser(dbpath)] + paths)


deleteON = input("Continue with deletion? \n y/n: ")
if deleteON == "y" or deleteON == "yes":
    subprocess.run( [ "jdupes", "-rdNO"])

jdupes -rdNO -y ~/jdupesm31.db
