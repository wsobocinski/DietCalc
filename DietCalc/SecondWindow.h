#pragma once

#include <QWidget>
#include "ui_SecondWindow.h"
#include "Food.h"

class SecondWindow : public QWidget {
	Q_OBJECT

public:
	SecondWindow(QWidget *parent = Q_NULLPTR);
	~SecondWindow();

private slots:
	Food * getCurrentObject();
	void on_pickButton_clicked();
	void insertItems();
	void on_chooseButton_clicked();
	void on_undoButton_clicked();
	void changeCalories();

private:
	Ui::SecondWindow ui;
};
