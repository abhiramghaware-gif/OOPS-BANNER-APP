import java.util.HashMap;
import java.util.Map;

public class OOPSBannerUC8 {

    public static void main(String[] args) {

        Map<Character, String[]> patternMap = buildPatternMap();

        renderBanner("OOPS", patternMap);
    }

    // Build map storing character patterns
    public static Map<Character, String[]> buildPatternMap() {

        Map<Character, String[]> map = new HashMap<>();

        map.put('O', new String[]{
                "*****",
                "*   *",
                "*   *",
                "*   *",
                "*****"
        });

        map.put('P', new String[]{
                "*****",
                "*   *",
                "*****",
                "*    ",
                "*    "
        });

        map.put('S', new String[]{
                "*****",
                "*    ",
                "*****",
                "    *",
                "*****"
        });

        return map;
    }

    // Render banner using nested loops
    public static void renderBanner(String word, Map<Character, String[]> patternMap) {

        int height = 5;

        for (int row = 0; row < height; row++) {

            StringBuilder line = new StringBuilder();

            for (char c : word.toCharArray()) {

                String[] pattern = patternMap.get(c);

                if (pattern != null) {
                    line.append(pattern[row]).append("  ");
                }
            }

            System.out.println(line);
        }
    }
}
