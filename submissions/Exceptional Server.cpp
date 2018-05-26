/*-----------------------------------------------------------------------

Problem Title: Exceptional Server
Problem Link: https://www.hackerrank.com/challenges/exceptional-server
Author: sanketgautam
Language : C++14

-----------------------------------------------------------------------*/


try {
    cout << Server::compute(A, B);
}
catch (bad_alloc& error) {
    cout << "Not enough memory";
}
catch (const exception& e) {
    cout << "Exception: " << e.what();
}
catch (...) {
    cout << "Other Exception";
}

cout << "\n";