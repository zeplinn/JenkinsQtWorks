

    mkdir -p buildJenkins
    ( cd buildJenkins ; qmake ../SimpleJenkinsSetup.pro ; make ; ./SimpleJenkinsSetup -xunitxml )
    