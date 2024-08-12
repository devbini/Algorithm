#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <iostream>

using namespace std;

unordered_map<int, vector<string>> initlist;
unordered_map<int, vector<string>> reverse_initlist;

vector<int> solution(vector<string> words, vector<string> queries) {
    vector<int> answer;

    // Hashmap
    for (auto& word : words) {
        initlist[word.length()].push_back(word);
        reverse(word.begin(), word.end());
        reverse_initlist[word.length()].push_back(word);
    }

    // 이진탐색을 위한 정렬
    for (auto& entry : initlist) {
        sort(entry.second.begin(), entry.second.end());
    }
    for (auto& entry : reverse_initlist) {
        sort(entry.second.begin(), entry.second.end());
    }

    // 쿼리 돌기
    for (auto& query : queries) {
        int len = query.length();
        int count = 0;

        // 전부 ?인 경우
        if (query.find_first_not_of('?') == string::npos) {
            count = initlist[len].size();
        } else if (query[0] == '?') {
            string rev_query = query;
            reverse(rev_query.begin(), rev_query.end());
            rev_query = rev_query.substr(0, rev_query.find('?')); // 물음표 제거
            vector<string>& candidates = reverse_initlist[len];

            // 이진 탐색
            auto lower = lower_bound(candidates.begin(), candidates.end(), rev_query);
            string upper_query = rev_query;
            if (!upper_query.empty()) {
                upper_query.back()++;
            }
            auto upper = lower_bound(lower, candidates.end(), upper_query);

            count = upper - lower;
        } else {
            string query_prefix = query.substr(0, query.find('?')); // 물음표 제거
            vector<string>& candidates = initlist[len];

            // 이진 탐색
            auto lower = lower_bound(candidates.begin(), candidates.end(), query_prefix);
            string upper_query = query_prefix;
            if (!upper_query.empty()) {
                upper_query.back()++;
            }
            auto upper = lower_bound(lower, candidates.end(), upper_query);

            count = upper - lower;
        }

        answer.push_back(count);
    }

    return answer;
}
