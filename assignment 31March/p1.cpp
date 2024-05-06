#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text = "Lorem ipsum dolor sit amet, consectetur adipisicing elit. Suscipit, eos culpa doloribus, sit accusantium impedit vel fuga corporis neque saepe esse possimus recusandae"
                  "aperiam minima quaerat rem soluta ut? Asperiores, enim? Iusto, ad dolore? Quidem nulla dolorem est, tempore ipsum, porro in culpa repellendus velit saepe odio accusantium. Sint "
                  "eius facere accusamus blanditiis delectus distinctio consequuntur culpa nam minima est, fuga veniam incidunt labore repellat, provident, vero similique eum deleniti. Labore laudantium labo"
                  "iosam suscipit quaerat quidem itaque inventore at doloremque ea, eaque dignissimos quisquam, doloribus sapiente obcaecati id? Ipsa itaque asperiores dolor beatae. A eveniet nemo ullam, sequi illo similique.";
    // creating a new file and writing text in it
    ofstream textFile("text.txt");
    textFile << text;
    textFile.close();

    // creating a new file and opening the previous file again
    ifstream File("text.txt");
    ofstream newFile("newfile.txt");
    if (File.is_open() && newFile.is_open())
    {
        string word;
        while (File >> word)
        {
            newFile << word;
        }
        File.close();
        newFile.close();
    }
    else
    {
        cout << "Unable to open file";
    }
    // in the newFile all the whitespaces have been removed. As commas, full stops etc have not been removed, it seems to have spaces but it is not so.
    return 0;
}