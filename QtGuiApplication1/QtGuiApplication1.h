#ifndef QtGuiApplication1_H
#define QtGuiApplication1_H

#include <QMainWindow>

// Forward Qt class declarations
class Ui_QtGuiApplication1;

class QtGuiApplication1 : public QMainWindow
{
	Q_OBJECT
public:

	// Constructor/Destructor
	QtGuiApplication1();
	~QtGuiApplication1() {};

	public slots:

	virtual void slotExit();

private:

	// Designer form
	Ui_QtGuiApplication1 *ui;
};

#endif