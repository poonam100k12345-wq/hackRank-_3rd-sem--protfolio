vector<int> matchingStrings(vector<string> stringList, vector<string> queries) {
    vector<int> answer;

    for (string q : queries) {
        int count = 0;

        for (string s : stringList) {
            if (s == q) {
                count++;
            }
        }

        answer.push_back(count);
    }

    return answer;
}
