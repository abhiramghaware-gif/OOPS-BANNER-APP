public class OOPSBannerUC7 {

    public static void main(String[] args) {

        CharacterPatternMap[] patterns = {
                new CharacterPatternMap('O', new String[]{
                        "*****",
                        "*   *",
                        "*   *",
                        "*   *",
                        "*****"
                }),
                new CharacterPatternMap('P', new String[]{
                        "*****",
                        "*   *",
                        "*****",
                        "*    ",
                        "*    "
                }),
                new CharacterPatternMap('S', new String[]{
                        "*****",
                        "*    ",
                        "*****",
                        "    *",
                        "*****"
                })
        };

        String word = "OOPS";

        for (int row = 0; row < 5; row++) {

            StringBuilder line = new StringBuilder();

            for (char c : word.toCharArray()) {

                for (CharacterPatternMap pattern : patterns) {

                    if (pattern.getCharacter() == c) {
                        line.append(pattern.getPattern()[row]).append("  ");
                        break;
                    }
                }
            }

            System.out.println(line);
        }
    }

    // Static inner class storing character and pattern
    static class CharacterPatternMap {

        private char character;
        private String[] pattern;

        public CharacterPatternMap(char character, String[] pattern) {
            this.character = character;
            this.pattern = pattern;
        }

        public char getCharacter() {
            return character;
        }

        public String[] getPattern() {
            return pattern;
        }
    }
}
