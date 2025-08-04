#ifndef TESTRLE_H
#define TESTRLE_H

#include <QObject>
#include <QtTest/QtTest>

class TestRle : public QObject
{
  Q_OBJECT
public:
  explicit TestRle(QObject* parent = 0);
  virtual ~TestRle() {}

private:
private slots:
  void initTestCase();

  void compress1();
  void compress2();
  void compress5();

  void cleanupTestCase();
};

#endif // TESTRLE_H
