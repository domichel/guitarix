<!-- generated by ../../tools/undiag. DON'T CHANGE (change .mdx source) -->
\page clientserver Client / Server Protocol

The Guitarix engine can act as TCP server using the
[JSON-RPC 2.0](http://www.jsonrpc.org/specification) format, and the
Guitarix user interface can connect as a client. The engine can be
started in a "headless" mode, or include the user interface (called
"local UI" in the diagrams).

\image html client_server_notify.png

The client works synchronously, i.e. it waits for the servers answer
to an JSON-RPC call (blocking the glib main loop):

\image html client_server_call.png

Server state changes are broadcasted to all clients except the one
that triggered the state change (this client generally already knows
the new state). Clients notified of a state change must not reflect
that change back to the server (otherwise network delays and the
delayed processing of asynchronous responses in the glib main loop can
lead to strange effects or endless loops):

\image html client_server_notify_state_changed.png

The Guitarix UI is constructed on the assumption that requested state
changes happen synchronously. If the client needs to get information
about the state change after triggering it, a call should be used
instead of a notify, and the answer should include that information
(the answer to the calling client might be sent before notifying other
clients, the order is unspecified):

\image html client_server_call_state_changed.png

State changes can also be triggered by the local UI (or from inside the server engine):

\image html client_server_local_state_changed.png

Asynchronous notifications from the server are stashed away for the
main glib event loop while waiting for a call answer:

\image html client_server_call_state_changed_broadcast.png