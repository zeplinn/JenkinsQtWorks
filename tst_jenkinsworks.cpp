#include <QtTest>

// add necessary includes here

class JenkinsWorks : public QObject
{
    Q_OBJECT

public:
    JenkinsWorks();
    ~JenkinsWorks();

private slots:
    void test_fail();
    void test_succes();
};

JenkinsWorks::JenkinsWorks()
{

}

JenkinsWorks::~JenkinsWorks()
{

}

void JenkinsWorks::test_succes()
{
 QCOMPARE(1,1);
}

void JenkinsWorks::test_fail()
{
    QCOMPARE(1,1);
    QCOMPARE(1,1);
    QCOMPARE(1,1);
    /// no dails  ddaaa
}

QTEST_APPLESS_MAIN(JenkinsWorks)

#include "tst_jenkinsworks.moc"
