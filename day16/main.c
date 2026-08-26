#include <stdio.h>

typedef enum { STATUS_READY, STATUS_RUNNING, STATUS_DONE } Status;

static const char *status_name(Status status)
{
    switch (status) {
        case STATUS_READY: return "ready";
        case STATUS_RUNNING: return "running";
        case STATUS_DONE: return "done";
        default: return "unknown";
    }
}

int main(void)
{
    for (Status status = STATUS_READY; status <= STATUS_DONE; ++status) {
        printf("%d: %s\n", status, status_name(status));
    }
    return 0;
}
