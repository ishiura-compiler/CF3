#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x1 = INT8_MIN;
volatile int8_t x4 = -1;
static uint32_t x10 = UINT32_MAX;
volatile int64_t t3 = -1217309474633121481LL;
volatile int16_t x40 = 44;
static volatile uint64_t t4 = 1067LLU;
int8_t x49 = INT8_MIN;
volatile uint64_t t6 = 193436797LLU;
uint8_t x57 = 43U;
uint64_t x67 = UINT64_MAX;
static int16_t x68 = INT16_MIN;
int64_t x75 = -908247571199203996LL;
uint64_t x79 = 4026422440LLU;
int16_t x88 = 173;
volatile uint32_t t13 = 3U;
static uint16_t x91 = 2U;
static uint16_t x93 = 23373U;
volatile int32_t t15 = 1446;
uint32_t x101 = UINT32_MAX;
volatile int32_t x103 = INT32_MIN;
int32_t x105 = INT32_MIN;
uint64_t x107 = 3884LLU;
volatile int64_t t19 = 41LL;
static uint32_t x113 = 1965835071U;
volatile uint64_t t20 = 1449083265440LLU;
static int16_t x128 = INT16_MIN;
uint32_t x136 = UINT32_MAX;
int32_t x137 = INT32_MAX;
volatile uint8_t x139 = UINT8_MAX;
int8_t x141 = 0;
volatile int16_t x159 = -24;
static uint64_t x165 = 67228291345LLU;
uint64_t t29 = 392368523125200010LLU;
int64_t x174 = INT64_MIN;
int32_t x179 = 875;
int64_t x191 = -158729598066550521LL;
int16_t x210 = -15277;
int32_t x226 = INT32_MIN;
int64_t t38 = -131984635831042LL;
static int64_t x233 = 1LL;
uint16_t x242 = 47U;
volatile uint16_t x250 = UINT16_MAX;
uint32_t x251 = UINT32_MAX;
int64_t t42 = 217LL;
int64_t x254 = -1LL;
uint8_t x262 = UINT8_MAX;
uint64_t x285 = 1728587025222437LLU;
volatile uint64_t t47 = 56063LLU;
static uint64_t x296 = UINT64_MAX;
uint8_t x303 = 18U;
volatile int64_t t50 = -45723393210LL;
int16_t x308 = INT16_MAX;
uint16_t x309 = 8724U;
int8_t x313 = INT8_MAX;
uint64_t x333 = 971535208464323LLU;
int8_t x339 = INT8_MIN;
static uint32_t x342 = 1U;
volatile uint8_t x349 = 82U;
static volatile uint64_t t60 = 406831LLU;
volatile uint32_t x361 = 175673351U;
int8_t x372 = 9;
static int16_t x379 = -1;
int64_t x383 = INT64_MIN;
uint64_t x389 = UINT64_MAX;
int64_t t70 = -40290139LL;
volatile int64_t t72 = 9200438480712019LL;
int16_t x411 = 5796;
static int64_t t74 = 1616658826LL;
int16_t x429 = -115;
int16_t x436 = INT16_MAX;
static int64_t x445 = 250731046LL;
volatile uint64_t x451 = 1401373377805713937LLU;
uint64_t t81 = 131055LLU;
static int64_t x454 = -1LL;
int64_t x455 = -1LL;
int16_t x458 = INT16_MAX;
uint32_t x459 = UINT32_MAX;
int8_t x468 = 3;
int8_t x485 = INT8_MAX;
volatile int16_t x486 = 2;
uint64_t t88 = 21612568800LLU;
uint16_t x495 = 7962U;
uint8_t x496 = 54U;
int64_t x502 = -14933653652LL;
uint32_t x507 = 30U;
uint16_t x508 = 77U;
int32_t x513 = -1;
int16_t x516 = INT16_MIN;
static uint8_t x526 = 0U;
static uint32_t x533 = 1504747001U;
volatile int64_t t96 = 1983746LL;
volatile uint64_t t97 = 1710LLU;
static int16_t x546 = -121;
int8_t x551 = -7;
uint16_t x552 = 153U;


void f0(void) {
	static volatile uint16_t x2 = 1U;
	uint8_t x3 = 9U;
	volatile int32_t t0 = 6494928;

	t0 = (((x1*x2)%x3)%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x9 = 25U;
	int8_t x11 = INT8_MIN;
	int16_t x12 = 119;
	static uint32_t t1 = 60922U;

	t1 = (((x9*x10)%x11)%x12);

	if (t1 != 103U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x29 = 152U;
	int16_t x30 = INT16_MAX;
	static int32_t x31 = INT32_MIN;
	int8_t x32 = INT8_MAX;
	volatile uint32_t t2 = 2693U;

	t2 = (((x29*x30)%x31)%x32);

	if (t2 != 25U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x33 = 0;
	int64_t x34 = -166216873LL;
	int16_t x35 = INT16_MAX;
	static int16_t x36 = 18;

	t3 = (((x33*x34)%x35)%x36);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x37 = UINT32_MAX;
	int16_t x38 = INT16_MIN;
	uint64_t x39 = 3384690943705703979LLU;

	t4 = (((x37*x38)%x39)%x40);

	if (t4 != 32LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x41 = INT8_MAX;
	volatile uint8_t x42 = 2U;
	uint16_t x43 = UINT16_MAX;
	static int8_t x44 = -19;
	int32_t t5 = 13;

	t5 = (((x41*x42)%x43)%x44);

	if (t5 != 7) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x50 = 61LLU;
	volatile int8_t x51 = -1;
	uint16_t x52 = 24U;

	t6 = (((x49*x50)%x51)%x52);

	if (t6 != 8LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x58 = UINT8_MAX;
	int64_t x59 = INT64_MIN;
	uint8_t x60 = UINT8_MAX;
	int64_t t7 = -953226073184148LL;

	t7 = (((x57*x58)%x59)%x60);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x61 = UINT64_MAX;
	volatile int8_t x62 = -61;
	static int8_t x63 = -2;
	int8_t x64 = INT8_MIN;
	volatile uint64_t t8 = 0LLU;

	t8 = (((x61*x62)%x63)%x64);

	if (t8 != 61LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x65 = UINT64_MAX;
	volatile int64_t x66 = 528903896LL;
	uint64_t t9 = 45640839029267LLU;

	t9 = (((x65*x66)%x67)%x68);

	if (t9 != 18446744073180647720LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x73 = 23;
	int8_t x74 = 8;
	uint16_t x76 = 586U;
	static int64_t t10 = 185415LL;

	t10 = (((x73*x74)%x75)%x76);

	if (t10 != 184LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x77 = -1;
	volatile int16_t x78 = -95;
	int64_t x80 = INT64_MIN;
	volatile uint64_t t11 = 2076940012LLU;

	t11 = (((x77*x78)%x79)%x80);

	if (t11 != 95LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x81 = 191552794173965LLU;
	static int8_t x82 = INT8_MAX;
	uint64_t x83 = UINT64_MAX;
	int32_t x84 = INT32_MAX;
	volatile uint64_t t12 = 675LLU;

	t12 = (((x81*x82)%x83)%x84);

	if (t12 != 1153253216LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x85 = -517;
	static uint32_t x86 = 33U;
	int32_t x87 = INT32_MIN;

	t13 = (((x85*x86)%x87)%x88);

	if (t13 != 114U) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x89 = 130U;
	static uint16_t x90 = 0U;
	volatile int64_t x92 = 2649617173812LL;
	volatile int64_t t14 = 167411795LL;

	t14 = (((x89*x90)%x91)%x92);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x94 = INT8_MAX;
	static int16_t x95 = 1;
	int16_t x96 = INT16_MIN;

	t15 = (((x93*x94)%x95)%x96);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x97 = 970423519505LLU;
	int64_t x98 = -1LL;
	int32_t x99 = -1;
	volatile uint64_t x100 = UINT64_MAX;
	volatile uint64_t t16 = 4810529652788822LLU;

	t16 = (((x97*x98)%x99)%x100);

	if (t16 != 18446743103286032111LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x102 = UINT16_MAX;
	int8_t x104 = 19;
	volatile uint32_t t17 = 4800U;

	t17 = (((x101*x102)%x103)%x104);

	if (t17 != 18U) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint32_t x106 = 6444928U;
	uint32_t x108 = UINT32_MAX;
	uint64_t t18 = 5LLU;

	t18 = (((x105*x106)%x107)%x108);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x109 = -3255LL;
	int8_t x110 = INT8_MIN;
	uint16_t x111 = 13U;
	int8_t x112 = -1;

	t19 = (((x109*x110)%x111)%x112);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x114 = -1LL;
	uint64_t x115 = UINT64_MAX;
	static uint16_t x116 = 3398U;

	t20 = (((x113*x114)%x115)%x116);

	if (t20 != 667LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x117 = UINT16_MAX;
	int8_t x118 = INT8_MIN;
	uint64_t x119 = 19654534669843LLU;
	volatile int16_t x120 = 567;
	uint64_t t21 = 4731LLU;

	t21 = (((x117*x118)%x119)%x120);

	if (t21 != 110LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x125 = INT32_MAX;
	int64_t x126 = 24LL;
	static uint8_t x127 = 1U;
	int64_t t22 = 1LL;

	t22 = (((x125*x126)%x127)%x128);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x133 = INT8_MIN;
	int64_t x134 = 3251766332LL;
	int64_t x135 = -7801540824119LL;
	int64_t t23 = -6650001158210LL;

	t23 = (((x133*x134)%x135)%x136);

	if (t23 != -3909230176LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x138 = 0U;
	volatile uint32_t x140 = 941U;
	uint32_t t24 = 34840081U;

	t24 = (((x137*x138)%x139)%x140);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x142 = INT64_MAX;
	int16_t x143 = 3;
	uint64_t x144 = UINT64_MAX;
	volatile uint64_t t25 = 14LLU;

	t25 = (((x141*x142)%x143)%x144);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x149 = 55257036074LLU;
	static int32_t x150 = -1;
	int8_t x151 = INT8_MIN;
	int32_t x152 = 31413859;
	uint64_t t26 = 3649989125365682LLU;

	t26 = (((x149*x150)%x151)%x152);

	if (t26 != 18205218LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x153 = -1;
	uint64_t x154 = UINT64_MAX;
	static int8_t x155 = 1;
	int64_t x156 = -1LL;
	uint64_t t27 = 273567406367387LLU;

	t27 = (((x153*x154)%x155)%x156);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x157 = 38U;
	int8_t x158 = 47;
	int8_t x160 = -1;
	int32_t t28 = -64056023;

	t28 = (((x157*x158)%x159)%x160);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x166 = INT32_MIN;
	int64_t x167 = INT64_MIN;
	static int8_t x168 = -1;

	t29 = (((x165*x166)%x167)%x168);

	if (t29 != 3202296243308986368LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x173 = 0;
	int8_t x175 = 1;
	volatile int64_t x176 = INT64_MAX;
	volatile int64_t t30 = -29516658LL;

	t30 = (((x173*x174)%x175)%x176);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x177 = 2393U;
	static uint8_t x178 = 1U;
	static int16_t x180 = INT16_MIN;
	volatile int32_t t31 = 834;

	t31 = (((x177*x178)%x179)%x180);

	if (t31 != 643) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x181 = INT8_MAX;
	int8_t x182 = INT8_MIN;
	uint32_t x183 = 1U;
	uint8_t x184 = 88U;
	static volatile uint32_t t32 = 304422U;

	t32 = (((x181*x182)%x183)%x184);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x185 = -7346;
	static int16_t x186 = INT16_MAX;
	int8_t x187 = -1;
	static volatile uint64_t x188 = UINT64_MAX;
	volatile uint64_t t33 = 903621LLU;

	t33 = (((x185*x186)%x187)%x188);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint8_t x189 = 22U;
	int16_t x190 = INT16_MIN;
	volatile int16_t x192 = INT16_MAX;
	static volatile int64_t t34 = 2751716835799229LL;

	t34 = (((x189*x190)%x191)%x192);

	if (t34 != -22LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x193 = 75;
	volatile int8_t x194 = 22;
	int32_t x195 = -1;
	volatile int32_t x196 = -110;
	volatile int32_t t35 = 33545812;

	t35 = (((x193*x194)%x195)%x196);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x197 = -25;
	int64_t x198 = 67295393LL;
	volatile int16_t x199 = 8;
	static uint32_t x200 = UINT32_MAX;
	static int64_t t36 = -561921825754278LL;

	t36 = (((x197*x198)%x199)%x200);

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x209 = UINT8_MAX;
	uint16_t x211 = UINT16_MAX;
	int16_t x212 = INT16_MAX;
	volatile int32_t t37 = 14;

	t37 = (((x209*x210)%x211)%x212);

	if (t37 != -29070) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x225 = 2654331LL;
	uint8_t x227 = UINT8_MAX;
	static uint32_t x228 = 82789U;

	t38 = (((x225*x226)%x227)%x228);

	if (t38 != -18LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x229 = INT8_MIN;
	static int32_t x230 = -1;
	int8_t x231 = -1;
	int64_t x232 = INT64_MIN;
	int64_t t39 = 4495000LL;

	t39 = (((x229*x230)%x231)%x232);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x234 = -1;
	uint64_t x235 = 27294LLU;
	uint8_t x236 = 11U;
	volatile uint64_t t40 = 450787601523788720LLU;

	t40 = (((x233*x234)%x235)%x236);

	if (t40 != 3LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x241 = -1;
	int16_t x243 = -1;
	static uint8_t x244 = UINT8_MAX;
	int32_t t41 = -1003787610;

	t41 = (((x241*x242)%x243)%x244);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x249 = UINT8_MAX;
	volatile int64_t x252 = 73435780314LL;

	t42 = (((x249*x250)%x251)%x252);

	if (t42 != 16711425LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x253 = -12LL;
	uint8_t x255 = UINT8_MAX;
	int8_t x256 = INT8_MIN;
	volatile int64_t t43 = -94LL;

	t43 = (((x253*x254)%x255)%x256);

	if (t43 != 12LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x261 = 208U;
	int16_t x263 = -226;
	volatile uint16_t x264 = UINT16_MAX;
	volatile int32_t t44 = -12;

	t44 = (((x261*x262)%x263)%x264);

	if (t44 != 156) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x265 = 3714U;
	static uint16_t x266 = UINT16_MAX;
	int32_t x267 = INT32_MAX;
	int8_t x268 = -1;
	static volatile int32_t t45 = 195731256;

	t45 = (((x265*x266)%x267)%x268);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x277 = INT16_MIN;
	int32_t x278 = -1;
	volatile uint32_t x279 = UINT32_MAX;
	static int16_t x280 = -579;
	volatile uint32_t t46 = 3722U;

	t46 = (((x277*x278)%x279)%x280);

	if (t46 != 32768U) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x286 = 808355189U;
	uint8_t x287 = UINT8_MAX;
	int16_t x288 = -3;

	t47 = (((x285*x286)%x287)%x288);

	if (t47 != 30LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x289 = 5U;
	uint8_t x290 = 15U;
	int8_t x291 = -2;
	uint16_t x292 = 22U;
	uint32_t t48 = 257U;

	t48 = (((x289*x290)%x291)%x292);

	if (t48 != 9U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x293 = 175;
	int8_t x294 = -36;
	volatile int64_t x295 = INT64_MAX;
	static volatile uint64_t t49 = 25535493LLU;

	t49 = (((x293*x294)%x295)%x296);

	if (t49 != 18446744073709545316LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x301 = 18333U;
	volatile int8_t x302 = INT8_MAX;
	int64_t x304 = -1LL;

	t50 = (((x301*x302)%x303)%x304);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x305 = 57U;
	static volatile int32_t x306 = 0;
	int16_t x307 = INT16_MIN;
	int32_t t51 = 0;

	t51 = (((x305*x306)%x307)%x308);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x310 = -2177;
	int16_t x311 = 4;
	static int16_t x312 = INT16_MAX;
	static volatile int32_t t52 = 483812731;

	t52 = (((x309*x310)%x311)%x312);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x314 = -4;
	uint16_t x315 = UINT16_MAX;
	int16_t x316 = INT16_MIN;
	static volatile int32_t t53 = 644;

	t53 = (((x313*x314)%x315)%x316);

	if (t53 != -508) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x325 = 5984U;
	int32_t x326 = -113286;
	uint32_t x327 = 11941U;
	static volatile uint32_t x328 = UINT32_MAX;
	uint32_t t54 = 480136U;

	t54 = (((x325*x326)%x327)%x328);

	if (t54 != 3621U) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x329 = -2218261;
	static volatile uint32_t x330 = 62240546U;
	int64_t x331 = INT64_MAX;
	static int8_t x332 = 1;
	volatile int64_t t55 = 114347844674544619LL;

	t55 = (((x329*x330)%x331)%x332);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x334 = 132;
	int32_t x335 = INT32_MIN;
	int64_t x336 = INT64_MIN;
	volatile uint64_t t56 = 135360280999997LLU;

	t56 = (((x333*x334)%x335)%x336);

	if (t56 != 128242647517290636LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x337 = INT8_MIN;
	int32_t x338 = -8346703;
	volatile uint16_t x340 = 909U;
	int32_t t57 = -21541;

	t57 = (((x337*x338)%x339)%x340);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x341 = INT32_MIN;
	static volatile uint64_t x343 = UINT64_MAX;
	uint32_t x344 = 13297U;
	static uint64_t t58 = 91444LLU;

	t58 = (((x341*x342)%x343)%x344);

	if (t58 != 4851LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x350 = 1U;
	int8_t x351 = -1;
	static int32_t x352 = -1;
	volatile int32_t t59 = -247859997;

	t59 = (((x349*x350)%x351)%x352);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x353 = INT32_MIN;
	uint64_t x354 = 4470LLU;
	static uint64_t x355 = UINT64_MAX;
	int16_t x356 = INT16_MAX;

	t60 = (((x353*x354)%x355)%x356);

	if (t60 != 23843LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x357 = UINT64_MAX;
	static int64_t x358 = INT64_MIN;
	int64_t x359 = -1LL;
	volatile int8_t x360 = 46;
	volatile uint64_t t61 = 12583064785764LLU;

	t61 = (((x357*x358)%x359)%x360);

	if (t61 != 26LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x362 = -4064;
	uint16_t x363 = 1995U;
	int32_t x364 = INT32_MAX;
	volatile uint32_t t62 = 13764U;

	t62 = (((x361*x362)%x363)%x364);

	if (t62 != 388U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x369 = -1;
	uint8_t x370 = UINT8_MAX;
	int32_t x371 = -926;
	static volatile int32_t t63 = -2;

	t63 = (((x369*x370)%x371)%x372);

	if (t63 != -3) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x373 = 657526565962LL;
	int16_t x374 = INT16_MAX;
	int32_t x375 = INT32_MIN;
	uint64_t x376 = 2482LLU;
	uint64_t t64 = 1296199482LLU;

	t64 = (((x373*x374)%x375)%x376);

	if (t64 != 2416LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x377 = INT32_MIN;
	uint64_t x378 = 304054LLU;
	int32_t x380 = INT32_MIN;
	uint64_t t65 = 96790LLU;

	t65 = (((x377*x378)%x379)%x380);

	if (t65 != 18446091122716442624LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x381 = 1;
	int16_t x382 = -1;
	volatile int8_t x384 = -38;
	volatile int64_t t66 = -101594358228LL;

	t66 = (((x381*x382)%x383)%x384);

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x385 = -1LL;
	int8_t x386 = INT8_MAX;
	int8_t x387 = 6;
	volatile int32_t x388 = 57726425;
	static volatile int64_t t67 = -403LL;

	t67 = (((x385*x386)%x387)%x388);

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x390 = INT64_MAX;
	int32_t x391 = INT32_MIN;
	int64_t x392 = INT64_MIN;
	uint64_t t68 = 149365LLU;

	t68 = (((x389*x390)%x391)%x392);

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x393 = 514352944LLU;
	int32_t x394 = INT32_MIN;
	int8_t x395 = -26;
	static uint32_t x396 = UINT32_MAX;
	static volatile uint64_t t69 = 6156823339656421LLU;

	t69 = (((x393*x394)%x395)%x396);

	if (t69 != 4037790824LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x397 = INT16_MIN;
	int64_t x398 = -1LL;
	int16_t x399 = INT16_MIN;
	volatile int8_t x400 = INT8_MAX;

	t70 = (((x397*x398)%x399)%x400);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x401 = UINT64_MAX;
	int64_t x402 = -410LL;
	int64_t x403 = 23305LL;
	int16_t x404 = 1;
	static uint64_t t71 = 5LLU;

	t71 = (((x401*x402)%x403)%x404);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x405 = 30;
	uint32_t x406 = 1542U;
	static int64_t x407 = INT64_MIN;
	int32_t x408 = -6662748;

	t72 = (((x405*x406)%x407)%x408);

	if (t72 != 46260LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x409 = -23739;
	static uint64_t x410 = UINT64_MAX;
	static int64_t x412 = 26097210509115046LL;
	static volatile uint64_t t73 = 0LLU;

	t73 = (((x409*x410)%x411)%x412);

	if (t73 != 555LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x413 = 1U;
	volatile int64_t x414 = -33903540665528LL;
	volatile int64_t x415 = -1LL;
	int64_t x416 = INT64_MIN;

	t74 = (((x413*x414)%x415)%x416);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x417 = UINT8_MAX;
	uint64_t x418 = 7982963432LLU;
	static volatile int64_t x419 = INT64_MIN;
	int8_t x420 = INT8_MAX;
	uint64_t t75 = 241628798LLU;

	t75 = (((x417*x418)%x419)%x420);

	if (t75 != 99LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x425 = 1;
	volatile int32_t x426 = INT32_MAX;
	volatile uint64_t x427 = 1157LLU;
	volatile uint16_t x428 = 757U;
	uint64_t t76 = 2216849993487LLU;

	t76 = (((x425*x426)%x427)%x428);

	if (t76 != 244LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x430 = UINT16_MAX;
	int64_t x431 = -1LL;
	int32_t x432 = INT32_MAX;
	volatile int64_t t77 = -44LL;

	t77 = (((x429*x430)%x431)%x432);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x433 = -208893573242LL;
	int8_t x434 = INT8_MIN;
	int16_t x435 = -341;
	int64_t t78 = 1LL;

	t78 = (((x433*x434)%x435)%x436);

	if (t78 != 80LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x441 = -1LL;
	int32_t x442 = INT32_MAX;
	int8_t x443 = INT8_MIN;
	int32_t x444 = -6;
	static int64_t t79 = 1368677193229442665LL;

	t79 = (((x441*x442)%x443)%x444);

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x446 = 7;
	uint32_t x447 = 4U;
	volatile int32_t x448 = INT32_MIN;
	int64_t t80 = 68245080996984LL;

	t80 = (((x445*x446)%x447)%x448);

	if (t80 != 2LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x449 = 2U;
	int64_t x450 = -114LL;
	int64_t x452 = -1LL;

	t81 = (((x449*x450)%x451)%x452);

	if (t81 != 228890162235270207LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x453 = -3;
	uint32_t x456 = 459740U;
	int64_t t82 = 121246573LL;

	t82 = (((x453*x454)%x455)%x456);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x457 = INT8_MIN;
	uint64_t x460 = UINT64_MAX;
	uint64_t t83 = 213151596LLU;

	t83 = (((x457*x458)%x459)%x460);

	if (t83 != 4290773120LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x461 = UINT32_MAX;
	uint64_t x462 = 1106495112407LLU;
	uint32_t x463 = 74520742U;
	static int32_t x464 = INT32_MIN;
	volatile uint64_t t84 = 29408881299518LLU;

	t84 = (((x461*x462)%x463)%x464);

	if (t84 != 26906469LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x465 = 4103129074LLU;
	uint32_t x466 = 67732785U;
	static int32_t x467 = -1;
	static uint64_t t85 = 263LLU;

	t85 = (((x465*x466)%x467)%x468);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x477 = -1;
	static int8_t x478 = INT8_MAX;
	volatile int16_t x479 = INT16_MIN;
	int16_t x480 = INT16_MAX;
	static int32_t t86 = -1007149765;

	t86 = (((x477*x478)%x479)%x480);

	if (t86 != -127) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x487 = -2454;
	static int64_t x488 = INT64_MAX;
	int64_t t87 = -602857913249766LL;

	t87 = (((x485*x486)%x487)%x488);

	if (t87 != 254LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x489 = INT8_MAX;
	static int16_t x490 = INT16_MIN;
	uint64_t x491 = UINT64_MAX;
	volatile int32_t x492 = -1;

	t88 = (((x489*x490)%x491)%x492);

	if (t88 != 18446744073705390080LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x493 = 1;
	int8_t x494 = 0;
	static volatile int32_t t89 = -1;

	t89 = (((x493*x494)%x495)%x496);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x501 = UINT64_MAX;
	int64_t x503 = INT64_MIN;
	volatile uint32_t x504 = 277390304U;
	uint64_t t90 = 8LLU;

	t90 = (((x501*x502)%x503)%x504);

	if (t90 != 231967540LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x505 = INT16_MAX;
	uint64_t x506 = UINT64_MAX;
	volatile uint64_t t91 = 500167LLU;

	t91 = (((x505*x506)%x507)%x508);

	if (t91 != 9LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x514 = -4058;
	uint32_t x515 = 1507017562U;
	volatile uint32_t t92 = 3U;

	t92 = (((x513*x514)%x515)%x516);

	if (t92 != 4058U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x517 = 31164560U;
	int32_t x518 = -1;
	int8_t x519 = -1;
	int32_t x520 = 16;
	volatile uint32_t t93 = 150294U;

	t93 = (((x517*x518)%x519)%x520);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x525 = 0U;
	volatile int64_t x527 = INT64_MIN;
	volatile uint64_t x528 = UINT64_MAX;
	static uint64_t t94 = 116LLU;

	t94 = (((x525*x526)%x527)%x528);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x529 = UINT32_MAX;
	int16_t x530 = -1;
	int64_t x531 = -1LL;
	uint8_t x532 = 5U;
	int64_t t95 = -21855329376276435LL;

	t95 = (((x529*x530)%x531)%x532);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x534 = INT8_MAX;
	int8_t x535 = 7;
	static int64_t x536 = -1LL;

	t96 = (((x533*x534)%x535)%x536);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x541 = INT8_MIN;
	static uint64_t x542 = UINT64_MAX;
	int16_t x543 = -182;
	int16_t x544 = INT16_MAX;

	t97 = (((x541*x542)%x543)%x544);

	if (t97 != 128LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x545 = INT16_MIN;
	int8_t x547 = INT8_MIN;
	volatile uint8_t x548 = 13U;
	volatile int32_t t98 = 623880;

	t98 = (((x545*x546)%x547)%x548);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint8_t x549 = 30U;
	volatile uint8_t x550 = UINT8_MAX;
	volatile int32_t t99 = -267602;

	t99 = (((x549*x550)%x551)%x552);

	if (t99 != 6) { NG(); } else { ; }
	
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

