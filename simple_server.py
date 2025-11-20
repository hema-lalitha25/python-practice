# simple_server.py
# Start a tiny HTTP server serving current directory (Python 3)

import http.server
import socketserver

PORT = 8000

def main():
    handler = http.server.SimpleHTTPRequestHandler
    with socketserver.TCPServer(("", PORT), handler) as httpd:
        print(f"Serving HTTP on port {PORT} (http://localhost:{PORT})")
        try:
            httpd.serve_forever()
        except KeyboardInterrupt:
            print("Shutting down server")

if __name__ == '__main__':
    main()
