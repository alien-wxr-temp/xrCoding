#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle("xrCoding");

    versionNum = new QLabel(this);
    versionNum->setText("version 0.1.0");
    ui->statusBar->addPermanentWidget(versionNum);
    ui->statusBar->setSizeGripEnabled(false);

    codeEditor = new QsciScintilla(this);
    setCentralWidget(codeEditor);
    cppLexer = new QsciLexerCPP;
    cppLexer->setColor(QColor(Qt::green),
                       QsciLexerCPP::CommentLine);
    codeEditor->setLexer(cppLexer);

}

MainWindow::~MainWindow()
{
    delete ui;
}
