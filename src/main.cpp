#include <iostream>
#include <string>

const std::string wikipediaURL = "https://en.wikipedia.org/wiki/";

bool isWikipediaURL(const std::string &url) {
	return url.starts_with(wikipediaURL);
}

std::string parseArticleName(const std::string &url) {
	return url.substr(wikipediaURL.length());
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
