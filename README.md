# Run-Length Encoding (RLE)

## Overview

For my COMP 211 Checkoff 3, I decided to learn about the Run-Length Encoding (RLE) a simple way of compressing data. I hoped to see how to understand how computers can reduce the amount of space needed to store information without losing any of the original data.

I chose RLE because the concept seemed pretty straightforward, and I was interested in seeing how it could actually be implemented in C and be used to improve storage and potentially run time.

## How RLE Works

RLE works by counting characters that repeat right next to each other. Instead of storing each character individually, it stores the number of times that character repeats, followed by the character itself.

For example:

Original: `WWWWBB`

Compressed: `4W2B`

In this example, we go from 6 characters to 4 characters. Since RLE is a lossless compression method we can actually recover the original data from the compressed version.

## Implementing RLE in C

I explored how to implement RLE using C. The program uses a while loop to go through the string and another while loop to count how many times each character repeats consecutively.

Once the character changes, the program prints the count and with the character and continues until it reaches the end of the string.

This was a good way to connect RLE to concepts we've covered in COMP 211, especially arrays, loops, working with strings, and color coding.

----The implementation is included in the `rle.c` file.

## Running the Program

First, compile the C file:

```
gcc rle.c -o rle
```

Then run it:

```
./rle
```

Expected output:

```
Original: WWWWBB
Compressed: 4W2B
```

## What I Found Interesting

One thing I found interesting was that RLE doesn't always make data smaller. It works really well when there are long sequences of repeated characters, but it can actually increase the amount of data when characters don't repeat.

For example:

Original: `ABCDEF`

Compressed: `1A1B1C1D1E1F`

The compressed version is actually longer than the original and obviously takes up more space.

I also learned that RLE can be useful for simple images and other types of data with a lot of repeated values. So determining when to use RLE is very crucial to efficient project building mechanisms!

## Limitations

The biggest limitation of RLE is that its effectiveness depends on the data being compressed. If there aren't many consecutive repeated characters, there isn't much space to save as I mentioned above.


## Final Thoughts

My biggest takeaway from exploring RLE is that compression doesn't always have to involve complicated algorithms. Even something as simple as counting repeated characters can help reduce the amount of data being stored.

At the same time, I learned that choosing the right compression method depends on the type of data you're working with and how you actually want to compress it.

## Resources

- https://stackoverflow.com/questions/19748991/compression-program-in-c
- https://en.wikipedia.org/wiki/Run-length_encoding
- https://www.geeksforgeeks.org/dsa/run-length-encoding/
## Presentation

My COMP 211 Checkoff 3 presentation slides are also included in this repository.
