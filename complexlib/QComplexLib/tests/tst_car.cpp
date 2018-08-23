#include <QtTest>
#include <QtGlobal>

#include "qcar.h"


class CarTest : public QObject
{
    Q_OBJECT

public:
    CarTest();

private Q_SLOTS:
    void testDefaultConstructor();
    void testDriving();
};

CarTest::CarTest()
{
}

void CarTest::testDefaultConstructor()
{
    QCar car;
    QVERIFY(!car.isDriving());
}

void CarTest::testDriving()
{
    QCar car;
    QVERIFY(!car.isDriving());

    car.drive();
    QVERIFY(car.isDriving());

    car.stop();
    QVERIFY(!car.isDriving());
}


QTEST_APPLESS_MAIN(CarTest)

#include "tst_car.moc"
