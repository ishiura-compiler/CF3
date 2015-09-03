#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x4 = UINT64_MAX;
volatile int64_t x7 = INT64_MAX;
int64_t x20 = -2779LL;
int64_t t4 = -3186225466LL;
uint32_t x23 = 99507147U;
uint16_t x27 = 26582U;
int16_t x37 = 239;
static uint64_t x39 = 176LLU;
volatile uint16_t x61 = 1637U;
volatile int64_t x63 = INT64_MAX;
static int16_t x71 = -1808;
volatile int32_t t11 = 0;
static volatile uint32_t x78 = UINT32_MAX;
int16_t x88 = -98;
static int32_t x94 = -1;
volatile int16_t x96 = INT16_MAX;
int16_t x101 = -1;
int16_t x110 = -12779;
volatile int32_t t20 = -5;
int8_t x122 = 1;
int16_t x124 = INT16_MIN;
volatile int32_t t23 = 400051;
volatile uint16_t x130 = 4677U;
uint64_t t24 = 1129278341LLU;
uint32_t x136 = 57206026U;
volatile int32_t t27 = 1;
int32_t x149 = INT32_MAX;
uint8_t x153 = 11U;
volatile uint64_t x156 = UINT64_MAX;
volatile int32_t t32 = 8;
uint16_t x174 = UINT16_MAX;
int32_t x183 = INT32_MIN;
volatile int32_t x191 = -5918485;
int32_t x197 = INT32_MIN;
volatile uint32_t t39 = 40U;
volatile uint32_t x202 = 495850777U;
uint32_t t40 = 32291661U;
static volatile int32_t x208 = -170641;
volatile int8_t x233 = INT8_MIN;
static int8_t x245 = -1;
uint64_t x246 = 160382448473196723LLU;
int16_t x253 = INT16_MAX;
int16_t x254 = -1;
static uint32_t x255 = UINT32_MAX;
int16_t x268 = INT16_MIN;
uint8_t x279 = 54U;
int16_t x287 = 1152;
static volatile uint16_t x288 = 12826U;
uint64_t x298 = 2157LLU;
int32_t x300 = INT32_MAX;
int64_t x305 = -1LL;
int32_t x311 = 112632;
static volatile int64_t t58 = -125031200LL;
uint32_t x321 = 2355U;
static int8_t x322 = INT8_MIN;
int32_t t61 = -2488190;
volatile int16_t x331 = INT16_MAX;
int8_t x333 = INT8_MIN;
volatile int64_t t63 = 1636730617489093LL;
int32_t t65 = -270;
volatile int32_t t66 = -53076;
int16_t x352 = INT16_MIN;
static uint64_t x353 = UINT64_MAX;
int16_t x358 = -1;
volatile uint64_t t69 = 79862880537028666LLU;
volatile uint64_t x362 = UINT64_MAX;
int64_t t73 = -1LL;
int32_t x380 = -1;
uint8_t x381 = 20U;
static int16_t x382 = -1;
int32_t x385 = INT32_MAX;
int8_t x388 = -1;
static int32_t t76 = 580599011;
int64_t x401 = 1LL;
int16_t x406 = 0;
static int16_t x407 = -1;
volatile int32_t x413 = INT32_MIN;
int8_t x415 = INT8_MAX;
int8_t x419 = -14;
int32_t t83 = 53;
int16_t x424 = INT16_MIN;
int64_t x425 = 17829203914LL;
static int16_t x427 = INT16_MIN;
volatile int32_t x428 = 332;
int32_t t86 = 29775427;
volatile int32_t t87 = 325409;
volatile int32_t t88 = 790787268;
int8_t x455 = -1;
int32_t x460 = -106;
int64_t x462 = -2002346133834082LL;
static int64_t x464 = INT64_MAX;
static volatile uint32_t x467 = 61437961U;
volatile int32_t x468 = -1;
int32_t x471 = INT32_MIN;
static int8_t x472 = INT8_MAX;
uint64_t x474 = UINT64_MAX;
volatile int32_t t95 = 37;
int64_t x482 = INT64_MIN;
int64_t x484 = INT64_MAX;
volatile int32_t t97 = 1093;


void f0(void) {
	int32_t x1 = INT32_MAX;
	int64_t x2 = -1LL;
	uint16_t x3 = 8491U;
	static volatile uint64_t t0 = 3232LLU;

	t0 = ((x1<=(x2/x3))-x4);

	if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = -1693911881503565269LL;
	int8_t x6 = -1;
	volatile int64_t x8 = 23443865976LL;
	volatile int64_t t1 = 1881337670026345LL;

	t1 = ((x5<=(x6/x7))-x8);

	if (t1 != -23443865975LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MIN;
	volatile uint32_t x10 = UINT32_MAX;
	int64_t x11 = -11716377LL;
	uint32_t x12 = UINT32_MAX;
	static volatile uint32_t t2 = 1598U;

	t2 = ((x9<=(x10/x11))-x12);

	if (t2 != 1U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	uint16_t x14 = 117U;
	int8_t x15 = INT8_MIN;
	uint8_t x16 = UINT8_MAX;
	static volatile int32_t t3 = 1;

	t3 = ((x13<=(x14/x15))-x16);

	if (t3 != -255) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 1U;
	int64_t x18 = -2LL;
	uint64_t x19 = 29992493LLU;

	t4 = ((x17<=(x18/x19))-x20);

	if (t4 != 2780LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int16_t x22 = -1;
	uint8_t x24 = 7U;
	int32_t t5 = -11;

	t5 = ((x21<=(x22/x23))-x24);

	if (t5 != -7) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = -1153LL;
	int16_t x26 = -1;
	int64_t x28 = INT64_MAX;
	int64_t t6 = 0LL;

	t6 = ((x25<=(x26/x27))-x28);

	if (t6 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	uint64_t x30 = 12581LLU;
	int16_t x31 = -7;
	static uint64_t x32 = 3LLU;
	uint64_t t7 = 0LLU;

	t7 = ((x29<=(x30/x31))-x32);

	if (t7 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x38 = 18142U;
	uint16_t x40 = 2U;
	volatile int32_t t8 = 11;

	t8 = ((x37<=(x38/x39))-x40);

	if (t8 != -2) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x53 = 19U;
	static uint8_t x54 = UINT8_MAX;
	int8_t x55 = INT8_MIN;
	int32_t x56 = -1;
	volatile int32_t t9 = -3784;

	t9 = ((x53<=(x54/x55))-x56);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x62 = -41;
	volatile int8_t x64 = 47;
	int32_t t10 = 240;

	t10 = ((x61<=(x62/x63))-x64);

	if (t10 != -47) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x69 = 3815U;
	uint64_t x70 = 222750852LLU;
	int16_t x72 = 6;

	t11 = ((x69<=(x70/x71))-x72);

	if (t11 != -6) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x73 = -1;
	uint64_t x74 = 69311660666LLU;
	static int32_t x75 = INT32_MIN;
	int8_t x76 = -1;
	static volatile int32_t t12 = 9133;

	t12 = ((x73<=(x74/x75))-x76);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x77 = INT64_MAX;
	static int8_t x79 = INT8_MAX;
	uint16_t x80 = 12841U;
	int32_t t13 = 0;

	t13 = ((x77<=(x78/x79))-x80);

	if (t13 != -12841) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x85 = 471U;
	volatile int64_t x86 = -1LL;
	int64_t x87 = INT64_MIN;
	static volatile int32_t t14 = 49686;

	t14 = ((x85<=(x86/x87))-x88);

	if (t14 != 98) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x89 = -1;
	volatile int8_t x90 = 5;
	int32_t x91 = INT32_MAX;
	volatile uint16_t x92 = UINT16_MAX;
	volatile int32_t t15 = 16420381;

	t15 = ((x89<=(x90/x91))-x92);

	if (t15 != -65534) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x93 = INT8_MAX;
	int32_t x95 = INT32_MIN;
	int32_t t16 = -227697907;

	t16 = ((x93<=(x94/x95))-x96);

	if (t16 != -32767) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x97 = -5342;
	int16_t x98 = INT16_MIN;
	uint16_t x99 = 379U;
	uint64_t x100 = 12538486665003LLU;
	uint64_t t17 = 75588LLU;

	t17 = ((x97<=(x98/x99))-x100);

	if (t17 != 18446731535222886614LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x102 = -90;
	int8_t x103 = INT8_MIN;
	uint32_t x104 = 790095U;
	uint32_t t18 = 480948228U;

	t18 = ((x101<=(x102/x103))-x104);

	if (t18 != 4294177202U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x105 = -1;
	static int64_t x106 = 31LL;
	int32_t x107 = INT32_MIN;
	int8_t x108 = 14;
	volatile int32_t t19 = 350992;

	t19 = ((x105<=(x106/x107))-x108);

	if (t19 != -13) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x109 = -92845LL;
	volatile int8_t x111 = INT8_MIN;
	int8_t x112 = 12;

	t20 = ((x109<=(x110/x111))-x112);

	if (t20 != -11) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x113 = INT8_MIN;
	uint64_t x114 = UINT64_MAX;
	int8_t x115 = INT8_MIN;
	int32_t x116 = INT32_MAX;
	volatile int32_t t21 = -1;

	t21 = ((x113<=(x114/x115))-x116);

	if (t21 != -2147483647) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x117 = 28U;
	volatile int8_t x118 = INT8_MIN;
	int64_t x119 = 9613056054086LL;
	int8_t x120 = INT8_MIN;
	volatile int32_t t22 = 0;

	t22 = ((x117<=(x118/x119))-x120);

	if (t22 != 128) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x121 = -57;
	volatile int8_t x123 = INT8_MAX;

	t23 = ((x121<=(x122/x123))-x124);

	if (t23 != 32769) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x129 = 1U;
	int64_t x131 = INT64_MIN;
	uint64_t x132 = 249271488419152331LLU;

	t24 = ((x129<=(x130/x131))-x132);

	if (t24 != 18197472585290399285LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x133 = 1;
	int8_t x134 = -1;
	int16_t x135 = INT16_MIN;
	uint32_t t25 = 1U;

	t25 = ((x133<=(x134/x135))-x136);

	if (t25 != 4237761270U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x137 = UINT16_MAX;
	int32_t x138 = INT32_MAX;
	volatile int16_t x139 = INT16_MIN;
	uint16_t x140 = UINT16_MAX;
	volatile int32_t t26 = 61;

	t26 = ((x137<=(x138/x139))-x140);

	if (t26 != -65535) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x145 = INT32_MAX;
	static volatile int64_t x146 = -154767886538LL;
	uint64_t x147 = 3056499947219780LLU;
	int32_t x148 = -1;

	t27 = ((x145<=(x146/x147))-x148);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x150 = 38;
	volatile uint32_t x151 = 12038089U;
	int32_t x152 = -1;
	volatile int32_t t28 = 432673;

	t28 = ((x149<=(x150/x151))-x152);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x154 = INT32_MIN;
	int8_t x155 = 1;
	uint64_t t29 = 190222LLU;

	t29 = ((x153<=(x154/x155))-x156);

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x157 = 4U;
	static int64_t x158 = -1LL;
	static uint16_t x159 = 5145U;
	int16_t x160 = INT16_MIN;
	volatile int32_t t30 = 2887990;

	t30 = ((x157<=(x158/x159))-x160);

	if (t30 != 32768) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x161 = INT64_MIN;
	uint32_t x162 = UINT32_MAX;
	int64_t x163 = -102732894880960LL;
	uint16_t x164 = 457U;
	volatile int32_t t31 = -100607;

	t31 = ((x161<=(x162/x163))-x164);

	if (t31 != -456) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x165 = UINT16_MAX;
	uint32_t x166 = 978471U;
	int32_t x167 = INT32_MIN;
	int8_t x168 = INT8_MAX;

	t32 = ((x165<=(x166/x167))-x168);

	if (t32 != -127) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x173 = 21100580U;
	int16_t x175 = INT16_MAX;
	int64_t x176 = 30608393790LL;
	int64_t t33 = 636627LL;

	t33 = ((x173<=(x174/x175))-x176);

	if (t33 != -30608393790LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x177 = 24589274778256844LLU;
	int16_t x178 = INT16_MIN;
	int8_t x179 = INT8_MIN;
	volatile int8_t x180 = 1;
	int32_t t34 = 80;

	t34 = ((x177<=(x178/x179))-x180);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x181 = UINT64_MAX;
	volatile int8_t x182 = -1;
	uint64_t x184 = UINT64_MAX;
	static volatile uint64_t t35 = 1LLU;

	t35 = ((x181<=(x182/x183))-x184);

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x185 = -1;
	int32_t x186 = INT32_MIN;
	uint32_t x187 = 3600919U;
	uint16_t x188 = 1298U;
	int32_t t36 = 6626053;

	t36 = ((x185<=(x186/x187))-x188);

	if (t36 != -1298) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x189 = INT8_MAX;
	volatile uint64_t x190 = 849734839LLU;
	volatile int64_t x192 = 3100114586LL;
	volatile int64_t t37 = 17241758541167292LL;

	t37 = ((x189<=(x190/x191))-x192);

	if (t37 != -3100114586LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x193 = UINT16_MAX;
	int64_t x194 = -4400LL;
	int64_t x195 = -4486362541197849LL;
	uint32_t x196 = UINT32_MAX;
	volatile uint32_t t38 = 58674034U;

	t38 = ((x193<=(x194/x195))-x196);

	if (t38 != 1U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x198 = INT64_MIN;
	volatile uint8_t x199 = UINT8_MAX;
	static uint32_t x200 = UINT32_MAX;

	t39 = ((x197<=(x198/x199))-x200);

	if (t39 != 1U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x201 = 15262797972821LLU;
	int64_t x203 = INT64_MAX;
	volatile uint32_t x204 = 2U;

	t40 = ((x201<=(x202/x203))-x204);

	if (t40 != 4294967294U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x205 = INT16_MIN;
	int8_t x206 = INT8_MAX;
	int8_t x207 = INT8_MIN;
	int32_t t41 = 0;

	t41 = ((x205<=(x206/x207))-x208);

	if (t41 != 170642) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x221 = 12LL;
	static volatile int8_t x222 = -8;
	static uint64_t x223 = 702579784LLU;
	int16_t x224 = -1;
	static int32_t t42 = -6710930;

	t42 = ((x221<=(x222/x223))-x224);

	if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x234 = INT8_MIN;
	int16_t x235 = INT16_MIN;
	uint32_t x236 = UINT32_MAX;
	static volatile uint32_t t43 = 329U;

	t43 = ((x233<=(x234/x235))-x236);

	if (t43 != 2U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x241 = 150;
	static uint8_t x242 = UINT8_MAX;
	int32_t x243 = -7904;
	volatile uint16_t x244 = UINT16_MAX;
	int32_t t44 = -1;

	t44 = ((x241<=(x242/x243))-x244);

	if (t44 != -65535) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x247 = -1LL;
	int16_t x248 = -1;
	int32_t t45 = 40138;

	t45 = ((x245<=(x246/x247))-x248);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x249 = -24595257;
	uint16_t x250 = 289U;
	static uint8_t x251 = 15U;
	int8_t x252 = 16;
	int32_t t46 = -1;

	t46 = ((x249<=(x250/x251))-x252);

	if (t46 != -15) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x256 = INT16_MAX;
	int32_t t47 = 74;

	t47 = ((x253<=(x254/x255))-x256);

	if (t47 != -32767) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x265 = INT32_MAX;
	static uint64_t x266 = 130012259LLU;
	int32_t x267 = -259533532;
	volatile int32_t t48 = -1912282;

	t48 = ((x265<=(x266/x267))-x268);

	if (t48 != 32768) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x269 = UINT64_MAX;
	uint64_t x270 = 104990247745LLU;
	int16_t x271 = 570;
	static uint32_t x272 = 119025U;
	uint32_t t49 = 123125U;

	t49 = ((x269<=(x270/x271))-x272);

	if (t49 != 4294848271U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x277 = INT16_MIN;
	volatile int64_t x278 = INT64_MIN;
	volatile int32_t x280 = 2805181;
	int32_t t50 = -427084;

	t50 = ((x277<=(x278/x279))-x280);

	if (t50 != -2805181) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x281 = 3601003U;
	uint64_t x282 = 78207715127217LLU;
	static int32_t x283 = 129257;
	int8_t x284 = 0;
	volatile int32_t t51 = -1017;

	t51 = ((x281<=(x282/x283))-x284);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x285 = 31U;
	int16_t x286 = INT16_MAX;
	int32_t t52 = 1640;

	t52 = ((x285<=(x286/x287))-x288);

	if (t52 != -12826) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x289 = INT32_MAX;
	uint32_t x290 = 51U;
	int8_t x291 = INT8_MIN;
	uint64_t x292 = UINT64_MAX;
	static uint64_t t53 = 359364774488LLU;

	t53 = ((x289<=(x290/x291))-x292);

	if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x293 = 7U;
	uint16_t x294 = 415U;
	uint8_t x295 = 1U;
	uint16_t x296 = UINT16_MAX;
	volatile int32_t t54 = -10;

	t54 = ((x293<=(x294/x295))-x296);

	if (t54 != -65534) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x297 = -1;
	int64_t x299 = INT64_MIN;
	volatile int32_t t55 = 0;

	t55 = ((x297<=(x298/x299))-x300);

	if (t55 != -2147483647) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x301 = INT8_MAX;
	int32_t x302 = -1;
	volatile int16_t x303 = -525;
	int16_t x304 = INT16_MAX;
	static int32_t t56 = 4536;

	t56 = ((x301<=(x302/x303))-x304);

	if (t56 != -32767) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x306 = -83;
	uint8_t x307 = 31U;
	static volatile int64_t x308 = 50650770369353LL;
	volatile int64_t t57 = -1LL;

	t57 = ((x305<=(x306/x307))-x308);

	if (t57 != -50650770369353LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x309 = -1LL;
	volatile uint16_t x310 = 7U;
	int64_t x312 = INT64_MAX;

	t58 = ((x309<=(x310/x311))-x312);

	if (t58 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x313 = INT64_MAX;
	volatile int64_t x314 = -37964377LL;
	int8_t x315 = 14;
	static uint16_t x316 = 9753U;
	int32_t t59 = -4;

	t59 = ((x313<=(x314/x315))-x316);

	if (t59 != -9753) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x323 = INT32_MIN;
	int64_t x324 = INT64_MAX;
	int64_t t60 = -7669182991LL;

	t60 = ((x321<=(x322/x323))-x324);

	if (t60 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x325 = UINT16_MAX;
	uint16_t x326 = 5U;
	int16_t x327 = -1;
	int32_t x328 = INT32_MAX;

	t61 = ((x325<=(x326/x327))-x328);

	if (t61 != -2147483647) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x329 = -1;
	uint8_t x330 = 25U;
	int8_t x332 = 1;
	int32_t t62 = 113562;

	t62 = ((x329<=(x330/x331))-x332);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x334 = INT32_MIN;
	volatile uint32_t x335 = UINT32_MAX;
	int64_t x336 = -51270108379384904LL;

	t63 = ((x333<=(x334/x335))-x336);

	if (t63 != 51270108379384904LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x337 = UINT64_MAX;
	uint8_t x338 = 63U;
	uint16_t x339 = UINT16_MAX;
	static uint32_t x340 = UINT32_MAX;
	uint32_t t64 = 488U;

	t64 = ((x337<=(x338/x339))-x340);

	if (t64 != 1U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x341 = INT64_MAX;
	int16_t x342 = -7055;
	static int16_t x343 = INT16_MAX;
	volatile uint16_t x344 = 1186U;

	t65 = ((x341<=(x342/x343))-x344);

	if (t65 != -1186) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x345 = INT32_MAX;
	static uint64_t x346 = 24271LLU;
	static volatile int64_t x347 = INT64_MIN;
	volatile int8_t x348 = -37;

	t66 = ((x345<=(x346/x347))-x348);

	if (t66 != 37) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x349 = -1;
	static uint32_t x350 = 1U;
	uint16_t x351 = 2162U;
	volatile int32_t t67 = -11577;

	t67 = ((x349<=(x350/x351))-x352);

	if (t67 != 32768) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x354 = INT8_MAX;
	static int32_t x355 = INT32_MIN;
	int32_t x356 = -140;
	static int32_t t68 = -385;

	t68 = ((x353<=(x354/x355))-x356);

	if (t68 != 140) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x357 = UINT16_MAX;
	int8_t x359 = 15;
	uint64_t x360 = UINT64_MAX;

	t69 = ((x357<=(x358/x359))-x360);

	if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x361 = UINT8_MAX;
	int16_t x363 = -10934;
	uint16_t x364 = 2U;
	volatile int32_t t70 = 1298595;

	t70 = ((x361<=(x362/x363))-x364);

	if (t70 != -2) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x365 = 33;
	uint8_t x366 = UINT8_MAX;
	int64_t x367 = INT64_MIN;
	volatile int64_t x368 = INT64_MAX;
	volatile int64_t t71 = -2805859559434623LL;

	t71 = ((x365<=(x366/x367))-x368);

	if (t71 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x369 = INT16_MIN;
	static int16_t x370 = INT16_MIN;
	int16_t x371 = 7;
	uint32_t x372 = 320490850U;
	static uint32_t t72 = 14407791U;

	t72 = ((x369<=(x370/x371))-x372);

	if (t72 != 3974476447U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x373 = 1;
	int32_t x374 = 20709138;
	uint64_t x375 = 19880260063427897LLU;
	static int64_t x376 = -584919450LL;

	t73 = ((x373<=(x374/x375))-x376);

	if (t73 != 584919450LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x377 = 6U;
	int32_t x378 = -1;
	static uint64_t x379 = 97817780715162328LLU;
	volatile int32_t t74 = 36448;

	t74 = ((x377<=(x378/x379))-x380);

	if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x383 = INT32_MAX;
	static uint32_t x384 = UINT32_MAX;
	static volatile uint32_t t75 = 13U;

	t75 = ((x381<=(x382/x383))-x384);

	if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x386 = 5174552554LLU;
	volatile int64_t x387 = -1LL;

	t76 = ((x385<=(x386/x387))-x388);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x389 = UINT16_MAX;
	static int16_t x390 = INT16_MIN;
	uint64_t x391 = UINT64_MAX;
	int64_t x392 = 1338921965LL;
	int64_t t77 = -111469378LL;

	t77 = ((x389<=(x390/x391))-x392);

	if (t77 != -1338921965LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x393 = INT32_MIN;
	volatile int32_t x394 = 470234;
	int64_t x395 = -68895592LL;
	volatile int16_t x396 = 1;
	volatile int32_t t78 = -105380276;

	t78 = ((x393<=(x394/x395))-x396);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x402 = 4241480141633331783LLU;
	int64_t x403 = INT64_MIN;
	int16_t x404 = INT16_MIN;
	static volatile int32_t t79 = -1;

	t79 = ((x401<=(x402/x403))-x404);

	if (t79 != 32768) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x405 = INT64_MIN;
	static int16_t x408 = INT16_MIN;
	static volatile int32_t t80 = -25654929;

	t80 = ((x405<=(x406/x407))-x408);

	if (t80 != 32769) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x409 = INT64_MAX;
	uint64_t x410 = 612941860LLU;
	int8_t x411 = INT8_MIN;
	static int8_t x412 = INT8_MIN;
	volatile int32_t t81 = -45101;

	t81 = ((x409<=(x410/x411))-x412);

	if (t81 != 128) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x414 = INT64_MIN;
	int64_t x416 = INT64_MAX;
	static int64_t t82 = 63LL;

	t82 = ((x413<=(x414/x415))-x416);

	if (t82 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x417 = UINT8_MAX;
	static int32_t x418 = INT32_MAX;
	int8_t x420 = -1;

	t83 = ((x417<=(x418/x419))-x420);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x421 = UINT32_MAX;
	static int8_t x422 = INT8_MIN;
	uint32_t x423 = 10U;
	int32_t t84 = 64;

	t84 = ((x421<=(x422/x423))-x424);

	if (t84 != 32768) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x426 = 45226U;
	volatile int32_t t85 = 2;

	t85 = ((x425<=(x426/x427))-x428);

	if (t85 != -332) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x429 = -1;
	volatile uint32_t x430 = 128819U;
	volatile uint16_t x431 = 108U;
	volatile int16_t x432 = INT16_MAX;

	t86 = ((x429<=(x430/x431))-x432);

	if (t86 != -32767) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x437 = -504;
	volatile uint16_t x438 = UINT16_MAX;
	uint64_t x439 = 188408LLU;
	int16_t x440 = 4;

	t87 = ((x437<=(x438/x439))-x440);

	if (t87 != -4) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x441 = INT32_MIN;
	int64_t x442 = -532826250509LL;
	volatile uint32_t x443 = 32889126U;
	int8_t x444 = -1;

	t88 = ((x441<=(x442/x443))-x444);

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x453 = -6;
	static volatile int16_t x454 = -1;
	int8_t x456 = -1;
	volatile int32_t t89 = -2006;

	t89 = ((x453<=(x454/x455))-x456);

	if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x457 = UINT8_MAX;
	int8_t x458 = INT8_MAX;
	static int8_t x459 = INT8_MAX;
	volatile int32_t t90 = -1;

	t90 = ((x457<=(x458/x459))-x460);

	if (t90 != 106) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x461 = 2U;
	int8_t x463 = INT8_MAX;
	int64_t t91 = -44715823811415966LL;

	t91 = ((x461<=(x462/x463))-x464);

	if (t91 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x465 = INT32_MAX;
	int8_t x466 = -3;
	int32_t t92 = 50815264;

	t92 = ((x465<=(x466/x467))-x468);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x469 = -1;
	static int8_t x470 = INT8_MAX;
	volatile int32_t t93 = -22;

	t93 = ((x469<=(x470/x471))-x472);

	if (t93 != -126) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x473 = INT8_MAX;
	uint32_t x475 = UINT32_MAX;
	static int16_t x476 = INT16_MIN;
	int32_t t94 = -102115230;

	t94 = ((x473<=(x474/x475))-x476);

	if (t94 != 32769) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x477 = INT64_MIN;
	int64_t x478 = 26382341865325LL;
	volatile int16_t x479 = INT16_MIN;
	int8_t x480 = 6;

	t95 = ((x477<=(x478/x479))-x480);

	if (t95 != -5) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x481 = INT32_MAX;
	volatile uint64_t x483 = 238605586LLU;
	static volatile int64_t t96 = 133344194926LL;

	t96 = ((x481<=(x482/x483))-x484);

	if (t96 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x485 = INT32_MIN;
	static uint16_t x486 = 1U;
	volatile uint64_t x487 = 725908980639295LLU;
	int32_t x488 = INT32_MAX;

	t97 = ((x485<=(x486/x487))-x488);

	if (t97 != -2147483647) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x489 = UINT64_MAX;
	uint64_t x490 = UINT64_MAX;
	uint8_t x491 = UINT8_MAX;
	int32_t x492 = 23185;
	volatile int32_t t98 = 99013607;

	t98 = ((x489<=(x490/x491))-x492);

	if (t98 != -23185) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x493 = UINT8_MAX;
	int32_t x494 = 0;
	static int32_t x495 = 227;
	volatile uint64_t x496 = UINT64_MAX;
	volatile uint64_t t99 = 249127375381LLU;

	t99 = ((x493<=(x494/x495))-x496);

	if (t99 != 1LLU) { NG(); } else { ; }
	
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

