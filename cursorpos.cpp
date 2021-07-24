
// windows
POINT p;
if (GetCursorPos(&p))
{
    //cursor position now in p.x and p.y
}

// darwin
CGEventRef event = CGEventCreate(NULL);
CGPoint cursor = CGEventGetLocation(event);
CFRelease(event);

// linux/bsd

gdk_window_get_position();
//           +
gdk_window_get_device_position();
