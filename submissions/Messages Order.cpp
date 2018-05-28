/*-----------------------------------------------------------------------

Problem Title: Messages Order
Problem Link: https://www.hackerrank.com/challenges/messages-order
Author: sanketgautam
Language : C++14

-----------------------------------------------------------------------*/


class Message {
    static int i;
    int id;
    string text;

public:
    Message() {}
    Message(string s)
    {
        id = i;
        text = s;
        i++;
    }
    const string& get_text()
    {
        return text;
    }

    const int& get_id()
    {
        return id;
    }
    bool operator<(Message& m)
    {
        return this->get_id() < m.get_id();
    }
};

int Message::i = 1;

class MessageFactory {
public:
    MessageFactory() {}
    Message create_message(const string& text)
    {
        return Message(text);
    }
};