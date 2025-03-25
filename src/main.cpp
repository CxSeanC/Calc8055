#include <gtk/gtk.h>
#include "calculator.h"
#include "logger.h"
#include "network.h"

GtkWidget *entry;
GtkWidget *label;

void on_calc(GtkWidget *widget, gpointer data) {
    const char *expr = gtk_entry_get_text(GTK_ENTRY(entry));
    char buf[64];
    strcpy(buf, expr);

    double res = vulnerable_calculate(buf);

    char out[128];
    sprintf(out, "Result: %.2f", res);
    gtk_label_set_text(GTK_LABEL(label), out);

    log_expression(buf);
    send_to_server(buf);
}

int main(int argc, char *argv[]) {
    gtk_init(&argc, &argv);
    GtkWidget *win = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(win), "VulnCalc");
    gtk_window_set_default_size(GTK_WINDOW(win), 300, 100);

    GtkWidget *box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(win), box);

    entry = gtk_entry_new();
    gtk_box_pack_start(GTK_BOX(box), entry, FALSE, FALSE, 5);

    GtkWidget *btn = gtk_button_new_with_label("Calculate");
    gtk_box_pack_start(GTK_BOX(box), btn, FALSE, FALSE, 5);

    label = gtk_label_new("");
    gtk_box_pack_start(GTK_BOX(box), label, FALSE, FALSE, 5);

    g_signal_connect(btn, "clicked", G_CALLBACK(on_calc), NULL);
    g_signal_connect(win, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    gtk_widget_show_all(win);
    gtk_main();
    return 0;
}