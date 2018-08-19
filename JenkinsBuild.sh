

    mkdir -p buildJenkins
    echo "------------------ build directory created -----------------"
    ( cd buildJenkins ; qmake ../SimpleJenkinsSetup.pro ; make ; ./SimpleJenkinsSetup )
    echo "------------------ build directory removed -----------------"
    rm -r buildJenkins