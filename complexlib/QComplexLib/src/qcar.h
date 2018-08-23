#pragma once

#include <QObject>
#include <QScopedPointer>
#include "qcomplexlib.h"


class QCarPrivate;
class QCOMPLEXLIB_EXPORT QCar: public QObject
{
    Q_OBJECT
    Q_DISABLE_COPY(QCar)
    Q_DECLARE_PRIVATE(QCar)

public:
    explicit QCar(QObject *parent = nullptr);
    virtual ~QCar();

    void drive();
    void stop();

    bool isDriving() const;

private:
    QScopedPointer<QCarPrivate> d_ptr;
};
