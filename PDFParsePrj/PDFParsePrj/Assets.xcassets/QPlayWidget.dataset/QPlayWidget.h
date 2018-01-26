#ifndef QPLAYWIDGET_H
#define QPLAYWIDGET_H

#include <QWidget>
class QPlayWidget : public QWidget
{
    Q_OBJECT
public:
    explicit QPlayWidget(QWidget *parent = 0);
	~QPlayWidget();
#ifdef QT_SELF_RENDER
	void updateUi(QImage *img);
	void updateUi(QImage img);
#endif
signals:
    void mouseLeftPressed();
//#ifdef QT_SELF_RENDER
	void signalUpdate();
//#endif
public slots:

protected:
    virtual void paintEvent(QPaintEvent *);
    virtual void mousePressEvent(QMouseEvent *);
    virtual void resizeEvent(QResizeEvent *);
#ifdef QT_SELF_RENDER
	QImage m_img;
#endif
};

#endif // QPLAYWIDGET_H
