#pragma once

#include <QObject>
#include <QImage>
#include <string>
#include <map>
#include <vector>
#include <QVector>
using namespace std;

class SourceMnger : public QObject
{
	Q_OBJECT

public:
	SourceMnger(QObject *parent);
	~SourceMnger();

	size_t openImg(const string& img_name);
	size_t grayImg(const size_t id);
	QImage* getImg(size_t id);
	void showImg(size_t id);
	void clear();

signals:
	void sig_show_msg(uint id);
	void sig_show_img(QImage img);

private:
	QVector<QImage*> vec;
};
