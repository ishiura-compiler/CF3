#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x6 = 8U;
volatile int32_t x9 = 17739931;
volatile int32_t t1 = 562632642;
volatile int8_t x19 = INT8_MAX;
uint8_t x28 = 7U;
int16_t x31 = -11;
int16_t x37 = INT16_MIN;
int32_t t7 = -13957;
volatile int8_t x51 = INT8_MAX;
int32_t t8 = 357;
static int16_t x60 = -3;
int16_t x64 = INT16_MIN;
int32_t t13 = 25439873;
int32_t x81 = -1;
int32_t x85 = INT32_MAX;
uint16_t x86 = 103U;
uint64_t x91 = UINT64_MAX;
int32_t t16 = -21763622;
static int16_t x102 = 1;
uint8_t x103 = 0U;
uint16_t x107 = UINT16_MAX;
static int32_t x113 = -1;
uint8_t x128 = UINT8_MAX;
volatile int16_t x130 = INT16_MAX;
int8_t x132 = -2;
uint64_t x141 = 2164268605722LLU;
uint16_t x159 = 1U;
int16_t x166 = -18;
uint32_t x179 = 2U;
int32_t t30 = 2;
volatile int64_t x185 = 199915LL;
int64_t x188 = 4404287076746866LL;
int16_t x195 = 304;
int64_t x196 = -1LL;
int64_t x200 = INT64_MIN;
static int32_t x212 = -3416;
volatile uint16_t x223 = 3660U;
int32_t t40 = 23934747;
static uint64_t x229 = UINT64_MAX;
int16_t x233 = -1;
volatile int8_t x235 = INT8_MIN;
volatile int8_t x241 = 7;
int32_t x246 = 0;
uint64_t x248 = 776471LLU;
static volatile int64_t x265 = INT64_MAX;
int64_t x277 = INT64_MIN;
int64_t x293 = INT64_MIN;
static int64_t x298 = -1737LL;
volatile int16_t x304 = INT16_MIN;
int64_t x305 = INT64_MIN;
int32_t x309 = -1;
volatile uint64_t x312 = UINT64_MAX;
int32_t t57 = 0;
int32_t x325 = 3005023;
int64_t x328 = 32LL;
volatile int8_t x334 = INT8_MIN;
volatile int8_t x336 = INT8_MAX;
volatile int32_t t59 = 84;
volatile int32_t t60 = 7242733;
static volatile int64_t x343 = 3365959338732460LL;
int64_t x344 = INT64_MAX;
static volatile int32_t t62 = 5;
int64_t x358 = -1LL;
static uint64_t x365 = 3LLU;
int32_t x366 = 22869253;
int32_t x369 = -1;
int32_t x371 = -46179567;
volatile int32_t t66 = 3383628;
static int8_t x376 = 5;
int64_t x382 = INT64_MAX;
uint64_t x383 = 280804764774719LLU;
volatile int32_t t69 = -1280152;
int16_t x398 = -1;
uint64_t x399 = UINT64_MAX;
volatile int32_t t73 = 1;
static volatile uint64_t x410 = UINT64_MAX;
int16_t x413 = -209;
volatile int32_t x424 = -1;
volatile int32_t x459 = -90705270;
volatile int16_t x464 = INT16_MIN;
int8_t x468 = INT8_MIN;
volatile int32_t t84 = 204459687;
volatile int8_t x477 = INT8_MIN;
uint32_t x489 = UINT32_MAX;
uint32_t x490 = UINT32_MAX;
uint8_t x491 = 3U;
int32_t t88 = 29533982;
uint64_t x495 = 4438439166551125LLU;
static volatile int32_t t89 = -357649589;
static int64_t x522 = 7162615791351LL;
static int32_t x528 = INT32_MIN;
static int32_t t97 = -180749561;
int64_t x529 = -1LL;
uint8_t x531 = UINT8_MAX;
int16_t x539 = 12;


void f0(void) {
	uint8_t x5 = 23U;
	uint8_t x7 = UINT8_MAX;
	uint64_t x8 = 125463531540018491LLU;
	volatile int32_t t0 = 114;

	t0 = (x5<=((x6*x7)/x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x10 = -1;
	static int16_t x11 = INT16_MAX;
	volatile uint64_t x12 = 1842LLU;

	t1 = (x9<=((x10*x11)/x12));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x17 = INT64_MIN;
	uint32_t x18 = UINT32_MAX;
	int32_t x20 = -1;
	volatile int32_t t2 = -2495;

	t2 = (x17<=((x18*x19)/x20));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x21 = INT32_MAX;
	int16_t x22 = 9096;
	int8_t x23 = -31;
	uint32_t x24 = 8470U;
	int32_t t3 = -1;

	t3 = (x21<=((x22*x23)/x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x25 = 27517657U;
	static uint16_t x26 = 846U;
	int8_t x27 = INT8_MIN;
	volatile int32_t t4 = -1169599;

	t4 = (x25<=((x26*x27)/x28));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = INT32_MIN;
	int8_t x30 = -1;
	int8_t x32 = INT8_MIN;
	int32_t t5 = 118;

	t5 = (x29<=((x30*x31)/x32));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x38 = UINT16_MAX;
	int16_t x39 = INT16_MAX;
	uint32_t x40 = 135U;
	static volatile int32_t t6 = 93;

	t6 = (x37<=((x38*x39)/x40));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x45 = UINT32_MAX;
	uint8_t x46 = UINT8_MAX;
	int8_t x47 = INT8_MIN;
	int8_t x48 = 3;

	t7 = (x45<=((x46*x47)/x48));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x49 = -26552;
	volatile uint32_t x50 = 8401U;
	int16_t x52 = -121;

	t8 = (x49<=((x50*x51)/x52));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x57 = 26474U;
	volatile int8_t x58 = -6;
	uint8_t x59 = 6U;
	int32_t t9 = 103;

	t9 = (x57<=((x58*x59)/x60));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x61 = UINT32_MAX;
	uint16_t x62 = 6403U;
	static uint64_t x63 = 2859337LLU;
	volatile int32_t t10 = -126475846;

	t10 = (x61<=((x62*x63)/x64));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x65 = -1;
	static int8_t x66 = -7;
	uint64_t x67 = 13159166410753LLU;
	volatile int8_t x68 = INT8_MIN;
	int32_t t11 = -4135381;

	t11 = (x65<=((x66*x67)/x68));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x69 = INT16_MIN;
	int16_t x70 = 1;
	static uint32_t x71 = 802107U;
	int64_t x72 = INT64_MIN;
	int32_t t12 = -7828671;

	t12 = (x69<=((x70*x71)/x72));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x77 = 1U;
	static uint64_t x78 = UINT64_MAX;
	static int64_t x79 = -1LL;
	int64_t x80 = INT64_MAX;

	t13 = (x77<=((x78*x79)/x80));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x82 = INT32_MIN;
	static int64_t x83 = -1LL;
	int64_t x84 = -1LL;
	volatile int32_t t14 = 6988782;

	t14 = (x81<=((x82*x83)/x84));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x87 = 29U;
	int8_t x88 = INT8_MIN;
	volatile int32_t t15 = 30972;

	t15 = (x85<=((x86*x87)/x88));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x89 = -1LL;
	int64_t x90 = INT64_MAX;
	static int64_t x92 = INT64_MIN;

	t16 = (x89<=((x90*x91)/x92));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x101 = -1;
	volatile int64_t x104 = -1LL;
	int32_t t17 = -2225173;

	t17 = (x101<=((x102*x103)/x104));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x105 = 16812U;
	volatile uint16_t x106 = 795U;
	static int8_t x108 = -7;
	int32_t t18 = -2;

	t18 = (x105<=((x106*x107)/x108));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x114 = 2167U;
	volatile uint64_t x115 = UINT64_MAX;
	static int16_t x116 = 4;
	volatile int32_t t19 = 23;

	t19 = (x113<=((x114*x115)/x116));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x117 = INT16_MIN;
	volatile int16_t x118 = -767;
	int16_t x119 = INT16_MIN;
	volatile uint16_t x120 = 6U;
	volatile int32_t t20 = 1324494;

	t20 = (x117<=((x118*x119)/x120));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint8_t x125 = UINT8_MAX;
	int32_t x126 = INT32_MIN;
	int64_t x127 = 3144692524LL;
	volatile int32_t t21 = -116;

	t21 = (x125<=((x126*x127)/x128));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x129 = -1604200;
	uint8_t x131 = 1U;
	volatile int32_t t22 = 4717;

	t22 = (x129<=((x130*x131)/x132));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x133 = -1;
	uint64_t x134 = UINT64_MAX;
	int8_t x135 = INT8_MIN;
	volatile uint64_t x136 = 1624240142281981LLU;
	volatile int32_t t23 = 7730911;

	t23 = (x133<=((x134*x135)/x136));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x137 = 8473700562181LLU;
	static int64_t x138 = 1884LL;
	uint32_t x139 = 443339145U;
	volatile uint32_t x140 = UINT32_MAX;
	int32_t t24 = -4980;

	t24 = (x137<=((x138*x139)/x140));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x142 = INT8_MAX;
	uint8_t x143 = 43U;
	int32_t x144 = INT32_MIN;
	volatile int32_t t25 = 1017;

	t25 = (x141<=((x142*x143)/x144));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x157 = 2673186671626730438LL;
	static uint64_t x158 = UINT64_MAX;
	uint8_t x160 = UINT8_MAX;
	static int32_t t26 = -4;

	t26 = (x157<=((x158*x159)/x160));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x161 = 21755961238978LL;
	int64_t x162 = -1LL;
	uint32_t x163 = 0U;
	volatile uint8_t x164 = 9U;
	int32_t t27 = 1;

	t27 = (x161<=((x162*x163)/x164));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x165 = -1LL;
	int8_t x167 = INT8_MAX;
	int16_t x168 = -1;
	int32_t t28 = 285692120;

	t28 = (x165<=((x166*x167)/x168));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x173 = 15U;
	static int32_t x174 = 19157748;
	int64_t x175 = 109967585527LL;
	int64_t x176 = INT64_MAX;
	int32_t t29 = 34092747;

	t29 = (x173<=((x174*x175)/x176));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x177 = -7960;
	uint8_t x178 = UINT8_MAX;
	static int32_t x180 = INT32_MAX;

	t30 = (x177<=((x178*x179)/x180));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x181 = INT8_MIN;
	int16_t x182 = -29;
	int32_t x183 = -83;
	uint64_t x184 = 358319LLU;
	int32_t t31 = -8;

	t31 = (x181<=((x182*x183)/x184));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x186 = 982522U;
	uint64_t x187 = 3554889833351275LLU;
	int32_t t32 = 419;

	t32 = (x185<=((x186*x187)/x188));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x189 = -1LL;
	uint32_t x190 = 2871U;
	int32_t x191 = INT32_MAX;
	int64_t x192 = -1LL;
	static volatile int32_t t33 = 18107;

	t33 = (x189<=((x190*x191)/x192));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x193 = 38537569869109LLU;
	uint16_t x194 = UINT16_MAX;
	static int32_t t34 = -593587;

	t34 = (x193<=((x194*x195)/x196));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x197 = INT16_MIN;
	int8_t x198 = INT8_MIN;
	static uint16_t x199 = 86U;
	volatile int32_t t35 = 10;

	t35 = (x197<=((x198*x199)/x200));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x201 = UINT8_MAX;
	uint8_t x202 = 66U;
	static int64_t x203 = -8690974969671768LL;
	uint8_t x204 = 5U;
	volatile int32_t t36 = 3321611;

	t36 = (x201<=((x202*x203)/x204));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x205 = 366058817847869LL;
	volatile int64_t x206 = -489LL;
	int64_t x207 = 23688091541868LL;
	static int16_t x208 = -1;
	static int32_t t37 = 472914045;

	t37 = (x205<=((x206*x207)/x208));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x209 = -1;
	static uint8_t x210 = 32U;
	volatile uint16_t x211 = 7765U;
	volatile int32_t t38 = -91850002;

	t38 = (x209<=((x210*x211)/x212));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x213 = UINT32_MAX;
	static int8_t x214 = -1;
	uint16_t x215 = 140U;
	int8_t x216 = INT8_MIN;
	volatile int32_t t39 = 1152;

	t39 = (x213<=((x214*x215)/x216));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x221 = -38;
	int16_t x222 = 0;
	int16_t x224 = INT16_MAX;

	t40 = (x221<=((x222*x223)/x224));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x225 = INT8_MIN;
	uint64_t x226 = UINT64_MAX;
	static int8_t x227 = INT8_MIN;
	uint8_t x228 = UINT8_MAX;
	static volatile int32_t t41 = 0;

	t41 = (x225<=((x226*x227)/x228));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x230 = INT16_MIN;
	static int32_t x231 = -1;
	int64_t x232 = INT64_MIN;
	int32_t t42 = -3;

	t42 = (x229<=((x230*x231)/x232));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint8_t x234 = UINT8_MAX;
	volatile uint64_t x236 = 1049411LLU;
	static volatile int32_t t43 = -7868497;

	t43 = (x233<=((x234*x235)/x236));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x237 = INT8_MAX;
	uint8_t x238 = UINT8_MAX;
	int16_t x239 = -1;
	static int8_t x240 = INT8_MIN;
	volatile int32_t t44 = -1001411304;

	t44 = (x237<=((x238*x239)/x240));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x242 = INT16_MIN;
	int32_t x243 = -1;
	uint8_t x244 = UINT8_MAX;
	int32_t t45 = 110192;

	t45 = (x241<=((x242*x243)/x244));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x245 = -1;
	static int16_t x247 = -1;
	int32_t t46 = 1;

	t46 = (x245<=((x246*x247)/x248));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x249 = 1U;
	volatile uint8_t x250 = 27U;
	volatile uint16_t x251 = 217U;
	static uint8_t x252 = UINT8_MAX;
	volatile int32_t t47 = 224511707;

	t47 = (x249<=((x250*x251)/x252));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x253 = INT16_MAX;
	volatile uint8_t x254 = UINT8_MAX;
	uint8_t x255 = 1U;
	int64_t x256 = INT64_MIN;
	int32_t t48 = -119;

	t48 = (x253<=((x254*x255)/x256));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x261 = 295U;
	int64_t x262 = 1LL;
	static int16_t x263 = INT16_MIN;
	int8_t x264 = -1;
	int32_t t49 = 53022;

	t49 = (x261<=((x262*x263)/x264));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x266 = INT16_MAX;
	int8_t x267 = -1;
	static int32_t x268 = INT32_MIN;
	int32_t t50 = 4052324;

	t50 = (x265<=((x266*x267)/x268));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x273 = UINT8_MAX;
	int8_t x274 = INT8_MIN;
	static int8_t x275 = 49;
	uint32_t x276 = 23811U;
	volatile int32_t t51 = -519759;

	t51 = (x273<=((x274*x275)/x276));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x278 = -1;
	int32_t x279 = 906;
	int64_t x280 = 2277311194655942694LL;
	int32_t t52 = -3445;

	t52 = (x277<=((x278*x279)/x280));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x294 = 5220488656238640LLU;
	static uint8_t x295 = 49U;
	static int64_t x296 = 52545743859970569LL;
	volatile int32_t t53 = 1120922;

	t53 = (x293<=((x294*x295)/x296));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x297 = 62U;
	volatile uint64_t x299 = 49092383LLU;
	int32_t x300 = -1;
	int32_t t54 = -19988682;

	t54 = (x297<=((x298*x299)/x300));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x301 = -9;
	int8_t x302 = 1;
	int32_t x303 = INT32_MIN;
	static volatile int32_t t55 = -10;

	t55 = (x301<=((x302*x303)/x304));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x306 = UINT64_MAX;
	volatile uint8_t x307 = UINT8_MAX;
	uint64_t x308 = UINT64_MAX;
	volatile int32_t t56 = -24188249;

	t56 = (x305<=((x306*x307)/x308));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x310 = 0U;
	int16_t x311 = INT16_MIN;

	t57 = (x309<=((x310*x311)/x312));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x326 = -1;
	int64_t x327 = INT64_MAX;
	volatile int32_t t58 = 218545;

	t58 = (x325<=((x326*x327)/x328));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x333 = INT8_MAX;
	uint16_t x335 = 244U;

	t59 = (x333<=((x334*x335)/x336));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x337 = 6260U;
	static int64_t x338 = -1LL;
	int64_t x339 = 279459036540099LL;
	int16_t x340 = -303;

	t60 = (x337<=((x338*x339)/x340));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x341 = UINT16_MAX;
	int8_t x342 = -1;
	volatile int32_t t61 = 9;

	t61 = (x341<=((x342*x343)/x344));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x349 = -4;
	static uint32_t x350 = 56U;
	static uint64_t x351 = UINT64_MAX;
	int32_t x352 = 10;

	t62 = (x349<=((x350*x351)/x352));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x353 = 418626992LLU;
	uint8_t x354 = UINT8_MAX;
	int8_t x355 = INT8_MIN;
	int32_t x356 = 278803;
	static int32_t t63 = -1;

	t63 = (x353<=((x354*x355)/x356));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x357 = 2U;
	int32_t x359 = -1;
	int16_t x360 = -63;
	int32_t t64 = 0;

	t64 = (x357<=((x358*x359)/x360));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x367 = 66U;
	int32_t x368 = -1;
	static int32_t t65 = -929;

	t65 = (x365<=((x366*x367)/x368));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x370 = 18;
	uint16_t x372 = UINT16_MAX;

	t66 = (x369<=((x370*x371)/x372));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x373 = INT8_MIN;
	int8_t x374 = 1;
	static volatile uint16_t x375 = 9U;
	int32_t t67 = 495246773;

	t67 = (x373<=((x374*x375)/x376));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x381 = -1LL;
	int64_t x384 = -1LL;
	volatile int32_t t68 = -1;

	t68 = (x381<=((x382*x383)/x384));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint8_t x389 = 3U;
	volatile int8_t x390 = -6;
	static int16_t x391 = -574;
	int8_t x392 = -1;

	t69 = (x389<=((x390*x391)/x392));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x393 = UINT64_MAX;
	int8_t x394 = -28;
	int8_t x395 = -10;
	int16_t x396 = INT16_MIN;
	int32_t t70 = 188;

	t70 = (x393<=((x394*x395)/x396));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x397 = 1338;
	static volatile int8_t x400 = 4;
	int32_t t71 = -300269603;

	t71 = (x397<=((x398*x399)/x400));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x401 = INT16_MIN;
	uint16_t x402 = 31U;
	uint32_t x403 = 130011U;
	int16_t x404 = INT16_MAX;
	static volatile int32_t t72 = -3583;

	t72 = (x401<=((x402*x403)/x404));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x405 = -6;
	volatile int8_t x406 = 5;
	volatile uint16_t x407 = 626U;
	int64_t x408 = 65498579504LL;

	t73 = (x405<=((x406*x407)/x408));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x409 = 353783986648488LLU;
	uint64_t x411 = 8806933289463306339LLU;
	int16_t x412 = 43;
	volatile int32_t t74 = -218324946;

	t74 = (x409<=((x410*x411)/x412));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x414 = INT32_MAX;
	static uint64_t x415 = 34548269069088LLU;
	uint16_t x416 = UINT16_MAX;
	static volatile int32_t t75 = 111804284;

	t75 = (x413<=((x414*x415)/x416));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x421 = 0;
	uint32_t x422 = 116280746U;
	volatile int64_t x423 = -472383756LL;
	volatile int32_t t76 = -15;

	t76 = (x421<=((x422*x423)/x424));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x429 = -1;
	static volatile int16_t x430 = 0;
	static uint32_t x431 = 1203156357U;
	int16_t x432 = INT16_MAX;
	int32_t t77 = 4;

	t77 = (x429<=((x430*x431)/x432));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x437 = INT16_MAX;
	int8_t x438 = INT8_MAX;
	uint32_t x439 = 4U;
	int32_t x440 = -1;
	volatile int32_t t78 = -65248;

	t78 = (x437<=((x438*x439)/x440));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x441 = INT16_MAX;
	volatile int8_t x442 = 1;
	uint16_t x443 = 14238U;
	int16_t x444 = INT16_MIN;
	int32_t t79 = 1234;

	t79 = (x441<=((x442*x443)/x444));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x445 = 7073895631377497348LLU;
	int16_t x446 = -55;
	int64_t x447 = 17LL;
	uint8_t x448 = UINT8_MAX;
	volatile int32_t t80 = 23;

	t80 = (x445<=((x446*x447)/x448));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x453 = -1;
	uint32_t x454 = 23516U;
	uint32_t x455 = UINT32_MAX;
	uint64_t x456 = UINT64_MAX;
	int32_t t81 = 16115462;

	t81 = (x453<=((x454*x455)/x456));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x457 = INT16_MAX;
	volatile int16_t x458 = -1;
	static int16_t x460 = INT16_MIN;
	static volatile int32_t t82 = -1221;

	t82 = (x457<=((x458*x459)/x460));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x461 = -17;
	int16_t x462 = INT16_MIN;
	int16_t x463 = -1;
	static int32_t t83 = -2;

	t83 = (x461<=((x462*x463)/x464));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x465 = 6U;
	static uint32_t x466 = 821432U;
	int64_t x467 = -1LL;

	t84 = (x465<=((x466*x467)/x468));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x469 = 67;
	int8_t x470 = 1;
	int8_t x471 = INT8_MIN;
	int64_t x472 = INT64_MIN;
	static volatile int32_t t85 = 0;

	t85 = (x469<=((x470*x471)/x472));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x478 = 450LLU;
	int8_t x479 = INT8_MAX;
	int32_t x480 = INT32_MIN;
	int32_t t86 = -2775;

	t86 = (x477<=((x478*x479)/x480));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x485 = 64222013U;
	volatile uint64_t x486 = 953745066300LLU;
	uint64_t x487 = 472758504LLU;
	static volatile int32_t x488 = 2;
	volatile int32_t t87 = -685448576;

	t87 = (x485<=((x486*x487)/x488));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x492 = 809465619LL;

	t88 = (x489<=((x490*x491)/x492));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x493 = 7U;
	int64_t x494 = -41375423LL;
	int8_t x496 = -1;

	t89 = (x493<=((x494*x495)/x496));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x497 = 25U;
	static volatile int16_t x498 = INT16_MAX;
	int16_t x499 = -1;
	static int32_t x500 = INT32_MIN;
	volatile int32_t t90 = -372104734;

	t90 = (x497<=((x498*x499)/x500));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x501 = INT8_MIN;
	volatile uint32_t x502 = 48205092U;
	volatile int16_t x503 = 0;
	static int16_t x504 = -310;
	int32_t t91 = -279159;

	t91 = (x501<=((x502*x503)/x504));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x505 = INT16_MIN;
	int16_t x506 = 1;
	uint32_t x507 = 9853U;
	static volatile uint32_t x508 = UINT32_MAX;
	volatile int32_t t92 = 0;

	t92 = (x505<=((x506*x507)/x508));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x509 = INT16_MIN;
	int8_t x510 = 12;
	volatile int8_t x511 = INT8_MIN;
	int8_t x512 = 7;
	volatile int32_t t93 = -1628622;

	t93 = (x509<=((x510*x511)/x512));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x513 = INT64_MAX;
	int16_t x514 = INT16_MIN;
	uint16_t x515 = 1U;
	uint16_t x516 = 1072U;
	int32_t t94 = 248684191;

	t94 = (x513<=((x514*x515)/x516));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x517 = INT64_MIN;
	int8_t x518 = INT8_MIN;
	int8_t x519 = 36;
	int16_t x520 = INT16_MAX;
	volatile int32_t t95 = -112723;

	t95 = (x517<=((x518*x519)/x520));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x521 = 14227U;
	static volatile int8_t x523 = INT8_MAX;
	static int64_t x524 = INT64_MIN;
	int32_t t96 = 851;

	t96 = (x521<=((x522*x523)/x524));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x525 = -34;
	static uint32_t x526 = UINT32_MAX;
	volatile uint64_t x527 = 1LLU;

	t97 = (x525<=((x526*x527)/x528));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x530 = 1645;
	static uint64_t x532 = 352941LLU;
	volatile int32_t t98 = 165;

	t98 = (x529<=((x530*x531)/x532));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x537 = INT64_MIN;
	static int8_t x538 = 6;
	int8_t x540 = -12;
	volatile int32_t t99 = 0;

	t99 = (x537<=((x538*x539)/x540));

	if (t99 != 1) { NG(); } else { ; }
	
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


    return 0;
}

