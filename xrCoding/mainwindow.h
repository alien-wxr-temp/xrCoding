#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>

#include "Qsci/qsciscintilla.h"
#include "Qsci/qscilexercpp.h"
#include "Qsci/qsciapis.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QLabel * versionNum;

    QsciScintilla * codeEditor;
    QsciLexerCPP * cppLexer;
};

#endif // MAINWINDOW_H
