#pragma once
#include <QDialog>
#include <QItemSelection>

namespace Ui {
class IconPickerDialog;
}

class IconPickerDialog : public QDialog
{
	Q_OBJECT

public:
	explicit IconPickerDialog(QWidget *parent = 0);
	~IconPickerDialog();
	int exec(QString selection);
	QString selectedIconKey;
	
private:
	Ui::IconPickerDialog *ui;
	
private slots:
	void selectionChanged ( QItemSelection,QItemSelection );
	void activated ( QModelIndex );
	void delayed_scroll ( QModelIndex );
};
