#include <QApplication>
#include <QMainWindow>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QFileDialog>
#include <QDebug>

class MyWindow : public QMainWindow
{
    Q_OBJECT

public:
    MyWindow(QWidget* parent = nullptr) : QMainWindow(parent)
    {
        setWindowTitle("Import Python File");
        setGeometry(100, 100, 400, 200);

        // 创建布局和小部件
        QVBoxLayout* layout = new QVBoxLayout;
        m_fileLabel = new QLabel("Python File:");
        m_fileInput = new QLineEdit;
        m_paramIndexLabel = new QLabel("Parameter Index:");
        m_paramIndexInput = new QLineEdit;
        m_paramNameLabel = new QLabel("Parameter Name:");
        m_paramNameInput = new QLineEdit;
        m_submitButton = new QPushButton("Submit");
        connect(m_submitButton, &QPushButton::clicked, this, &MyWindow::submitForm);

        layout->addWidget(m_fileLabel);
        layout->addWidget(m_fileInput);
        layout->addWidget(m_paramIndexLabel);
        layout->addWidget(m_paramIndexInput);
        layout->addWidget(m_paramNameLabel);
        layout->addWidget(m_paramNameInput);
        layout->addWidget(m_submitButton);

        QWidget* centralWidget = new QWidget;
        centralWidget->setLayout(layout);
        setCentralWidget(centralWidget);
    }

private slots:
    void submitForm()
    {
        QString pythonFile = m_fileInput->text();
        int paramIndex = m_paramIndexInput->text().toInt();
        QString paramName = m_paramNameInput->text();


        qDebug() << "Python File:" << pythonFile;
        qDebug() << "Parameter Index:" << paramIndex;
        qDebug() << "Parameter Name:" << paramName;
    }

private:
    QLabel* m_fileLabel;
    QLineEdit* m_fileInput;
    QLabel* m_paramIndexLabel;
    QLineEdit* m_paramIndexInput;
    QLabel* m_paramNameLabel;
    QLineEdit* m_paramNameInput;
    QPushButton* m_submitButton;
};

