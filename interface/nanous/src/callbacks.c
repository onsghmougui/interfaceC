#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

int gender=1;
int choix[]={0,0};
void
on_buttonmodifier_rec_clicked          (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonmodifier1_reclamation_clicked (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button101_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button103_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonenregistrer_rec_enter         (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonModifier_obs_clicked          (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonSupprimer_obs_clicked         (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonEnrg_obs_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{

}




void
on_buttonValider_user_clicked (GtkButton *objet_graphique,gpointer user_data)
{
char texte[50],msg[50];
int choix[]={0,0};                                        
GtkWidget *nom;
GtkWidget *prenom;
GtkWidget *jour;
GtkWidget *mois;
GtkWidget *annee;
GtkWidget *cin;
GtkWidget *role;
GtkWidget *homme;
GtkWidget *femme;
GtkWidget *num_bv;
GtkWidget *vote;
GtkWidget *tunisienne;
GtkWidget *etrangere;
GtkWidget *profession;
GtkWidget *appartenance;


utilisateur u;


//associer les objets avec des variables


nom=lookup_widget(objet_graphique,"entryNom_user");
prenom=lookup_widget(objet_graphique,"entryPrenom_user");
jour=lookup_widget(objet_graphique,"spinbuttonJour_user");
mois=lookup_widget(objet_graphique,"spinbuttonMois_user");
annee=lookup_widget(objet_graphique,"spinbuttonAnnee_user");
cin=lookup_widget(objet_graphique,"entryCin_user");
role=lookup_widget(objet_graphique,"comboboxRole_user");
homme=lookup_widget(objet_graphique,"radiobuttonHomme_user");
femme=lookup_widget(objet_graphique,"radiobuttonFemme_user");
num_bv=lookup_widget(objet_graphique,"spinbuttonNumBV_user");
vote=lookup_widget(objet_graphique,"spinbuttonVote_user");
tunisienne=lookup_widget(objet_graphique,"checkbuttonTun_user");
etrangere=lookup_widget(objet_graphique,"checkbuttonEtranger_user");
profession=lookup_widget(objet_graphique,"comboboxProf_user");
appartenance=lookup_widget(objet_graphique,"comboboxApp_user");



//recuperer les valeurs de spin button


u.date.jour=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(Jour));
u.date.mois=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(Mois));
u.date.annee=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON(Annee));


//recuperer les valeurs des combobox




//checkbox
resultat( choix, texte);
genre(gender , msg);







}


void
on_buttonajouter_election_clicked      (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonmodifier_election_clicked     (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonsupprimer_election_clicked    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonenregistrer_election_clicked  (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonajouter_rec_reclamation_clicked
                                        (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button124_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_ajout_tab_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_suptab_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_enr_tab_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_radiobuttonHomme_user_toggled       (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON (togglebutton)))
{gender=1;}




}


void
on_radiobuttonFemmme_user_toggled      (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON (togglebutton)))
{gender=2;}

}


void on_checkbuttonTun_user_toggled         (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton))
{choix[0]=1;}

}


void on_checkbuttonEtranger_user_toggled    (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton))
{choix[1]=1;}

}

