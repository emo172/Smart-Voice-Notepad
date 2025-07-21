#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "widget.h"

class MdiChild;
class QMdiSubWindow;
class QSignalMapper;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionNew_triggered();  	// 当用户点击“新建”菜单项时触发，用于创建新的文档窗口
    void updateMenus();            		// 更新应用程序的菜单栏，可能根据当前状态启用或禁用某些菜单项
    MdiChild *createMdiChild();     	// 创建一个新的MDI子窗口，通常用于显示文档内容
    void setActiveSubWindow(QWidget *window); // 设置当前活动的MDI子窗口，以便用户与之交互

    void on_actionOpen_triggered();     // 当用户点击“打开”菜单项时触发，用于打开一个现有的文件
    void updateWindowMenu();            // 更新窗口菜单，显示当前打开的所有MDI子窗口的列表
    void on_actionSave_triggered();     // 当用户点击“保存”菜单项时触发，用于保存当前活动的MDI子窗口的内容
    void on_actionSaveAs_triggered();   // 当用户点击“另存为”菜单项时触发，用于将当前活动的MDI子窗口的内容保存到新文件
    void on_actionUndo_triggered();     // 当用户点击“撤销”菜单项时触发，用于撤销上一次编辑操作
    void on_actionRedo_triggered();     // 当用户点击“重做”菜单项时触发，用于重做上一次撤销的操作
    void on_actionCut_triggered();      // 当用户点击“剪切”菜单项时触发，用于剪切选中的文本或对象
    void on_actionCopy_triggered();     // 当用户点击“复制”菜单项时触发，用于复制选中的文本或对象
    void on_actionPaste_triggered();    // 当用户点击“粘贴”菜单项时触发，用于粘贴剪贴板中的内容
    void on_actionVoice_triggered();
    void on_actionClose_triggered();    // 当用户点击“关闭”菜单项时触发，用于关闭当前活动的MDI子窗口
    void on_actionCloseAll_triggered(); // 当用户点击“全部关闭”菜单项时触发，用于关闭所有MDI子窗口
    void on_actionTile_triggered();     // 当用户点击“平铺”菜单项时触发，用于重新排列所有MDI子窗口以平铺显示
    void on_actionCascade_triggered();  // 当用户点击“层叠”菜单项时触发，用于重新排列所有MDI子窗口以层叠显示
    void on_actionNext_triggered();     // 当用户点击“下一个”菜单项时触发，用于激活下一个MDI子窗口
    void on_actionPrevious_triggered(); // 当用户点击“上一个”菜单项时触发，用于激活上一个MDI子窗口
    void on_actionAbout_triggered();    // 当用户点击“关于”菜单项时触发，用于显示应用程序的关于信息
    void on_actionAboutQt_triggered();  // 当用户点击“关于Qt”菜单项时触发，用于显示Qt框架的关于信息
    void on_actionExit_triggered();     // 当用户点击“退出”菜单项时触发，用于退出应用程序
    void showTextRowAndCol();           // 显示当前文本光标所在的行号和列号，可能用于编辑器功能

    void on_pushButton_clicked();       //语音输入
    void on_speedButton_clicked();      //语音朗读

private:
    Ui::MainWindow *ui;

    QAction *actionSeparator; // 分隔符
    MdiChild *activeMdiChild(); // 活动窗口
    QMdiSubWindow *findMdiChild(const QString &fileName);// 查找子窗口

    QSignalMapper *windowMapper; // 信号映射器

    void readSettings();  // 读取窗口设置
    void writeSettings(); // 写入窗口设置
    void initWindow(); // 初始化窗口

protected:
    void closeEvent(QCloseEvent *event);
};

#endif // MAINWINDOW_H
