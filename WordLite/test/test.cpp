#include <QCoreApplication>
#include<QString>
#include<QDir>
#include<QDebug>
#include "../back_head/database.h"
#include "../back_head/loadword.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo()<<WordDatabase::getlist();

    //导入
    // QString jsonFilePath = "D:\\PKU\\25_spring\\chengshe\\vocabulary_learning\\vocabulary_learning\\oxford_9_structed\\oxford_9_structed.json";
    // QString dbName = "oxford_9";
    // Wordloader wordloader;
    // if (wordloader.importWordsFromJson(jsonFilePath, dbName)) {
    //     qDebug() << "数据导入成功！";
    // } else {
    //     qDebug() << "数据导入失败！";
    // }

    // QString txtPath="D:\\PKU\\25_spring\\chengshe\\vocabulary_learning\\english-wordlists\\test.txt";
    // Wordloader wordloader;
    // wordloader.importWordFromTXT(txtPath,"test","oxford_9");

    // WordDatabase test;
    // test.initDatabase("test");

    // for(auto p:test.getAllWords())
    // {
    //     qInfo()<<p.word;
    //     qInfo()<<p.reviewCount;
    //     qInfo()<<p.lastReviewed;
    // }


    // qInfo()<<test.getAllWords().size();

    // test.resetLearningRecords();
    // for(auto p:test.getAllWords())
    // {
    //     qInfo()<<p.word;
    //     qInfo()<<p.reviewCount;
    //     qInfo()<<p.lastReviewed;
    // }
    // QVector<QString> lis=WordDatabase::getlist();
    // for(auto name:lis)
    // {
    //     qInfo()<<name;
    //     int i=0;
    //     QString newname="r_"+name;
    //     WordDatabase test;
    //     test.initDatabase(name);
    //     WordDatabase out;
    //     out.NewDatabase(newname);
    //     for(auto word:test.getAllWords())
    //     {
    //         Word ne;
    //         ne.word=word.word;
    //         ne.difficulty=word.difficulty;
    //         ne.meanings=word.meanings;
    //         ne.phonetics=word.phonetics;
    //         out.addWord(ne);
    //         qInfo()<<++i;
    //     }
    // }





    // QString newname="oxford_9";
    //     WordDatabase out;
    //     out.initDatabase(newname);
    //     qInfo()<<out.getTotalWordCount();
    //     qInfo()<<out.getRandomWords(1);



    // for(auto p:test.getAllWords())
    // {
    //      qInfo()<<p;
    // }


    // // 在database.cpp中初始化时调用insertSampleData()插入了一些测试的数据，可以去看一看长啥样，到时候需要注释掉

    // // // 测试手动添加单词
    // // Word word; // 看一下头文件Word的结构
    // // word.word = "abcd";
    // // word.meanings['none'].append(Definition("测试"));
    // // if (db1.addWord(word)) {
    // //     qInfo() << "单词添加成功";
    // // } else {
    // //     qWarning() << "单词添加失败";
    // // }

    // for(auto p:db1.getAllWords())
    // {
    //     qInfo()<<p;
    // }

    // qInfo()<<"________________________1__________________________";
    // qInfo()<<db1.getCategoryById(1).name<<"\n";
    // for(auto p:db1.getWordsByCategory(1)) // 获取分类id1的所有单词
    // {
    //     qInfo()<<p;
    // }

    // qInfo()<<"_______________________2___________________________";
    // qInfo()<<db1.getCategoryById(2).name<<"\n";
    // for(auto p:db1.getWordsByCategory(2))
    // {
    //     qInfo()<<p;
    // }

    // qInfo()<<"_______________________3___________________________";
    // qInfo()<<db1.getCategoryById(3).name<<"\n";
    // for(auto p:db1.getWordsByCategory(3))
    // {
    //     qInfo()<<p;
    // }

    // db1.deleteWord(6); // 根据id删除单词

    // qInfo()<<db1.getWordById(4); // 根据id获取单词

    // db1.removeWordFromCategory(1,1); // 去除单词分类的关连关系
    // qInfo()<<"________________________1__________________________";
    // qInfo()<<db1.getCategoryById(1).name<<"\n";
    // for(auto p:db1.getWordsByCategory(1))
    // {
    //     qInfo()<<p;
    // }

    // qInfo()<<"_______________________2___________________________";
    // qInfo()<<db1.getCategoryById(2).name<<"\n";
    // for(auto p:db1.getWordsByCategory(2))
    // {
    //     qInfo()<<p;
    // }

    // qInfo()<<"_______________________3___________________________";
    // qInfo()<<db1.getCategoryById(3).name<<"\n";
    // for(auto p:db1.getWordsByCategory(3))
    // {
    //     qInfo()<<p;
    // }



    // qInfo()<<"测试查找单词\n";
    // qInfo()<<db1.getWordsByName("abcd");
    // qInfo()<<"6666";
    // qInfo()<<db1.getWordsByName("dhohf");// 返回的是一个QVector对象，这里直接把Qvector打印了
    // qInfo()<<"6666";
    // // WordDatabase db2();

    // // qInfo()<<"测试查找单词\n";
    // // qInfo()<<db1.getWordsByName("abcd");
    // // qInfo()<<db1.getWordsByName("dhohf");// 返回的是一个QVector对象，这里直接把Qvector打印了

    // // WordDatabase db2("newdir");

    // // db2.initDatabase("newdir");
    // // db2.NewDatabase("newdir");
    // // for(auto p:db2.getAllWords())
    // // {
    // //     qInfo()<<p;
    // // }

    return 0;
}
