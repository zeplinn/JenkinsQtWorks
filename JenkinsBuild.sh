    mkdir -p buildJenkins
    ( cd buildJenkins ; qmake ../SimpleJenkinsSetup.pro ; make )
    (cd buildJenkins ; ./SimpleJenkinsSetup -xunitxml > SimpleJenkinsSetup.xml  )