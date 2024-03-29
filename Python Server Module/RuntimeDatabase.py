import threading


class RuntimeDatabase:
    idle_connections_lock = threading.Lock()
    idle_connections = dict()  # {Ip-Address : Computer Object}
    post_request_events_lock = threading.Lock()
    post_request_events = dict()  # {Session-Id : Event}

