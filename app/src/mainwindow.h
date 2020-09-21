#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QFileSystemModel>
#include <QDir>
#include <QTreeView>
#include <QString>
#include <QStringList>

QT_BEGIN_NAMESPACE
namespace Ui
{
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT;

public:
    /*struct TEST : public QAbstractItemModel
    {
        QString Title;
        QString Artist;
        QString Gener;

        virtual QModelIndex index(int row, int column, const QModelIndex &parent = QModelIndex()){
            return createIndex(row, column, parent)} override;
        virtual QModelIndex parent(const QModelIndex &child) override
        {
            return QModelIndex::parent;
        }
        
    } test{"Killer", "Queen", "Rock"};*/

    explicit MainWindow(QString path = "~/", QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    void on_fileBrowser_clicked(const QModelIndex &index);

private:
    Ui::MainWindow *ui;
    QFileSystemModel *dirmodel;
    QFileSystemModel *filemodel;
};
#endif // MAINWINDOW_H
