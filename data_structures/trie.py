class Trie:
    def search_level(self, current_level, current_prefix, words):
        if self.end_symbol in current_level:
            words.append(current_prefix)

        current_keys = sorted(current_level.keys())
        print(f"current keys : {current_keys}")
        for key in current_keys:
            if key != self.end_symbol:
                words = self.search_level(
                    current_level[key], current_prefix + key, words)

        return words

    def words_with_prefix(self, prefix):
        matching_words = []
        current_level = self.root
        for letter in prefix:
            if letter not in current_level:
                return []
            current_level = current_level[letter]

        matching_words = self.search_level(current_level, prefix, [])
        return matching_words

    def exists(self, word):
        current = self.root
        for letter in word:
            if letter not in current:
                return False
            current = current[letter]

        if self.end_symbol in current:
            return True

        return False

    def add(self, word):
        current = self.root
        for letter in word:
            if letter not in current:
                current[letter] = {}
            current = current[letter]
        current[self.end_symbol] = True

    def __init__(self):
        self.root = {}
        self.end_symbol = "*"
