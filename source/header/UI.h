#ifndef UI_H
#define UI_H
#include "gnk_2D.h"
#include "QLKhachSan.h"
enum frame_num_value {
	DEFAULT_FRAME,
	LOGIN_FRAME,
	FORGOT_PASSWORD_FRAME,
	SIGN_UP_FRAME
};
class QLKhachSan;
extern QLKhachSan *current_Data;
extern frame_num_value current_frame;
extern frame_num_value previous_frame;
extern bool login_failed;
// ---------------------------------------------------------
void button_hover_type_1(Gnk_Button*);
void button_hover_type_2(Gnk_Button*);
void textbox_select_type1(Gnk_Textbox*);
void textbox_select_type2(Gnk_Textbox*);
// ---------------------------------------------------------
void login_frame_draw(Gnk_Frame *);
void login_frame_login_button_click(Gnk_Button*);
void login_frame_forgotten_password_button_click(Gnk_Button*);
void login_frame_sign_up_button_click(Gnk_Button*);
extern Gnk_Frame login;
// ---------------------------------------------------------
void sign_up_frame_draw(Gnk_Frame *);
void sign_up_frame_to_login_button_click(Gnk_Button*);
void sign_up_frame_sign_up_button_click(Gnk_Button*);
void sign_up_frame_toggle_click(Gnk_Button*);
extern Gnk_Frame sign_up;
// ---------------------------------------------------------

// ---------------------------------------------------------
void login_frame_init();
void sign_up_frame_init();
void UI_init();
void frame_Space();
#endif