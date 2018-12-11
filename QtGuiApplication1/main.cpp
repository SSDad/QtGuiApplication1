#include <QApplication>
#include <QSurfaceFormat>
#include <QVTKOpenGLWidget.h>

#include "QtGuiApplication1.h"

int main(int argc, char** argv)
{
	// needed to ensure appropriate OpenGL context is created for VTK rendering.
	QSurfaceFormat::setDefaultFormat(QVTKOpenGLWidget::defaultFormat());

	// QT Stuff
	QApplication app(argc, argv);

	QtGuiApplication1 QtGuiApplication1;
	QtGuiApplication1.show();

	return app.exec();
}