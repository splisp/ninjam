#ifndef _MAINWND_H
#define _MAINWND_H

#include <wnd/wnds/os/osframewnd.h>

class NJRackWnd;

#define MAINWND_PARENT OSFrameWnd
class MainWnd : public OSFrameWnd {
public:
  MainWnd();
  ~MainWnd();

  void setFormattedName(const char *substr=NULL);

  virtual int onInit();
  virtual int onResize();

  virtual int onMenuCommand(int cmd);

  virtual void onUserClose();

  virtual void timerclient_timerCallback(int id);

  virtual int getMinFrameWidth() { return 800; }
  virtual int getMinFrameHeight() { return 360; }

  void handleConnect();
  void handleDisconnect();

private:
  NJRackWnd *rackwnd;
};

#endif
