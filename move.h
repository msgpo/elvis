/* move.h */
/* Copyright 1995 by Steve Kirkendall */


BEGIN_EXTERNC
extern RESULT	m_left P_((WINDOW win, VIINFO *vinf));
extern RESULT	m_right P_((WINDOW win, VIINFO *vinf));
extern RESULT	m_updown P_((WINDOW win, VIINFO *vinf));
extern RESULT	m_front P_((WINDOW win, VIINFO *vinf));
extern RESULT	m_absolute P_((WINDOW win, VIINFO *vinf));
extern RESULT	m_mark P_((WINDOW win, VIINFO *vinf));
extern RESULT	m_bigword P_((WINDOW win, VIINFO *vinf));
extern RESULT	m_word P_((WINDOW win, VIINFO *vinf));
extern RESULT	m_scroll P_((WINDOW win, VIINFO *vinf));
extern RESULT	m_column P_((WINDOW win, VIINFO *vinf));
extern RESULT	m_csearch P_((WINDOW win, VIINFO *vinf));
extern RESULT	m_tag P_((WINDOW win, VIINFO *vinf));
extern RESULT	m_bsection P_((WINDOW win, VIINFO *vinf));
extern RESULT	m_fsection P_((WINDOW win, VIINFO *vinf));
extern RESULT	m_scrnrel P_((WINDOW win, VIINFO *vinf));
extern RESULT	m_z P_((WINDOW win, VIINFO *vinf));
extern RESULT	m_fsentence P_((WINDOW win, VIINFO *vinf));
extern RESULT	m_bsentence P_((WINDOW win, VIINFO *vinf));

/* in search.c */
extern RESULT	m_search P_((WINDOW win, VIINFO *vinf));
extern regexp	*searchre;
extern BOOLEAN	searchforward;
extern BOOLEAN	searchhasdelta;
extern long	searchdelta;
END_EXTERNC
