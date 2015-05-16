/* 
 * File:   searchResults.h
 * Author: dm940
 *
 * Created on 14 May 2015, 4:49 PM
 */

#ifndef _SEARCHRESULTS_H
#define	_SEARCHRESULTS_H

#include "ui_searchResults.h"

class searchResults : public QWidget {
	Q_OBJECT
public:
	searchResults();
	virtual ~searchResults();
private:
	Ui::searchResults widget;
};

#endif	/* _SEARCHRESULTS_H */
