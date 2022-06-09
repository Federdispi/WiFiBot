#include "camera.h"

Camera::Camera()
{
    accessManager = new QNetworkAccessManager();
}

void Camera::moveUp() {
    request.setUrl(QUrl("http://192.168.1.106:8080/?action=command&dest=0&plugin=0&id=10094853&group=1&value=-200"));
    reply = accessManager->get(request);
}

void Camera::moveDown() {
    request.setUrl(QUrl("http://192.168.1.106:8080/?action=command&dest=0&plugin=0&id=10094853&group=1&value=200"));
    reply = accessManager->get(request);
}

void Camera::moveLeft() {
    request.setUrl(QUrl("http://192.168.1.106:8080/?action=command&dest=0&plugin=0&id=10094852&group=1&value=200"));
    reply = accessManager->get(request);
}

void Camera::moveRight() {
    request.setUrl(QUrl("http://192.168.1.106:8080/?action=command&dest=0&plugin=0&id=10094852&group=1&value=-200"));
    reply = accessManager->get(request);
}

void Camera::show(QWebEngineView *view) {
    view->load(QUrl("http://192.168.1.106:8080/?action=stream"));
    view->show();
    view->resize(491,371);
    view->setZoomFactor(1.535);
}
