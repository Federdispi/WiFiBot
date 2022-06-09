#ifndef CAMERA_H
#define CAMERA_H

#include <QWebEngineView>

class Camera
{
public:
    Camera();
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();
    void show(QWebEngineView *view);

private:
    QNetworkAccessManager *accessManager;
    QNetworkRequest request;
    QNetworkReply *reply;
};

#endif // CAMERA_H
