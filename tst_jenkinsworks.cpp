#include <QtTest>

// add necessary includes here

class JenkinsWorks : public QObject
{
    Q_OBJECT

public:
    JenkinsWorks();
    ~JenkinsWorks();

private slots:
    void test_case1();

};

JenkinsWorks::JenkinsWorks()
{

}

JenkinsWorks::~JenkinsWorks()
{

}

void JenkinsWorks::test_case1()
{

}

QTEST_APPLESS_MAIN(JenkinsWorks)

#include "tst_jenkinsworks.moc"
