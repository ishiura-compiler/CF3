
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = UINT16_MAX;
static int8_t x7 = INT8_MIN;
int64_t x20 = 1301198852LL;
uint64_t x22 = 514649LLU;
static uint32_t x44 = UINT32_MAX;
uint16_t x51 = UINT16_MAX;
int16_t x62 = -1;
int8_t x63 = INT8_MIN;
static volatile uint64_t x64 = 15956098434558930LLU;
uint8_t x65 = UINT8_MAX;
uint32_t x76 = 1561727691U;
volatile uint32_t t7 = 12558U;
int8_t x79 = INT8_MIN;
static int8_t x80 = -15;
uint8_t x83 = 0U;
int8_t x92 = 0;
volatile int32_t t11 = 22665;
static int16_t x105 = -1578;
int16_t x106 = INT16_MIN;
int64_t x108 = -1334471LL;
static volatile int32_t x112 = -1;
volatile int32_t t14 = -188894086;
uint32_t x120 = 442U;
int8_t x124 = -1;
static int32_t x126 = INT32_MIN;
volatile uint64_t x128 = 213LLU;
uint16_t x134 = 323U;
int8_t x150 = -1;
uint64_t t21 = 99321694759145LLU;
int8_t x193 = INT8_MAX;
uint64_t x195 = 0LLU;
int32_t x223 = 1339;
uint16_t x225 = 6U;
uint16_t x226 = UINT16_MAX;
static int8_t x227 = INT8_MIN;
volatile int32_t x228 = -1;
static int32_t t27 = -96;
int32_t x249 = -1;
int16_t x254 = INT16_MIN;
volatile uint32_t t34 = 19U;
volatile int8_t x265 = 4;
uint64_t t35 = 33985747928654801LLU;
uint32_t x287 = UINT32_MAX;
uint16_t x298 = 3084U;
int16_t x301 = INT16_MIN;
uint64_t t42 = 3956648538390121LLU;
static uint64_t t43 = 400195589033822LLU;
static uint8_t x318 = 1U;
int32_t x335 = -1;
uint8_t x338 = 58U;
int8_t x340 = 35;
uint64_t t46 = 1LLU;
int32_t x341 = -6988295;
uint64_t t47 = 35LLU;
int16_t x346 = 0;
uint32_t x355 = 7U;
volatile uint64_t t50 = 2962384904LLU;
volatile int32_t x362 = -1;
static int16_t x363 = INT16_MIN;
int32_t t51 = -7932959;
uint8_t x365 = 65U;
int64_t x377 = 8LL;
volatile int32_t x378 = -24149163;
int8_t x395 = INT8_MIN;
int16_t x398 = INT16_MIN;
int16_t x399 = INT16_MAX;
uint32_t x401 = UINT32_MAX;
uint32_t x410 = UINT32_MAX;
volatile int32_t x428 = -1;
int64_t x430 = -1LL;
uint64_t x442 = UINT64_MAX;
static int64_t x444 = -5016750LL;
int64_t x447 = INT64_MIN;
volatile uint64_t t63 = 74LLU;
uint8_t x450 = 83U;
uint64_t t64 = 6819155856LLU;
static int16_t x453 = 768;
int64_t x454 = INT64_MIN;
uint64_t t65 = 18220290128316179LLU;
uint32_t x457 = UINT32_MAX;
int8_t x474 = INT8_MAX;
uint8_t x481 = 11U;
uint64_t x482 = 1011167423LLU;
static int32_t x486 = -19;
uint64_t x490 = 7423701LLU;
volatile uint64_t t70 = 110LLU;
int8_t x493 = 1;
uint8_t x502 = 74U;
volatile uint64_t t72 = 4LLU;
volatile int8_t x505 = 0;
static int32_t t73 = INT32_MIN;
static volatile int8_t x509 = INT8_MAX;
int32_t x512 = INT32_MIN;
static int64_t x540 = -1LL;
static int16_t x546 = 2;
volatile uint64_t t78 = 24LLU;
volatile uint32_t x551 = 55U;
static int8_t x552 = -2;
uint64_t x566 = 68933LLU;
uint64_t x576 = UINT64_MAX;
int32_t t84 = 21739837;
uint16_t x583 = 661U;
static int8_t x595 = 61;
uint8_t x596 = 1U;
uint32_t t87 = 9U;
int32_t x598 = INT32_MIN;
volatile uint8_t x607 = 0U;
volatile uint16_t x613 = 2U;
uint8_t x616 = 55U;
volatile uint64_t x618 = UINT64_MAX;
int64_t x619 = INT64_MIN;
volatile int64_t t94 = -53675071796LL;
volatile int32_t x641 = INT32_MAX;
static uint8_t x645 = UINT8_MAX;
uint8_t x646 = 103U;
uint64_t x650 = UINT64_MAX;
static int32_t x655 = -971094861;
volatile uint32_t t100 = 2U;
static volatile int16_t x661 = INT16_MAX;
uint64_t x666 = 3643159843716LLU;
int64_t x672 = INT64_MIN;
int32_t t107 = 342;
volatile int32_t x713 = -564;
static volatile int16_t x715 = INT16_MIN;
uint64_t x719 = 5447862456800LLU;
uint16_t x722 = 3U;
volatile int8_t x724 = INT8_MIN;
static int32_t t111 = -9;
static uint32_t x762 = 943U;
static int64_t x764 = INT64_MIN;
int64_t x775 = -357359412LL;
uint64_t t119 = 216472516181812LLU;
volatile int8_t x783 = -1;
volatile int64_t t121 = 122598076288293124LL;
int16_t x791 = 0;
volatile int64_t x804 = -6475295507201LL;
int16_t x824 = -4491;
static int8_t x826 = INT8_MIN;
int64_t t133 = -207993836739139LL;
volatile int32_t x869 = -1;
static int32_t x871 = -120123;
volatile int16_t x876 = -27;
volatile int8_t x877 = INT8_MAX;
int16_t x890 = INT16_MIN;
int64_t t139 = 4690LL;
int32_t x913 = INT32_MAX;
static uint64_t t142 = 531566058693LLU;
static volatile uint64_t t143 = 2078553LLU;
uint8_t x936 = 59U;
uint32_t x937 = 57U;
static int32_t x946 = -4;
int64_t t147 = -56985444080387535LL;
int32_t x953 = INT32_MIN;
int8_t x956 = -1;
int32_t x972 = INT32_MIN;
uint32_t x977 = 0U;
static int32_t x980 = -1;
volatile uint32_t t153 = 86790U;
uint64_t x986 = UINT64_MAX;
static uint64_t x990 = 2278LLU;
static volatile uint32_t t157 = 12281U;
int8_t x1014 = 5;
uint8_t x1036 = 2U;
volatile int32_t x1037 = 270144303;
uint64_t x1038 = 2587362880796LLU;
uint16_t x1039 = 3766U;
int64_t x1059 = 579273406LL;
volatile int32_t x1066 = -1862;
int64_t x1068 = 1905LL;
int8_t x1072 = INT8_MIN;
static volatile uint64_t x1084 = 25552557138125LLU;
volatile int64_t t171 = -31567890LL;
uint32_t x1095 = 14U;
volatile uint8_t x1109 = 1U;
static int32_t x1110 = -44144442;
int8_t x1118 = -1;
volatile int64_t t174 = 1LL;
static volatile uint64_t x1131 = UINT64_MAX;
int8_t x1134 = INT8_MIN;
static int64_t x1136 = -1LL;
uint64_t x1151 = 22731858374LLU;
int32_t x1152 = INT32_MAX;
static volatile uint64_t t179 = 3LLU;
uint64_t x1158 = 36129LLU;
volatile int64_t x1166 = INT64_MAX;
int16_t x1177 = -1;
int8_t x1182 = -1;
volatile uint64_t t183 = 146414638LLU;
int8_t x1185 = INT8_MIN;
static int64_t x1201 = -826LL;
int32_t x1217 = INT32_MIN;
volatile uint64_t t189 = 3112LLU;
int32_t x1228 = -1;
static volatile uint16_t x1229 = 3U;
uint64_t x1243 = UINT64_MAX;
volatile int32_t x1244 = 46052976;
int64_t x1245 = INT64_MAX;
static int16_t x1248 = INT16_MAX;
static uint64_t x1250 = 397761LLU;
int32_t x1252 = -1;
int32_t x1260 = INT32_MIN;
uint64_t x1270 = 1913751063185243772LLU;
volatile uint32_t x1273 = 0U;


void f0(void) {
    	int32_t x6 = -1;
	int64_t x8 = -11LL;
	volatile int64_t t0 = -1LL;

    t0 = ((x5-(x6+x7))*x8);

    if (t0 != -722304LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x17 = -364;
	uint32_t x18 = 13U;
	int16_t x19 = -1;
	int64_t t1 = -78120LL;

    t1 = ((x17-(x18+x19))*x20);

    if (t1 != 5588606025681975840LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x21 = INT8_MAX;
	volatile int32_t x23 = INT32_MIN;
	volatile uint64_t x24 = UINT64_MAX;
	uint64_t t2 = 490LLU;

    t2 = ((x21-(x22+x23))*x24);

    if (t2 != 18446744071562582490LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x41 = -1;
	int16_t x42 = INT16_MAX;
	static uint32_t x43 = UINT32_MAX;
	volatile uint32_t t3 = 151234U;

    t3 = ((x41-(x42+x43))*x44);

    if (t3 != 32767U) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x49 = 0;
	static int8_t x50 = -1;
	int16_t x52 = -1;
	int32_t t4 = 0;

    t4 = ((x49-(x50+x51))*x52);

    if (t4 != 65534) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x61 = INT16_MIN;
	volatile uint64_t t5 = 4269364058271LLU;

    t5 = ((x61-(x62+x63))*x64);

    if (t5 != 14164481332008080594LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x66 = UINT16_MAX;
	uint64_t x67 = 3314350209823509LLU;
	int8_t x68 = 45;
	volatile uint64_t t6 = 8957577249501204768LLU;

    t6 = ((x65-(x66+x67))*x68);

    if (t6 != 18297598314264556111LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x73 = 94U;
	static int8_t x74 = -1;
	static uint8_t x75 = 2U;

    t7 = ((x73-(x74+x75))*x76);

    if (t7 != 3506754495U) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x77 = -1LL;
	volatile uint64_t x78 = UINT64_MAX;
	uint64_t t8 = 0LLU;

    t8 = ((x77-(x78+x79))*x80);

    if (t8 != 18446744073709549696LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x81 = INT64_MIN;
	int64_t x82 = INT64_MIN;
	int32_t x84 = -946795;
	int64_t t9 = -1231484LL;

    t9 = ((x81-(x82+x83))*x84);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x85 = INT8_MIN;
	uint16_t x86 = 3U;
	int8_t x87 = 0;
	int8_t x88 = INT8_MAX;
	volatile int32_t t10 = -2458;

    t10 = ((x85-(x86+x87))*x88);

    if (t10 != -16637) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int16_t x89 = 502;
	uint16_t x90 = 421U;
	int16_t x91 = INT16_MIN;

    t11 = ((x89-(x90+x91))*x92);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int64_t x93 = 471866LL;
	volatile int8_t x94 = INT8_MIN;
	volatile int16_t x95 = 14;
	uint8_t x96 = UINT8_MAX;
	int64_t t12 = -12273385448929194LL;

    t12 = ((x93-(x94+x95))*x96);

    if (t12 != 120354900LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x107 = -1;
	volatile int64_t t13 = -1LL;

    t13 = ((x105-(x106+x107))*x108);

    if (t13 != -41623484961LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x109 = INT16_MAX;
	uint8_t x110 = UINT8_MAX;
	int8_t x111 = -1;

    t14 = ((x109-(x110+x111))*x112);

    if (t14 != -32513) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x117 = UINT64_MAX;
	uint16_t x118 = 15235U;
	int64_t x119 = -1LL;
	static uint64_t t15 = 11LLU;

    t15 = ((x117-(x118+x119))*x120);

    if (t15 != 18446744073702817746LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x121 = -1;
	int8_t x122 = INT8_MAX;
	int32_t x123 = 5;
	int32_t t16 = 0;

    t16 = ((x121-(x122+x123))*x124);

    if (t16 != 133) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int16_t x125 = 2724;
	static int16_t x127 = INT16_MAX;
	static volatile uint64_t t17 = 847346429641LLU;

    t17 = ((x125-(x126+x127))*x128);

    if (t17 != 457407617865LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x133 = UINT16_MAX;
	uint16_t x135 = UINT16_MAX;
	int8_t x136 = INT8_MIN;
	int32_t t18 = 173702120;

    t18 = ((x133-(x134+x135))*x136);

    if (t18 != 41344) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x137 = 114U;
	int8_t x138 = INT8_MAX;
	static int32_t x139 = -1;
	static volatile uint16_t x140 = 26U;
	volatile int32_t t19 = -7;

    t19 = ((x137-(x138+x139))*x140);

    if (t19 != -312) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x141 = UINT8_MAX;
	static int64_t x142 = 0LL;
	int32_t x143 = -1;
	uint32_t x144 = 13U;
	int64_t t20 = 37974525314728304LL;

    t20 = ((x141-(x142+x143))*x144);

    if (t20 != 3328LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x149 = 3464335U;
	int16_t x151 = INT16_MIN;
	static uint64_t x152 = 73449982870502LLU;

    t21 = ((x149-(x150+x151))*x152);

    if (t21 != 17054555938139855200LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x153 = -1718913760109LL;
	static int16_t x154 = 70;
	int16_t x155 = INT16_MAX;
	static int16_t x156 = INT16_MIN;
	volatile int64_t t22 = 142174685916646LL;

    t22 = ((x153-(x154+x155))*x156);

    if (t22 != 56325367167254528LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x169 = INT64_MAX;
	static int8_t x170 = 3;
	int32_t x171 = -1;
	uint64_t x172 = 57629645LLU;
	volatile uint64_t t23 = 115LLU;

    t23 = ((x169-(x170+x171))*x172);

    if (t23 != 9223372036681886873LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint32_t x194 = UINT32_MAX;
	static volatile int64_t x196 = 2025399LL;
	volatile uint64_t t24 = 68655954705094LLU;

    t24 = ((x193-(x194+x195))*x196);

    if (t24 != 18438045051502451584LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x197 = INT8_MIN;
	uint64_t x198 = 3894181LLU;
	volatile int8_t x199 = INT8_MAX;
	uint64_t x200 = 0LLU;
	uint64_t t25 = 30061765LLU;

    t25 = ((x197-(x198+x199))*x200);

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x221 = INT16_MIN;
	uint64_t x222 = 7351277952309LLU;
	int8_t x224 = INT8_MAX;
	volatile uint64_t t26 = 3394574LLU;

    t26 = ((x221-(x222+x223))*x224);

    if (t26 != 18445810461405276784LLU) { NG(); } else { ; }
	
}

void f27(void) {
    

    t27 = ((x225-(x226+x227))*x228);

    if (t27 != 65401) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x233 = 3;
	uint64_t x234 = 12189307091857268LLU;
	int8_t x235 = 40;
	int32_t x236 = INT32_MAX;
	volatile uint64_t t28 = 1414LLU;

    t28 = ((x233-(x234+x235))*x236);

    if (t28 != 16467682859717799833LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x237 = 93084014;
	uint32_t x238 = 0U;
	static int32_t x239 = INT32_MIN;
	volatile int64_t x240 = 279LL;
	volatile int64_t t29 = 3742847684348443096LL;

    t29 = ((x237-(x238+x239))*x240);

    if (t29 != 625118377698LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x241 = INT16_MIN;
	uint8_t x242 = 2U;
	int16_t x243 = 0;
	volatile uint32_t x244 = 123U;
	static uint32_t t30 = 33232U;

    t30 = ((x241-(x242+x243))*x244);

    if (t30 != 4290936586U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x250 = 15U;
	int8_t x251 = INT8_MIN;
	int16_t x252 = INT16_MIN;
	static uint32_t t31 = 7341150U;

    t31 = ((x249-(x250+x251))*x252);

    if (t31 != 4291297280U) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x253 = -1LL;
	int32_t x255 = 36053;
	int32_t x256 = INT32_MAX;
	int64_t t32 = 62330095145LL;

    t32 = ((x253-(x254+x255))*x256);

    if (t32 != -7056631264042LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x257 = INT32_MIN;
	uint32_t x258 = 2U;
	uint16_t x259 = UINT16_MAX;
	int16_t x260 = INT16_MAX;
	static volatile uint32_t t33 = 99317U;

    t33 = ((x257-(x258+x259))*x260);

    if (t33 != 32769U) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x261 = INT32_MAX;
	uint32_t x262 = 182U;
	static int32_t x263 = INT32_MAX;
	uint8_t x264 = 58U;

    t34 = ((x261-(x262+x263))*x264);

    if (t34 != 4294956740U) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x266 = -1;
	int16_t x267 = 1;
	uint64_t x268 = 1027808416126938LLU;

    t35 = ((x265-(x266+x267))*x268);

    if (t35 != 4111233664507752LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x269 = -1;
	uint8_t x270 = 4U;
	static int64_t x271 = 92LL;
	uint16_t x272 = 2U;
	int64_t t36 = 1276LL;

    t36 = ((x269-(x270+x271))*x272);

    if (t36 != -194LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x277 = -1;
	int16_t x278 = 978;
	uint8_t x279 = UINT8_MAX;
	static uint64_t x280 = 32430045959LLU;
	uint64_t t37 = 3117441LLU;

    t37 = ((x277-(x278+x279))*x280);

    if (t37 != 18446704055032838210LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x281 = 1259344U;
	static int32_t x282 = 547112;
	static uint64_t x283 = UINT64_MAX;
	int64_t x284 = 164LL;
	volatile uint64_t t38 = 773710126938578046LLU;

    t38 = ((x281-(x282+x283))*x284);

    if (t38 != 116806212LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x285 = 0;
	static uint8_t x286 = UINT8_MAX;
	int32_t x288 = INT32_MAX;
	uint32_t t39 = 0U;

    t39 = ((x285-(x286+x287))*x288);

    if (t39 != 254U) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x293 = INT8_MAX;
	uint8_t x294 = 115U;
	volatile int16_t x295 = INT16_MAX;
	uint64_t x296 = 311167535060658LLU;
	static uint64_t t40 = 2605338928979842513LLU;

    t40 = ((x293-(x294+x295))*x296);

    if (t40 != 8254451462797698826LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x297 = -1;
	static uint64_t x299 = 2561410996361010LLU;
	uint8_t x300 = 7U;
	uint64_t t41 = 85581006967LLU;

    t41 = ((x297-(x298+x299))*x300);

    if (t41 != 18428814196735002951LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x302 = 27U;
	uint64_t x303 = 213433LLU;
	uint64_t x304 = 0LLU;

    t42 = ((x301-(x302+x303))*x304);

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint64_t x309 = 1LLU;
	int8_t x310 = -7;
	int64_t x311 = 0LL;
	int16_t x312 = INT16_MIN;

    t43 = ((x309-(x310+x311))*x312);

    if (t43 != 18446744073709289472LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x317 = -1;
	static uint32_t x319 = 3661219U;
	static volatile uint16_t x320 = 174U;
	uint32_t t44 = 58941928U;

    t44 = ((x317-(x318+x319))*x320);

    if (t44 != 3657914842U) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x333 = 412179757LL;
	int16_t x334 = INT16_MIN;
	volatile int16_t x336 = INT16_MAX;
	volatile int64_t t45 = 84117455963LL;

    t45 = ((x333-(x334+x335))*x336);

    if (t45 != 13506967839442LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int16_t x337 = -122;
	uint64_t x339 = 4329LLU;

    t46 = ((x337-(x338+x339))*x340);

    if (t46 != 18446744073709393801LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x342 = 0;
	uint64_t x343 = UINT64_MAX;
	uint16_t x344 = 3350U;

    t47 = ((x341-(x342+x343))*x344);

    if (t47 != 18446744050298766716LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x345 = 0U;
	int16_t x347 = 253;
	int16_t x348 = INT16_MIN;
	uint32_t t48 = 2641U;

    t48 = ((x345-(x346+x347))*x348);

    if (t48 != 8290304U) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x353 = -1;
	static uint16_t x354 = UINT16_MAX;
	uint32_t x356 = 797074U;
	volatile uint32_t t49 = 712U;

    t49 = ((x353-(x354+x355))*x356);

    if (t49 != 3591953666U) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x357 = -1;
	static uint64_t x358 = 431LLU;
	int16_t x359 = -1;
	int16_t x360 = -1;

    t50 = ((x357-(x358+x359))*x360);

    if (t50 != 431LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x361 = -11;
	uint8_t x364 = 0U;

    t51 = ((x361-(x362+x363))*x364);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x366 = 12U;
	volatile uint16_t x367 = 1628U;
	uint64_t x368 = 465594337LLU;
	static volatile uint64_t t52 = 393720937869LLU;

    t52 = ((x365-(x366+x367))*x368);

    if (t52 != 18446743340398470841LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x379 = -1;
	volatile int16_t x380 = INT16_MIN;
	int64_t t53 = 3117646894LL;

    t53 = ((x377-(x378+x379))*x380);

    if (t53 != -791320068096LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint64_t x393 = UINT64_MAX;
	uint16_t x394 = 7U;
	int32_t x396 = INT32_MAX;
	uint64_t t54 = 18654LLU;

    t54 = ((x393-(x394+x395))*x396);

    if (t54 != 257698037640LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x397 = -1;
	uint8_t x400 = 8U;
	static volatile int32_t t55 = -2;

    t55 = ((x397-(x398+x399))*x400);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x402 = INT16_MIN;
	int8_t x403 = 1;
	volatile int8_t x404 = INT8_MAX;
	uint32_t t56 = 15789381U;

    t56 = ((x401-(x402+x403))*x404);

    if (t56 != 4161282U) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x409 = 31U;
	static int16_t x411 = 428;
	int16_t x412 = -1;
	volatile uint32_t t57 = 2129995311U;

    t57 = ((x409-(x410+x411))*x412);

    if (t57 != 396U) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x417 = UINT8_MAX;
	uint16_t x418 = 3U;
	uint8_t x419 = 53U;
	static int16_t x420 = INT16_MAX;
	volatile int32_t t58 = 0;

    t58 = ((x417-(x418+x419))*x420);

    if (t58 != 6520633) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x425 = UINT64_MAX;
	static int16_t x426 = 1793;
	volatile int16_t x427 = -33;
	uint64_t t59 = 300814433LLU;

    t59 = ((x425-(x426+x427))*x428);

    if (t59 != 1761LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x429 = INT8_MIN;
	int32_t x431 = INT32_MAX;
	uint32_t x432 = 922839U;
	int64_t t60 = 18997399LL;

    t60 = ((x429-(x430+x431))*x432);

    if (t60 != -1981781778514386LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x437 = UINT16_MAX;
	int32_t x438 = INT32_MAX;
	int32_t x439 = INT32_MIN;
	volatile uint32_t x440 = UINT32_MAX;
	uint32_t t61 = 1399U;

    t61 = ((x437-(x438+x439))*x440);

    if (t61 != 4294901760U) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x441 = 2421756278928931343LLU;
	uint8_t x443 = UINT8_MAX;
	uint64_t t62 = 110LLU;

    t62 = ((x441-(x442+x443))*x444);

    if (t62 != 11876021722425485938LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x445 = 4345969LLU;
	volatile int8_t x446 = INT8_MAX;
	int16_t x448 = -117;

    t63 = ((x445-(x446+x447))*x448);

    if (t63 != 9223372036346312294LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x449 = 173832861768340LLU;
	uint64_t x451 = UINT64_MAX;
	int64_t x452 = -1LL;

    t64 = ((x449-(x450+x451))*x452);

    if (t64 != 18446570240847783358LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x455 = 23960337786LLU;
	int8_t x456 = INT8_MIN;

    t65 = ((x453-(x454+x455))*x456);

    if (t65 != 3066923138304LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint64_t x458 = UINT64_MAX;
	int32_t x459 = -1;
	int32_t x460 = 15133537;
	uint64_t t66 = 15608LLU;

    t66 = ((x457-(x458+x459))*x460);

    if (t66 != 64998046502939489LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x473 = INT16_MIN;
	int16_t x475 = -1;
	static uint64_t x476 = 735286LLU;
	uint64_t t67 = 20LLU;

    t67 = ((x473-(x474+x475))*x476);

    if (t67 != 18446744049523053932LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile uint32_t x483 = 899U;
	volatile int8_t x484 = INT8_MIN;
	uint64_t t68 = 596033761621559637LLU;

    t68 = ((x481-(x482+x483))*x484);

    if (t68 != 129429543808LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x485 = INT8_MAX;
	uint64_t x487 = 72933603990LLU;
	volatile uint8_t x488 = 11U;
	volatile uint64_t t69 = 1778203431030263LLU;

    t69 = ((x485-(x486+x487))*x488);

    if (t69 != 18446743271439909332LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x489 = 32690158U;
	int8_t x491 = INT8_MIN;
	volatile uint64_t x492 = 869172960397220LLU;

    t70 = ((x489-(x490+x491))*x492);

    if (t70 != 9407035863626470660LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x494 = -1;
	static uint8_t x495 = 90U;
	int32_t x496 = -626;
	static int32_t t71 = -285;

    t71 = ((x493-(x494+x495))*x496);

    if (t71 != 55088) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint64_t x501 = UINT64_MAX;
	int64_t x503 = 7682788704LL;
	int16_t x504 = INT16_MIN;

    t72 = ((x501-(x502+x503))*x504);

    if (t72 != 251749622710272LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x506 = INT16_MIN;
	int16_t x507 = INT16_MAX;
	static int32_t x508 = INT32_MIN;

    t73 = ((x505-(x506+x507))*x508);

    if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x510 = 606LL;
	static volatile uint16_t x511 = 133U;
	volatile int64_t t74 = 897LL;

    t74 = ((x509-(x510+x511))*x512);

    if (t74 != 1314259992576LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x521 = 48;
	int16_t x522 = INT16_MIN;
	int64_t x523 = -1LL;
	int64_t x524 = 1LL;
	volatile int64_t t75 = 59320304888LL;

    t75 = ((x521-(x522+x523))*x524);

    if (t75 != 32817LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x525 = -5;
	int8_t x526 = INT8_MAX;
	uint8_t x527 = UINT8_MAX;
	static uint64_t x528 = 55052LLU;
	uint64_t t76 = 932085351LLU;

    t76 = ((x525-(x526+x527))*x528);

    if (t76 != 18446744073688246492LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x537 = 239597;
	volatile int32_t x538 = 253128342;
	int8_t x539 = -37;
	int64_t t77 = 2528558977459317480LL;

    t77 = ((x537-(x538+x539))*x540);

    if (t77 != 252888708LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x545 = UINT64_MAX;
	volatile int32_t x547 = INT32_MIN;
	uint8_t x548 = UINT8_MAX;

    t78 = ((x545-(x546+x547))*x548);

    if (t78 != 547608329475LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint8_t x549 = 13U;
	uint64_t x550 = 1951LLU;
	uint64_t t79 = 111326LLU;

    t79 = ((x549-(x550+x551))*x552);

    if (t79 != 3986LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x557 = UINT32_MAX;
	int32_t x558 = -2972;
	volatile uint8_t x559 = 10U;
	static volatile uint16_t x560 = 22U;
	static volatile uint32_t t80 = 76677877U;

    t80 = ((x557-(x558+x559))*x560);

    if (t80 != 65142U) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x561 = -284;
	int16_t x562 = 3;
	volatile int16_t x563 = 25;
	static uint32_t x564 = 4364474U;
	volatile uint32_t t81 = 0U;

    t81 = ((x561-(x562+x563))*x564);

    if (t81 != 2933251408U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x565 = 882U;
	uint8_t x567 = 3U;
	static int64_t x568 = INT64_MIN;
	volatile uint64_t t82 = 105661LLU;

    t82 = ((x565-(x566+x567))*x568);

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x573 = INT16_MAX;
	int32_t x574 = 1774;
	volatile int8_t x575 = 48;
	uint64_t t83 = 23169LLU;

    t83 = ((x573-(x574+x575))*x576);

    if (t83 != 18446744073709520671LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x577 = 21;
	volatile int8_t x578 = INT8_MIN;
	uint8_t x579 = 1U;
	volatile uint16_t x580 = 0U;

    t84 = ((x577-(x578+x579))*x580);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint64_t x581 = 209721590418715489LLU;
	uint32_t x582 = 1U;
	volatile int32_t x584 = INT32_MIN;
	uint64_t t85 = 223547LLU;

    t85 = ((x581-(x582+x583))*x584);

    if (t85 != 10281268912603529216LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x585 = 12U;
	int32_t x586 = -4678501;
	int32_t x587 = -1;
	uint32_t x588 = UINT32_MAX;
	volatile uint32_t t86 = 72956658U;

    t86 = ((x585-(x586+x587))*x588);

    if (t86 != 4290288782U) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x593 = 13U;
	uint32_t x594 = 3U;

    t87 = ((x593-(x594+x595))*x596);

    if (t87 != 4294967245U) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int32_t x597 = 1;
	int64_t x599 = -1LL;
	int32_t x600 = INT32_MIN;
	int64_t t88 = -19796870596LL;

    t88 = ((x597-(x598+x599))*x600);

    if (t88 != -4611686022722355200LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x601 = INT8_MIN;
	uint16_t x602 = 113U;
	static uint16_t x603 = 2974U;
	uint32_t x604 = 24U;
	uint32_t t89 = 1925U;

    t89 = ((x601-(x602+x603))*x604);

    if (t89 != 4294890136U) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x605 = -1;
	int8_t x606 = -1;
	int32_t x608 = -15478;
	static volatile int32_t t90 = 112;

    t90 = ((x605-(x606+x607))*x608);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x614 = 16008414060LLU;
	int8_t x615 = INT8_MAX;
	uint64_t t91 = 858LLU;

    t91 = ((x613-(x614+x615))*x616);

    if (t91 != 18446743193246771441LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x617 = INT8_MAX;
	int8_t x620 = -1;
	uint64_t t92 = 787LLU;

    t92 = ((x617-(x618+x619))*x620);

    if (t92 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x625 = INT16_MAX;
	volatile int64_t x626 = INT64_MAX;
	int8_t x627 = INT8_MIN;
	static uint64_t x628 = 1219670231185LLU;
	static volatile uint64_t t93 = 25650LLU;

    t93 = ((x625-(x626+x627))*x628);

    if (t93 != 9263494308779837568LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x633 = -1;
	uint32_t x634 = 108U;
	int64_t x635 = -1LL;
	static int64_t x636 = -48417140LL;

    t94 = ((x633-(x634+x635))*x636);

    if (t94 != 5229051120LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x637 = 1;
	volatile uint64_t x638 = UINT64_MAX;
	int16_t x639 = -1;
	uint8_t x640 = 111U;
	volatile uint64_t t95 = 907618837089187742LLU;

    t95 = ((x637-(x638+x639))*x640);

    if (t95 != 333LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x642 = -56488LL;
	volatile uint32_t x643 = UINT32_MAX;
	int32_t x644 = INT32_MIN;
	volatile int64_t t96 = 3LL;

    t96 = ((x641-(x642+x643))*x644);

    if (t96 != 4611564711371079680LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x647 = 0;
	volatile int8_t x648 = INT8_MAX;
	static volatile int32_t t97 = 1;

    t97 = ((x645-(x646+x647))*x648);

    if (t97 != 19304) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x649 = UINT16_MAX;
	uint8_t x651 = 17U;
	static int8_t x652 = INT8_MAX;
	uint64_t t98 = 1974LLU;

    t98 = ((x649-(x650+x651))*x652);

    if (t98 != 8320913LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint8_t x653 = 11U;
	uint32_t x654 = 2U;
	int8_t x656 = 11;
	uint32_t t99 = 92520U;

    t99 = ((x653-(x654+x655))*x656);

    if (t99 != 2092108978U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x657 = 435904240U;
	volatile int32_t x658 = INT32_MIN;
	uint32_t x659 = 536827761U;
	uint8_t x660 = 111U;

    t100 = ((x657-(x658+x659))*x660);

    if (t100 != 3829874705U) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x662 = -1;
	volatile int16_t x663 = -1;
	uint64_t x664 = 105796LLU;
	volatile uint64_t t101 = 209LLU;

    t101 = ((x661-(x662+x663))*x664);

    if (t101 != 3466829124LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x665 = 262820891;
	int16_t x667 = INT16_MIN;
	int32_t x668 = 1;
	uint64_t t102 = 18LLU;

    t102 = ((x665-(x666+x667))*x668);

    if (t102 != 18446740430812561559LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x669 = UINT64_MAX;
	int64_t x670 = -26085110LL;
	uint64_t x671 = 116870738805LLU;
	static volatile uint64_t t103 = 24LLU;

    t103 = ((x669-(x670+x671))*x672);

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint16_t x673 = 349U;
	int8_t x674 = -7;
	int64_t x675 = 3505932727409LL;
	uint8_t x676 = 100U;
	static int64_t t104 = -8328737097LL;

    t104 = ((x673-(x674+x675))*x676);

    if (t104 != -350593272705300LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x693 = INT32_MAX;
	uint8_t x694 = UINT8_MAX;
	volatile uint64_t x695 = 8052778928LLU;
	uint32_t x696 = 357792134U;
	uint64_t t105 = 29525363024954097LLU;

    t105 = ((x693-(x694+x695))*x696);

    if (t105 != 16333875781983437792LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x701 = 1376U;
	int32_t x702 = 0;
	int64_t x703 = 790779LL;
	uint8_t x704 = UINT8_MAX;
	volatile int64_t t106 = 1254720140LL;

    t106 = ((x701-(x702+x703))*x704);

    if (t106 != -201297765LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x705 = INT8_MIN;
	int32_t x706 = 23346;
	static uint16_t x707 = UINT16_MAX;
	int8_t x708 = INT8_MIN;

    t107 = ((x705-(x706+x707))*x708);

    if (t107 != 11393152) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x709 = 576518004U;
	int64_t x710 = -1LL;
	int32_t x711 = 317464226;
	static uint8_t x712 = 97U;
	int64_t t108 = -513231550LL;

    t108 = ((x709-(x710+x711))*x712);

    if (t108 != 25128216563LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x714 = 7U;
	int32_t x716 = INT32_MAX;
	volatile uint32_t t109 = 738797991U;

    t109 = ((x713-(x714+x715))*x716);

    if (t109 != 2147451451U) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x717 = INT8_MIN;
	int8_t x718 = INT8_MIN;
	static volatile uint32_t x720 = 7854U;
	volatile uint64_t t110 = 1807232997577580LLU;

    t110 = ((x717-(x718+x719))*x720);

    if (t110 != 18403956561973844416LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x721 = 4436;
	uint16_t x723 = 1569U;

    t111 = ((x721-(x722+x723))*x724);

    if (t111 != -366592) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x725 = 5U;
	int8_t x726 = -1;
	volatile int16_t x727 = 7;
	volatile int8_t x728 = INT8_MIN;
	volatile int32_t t112 = 130228;

    t112 = ((x725-(x726+x727))*x728);

    if (t112 != 128) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint32_t x729 = 21030U;
	uint64_t x730 = UINT64_MAX;
	static uint8_t x731 = 7U;
	static int32_t x732 = -1768;
	uint64_t t113 = 35625461LLU;

    t113 = ((x729-(x730+x731))*x732);

    if (t113 != 18446744073672381184LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x737 = -1;
	int32_t x738 = -1;
	volatile int32_t x739 = -1664;
	uint8_t x740 = 11U;
	int32_t t114 = 2;

    t114 = ((x737-(x738+x739))*x740);

    if (t114 != 18304) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x749 = 0LLU;
	volatile int64_t x750 = INT64_MIN;
	static volatile int32_t x751 = INT32_MAX;
	static int8_t x752 = 15;
	static volatile uint64_t t115 = 6534375330766LLU;

    t115 = ((x749-(x750+x751))*x752);

    if (t115 != 9223372004642521103LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x753 = INT16_MAX;
	int8_t x754 = 1;
	static int32_t x755 = -3;
	uint32_t x756 = UINT32_MAX;
	volatile uint32_t t116 = 764U;

    t116 = ((x753-(x754+x755))*x756);

    if (t116 != 4294934527U) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x761 = INT64_MIN;
	uint64_t x763 = UINT64_MAX;
	volatile uint64_t t117 = 4528357900179265992LLU;

    t117 = ((x761-(x762+x763))*x764);

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x769 = UINT8_MAX;
	uint32_t x770 = 319027731U;
	volatile int16_t x771 = -42;
	uint32_t x772 = 22925972U;
	volatile uint32_t t118 = 110602681U;

    t118 = ((x769-(x770+x771))*x772);

    if (t118 != 1753359544U) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x773 = INT32_MIN;
	uint64_t x774 = 968309LLU;
	static uint32_t x776 = 43U;

    t119 = ((x773-(x774+x775))*x776);

    if (t119 != 18446743996692572181LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x777 = UINT16_MAX;
	static volatile uint8_t x778 = 1U;
	volatile uint64_t x779 = UINT64_MAX;
	int16_t x780 = INT16_MIN;
	volatile uint64_t t120 = 57433465645109185LLU;

    t120 = ((x777-(x778+x779))*x780);

    if (t120 != 18446744071562100736LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x781 = -32356242714393818LL;
	uint32_t x782 = 880269467U;
	int8_t x784 = -1;

    t121 = ((x781-(x782+x783))*x784);

    if (t121 != 32356243594663284LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x785 = 32LL;
	static int32_t x786 = INT32_MAX;
	int16_t x787 = INT16_MIN;
	uint8_t x788 = 2U;
	int64_t t122 = 31415895986124LL;

    t122 = ((x785-(x786+x787))*x788);

    if (t122 != -4294901694LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x789 = INT16_MAX;
	volatile int16_t x790 = 9233;
	static volatile int64_t x792 = -1LL;
	int64_t t123 = 3536816512871242LL;

    t123 = ((x789-(x790+x791))*x792);

    if (t123 != -23534LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint16_t x801 = UINT16_MAX;
	int8_t x802 = INT8_MAX;
	static uint32_t x803 = UINT32_MAX;
	static volatile int64_t t124 = 1567814621414328LL;

    t124 = ((x801-(x802+x803))*x804);

    if (t124 != -423542603830510209LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x809 = INT32_MIN;
	volatile uint8_t x810 = 0U;
	static int64_t x811 = INT64_MIN;
	int8_t x812 = 1;
	volatile int64_t t125 = -1891698985752LL;

    t125 = ((x809-(x810+x811))*x812);

    if (t125 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x813 = INT32_MIN;
	uint8_t x814 = 63U;
	uint64_t x815 = 7882LLU;
	volatile int16_t x816 = 5205;
	volatile uint64_t t126 = 17207024LLU;

    t126 = ((x813-(x814+x815))*x816);

    if (t126 != 18446732896015810051LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint64_t x821 = UINT64_MAX;
	int64_t x822 = -89404557LL;
	uint64_t x823 = UINT64_MAX;
	volatile uint64_t t127 = 5573079815LLU;

    t127 = ((x821-(x822+x823))*x824);

    if (t127 != 18446743672193686129LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint32_t x825 = 477U;
	uint8_t x827 = 1U;
	uint64_t x828 = 15LLU;
	volatile uint64_t t128 = 7843LLU;

    t128 = ((x825-(x826+x827))*x828);

    if (t128 != 9060LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile uint16_t x829 = 6330U;
	static volatile uint32_t x830 = 1743U;
	int32_t x831 = -1;
	uint32_t x832 = UINT32_MAX;
	static volatile uint32_t t129 = 0U;

    t129 = ((x829-(x830+x831))*x832);

    if (t129 != 4294962708U) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x841 = INT64_MAX;
	uint64_t x842 = 282802LLU;
	uint16_t x843 = UINT16_MAX;
	int64_t x844 = -302264405222085852LL;
	static volatile uint64_t t130 = 238LLU;

    t130 = ((x841-(x842+x843))*x844);

    if (t130 != 14609957590530441464LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x845 = -1;
	int8_t x846 = -1;
	int16_t x847 = INT16_MAX;
	static uint32_t x848 = 39U;
	uint32_t t131 = 3841U;

    t131 = ((x845-(x846+x847))*x848);

    if (t131 != 4293689383U) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x853 = INT64_MIN;
	uint64_t x854 = UINT64_MAX;
	int64_t x855 = -1LL;
	int32_t x856 = INT32_MIN;
	volatile uint64_t t132 = 518458193LLU;

    t132 = ((x853-(x854+x855))*x856);

    if (t132 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int64_t x857 = 28946LL;
	volatile int16_t x858 = 7;
	int8_t x859 = INT8_MIN;
	int64_t x860 = -1LL;

    t133 = ((x857-(x858+x859))*x860);

    if (t133 != -29067LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x870 = -1;
	int16_t x872 = 2;
	int32_t t134 = 22005676;

    t134 = ((x869-(x870+x871))*x872);

    if (t134 != 240246) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x873 = 168;
	static int16_t x874 = -13;
	volatile uint64_t x875 = 68646712379LLU;
	volatile uint64_t t135 = 363230LLU;

    t135 = ((x873-(x874+x875))*x876);

    if (t135 != 1853461229346LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x878 = 597678083U;
	int64_t x879 = -1LL;
	int32_t x880 = INT32_MAX;
	int64_t t136 = 1863283LL;

    t136 = ((x877-(x878+x879))*x880);

    if (t136 != -1283503634534901885LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x881 = -44;
	int16_t x882 = INT16_MAX;
	int32_t x883 = -1;
	uint64_t x884 = UINT64_MAX;
	static volatile uint64_t t137 = 20046001467154492LLU;

    t137 = ((x881-(x882+x883))*x884);

    if (t137 != 32810LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x885 = INT16_MIN;
	static uint8_t x886 = UINT8_MAX;
	int32_t x887 = INT32_MIN;
	uint32_t x888 = 3U;
	uint32_t t138 = 3232U;

    t138 = ((x885-(x886+x887))*x888);

    if (t138 != 2147384579U) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x889 = -1LL;
	static uint32_t x891 = 82U;
	int16_t x892 = INT16_MIN;

    t139 = ((x889-(x890+x891))*x892);

    if (t139 != 140736417333248LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x897 = UINT32_MAX;
	int8_t x898 = -1;
	uint16_t x899 = 3U;
	int16_t x900 = -7565;
	static uint32_t t140 = 1072341965U;

    t140 = ((x897-(x898+x899))*x900);

    if (t140 != 22695U) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint64_t x909 = UINT64_MAX;
	int64_t x910 = -533171729960163544LL;
	uint64_t x911 = UINT64_MAX;
	static uint32_t x912 = UINT32_MAX;
	volatile uint64_t t141 = 200371LLU;

    t141 = ((x909-(x910+x911))*x912);

    if (t141 != 659816906075776808LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x914 = -1LL;
	volatile uint64_t x915 = UINT64_MAX;
	int8_t x916 = -1;

    t142 = ((x913-(x914+x915))*x916);

    if (t142 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x921 = 22611497LLU;
	int8_t x922 = -3;
	static uint32_t x923 = 300107U;
	uint32_t x924 = UINT32_MAX;

    t143 = ((x921-(x922+x923))*x924);

    if (t143 != 95826703240891935LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x925 = INT8_MIN;
	static uint64_t x926 = 45436LLU;
	int16_t x927 = -1;
	int32_t x928 = INT32_MIN;
	volatile uint64_t t144 = 31328665524660257LLU;

    t144 = ((x925-(x926+x927))*x928);

    if (t144 != 97845797453824LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x933 = UINT8_MAX;
	int16_t x934 = -1;
	int16_t x935 = -1;
	volatile int32_t t145 = 17;

    t145 = ((x933-(x934+x935))*x936);

    if (t145 != 15163) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x938 = INT16_MIN;
	uint16_t x939 = UINT16_MAX;
	static int32_t x940 = INT32_MAX;
	uint32_t t146 = 2U;

    t146 = ((x937-(x938+x939))*x940);

    if (t146 != 32710U) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x945 = -152LL;
	int16_t x947 = INT16_MIN;
	uint32_t x948 = 1U;

    t147 = ((x945-(x946+x947))*x948);

    if (t147 != 32620LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x954 = 0;
	int16_t x955 = INT16_MIN;
	int32_t t148 = -717410;

    t148 = ((x953-(x954+x955))*x956);

    if (t148 != 2147450880) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x957 = 813U;
	uint64_t x958 = 1LLU;
	static int8_t x959 = -1;
	volatile int16_t x960 = INT16_MIN;
	uint64_t t149 = 85797398868745LLU;

    t149 = ((x957-(x958+x959))*x960);

    if (t149 != 18446744073682911232LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x965 = INT32_MAX;
	uint32_t x966 = 5068385U;
	static uint64_t x967 = 404522575LLU;
	static uint32_t x968 = 945394836U;
	static volatile uint64_t t150 = 886491594756825LLU;

    t150 = ((x965-(x966+x967))*x968);

    if (t150 != 1642994771811964332LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x969 = INT8_MIN;
	volatile int64_t x970 = INT64_MIN;
	int64_t x971 = INT64_MAX;
	static int64_t t151 = 841LL;

    t151 = ((x969-(x970+x971))*x972);

    if (t151 != 272730423296LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint8_t x973 = 1U;
	static int8_t x974 = INT8_MIN;
	int16_t x975 = -1;
	volatile uint8_t x976 = 18U;
	static volatile int32_t t152 = 15971959;

    t152 = ((x973-(x974+x975))*x976);

    if (t152 != 2340) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x978 = 1U;
	static volatile int32_t x979 = INT32_MIN;

    t153 = ((x977-(x978+x979))*x980);

    if (t153 != 2147483649U) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x981 = INT64_MIN;
	int16_t x982 = INT16_MIN;
	uint16_t x983 = 4U;
	volatile int8_t x984 = -1;
	static int64_t t154 = -28566795244299LL;

    t154 = ((x981-(x982+x983))*x984);

    if (t154 != 9223372036854743044LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x985 = -1;
	volatile int16_t x987 = -10;
	uint8_t x988 = 14U;
	volatile uint64_t t155 = 8993841875647431LLU;

    t155 = ((x985-(x986+x987))*x988);

    if (t155 != 140LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x989 = -43036606LL;
	int64_t x991 = INT64_MIN;
	int32_t x992 = INT32_MAX;
	uint64_t t156 = 6138499500784399LLU;

    t156 = ((x989-(x990+x991))*x992);

    if (t156 != 9130946737279645860LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x993 = -1;
	int8_t x994 = INT8_MIN;
	uint32_t x995 = 1402372U;
	volatile int32_t x996 = INT32_MAX;

    t157 = ((x993-(x994+x995))*x996);

    if (t157 != 2148885893U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x997 = UINT8_MAX;
	volatile int32_t x998 = 7714928;
	int16_t x999 = INT16_MIN;
	int64_t x1000 = 20LL;
	static int64_t t158 = -33591614994821LL;

    t158 = ((x997-(x998+x999))*x1000);

    if (t158 != -153638100LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint16_t x1001 = UINT16_MAX;
	uint32_t x1002 = UINT32_MAX;
	int16_t x1003 = 0;
	volatile uint16_t x1004 = UINT16_MAX;
	uint32_t t159 = 214U;

    t159 = ((x1001-(x1002+x1003))*x1004);

    if (t159 != 4294901760U) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x1013 = 1087;
	static uint16_t x1015 = 55U;
	uint16_t x1016 = UINT16_MAX;
	static volatile int32_t t160 = 113891;

    t160 = ((x1013-(x1014+x1015))*x1016);

    if (t160 != 67304445) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x1017 = 3691U;
	volatile int64_t x1018 = INT64_MIN;
	uint64_t x1019 = 7411414LLU;
	volatile uint32_t x1020 = 486105U;
	uint64_t t161 = 55492813LLU;

    t161 = ((x1017-(x1018+x1019))*x1020);

    if (t161 != 9223368435923586893LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x1029 = -3;
	static volatile int16_t x1030 = -1;
	int8_t x1031 = INT8_MIN;
	int32_t x1032 = 769464;
	int32_t t162 = 3;

    t162 = ((x1029-(x1030+x1031))*x1032);

    if (t162 != 96952464) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x1033 = -1LL;
	static volatile int64_t x1034 = INT64_MAX;
	static uint64_t x1035 = UINT64_MAX;
	uint64_t t163 = 23113381237LLU;

    t163 = ((x1033-(x1034+x1035))*x1036);

    if (t163 != 2LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x1040 = -34230574;
	volatile uint64_t t164 = 12LLU;

    t164 = ((x1037-(x1038+x1039))*x1040);

    if (t164 != 14770693195460272202LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x1041 = INT32_MIN;
	int16_t x1042 = -1;
	uint64_t x1043 = UINT64_MAX;
	uint8_t x1044 = 28U;
	static uint64_t t165 = 74793853819845088LLU;

    t165 = ((x1041-(x1042+x1043))*x1044);

    if (t165 != 18446744013580009528LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint8_t x1053 = 61U;
	uint16_t x1054 = 1042U;
	int16_t x1055 = 669;
	int16_t x1056 = INT16_MAX;
	volatile int32_t t166 = 118436025;

    t166 = ((x1053-(x1054+x1055))*x1056);

    if (t166 != -54065550) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x1057 = 226LL;
	int32_t x1058 = INT32_MAX;
	volatile int16_t x1060 = 56;
	static volatile int64_t t167 = 6074839519LL;

    t167 = ((x1057-(x1058+x1059))*x1060);

    if (t167 != -152698382312LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x1065 = 393;
	int16_t x1067 = 51;
	static volatile int64_t t168 = -3822663392222LL;

    t168 = ((x1065-(x1066+x1067))*x1068);

    if (t168 != 4198620LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x1069 = UINT8_MAX;
	volatile uint16_t x1070 = 251U;
	int16_t x1071 = -1;
	int32_t t169 = 67;

    t169 = ((x1069-(x1070+x1071))*x1072);

    if (t169 != -640) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint16_t x1081 = 3U;
	uint16_t x1082 = 164U;
	uint64_t x1083 = UINT64_MAX;
	volatile uint64_t t170 = 185850376304575544LLU;

    t170 = ((x1081-(x1082+x1083))*x1084);

    if (t170 != 18442655664567451616LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x1089 = INT32_MAX;
	int64_t x1090 = -20358LL;
	int16_t x1091 = 0;
	static uint32_t x1092 = 764U;

    t171 = ((x1089-(x1090+x1091))*x1092);

    if (t171 != 1640693059820LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x1093 = 96U;
	uint8_t x1094 = 22U;
	static volatile int32_t x1096 = -109701;
	static uint32_t t172 = 466252U;

    t172 = ((x1093-(x1094+x1095))*x1096);

    if (t172 != 4288385236U) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int16_t x1111 = INT16_MIN;
	uint64_t x1112 = 2833LLU;
	static uint64_t t173 = 199402191085778LLU;

    t173 = ((x1109-(x1110+x1111))*x1112);

    if (t173 != 125154038763LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x1117 = 88U;
	static int64_t x1119 = 0LL;
	int32_t x1120 = -92806747;

    t174 = ((x1117-(x1118+x1119))*x1120);

    if (t174 != -8259800483LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x1125 = -1;
	uint64_t x1126 = 998423669849556LLU;
	uint32_t x1127 = UINT32_MAX;
	int32_t x1128 = -13534;
	volatile uint64_t t175 = 4104046LLU;

    t175 = ((x1125-(x1126+x1127))*x1128);

    if (t175 != 13512724075831274968LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x1129 = UINT8_MAX;
	int64_t x1130 = -1LL;
	volatile uint32_t x1132 = 836402236U;
	uint64_t t176 = 223192726054629421LLU;

    t176 = ((x1129-(x1130+x1131))*x1132);

    if (t176 != 214955374652LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x1133 = INT16_MIN;
	uint32_t x1135 = 1672U;
	int64_t t177 = -839884325LL;

    t177 = ((x1133-(x1134+x1135))*x1136);

    if (t177 != -4294932984LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x1141 = 155U;
	int8_t x1142 = -1;
	volatile int8_t x1143 = 8;
	volatile int16_t x1144 = -2664;
	int32_t t178 = -402212859;

    t178 = ((x1141-(x1142+x1143))*x1144);

    if (t178 != -394272) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x1149 = INT32_MIN;
	uint8_t x1150 = UINT8_MAX;

    t179 = ((x1149-(x1150+x1151))*x1152);

    if (t179 != 1912251533155410629LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x1157 = -730014915311666LL;
	int8_t x1159 = INT8_MAX;
	uint8_t x1160 = UINT8_MAX;
	uint64_t t180 = 134738639LLU;

    t180 = ((x1157-(x1158+x1159))*x1160);

    if (t180 != 18260590270295831506LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint64_t x1165 = UINT64_MAX;
	static int8_t x1167 = -3;
	uint16_t x1168 = 6576U;
	uint64_t t181 = 1469186730786781LLU;

    t181 = ((x1165-(x1166+x1167))*x1168);

    if (t181 != 19728LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x1178 = 95U;
	volatile int16_t x1179 = 27;
	static int8_t x1180 = INT8_MAX;
	volatile int32_t t182 = 710806266;

    t182 = ((x1177-(x1178+x1179))*x1180);

    if (t182 != -15621) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x1181 = UINT8_MAX;
	uint64_t x1183 = 0LLU;
	static int64_t x1184 = INT64_MIN;

    t183 = ((x1181-(x1182+x1183))*x1184);

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x1186 = INT16_MAX;
	static int32_t x1187 = -1;
	uint32_t x1188 = UINT32_MAX;
	uint32_t t184 = 1423545789U;

    t184 = ((x1185-(x1186+x1187))*x1188);

    if (t184 != 32894U) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x1193 = 0;
	uint8_t x1194 = UINT8_MAX;
	volatile uint16_t x1195 = 80U;
	static uint64_t x1196 = 7260405811250LLU;
	uint64_t t185 = 38953LLU;

    t185 = ((x1193-(x1194+x1195))*x1196);

    if (t185 != 18444311837762782866LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x1202 = 4;
	uint64_t x1203 = 721468918218111LLU;
	static uint8_t x1204 = 1U;
	volatile uint64_t t186 = 138626875366723671LLU;

    t186 = ((x1201-(x1202+x1203))*x1204);

    if (t186 != 18446022604791332675LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint32_t x1205 = 1U;
	uint64_t x1206 = 63915404187464LLU;
	int8_t x1207 = -1;
	int16_t x1208 = -1;
	uint64_t t187 = 1425749502419869474LLU;

    t187 = ((x1205-(x1206+x1207))*x1208);

    if (t187 != 63915404187462LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x1209 = -1LL;
	volatile int64_t x1210 = 113724979LL;
	static uint8_t x1211 = UINT8_MAX;
	static int8_t x1212 = -1;
	volatile int64_t t188 = -2858396LL;

    t188 = ((x1209-(x1210+x1211))*x1212);

    if (t188 != 113725235LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x1218 = INT16_MIN;
	uint64_t x1219 = 64896092821366984LLU;
	uint16_t x1220 = UINT16_MAX;

    t189 = ((x1217-(x1218+x1219))*x1220);

    if (t189 != 8232297245427706056LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x1225 = 182U;
	int32_t x1226 = -61111;
	volatile int16_t x1227 = -1048;
	static volatile uint32_t t190 = 17206892U;

    t190 = ((x1225-(x1226+x1227))*x1228);

    if (t190 != 4294904955U) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1230 = -10763531LL;
	int8_t x1231 = -1;
	uint32_t x1232 = UINT32_MAX;
	volatile int64_t t191 = 93738466033319LL;

    t191 = ((x1229-(x1230+x1231))*x1232);

    if (t191 != 46229030803587825LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x1233 = UINT64_MAX;
	int8_t x1234 = -1;
	int64_t x1235 = -1809134974LL;
	static volatile int64_t x1236 = -11235LL;
	static uint64_t t192 = 99727491251LLU;

    t192 = ((x1233-(x1234+x1235))*x1236);

    if (t192 != 18446723748078118726LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1241 = INT32_MIN;
	uint16_t x1242 = 1U;
	uint64_t t193 = 4286268452534LLU;

    t193 = ((x1241-(x1242+x1243))*x1244);

    if (t193 != 18347846060807815168LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x1246 = UINT8_MAX;
	uint64_t x1247 = 1529057113857LLU;
	volatile uint64_t t194 = 64580764967127192LLU;

    t194 = ((x1245-(x1246+x1247))*x1248);

    if (t194 != 9173269422396635137LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x1249 = INT16_MIN;
	uint8_t x1251 = 123U;
	uint64_t t195 = 123798740LLU;

    t195 = ((x1249-(x1250+x1251))*x1252);

    if (t195 != 430652LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x1257 = 1589887122778544LLU;
	uint32_t x1258 = UINT32_MAX;
	static int16_t x1259 = INT16_MIN;
	uint64_t t196 = 58921146593540LLU;

    t196 = ((x1257-(x1258+x1259))*x1260);

    if (t196 != 5145339654177816576LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x1265 = -4026;
	int32_t x1266 = INT32_MAX;
	uint32_t x1267 = 83282978U;
	static int16_t x1268 = -1;
	volatile uint32_t t197 = 95U;

    t197 = ((x1265-(x1266+x1267))*x1268);

    if (t197 != 2230770651U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x1269 = UINT8_MAX;
	volatile uint32_t x1271 = UINT32_MAX;
	int8_t x1272 = -1;
	static uint64_t t198 = 4LLU;

    t198 = ((x1269-(x1270+x1271))*x1272);

    if (t198 != 1913751067480210812LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1274 = -1;
	int16_t x1275 = INT16_MIN;
	volatile int16_t x1276 = -1;
	volatile uint32_t t199 = 52065U;

    t199 = ((x1273-(x1274+x1275))*x1276);

    if (t199 != 4294934527U) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

