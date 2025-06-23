#include <iostream>
#include <string>

const std::string wikipediaBaseURL = "https://en.wikipedia.org/wiki/";

bool isWikipediaURL(const std::string &url) {
	return url.starts_with(wikipediaBaseURL);
}

std::string parseArticleName(const std::string &url) {
	return url.substr(wikipediaBaseURL.length());
}

int main() {
	std::string inputURL;
	std::cout << "Please enter the link to the Wikipedia article:\n";
	std::cin >> inputURL;
	if (!isWikipediaURL(inputURL)) {
		std::cout << "Invalid URL!\n";
		return 1;
	}
	std::string articleName = parseArticleName(inputURL);
	std::cout << "Article name: " << articleName << "\n";
	return 0;
}
