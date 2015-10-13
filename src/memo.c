
#include <Xm/Xm.h>
#include <Xm/Label.h>
#include <stdlib.h>
#include <stdio.h>

void main(int argc, char **argv) 
{
	Widget shell, msg;
	XtAppContext app;
	XmString xmstr;

	shell = XtAppInitialize (&app, "Memo", NULL, 0, &argc, argv, NULL, NULL, 0);

	if(argc != 2) 
	{
		fprintf(stderr, "Usage: memo message-string\n");
		exit(1);
	}

	xmstr = XmStringCreateLtoR(argv[1], XmFONTLIST_DEFAULT_TAG);
	msg = XtVaCreateManagedWidget("message", xmLabelWidgetClass, shell, XmNlabelString, xmstr, NULL);
	XmStringFree(xmstr);
	XtRealizeWidget(shell);
	XtAppMainLoop(app);
}
