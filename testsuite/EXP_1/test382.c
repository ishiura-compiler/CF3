#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x8 = 9U;
int16_t x13 = 3;
int16_t x28 = INT16_MIN;
static int64_t t4 = 4929LL;
uint8_t x46 = 124U;
int16_t x53 = 1;
volatile uint64_t t6 = 126390108LLU;
int16_t x58 = 13;
volatile int32_t t7 = -49562;
static uint64_t x64 = 273685223597030164LLU;
uint8_t x67 = UINT8_MAX;
static int64_t x71 = 1378180LL;
volatile int64_t t11 = 11LL;
static int32_t x81 = 512568;
static uint64_t t16 = 30424168LLU;
int16_t x126 = INT16_MAX;
int16_t x128 = INT16_MIN;
uint32_t x133 = UINT32_MAX;
static int8_t x140 = INT8_MAX;
uint16_t x151 = 57U;
volatile int32_t x163 = INT32_MAX;
int64_t t26 = 309808673071LL;
int8_t x185 = INT8_MAX;
static int8_t x187 = INT8_MAX;
uint32_t x189 = UINT32_MAX;
static int32_t x192 = -28;
uint32_t t29 = 161U;
volatile int32_t t30 = 522;
int64_t x205 = -1LL;
static int32_t x206 = 1937;
volatile int64_t t32 = 1585258892274LL;
static volatile int64_t t33 = 34674LL;
uint16_t x223 = UINT16_MAX;
int32_t t34 = 52617793;
int8_t x237 = INT8_MAX;
int8_t x238 = 18;
volatile uint64_t t37 = 136664955104212925LLU;
int64_t x241 = 0LL;
volatile int8_t x253 = -1;
volatile int32_t t41 = -14271;
int16_t x266 = INT16_MAX;
int32_t x267 = INT32_MIN;
static int8_t x277 = INT8_MIN;
int32_t x279 = INT32_MIN;
static int64_t x282 = -15387148363703887LL;
uint64_t x291 = 21114308306225LLU;
volatile uint64_t t47 = 0LLU;
volatile int64_t x293 = -1LL;
int64_t t48 = 160036LL;
int32_t x309 = -21345;
int64_t x311 = -1LL;
volatile uint8_t x318 = 42U;
static uint32_t x326 = 155509300U;
volatile uint32_t t52 = 1469732U;
uint8_t x337 = 0U;
uint16_t x338 = UINT16_MAX;
static int16_t x339 = -1;
volatile int64_t t53 = -181824633LL;
uint32_t x344 = 22U;
static volatile int16_t x352 = -1;
uint32_t x375 = UINT32_MAX;
uint8_t x383 = UINT8_MAX;
uint16_t x384 = UINT16_MAX;
int32_t t62 = -3047;
uint16_t x386 = 7715U;
volatile uint64_t x388 = UINT64_MAX;
uint64_t t64 = 27623142559694LLU;
int8_t x395 = INT8_MIN;
volatile int64_t t65 = -15LL;
int8_t x398 = INT8_MIN;
static uint32_t x401 = 1U;
int32_t x402 = -441875646;
uint32_t x403 = 366084U;
int64_t x415 = 210730631264910LL;
volatile uint64_t t70 = 998LLU;
int16_t x421 = INT16_MIN;
uint32_t t71 = 103816U;
volatile uint16_t x428 = UINT16_MAX;
int32_t t72 = 34659539;
uint8_t x437 = 0U;
int32_t x440 = 7;
volatile int64_t t76 = -127143049LL;
static int8_t x447 = -1;
int64_t x463 = INT64_MIN;
int16_t x468 = -1122;
uint8_t x470 = UINT8_MAX;
uint8_t x471 = 57U;
int16_t x479 = INT16_MIN;
volatile uint32_t t83 = 51709758U;
int8_t x481 = 0;
int16_t x482 = 933;
int8_t x487 = -2;
int32_t x511 = INT32_MAX;
volatile uint64_t t88 = 1LLU;
int16_t x521 = -662;
static volatile int16_t x522 = INT16_MIN;
uint16_t x535 = 50U;
int8_t x541 = 1;
static int8_t x542 = -1;
int32_t x554 = INT32_MIN;
int64_t x559 = -2046305195LL;
uint8_t x560 = UINT8_MAX;
int32_t x571 = INT32_MIN;
int32_t x572 = 515847316;
volatile int32_t t99 = 366747724;


void f0(void) {
	int64_t x5 = 241481206192955464LL;
	uint64_t x6 = UINT64_MAX;
	int64_t x7 = INT64_MAX;
	uint64_t t0 = 218823551929631341LLU;

	t0 = (((x5*x6)/x7)%x8);

	if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x9 = INT8_MIN;
	int8_t x10 = INT8_MIN;
	int32_t x11 = -1;
	uint64_t x12 = 66259102LLU;
	static volatile uint64_t t1 = 544LLU;

	t1 = (((x9*x10)/x11)%x12);

	if (t1 != 41316560LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x14 = 2;
	volatile int64_t x15 = INT64_MIN;
	static volatile int64_t x16 = -1LL;
	int64_t t2 = 40LL;

	t2 = (((x13*x14)/x15)%x16);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x25 = 47;
	int8_t x26 = INT8_MAX;
	static int64_t x27 = INT64_MIN;
	volatile int64_t t3 = -16191LL;

	t3 = (((x25*x26)/x27)%x28);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x37 = -13784283750707LL;
	int8_t x38 = -60;
	int8_t x39 = -1;
	static int16_t x40 = -25;

	t4 = (((x37*x38)/x39)%x40);

	if (t4 != -20LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x45 = -14;
	uint64_t x47 = UINT64_MAX;
	int8_t x48 = 7;
	volatile uint64_t t5 = 3435629956633993271LLU;

	t5 = (((x45*x46)/x47)%x48);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x54 = INT16_MAX;
	volatile int8_t x55 = -2;
	uint64_t x56 = 1LLU;

	t6 = (((x53*x54)/x55)%x56);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x57 = 255;
	int32_t x59 = INT32_MAX;
	uint8_t x60 = UINT8_MAX;

	t7 = (((x57*x58)/x59)%x60);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x61 = 24;
	int32_t x62 = 37;
	int32_t x63 = 277;
	volatile uint64_t t8 = 14468677527657909LLU;

	t8 = (((x61*x62)/x63)%x64);

	if (t8 != 3LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x65 = 7;
	volatile int16_t x66 = INT16_MIN;
	static volatile uint64_t x68 = UINT64_MAX;
	uint64_t t9 = 44243940161982336LLU;

	t9 = (((x65*x66)/x67)%x68);

	if (t9 != 18446744073709550717LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x69 = INT16_MAX;
	volatile int8_t x70 = -1;
	static int16_t x72 = INT16_MIN;
	volatile int64_t t10 = -9219753699LL;

	t10 = (((x69*x70)/x71)%x72);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x73 = INT8_MIN;
	static uint16_t x74 = 101U;
	static int64_t x75 = -976103LL;
	int32_t x76 = INT32_MIN;

	t11 = (((x73*x74)/x75)%x76);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x82 = -11374787LL;
	int64_t x83 = INT64_MAX;
	int8_t x84 = INT8_MIN;
	int64_t t12 = 147239887843127LL;

	t12 = (((x81*x82)/x83)%x84);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x97 = 0U;
	int64_t x98 = INT64_MIN;
	uint8_t x99 = UINT8_MAX;
	uint32_t x100 = UINT32_MAX;
	volatile int64_t t13 = 919462642LL;

	t13 = (((x97*x98)/x99)%x100);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x101 = 19345U;
	int8_t x102 = INT8_MIN;
	int8_t x103 = -1;
	int16_t x104 = -11915;
	static int32_t t14 = 643399;

	t14 = (((x101*x102)/x103)%x104);

	if (t14 != 9755) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x105 = INT8_MIN;
	int16_t x106 = -1;
	uint32_t x107 = 183546U;
	volatile uint16_t x108 = 14883U;
	uint32_t t15 = 143040464U;

	t15 = (((x105*x106)/x107)%x108);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x113 = 21U;
	uint32_t x114 = 137496027U;
	static volatile uint64_t x115 = 64884742LLU;
	static int16_t x116 = -12;

	t16 = (((x113*x114)/x115)%x116);

	if (t16 != 44LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x121 = 8U;
	int8_t x122 = -1;
	int16_t x123 = -1;
	uint32_t x124 = 28117U;
	volatile uint32_t t17 = 253630U;

	t17 = (((x121*x122)/x123)%x124);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x125 = 85U;
	static int64_t x127 = -1LL;
	volatile int64_t t18 = 0LL;

	t18 = (((x125*x126)/x127)%x128);

	if (t18 != -32683LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x129 = UINT16_MAX;
	uint8_t x130 = 3U;
	int16_t x131 = -1;
	int64_t x132 = 184559037LL;
	volatile int64_t t19 = -27LL;

	t19 = (((x129*x130)/x131)%x132);

	if (t19 != -196605LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x134 = UINT8_MAX;
	static uint64_t x135 = 1820459LLU;
	static int8_t x136 = INT8_MIN;
	static uint64_t t20 = 114339800LLU;

	t20 = (((x133*x134)/x135)%x136);

	if (t20 != 2359LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x137 = UINT64_MAX;
	static uint64_t x138 = 568450269462LLU;
	uint32_t x139 = 312173219U;
	volatile uint64_t t21 = 3866626LLU;

	t21 = (((x137*x138)/x139)%x140);

	if (t21 != 121LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x149 = -29;
	static volatile int64_t x150 = -1LL;
	uint32_t x152 = UINT32_MAX;
	volatile int64_t t22 = -14846786957533LL;

	t22 = (((x149*x150)/x151)%x152);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x157 = 0;
	static int16_t x158 = INT16_MAX;
	uint64_t x159 = 29961504LLU;
	volatile uint64_t x160 = UINT64_MAX;
	uint64_t t23 = 205425104LLU;

	t23 = (((x157*x158)/x159)%x160);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x161 = -1;
	static int8_t x162 = -1;
	volatile int8_t x164 = -51;
	int32_t t24 = 57544771;

	t24 = (((x161*x162)/x163)%x164);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x165 = -7868;
	uint8_t x166 = UINT8_MAX;
	int16_t x167 = INT16_MIN;
	int32_t x168 = INT32_MIN;
	static int32_t t25 = -4472;

	t25 = (((x165*x166)/x167)%x168);

	if (t25 != 61) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x173 = INT32_MAX;
	int8_t x174 = 0;
	int64_t x175 = INT64_MIN;
	volatile int8_t x176 = 1;

	t26 = (((x173*x174)/x175)%x176);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint32_t x181 = 464195084U;
	volatile uint32_t x182 = 145U;
	uint64_t x183 = 120522548797529060LLU;
	uint32_t x184 = 982134598U;
	volatile uint64_t t27 = 133288747467109602LLU;

	t27 = (((x181*x182)/x183)%x184);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x186 = 22;
	volatile int64_t x188 = INT64_MAX;
	int64_t t28 = 73480022246LL;

	t28 = (((x185*x186)/x187)%x188);

	if (t28 != 22LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x190 = 7855;
	static int16_t x191 = INT16_MIN;

	t29 = (((x189*x190)/x191)%x192);

	if (t29 != 1U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x193 = 51;
	int16_t x194 = -2;
	uint16_t x195 = 12U;
	volatile int32_t x196 = 59682818;

	t30 = (((x193*x194)/x195)%x196);

	if (t30 != -8) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x201 = UINT64_MAX;
	static int32_t x202 = 944703705;
	uint64_t x203 = 1LLU;
	volatile int8_t x204 = INT8_MAX;
	static volatile uint64_t t31 = 7342602LLU;

	t31 = (((x201*x202)/x203)%x204);

	if (t31 != 21LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x207 = 153080024012847824LL;
	volatile int64_t x208 = 223241507LL;

	t32 = (((x205*x206)/x207)%x208);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x217 = 10U;
	int8_t x218 = INT8_MAX;
	static volatile int64_t x219 = INT64_MIN;
	uint32_t x220 = UINT32_MAX;

	t33 = (((x217*x218)/x219)%x220);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x221 = -1;
	volatile int32_t x222 = -1;
	int16_t x224 = INT16_MIN;

	t34 = (((x221*x222)/x223)%x224);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x225 = INT64_MAX;
	static volatile int32_t x226 = -1;
	volatile uint32_t x227 = 2177U;
	static uint64_t x228 = 28983794480LLU;
	uint64_t t35 = 53363LLU;

	t35 = (((x225*x226)/x227)%x228);

	if (t35 != 19587303533LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x229 = 1;
	int16_t x230 = INT16_MAX;
	volatile int16_t x231 = 254;
	int32_t x232 = INT32_MIN;
	int32_t t36 = -820;

	t36 = (((x229*x230)/x231)%x232);

	if (t36 != 129) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x239 = UINT64_MAX;
	int32_t x240 = INT32_MIN;

	t37 = (((x237*x238)/x239)%x240);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x242 = INT32_MIN;
	int16_t x243 = -1;
	int32_t x244 = 13729210;
	static int64_t t38 = 996286388198109LL;

	t38 = (((x241*x242)/x243)%x244);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x249 = INT32_MIN;
	volatile uint64_t x250 = 2430LLU;
	int32_t x251 = INT32_MIN;
	uint16_t x252 = UINT16_MAX;
	uint64_t t39 = 160712932LLU;

	t39 = (((x249*x250)/x251)%x252);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x254 = 44188;
	int32_t x255 = INT32_MAX;
	static int32_t x256 = 156;
	volatile int32_t t40 = -441473;

	t40 = (((x253*x254)/x255)%x256);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x257 = INT16_MAX;
	static volatile int16_t x258 = -1;
	volatile uint16_t x259 = UINT16_MAX;
	int16_t x260 = INT16_MIN;

	t41 = (((x257*x258)/x259)%x260);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x265 = INT16_MIN;
	uint32_t x268 = 118047U;
	uint32_t t42 = 78U;

	t42 = (((x265*x266)/x267)%x268);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x273 = 9;
	uint16_t x274 = 0U;
	volatile int32_t x275 = 2087;
	int64_t x276 = -1LL;
	int64_t t43 = -266767518199239968LL;

	t43 = (((x273*x274)/x275)%x276);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x278 = UINT32_MAX;
	int64_t x280 = INT64_MAX;
	static volatile int64_t t44 = -153586855960753440LL;

	t44 = (((x277*x278)/x279)%x280);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x281 = -1;
	int8_t x283 = INT8_MAX;
	int32_t x284 = 369;
	static volatile int64_t t45 = 45502281239014LL;

	t45 = (((x281*x282)/x283)%x284);

	if (t45 != 337LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x285 = 541983720275345LLU;
	static int64_t x286 = INT64_MAX;
	volatile uint64_t x287 = UINT64_MAX;
	int32_t x288 = INT32_MIN;
	uint64_t t46 = 13779308304261162LLU;

	t46 = (((x285*x286)/x287)%x288);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x289 = INT8_MIN;
	uint8_t x290 = UINT8_MAX;
	int8_t x292 = -60;

	t47 = (((x289*x290)/x291)%x292);

	if (t47 != 873660LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x294 = -18;
	static int16_t x295 = 2276;
	static volatile uint16_t x296 = 413U;

	t48 = (((x293*x294)/x295)%x296);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x297 = 5229427488666LLU;
	int8_t x298 = INT8_MIN;
	int16_t x299 = INT16_MIN;
	int64_t x300 = INT64_MIN;
	volatile uint64_t t49 = 20016606967LLU;

	t49 = (((x297*x298)/x299)%x300);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x310 = INT16_MAX;
	int32_t x312 = INT32_MIN;
	int64_t t50 = 6000LL;

	t50 = (((x309*x310)/x311)%x312);

	if (t50 != 699411615LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x317 = UINT8_MAX;
	int16_t x319 = INT16_MIN;
	volatile uint8_t x320 = 2U;
	int32_t t51 = -298335131;

	t51 = (((x317*x318)/x319)%x320);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x325 = 219244278U;
	static int8_t x327 = -1;
	int8_t x328 = 18;

	t52 = (((x325*x326)/x327)%x328);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x340 = INT64_MAX;

	t53 = (((x337*x338)/x339)%x340);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x341 = 338505LL;
	int32_t x342 = INT32_MIN;
	int16_t x343 = INT16_MIN;
	int64_t t54 = -297323LL;

	t54 = (((x341*x342)/x343)%x344);

	if (t54 != 18LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x345 = 57U;
	int32_t x346 = -43233;
	uint8_t x347 = 3U;
	static int64_t x348 = INT64_MAX;
	volatile int64_t t55 = -7687889312459307LL;

	t55 = (((x345*x346)/x347)%x348);

	if (t55 != -821427LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x349 = 1U;
	int16_t x350 = INT16_MIN;
	static int16_t x351 = INT16_MAX;
	volatile int32_t t56 = 706958191;

	t56 = (((x349*x350)/x351)%x352);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x353 = 1423U;
	static volatile uint16_t x354 = 9320U;
	static int64_t x355 = INT64_MIN;
	int8_t x356 = -1;
	int64_t t57 = -114LL;

	t57 = (((x353*x354)/x355)%x356);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x357 = -571LL;
	uint32_t x358 = 2U;
	int16_t x359 = INT16_MAX;
	int16_t x360 = -4398;
	int64_t t58 = -1111018174LL;

	t58 = (((x357*x358)/x359)%x360);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x365 = UINT64_MAX;
	static int16_t x366 = -1;
	static int64_t x367 = INT64_MAX;
	static uint64_t x368 = UINT64_MAX;
	volatile uint64_t t59 = 19604LLU;

	t59 = (((x365*x366)/x367)%x368);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x369 = 0U;
	uint8_t x370 = UINT8_MAX;
	int32_t x371 = -20223305;
	int16_t x372 = INT16_MAX;
	volatile int32_t t60 = -8;

	t60 = (((x369*x370)/x371)%x372);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x373 = INT16_MAX;
	uint8_t x374 = 35U;
	uint16_t x376 = UINT16_MAX;
	volatile uint32_t t61 = 26974U;

	t61 = (((x373*x374)/x375)%x376);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x381 = INT16_MAX;
	int8_t x382 = -1;

	t62 = (((x381*x382)/x383)%x384);

	if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x385 = INT8_MIN;
	static int64_t x387 = -1LL;
	static volatile uint64_t t63 = 21583LLU;

	t63 = (((x385*x386)/x387)%x388);

	if (t63 != 987520LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x389 = 13176U;
	static uint32_t x390 = 153572366U;
	volatile int8_t x391 = -4;
	volatile uint64_t x392 = 67422562LLU;

	t64 = (((x389*x390)/x391)%x392);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x393 = -3637497774988LL;
	static uint8_t x394 = 75U;
	int8_t x396 = 1;

	t65 = (((x393*x394)/x395)%x396);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x397 = 1;
	int16_t x399 = INT16_MIN;
	int32_t x400 = -1;
	volatile int32_t t66 = -445157;

	t66 = (((x397*x398)/x399)%x400);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x404 = 16U;
	volatile uint32_t t67 = 29U;

	t67 = (((x401*x402)/x403)%x404);

	if (t67 != 13U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x405 = 12494;
	static int8_t x406 = INT8_MAX;
	volatile int32_t x407 = 207;
	int16_t x408 = -1;
	int32_t t68 = -2;

	t68 = (((x405*x406)/x407)%x408);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x413 = 76U;
	int8_t x414 = 1;
	int32_t x416 = INT32_MIN;
	volatile int64_t t69 = 198877485238745LL;

	t69 = (((x413*x414)/x415)%x416);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x417 = -1;
	int16_t x418 = INT16_MAX;
	uint64_t x419 = 1LLU;
	static int64_t x420 = INT64_MAX;

	t70 = (((x417*x418)/x419)%x420);

	if (t70 != 9223372036854743042LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x422 = 1;
	uint32_t x423 = UINT32_MAX;
	int32_t x424 = 6;

	t71 = (((x421*x422)/x423)%x424);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x425 = -1;
	int8_t x426 = INT8_MIN;
	volatile int8_t x427 = INT8_MIN;

	t72 = (((x425*x426)/x427)%x428);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x429 = UINT8_MAX;
	volatile int16_t x430 = 18;
	int16_t x431 = -1;
	int64_t x432 = INT64_MIN;
	static int64_t t73 = 7630104253962950LL;

	t73 = (((x429*x430)/x431)%x432);

	if (t73 != -4590LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x433 = 875520LLU;
	int8_t x434 = INT8_MIN;
	uint16_t x435 = 3U;
	static uint64_t x436 = 5065LLU;
	static volatile uint64_t t74 = 534492852578494829LLU;

	t74 = (((x433*x434)/x435)%x436);

	if (t74 != 955LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x438 = 17U;
	int32_t x439 = INT32_MIN;
	static volatile int32_t t75 = -15221;

	t75 = (((x437*x438)/x439)%x440);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x441 = INT64_MAX;
	static uint8_t x442 = 0U;
	uint8_t x443 = 1U;
	int8_t x444 = INT8_MAX;

	t76 = (((x441*x442)/x443)%x444);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x445 = 0LL;
	int32_t x446 = INT32_MIN;
	uint8_t x448 = UINT8_MAX;
	int64_t t77 = 491496863663689026LL;

	t77 = (((x445*x446)/x447)%x448);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x453 = 2U;
	int64_t x454 = -1LL;
	uint64_t x455 = 101150LLU;
	int16_t x456 = INT16_MIN;
	uint64_t t78 = 85591LLU;

	t78 = (((x453*x454)/x455)%x456);

	if (t78 != 182370183625403LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x461 = 16979931222116LLU;
	volatile int16_t x462 = INT16_MAX;
	static uint32_t x464 = 21675238U;
	volatile uint64_t t79 = 201799LLU;

	t79 = (((x461*x462)/x463)%x464);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x465 = -1;
	volatile uint64_t x466 = 19221LLU;
	int8_t x467 = INT8_MIN;
	volatile uint64_t t80 = 264579LLU;

	t80 = (((x465*x466)/x467)%x468);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x469 = UINT64_MAX;
	int16_t x472 = -1;
	uint64_t t81 = 7084608033351LLU;

	t81 = (((x469*x470)/x471)%x472);

	if (t81 != 323627089012448269LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x473 = -1410265468LL;
	static int8_t x474 = 20;
	volatile uint32_t x475 = 1061453647U;
	int8_t x476 = -15;
	volatile int64_t t82 = 1LL;

	t82 = (((x473*x474)/x475)%x476);

	if (t82 != -11LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x477 = INT8_MIN;
	uint16_t x478 = 14955U;
	uint32_t x480 = UINT32_MAX;

	t83 = (((x477*x478)/x479)%x480);

	if (t83 != 58U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x483 = INT32_MAX;
	int32_t x484 = INT32_MIN;
	volatile int32_t t84 = 56;

	t84 = (((x481*x482)/x483)%x484);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x485 = -1;
	int64_t x486 = -1LL;
	int32_t x488 = INT32_MIN;
	volatile int64_t t85 = -1275070957668150624LL;

	t85 = (((x485*x486)/x487)%x488);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x489 = 2611442931LLU;
	int8_t x490 = INT8_MIN;
	uint16_t x491 = 9U;
	int64_t x492 = -1898156335104047LL;
	uint64_t t86 = 162913415401911LLU;

	t86 = (((x489*x490)/x491)%x492);

	if (t86 != 2049638193271650716LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x497 = INT8_MIN;
	int16_t x498 = -881;
	int32_t x499 = INT32_MIN;
	volatile int16_t x500 = INT16_MIN;
	static volatile int32_t t87 = 390146;

	t87 = (((x497*x498)/x499)%x500);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x509 = -1;
	int8_t x510 = 18;
	uint64_t x512 = 7792601615971LLU;

	t88 = (((x509*x510)/x511)%x512);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x523 = 5;
	static int8_t x524 = INT8_MIN;
	volatile int32_t t89 = -6147697;

	t89 = (((x521*x522)/x523)%x524);

	if (t89 != 51) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x533 = INT16_MIN;
	int64_t x534 = -1LL;
	static volatile int32_t x536 = -77917;
	int64_t t90 = -87729LL;

	t90 = (((x533*x534)/x535)%x536);

	if (t90 != 655LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x537 = UINT8_MAX;
	uint16_t x538 = 9135U;
	static int64_t x539 = INT64_MIN;
	volatile int8_t x540 = 7;
	volatile int64_t t91 = -2LL;

	t91 = (((x537*x538)/x539)%x540);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x543 = 69U;
	int8_t x544 = INT8_MIN;
	static int32_t t92 = -15;

	t92 = (((x541*x542)/x543)%x544);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x545 = -1;
	static volatile uint32_t x546 = 156300957U;
	static volatile uint32_t x547 = 1470U;
	static int8_t x548 = INT8_MAX;
	volatile uint32_t t93 = 5760U;

	t93 = (((x545*x546)/x547)%x548);

	if (t93 != 83U) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint32_t x549 = 10160110U;
	volatile int8_t x550 = INT8_MIN;
	static uint8_t x551 = UINT8_MAX;
	volatile int8_t x552 = INT8_MAX;
	uint32_t t94 = 1U;

	t94 = (((x549*x550)/x551)%x552);

	if (t94 != 104U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x553 = -1LL;
	static int8_t x555 = -1;
	uint64_t x556 = UINT64_MAX;
	volatile uint64_t t95 = 93684527LLU;

	t95 = (((x553*x554)/x555)%x556);

	if (t95 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x557 = 712;
	int16_t x558 = INT16_MIN;
	volatile int64_t t96 = -65131LL;

	t96 = (((x557*x558)/x559)%x560);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x565 = 2U;
	int16_t x566 = 1;
	volatile uint64_t x567 = UINT64_MAX;
	int8_t x568 = INT8_MAX;
	static volatile uint64_t t97 = 26LLU;

	t97 = (((x565*x566)/x567)%x568);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x569 = 21;
	int64_t x570 = -1LL;
	int64_t t98 = 42777557589LL;

	t98 = (((x569*x570)/x571)%x572);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x573 = INT16_MIN;
	int16_t x574 = INT16_MIN;
	uint8_t x575 = 7U;
	static int16_t x576 = -15;

	t99 = (((x573*x574)/x575)%x576);

	if (t99 != 9) { NG(); } else { ; }
	
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

