cd "C:\Users\Gunasama\"

:: Pull the latest changes
git pull

:: Add specific directories
git add "Desktop/"
git add "Documents/"

:: Commit changes with a message
git commit -m "Automated backup"

:: Push changes to the main branch
git push origin main
