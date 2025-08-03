/* appearance */
static const unsigned int borderpx = 1; /* border pixel of windows */
static const Gap default_gap = {.isgap = 3, .realgap = 30, .gappx = 30};
static const unsigned int snap = 32; /* snap pixel */
static const int showbar = 1;        /* 0 means no bar */
static const int topbar = 1;         /* 0 means bottom bar */
static const int vertpad = 20;       /* vertical padding of bar */
static const int sidepad = 40;       /* horizontal padding of bar */
static const char *fonts[] = {"SauceCodePro NF:size=12"};
static const char dmenufont[] = "SauceCodePro NF:size=12";
static const char col_gray1[] = "#000000";
static const char col_gray2[] = "#444444";
static const char col_gray3[] = "#bbbbbb";
static const char col_gray4[] = "{color7}";
static const char col_cyan[] = "{color1}";
static const unsigned int baralpha = 0x00;
static const unsigned int borderalpha = OPAQUE;
static const char *colors[][3] = {
    /*               fg         bg         border   */
    [SchemeNorm] = {col_gray3, col_gray1, col_gray2},
    [SchemeSel] = {col_gray4, col_gray1, col_cyan},
};
static const unsigned int alphas[][3] = {
    /*               fg      bg        border*/
    [SchemeNorm] = {OPAQUE, baralpha, borderalpha},
    [SchemeSel] = {OPAQUE, baralpha, baralpha},
};
