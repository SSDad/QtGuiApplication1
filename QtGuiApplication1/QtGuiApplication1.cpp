#include <vtkAutoInit.h> 
#include <vtkRenderingOpenGLConfigure.h> 

VTK_MODULE_INIT(vtkInteractionStyle)
//VTK_MODULE_INIT(vtkRenderingFreeType)

#ifdef VTK_OPENGL2 
VTK_MODULE_INIT(vtkRenderingOpenGL2)
#else 
VTK_MODULE_INIT(vtkRenderingOpenGL)
#endif 


#include "QtGuiApplication1.h"

// This is included here because it is forward declared in
// QtGuiApplication1.h
#include "ui_QtGuiApplication1.h"

#include <vtkGenericOpenGLRenderWindow.h>
#include <vtkNew.h>
#include <vtkPolyDataMapper.h>
#include <vtkRenderer.h>
#include <vtkRenderWindow.h>
#include <vtkSphereSource.h>
#include <vtkSmartPointer.h>
#include <QDesktopWidget.h>

#include <vtkDICOMImageReader.h>
#include <vtkImageData.h>
#include <vtkImageMapper.h>
#include <vtkImageActor.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkInteractorStyleImage.h>

// Constructor
QtGuiApplication1::QtGuiApplication1()
{
	this->ui = new Ui_QtGuiApplication1;
	this->ui->setupUi(this);

	// set main window size and postion 
	QSize availableSize = qApp->desktop()->availableGeometry().size();
	int W_screen = availableSize.width();
	int H_screen = availableSize.height();
	
	double ratio_screen = 0.2;
	this->setGeometry(W_screen*(1-ratio_screen)/2, H_screen*(1 - ratio_screen) / 2, W_screen*ratio_screen, H_screen*ratio_screen);


	vtkNew<vtkGenericOpenGLRenderWindow> renderWindow_rend;
	this->ui->qvtkWidget_rend->SetRenderWindow(renderWindow_rend);

	vtkNew<vtkGenericOpenGLRenderWindow> renderWindow_axial;
	this->ui->qvtkWidget_axial->SetRenderWindow(renderWindow_axial);


	// Sphere
	vtkNew<vtkSphereSource> sphereSource;
	sphereSource->Update();

	vtkNew<vtkPolyDataMapper> sphereMapper_rend;
	sphereMapper_rend->SetInputConnection(sphereSource->GetOutputPort());

	vtkNew<vtkActor> sphereActor_rend;
	sphereActor_rend->SetMapper(sphereMapper_rend);

	vtkNew<vtkRenderer> renderer_rend;
	renderer_rend->AddActor(sphereActor_rend);

	this->ui->qvtkWidget_rend->GetRenderWindow()->AddRenderer(renderer_rend);

	// DICOM
	std::string inputFilename = "E:/Images/CIT/dicom/IMG00000.DCM";
	vtkSmartPointer<vtkDICOMImageReader> reader =
		vtkSmartPointer<vtkDICOMImageReader>::New();
	reader->SetFileName(inputFilename.c_str());
	reader->Update();

	vtkSmartPointer<vtkImageData> vImgData = vtkSmartPointer<vtkImageData>::New();
	vImgData = reader->GetOutput();

	vtkSmartPointer<vtkImageActor> actor =
		vtkSmartPointer<vtkImageActor>::New();
	actor->SetInputData(vImgData);

	vtkNew<vtkRenderer> renderer_axial;
	renderer_axial->AddActor(actor);

	this->ui->qvtkWidget_axial->GetRenderWindow()->AddRenderer(renderer_axial);
	this->ui->qvtkWidget_axial->GetRenderWindow()->Render();

	//vtkSmartPointer<vtkRenderWindowInteractor> interactor =
	//	vtkSmartPointer<vtkRenderWindowInteractor>::New();
	//interactor->SetRenderWindow(this->ui->qvtkWidget_axial->GetRenderWindow());

	//vtkSmartPointer<vtkInteractorStyleImage> style =
	//	vtkSmartPointer<vtkInteractorStyleImage>::New();
	//interactor->SetInteractorStyle(style);
	//interactor->Start();

	// Set up action signals and slots
	connect(this->ui->actionExit, SIGNAL(triggered()), this, SLOT(slotExit()));

}

void QtGuiApplication1::slotExit()
{
	qApp->exit();
}