/* 
 * File:   StringDialog.h
 * Author: dm940
 *
 * Created on 14 May 2015, 5:31 PM
 */

#ifndef _STRINGDIALOG_H
#define	_STRINGDIALOG_H

#include "ui_StringDialog.h"

class StringDialog : public QDialog {
	Q_OBJECT
public:
	StringDialog();
	virtual ~StringDialog();
	QString getText();
	void setText(QString);
private:
	Ui::StringDialog widget;
};

#endif	/* _STRINGDIALOG_H */
