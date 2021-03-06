#ifndef TST_VERSION_H
#define TST_VERSION_H

#include "version.h"
#include <QtTest/QtTest>

QTX_USE_NAMESPACE


class tst_Version : public QObject
{
Q_OBJECT

private slots:
    void init();
    void cleanup();
    
    void defaultConstructorTest();
    void stringConstructorTest();
    void copyConstructorTest();
    
    void parseNormalVersionTest();
    void parsePrereleaseVersionTest();
    void parseBuildVersionTest();
    
    void compareEqualVersionTest();
    void compareDifferentVersionTest();
    void compareDifferentSegmentCountTest();
    void comparePrereleaseSegmentsTest();
    void compareBuildSegmentsTest();
    void compareNumericVsAlphanumericTest();
    void comparePrereleaseVsBuildTest();
    void compareInvalidTest();
    
    void semverExampleTest();
    
    void operatorEqualTest();
    void operatorEqualsTest();
    void operatorNotEqualsTest();
    void operatorLessThanTest();
    void operatorGreaterThanTest();
    void operatorLessThanOrEqualTest();
    void operatorGreaterThanOrEqualTest();
    
public:
    Version *mVersion;
};

#endif // TST_VERSION_H
