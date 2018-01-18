class Codec {
    List<String> longUrls = new ArrayList<>();
    // Encodes a URL to a shortened URL.
    public String encode(String longUrl) {
        int result = longUrls.indexOf(longUrl);
        if(result == -1) {
            longUrls.add(longUrl);
            result = longUrls.size() - 1;
        }
        return String.valueOf(result);
    }

    // Decodes a shortened URL to its original URL.
    public String decode(String shortUrl) {
        int index = Integer.valueOf(shortUrl);
        return (index < longUrls.size()) ? longUrls.get(index) : "";
    }
}