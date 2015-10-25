#include <QtWidgets>
#include <QCamera>
#include <QCameraViewfinder>

#include "camera.h"
#include "ui_camera.h"

camera::camera(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::camera)
{
  ui->setupUi(this);

  cam = new QCamera(this);
  viewfinder = new QCameraViewfinder(this);
  ui->horizontalLayout->addWidget(viewfinder);
  cam->setViewfinder(viewfinder);
  cam->start();

}

camera::~camera()
{
  delete ui;
}
