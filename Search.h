/* 
 * File:   Search.h
 * Author: dm940
 *
 * Created on 13 May 2015, 7:25 PM
 */

#ifndef _SEARCH_H
#define	_SEARCH_H

#include "ui_Search.h"

class Search : public QWidget {
    Q_OBJECT
public:
    Search();
    virtual ~Search();
	void setType(bool);
    
public slots:
    void searchResult();
    
private:
    Ui::Search widget;
	bool sType;
};

#endif	/* _SEARCH_H */
