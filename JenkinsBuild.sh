    mkdir -p buildJenkins
    ( cd buildJenkins ; qmake ../SimpleJenkinsSetup.pro ; make )
    (cd buildJenkins ; ./SimpleJenkinsSetup -o SimpleJenkinsSetup.xml -xunitxml  )