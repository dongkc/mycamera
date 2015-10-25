#ifndef CAMERA_H
#define CAMERA_H

#include <QMainWindow>

namespace Ui {
  class camera;
}

class QCamera;
class QCameraViewfinder;
class QCameraImageCapture;

class camera : public QMainWindow
{
  Q_OBJECT

public:
  explicit camera(QWidget *parent = 0);
  ~camera();

private:
  Ui::camera *ui;
  QCamera *cam;
  QCameraViewfinder *viewfinder;
  QCameraImageCapture *capture;
};

#endif // CAMERA_H
