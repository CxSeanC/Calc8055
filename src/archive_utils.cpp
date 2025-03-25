#include <archive.h>
#include <archive_entry.h>
#include <stdio.h>

void extract_tar(const char *path) {
    struct archive *a = archive_read_new();
    archive_read_support_format_tar(a);
    archive_read_open_filename(a, path, 10240);
    struct archive_entry *entry;
    while (archive_read_next_header(a, &entry) == ARCHIVE_OK) {
        const char *name = archive_entry_pathname(entry);
        FILE *f = fopen(name, "w"); // INSECURE WRITE TO ARBITRARY PATH
        char buf[1024];
        int len;
        while ((len = archive_read_data(a, buf, sizeof(buf))) > 0) {
            fwrite(buf, 1, len, f);
        }
        fclose(f);
    }
    archive_read_free(a);
}