#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x6 = UINT16_MAX;
volatile int32_t t1 = 59656;
int32_t t3 = 0;
int32_t x17 = -188;
int64_t x24 = -401770297LL;
int16_t x28 = 245;
int32_t t7 = 35220;
uint32_t x36 = UINT32_MAX;
static uint16_t x37 = 3U;
uint32_t x39 = 16U;
int64_t x40 = INT64_MIN;
static int32_t t9 = -273810306;
int16_t x42 = INT16_MIN;
static volatile int8_t x43 = 0;
static volatile int32_t x46 = 629800766;
static int16_t x51 = INT16_MIN;
uint16_t x52 = 791U;
uint32_t x61 = UINT32_MAX;
uint16_t x65 = 5U;
int8_t x67 = -1;
volatile int32_t t17 = -6415;
static int64_t x80 = INT64_MIN;
uint8_t x92 = UINT8_MAX;
static int32_t t23 = -3218195;
volatile int8_t x110 = INT8_MAX;
int16_t x121 = 23;
int16_t x122 = INT16_MIN;
int8_t x125 = 52;
int32_t x126 = INT32_MAX;
uint8_t x143 = 78U;
int32_t t30 = 551;
volatile int32_t t31 = 91547463;
uint32_t x161 = 8U;
int64_t x167 = -27694786229083501LL;
static volatile int32_t x173 = -22;
int32_t x180 = 766;
uint64_t x189 = 5LLU;
int8_t x190 = INT8_MIN;
int16_t x191 = -1;
uint8_t x193 = 39U;
volatile int8_t x195 = 0;
uint64_t x201 = 8480761LLU;
int64_t x203 = 156LL;
int32_t t43 = 2001328;
int16_t x211 = -137;
int64_t x217 = -338623970497LL;
static int16_t x225 = INT16_MIN;
int8_t x239 = INT8_MAX;
uint16_t x241 = 25996U;
volatile int32_t x243 = INT32_MAX;
int8_t x251 = -1;
volatile int32_t t50 = -93;
int32_t x253 = -1;
uint32_t x255 = 781508U;
static int8_t x259 = -27;
int8_t x261 = INT8_MIN;
static int32_t x265 = 476;
volatile int32_t t55 = 922228355;
int16_t x278 = -142;
uint16_t x279 = 8474U;
uint32_t x281 = UINT32_MAX;
int16_t x286 = -14;
int16_t x289 = 695;
volatile int64_t x292 = INT64_MIN;
volatile uint16_t x298 = 31655U;
int64_t x300 = -3866LL;
volatile int32_t t61 = -100446;
int32_t x305 = INT32_MIN;
static int64_t x308 = 1704713LL;
volatile int32_t t63 = 94;
volatile uint64_t x310 = 32652722447LLU;
int32_t x313 = -1;
int8_t x331 = INT8_MAX;
static int8_t x336 = INT8_MIN;
int64_t x337 = INT64_MIN;
volatile int32_t t69 = -1454604;
static int16_t x345 = INT16_MAX;
uint8_t x346 = 23U;
int8_t x347 = INT8_MIN;
int16_t x357 = -6588;
uint8_t x362 = 22U;
static int32_t t74 = 47;
uint8_t x366 = UINT8_MAX;
volatile int16_t x373 = INT16_MIN;
static volatile int64_t x383 = 0LL;
volatile int32_t t79 = -728583;
static volatile uint32_t x387 = 26U;
int8_t x388 = -1;
volatile int8_t x400 = 1;
int32_t t82 = 330187;
static uint64_t x402 = 130651915754400836LLU;
static int64_t x404 = 94LL;
volatile int32_t t84 = 248;
static int8_t x412 = -6;
volatile int32_t t85 = 14;
uint32_t x413 = UINT32_MAX;
uint8_t x415 = 29U;
int32_t x419 = -1;
uint8_t x424 = 3U;
int16_t x425 = INT16_MAX;
uint32_t x435 = UINT32_MAX;
int32_t x437 = INT32_MIN;
int8_t x438 = INT8_MIN;
int64_t x443 = INT64_MAX;
int16_t x449 = INT16_MAX;
volatile uint16_t x452 = UINT16_MAX;
uint64_t x453 = 514489LLU;
int64_t x455 = INT64_MIN;
volatile int32_t t95 = -32;
volatile int32_t x460 = -1;
volatile int32_t t97 = 1;
volatile int32_t x482 = -1;
volatile int16_t x483 = INT16_MIN;


void f0(void) {
	int32_t x1 = INT32_MIN;
	volatile int64_t x2 = 8363LL;
	int8_t x3 = INT8_MIN;
	int8_t x4 = INT8_MAX;
	volatile int32_t t0 = 1;

	t0 = ((x1-x2)<=(x3/x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MIN;
	uint16_t x7 = 14912U;
	static uint8_t x8 = UINT8_MAX;

	t1 = ((x5-x6)<=(x7/x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 60629512LLU;
	int32_t x10 = INT32_MAX;
	volatile int16_t x11 = INT16_MAX;
	uint16_t x12 = 1533U;
	volatile int32_t t2 = 49602864;

	t2 = ((x9-x10)<=(x11/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = 0;
	uint8_t x14 = 58U;
	uint64_t x15 = UINT64_MAX;
	volatile int64_t x16 = -1LL;

	t3 = ((x13-x14)<=(x15/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = INT32_MIN;
	int32_t x19 = -54;
	int64_t x20 = 6081405468340LL;
	int32_t t4 = -1;

	t4 = ((x17-x18)<=(x19/x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 146;
	volatile uint16_t x22 = UINT16_MAX;
	int32_t x23 = INT32_MIN;
	volatile int32_t t5 = -1128;

	t5 = ((x21-x22)<=(x23/x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	int64_t x26 = 51LL;
	int64_t x27 = 1LL;
	volatile int32_t t6 = 15483160;

	t6 = ((x25-x26)<=(x27/x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	uint32_t x30 = UINT32_MAX;
	uint8_t x31 = 43U;
	static volatile uint32_t x32 = UINT32_MAX;

	t7 = ((x29-x30)<=(x31/x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	volatile int64_t x34 = INT64_MIN;
	uint64_t x35 = UINT64_MAX;
	static volatile int32_t t8 = -608424;

	t8 = ((x33-x34)<=(x35/x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = INT8_MAX;

	t9 = ((x37-x38)<=(x39/x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = -7;
	static int16_t x44 = INT16_MIN;
	static volatile int32_t t10 = 81240430;

	t10 = ((x41-x42)<=(x43/x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MAX;
	int16_t x47 = -27;
	volatile int64_t x48 = INT64_MAX;
	int32_t t11 = -6;

	t11 = ((x45-x46)<=(x47/x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	int8_t x50 = INT8_MAX;
	int32_t t12 = 8;

	t12 = ((x49-x50)<=(x51/x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x57 = 12135U;
	volatile uint8_t x58 = 0U;
	int32_t x59 = 1312296;
	int8_t x60 = -1;
	volatile int32_t t13 = -326305;

	t13 = ((x57-x58)<=(x59/x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x62 = UINT64_MAX;
	int32_t x63 = INT32_MIN;
	int8_t x64 = 5;
	static volatile int32_t t14 = -7166;

	t14 = ((x61-x62)<=(x63/x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x66 = INT64_MAX;
	int64_t x68 = 255895727824693LL;
	volatile int32_t t15 = -3192;

	t15 = ((x65-x66)<=(x67/x68));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x69 = 1992504712U;
	int16_t x70 = INT16_MIN;
	uint64_t x71 = UINT64_MAX;
	uint64_t x72 = UINT64_MAX;
	int32_t t16 = 3754;

	t16 = ((x69-x70)<=(x71/x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x73 = 49623770253LLU;
	int8_t x74 = -11;
	volatile uint16_t x75 = 6U;
	volatile uint32_t x76 = UINT32_MAX;

	t17 = ((x73-x74)<=(x75/x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x77 = INT16_MIN;
	static volatile int32_t x78 = -164;
	static int32_t x79 = INT32_MIN;
	static volatile int32_t t18 = 59;

	t18 = ((x77-x78)<=(x79/x80));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = INT16_MAX;
	int32_t x86 = 15;
	uint8_t x87 = 33U;
	static int32_t x88 = -13;
	int32_t t19 = -57430;

	t19 = ((x85-x86)<=(x87/x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = -123278009160LL;
	uint32_t x90 = 321931485U;
	int8_t x91 = -1;
	int32_t t20 = 0;

	t20 = ((x89-x90)<=(x91/x92));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = INT8_MIN;
	volatile uint16_t x94 = UINT16_MAX;
	static volatile uint32_t x95 = UINT32_MAX;
	uint16_t x96 = 1U;
	volatile int32_t t21 = -18938;

	t21 = ((x93-x94)<=(x95/x96));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x97 = INT16_MAX;
	static uint8_t x98 = 7U;
	uint64_t x99 = 15LLU;
	static uint16_t x100 = 656U;
	static int32_t t22 = -38420351;

	t22 = ((x97-x98)<=(x99/x100));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x105 = INT64_MIN;
	int16_t x106 = -1;
	int32_t x107 = INT32_MIN;
	uint8_t x108 = 97U;

	t23 = ((x105-x106)<=(x107/x108));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x109 = 813964226U;
	volatile uint8_t x111 = 2U;
	int8_t x112 = INT8_MIN;
	int32_t t24 = -14;

	t24 = ((x109-x110)<=(x111/x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x113 = 12U;
	int64_t x114 = 4130351105581422LL;
	int32_t x115 = 0;
	int64_t x116 = INT64_MAX;
	static int32_t t25 = -2398568;

	t25 = ((x113-x114)<=(x115/x116));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x123 = 2974U;
	int64_t x124 = -7436610842806237LL;
	volatile int32_t t26 = 873392132;

	t26 = ((x121-x122)<=(x123/x124));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x127 = 906886152765LLU;
	volatile int32_t x128 = INT32_MIN;
	int32_t t27 = 1;

	t27 = ((x125-x126)<=(x127/x128));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x133 = UINT64_MAX;
	int16_t x134 = INT16_MAX;
	int8_t x135 = 26;
	int32_t x136 = -47;
	int32_t t28 = -975734508;

	t28 = ((x133-x134)<=(x135/x136));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x137 = 30;
	int16_t x138 = 374;
	volatile uint16_t x139 = 13634U;
	volatile uint64_t x140 = UINT64_MAX;
	int32_t t29 = -3;

	t29 = ((x137-x138)<=(x139/x140));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x141 = 115U;
	uint16_t x142 = UINT16_MAX;
	int8_t x144 = INT8_MIN;

	t30 = ((x141-x142)<=(x143/x144));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x149 = UINT32_MAX;
	uint32_t x150 = 0U;
	int16_t x151 = INT16_MIN;
	uint8_t x152 = 25U;

	t31 = ((x149-x150)<=(x151/x152));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x157 = INT64_MAX;
	static uint16_t x158 = UINT16_MAX;
	int16_t x159 = INT16_MIN;
	int16_t x160 = 7406;
	static int32_t t32 = 723;

	t32 = ((x157-x158)<=(x159/x160));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x162 = 23314429981LLU;
	static int32_t x163 = INT32_MAX;
	int32_t x164 = 140;
	static int32_t t33 = 112;

	t33 = ((x161-x162)<=(x163/x164));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x165 = UINT64_MAX;
	uint32_t x166 = 539420U;
	volatile int8_t x168 = INT8_MIN;
	int32_t t34 = 908387;

	t34 = ((x165-x166)<=(x167/x168));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x174 = UINT8_MAX;
	volatile uint32_t x175 = 214134978U;
	volatile uint16_t x176 = UINT16_MAX;
	int32_t t35 = -449887;

	t35 = ((x173-x174)<=(x175/x176));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x177 = 71;
	int64_t x178 = INT64_MAX;
	uint32_t x179 = 91545922U;
	static volatile int32_t t36 = 29325615;

	t36 = ((x177-x178)<=(x179/x180));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x181 = INT8_MIN;
	int16_t x182 = INT16_MIN;
	uint64_t x183 = UINT64_MAX;
	int32_t x184 = -1354615;
	volatile int32_t t37 = 126301841;

	t37 = ((x181-x182)<=(x183/x184));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x185 = 94860917988249LLU;
	int32_t x186 = INT32_MIN;
	static int16_t x187 = -38;
	static int16_t x188 = 15;
	int32_t t38 = 2614;

	t38 = ((x185-x186)<=(x187/x188));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x192 = UINT32_MAX;
	volatile int32_t t39 = -28802;

	t39 = ((x189-x190)<=(x191/x192));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x194 = INT8_MIN;
	static int64_t x196 = INT64_MIN;
	static volatile int32_t t40 = 1613836;

	t40 = ((x193-x194)<=(x195/x196));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x197 = 2417U;
	static int16_t x198 = INT16_MIN;
	volatile uint8_t x199 = UINT8_MAX;
	int32_t x200 = -1;
	volatile int32_t t41 = 7779145;

	t41 = ((x197-x198)<=(x199/x200));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x202 = INT32_MAX;
	uint32_t x204 = 3U;
	int32_t t42 = 17;

	t42 = ((x201-x202)<=(x203/x204));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x205 = INT8_MAX;
	int16_t x206 = INT16_MIN;
	static uint64_t x207 = UINT64_MAX;
	int8_t x208 = INT8_MAX;

	t43 = ((x205-x206)<=(x207/x208));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x209 = 132362371144287LLU;
	volatile uint64_t x210 = 1205012LLU;
	uint8_t x212 = UINT8_MAX;
	volatile int32_t t44 = -14995384;

	t44 = ((x209-x210)<=(x211/x212));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x218 = 826700U;
	uint8_t x219 = 5U;
	volatile int16_t x220 = INT16_MIN;
	int32_t t45 = 1;

	t45 = ((x217-x218)<=(x219/x220));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x226 = -1;
	volatile uint16_t x227 = 0U;
	static int32_t x228 = -1;
	volatile int32_t t46 = -42543514;

	t46 = ((x225-x226)<=(x227/x228));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x233 = -15174;
	int8_t x234 = INT8_MIN;
	static uint32_t x235 = 2U;
	int8_t x236 = -1;
	volatile int32_t t47 = 228424;

	t47 = ((x233-x234)<=(x235/x236));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x237 = 0;
	uint64_t x238 = UINT64_MAX;
	int8_t x240 = -1;
	static volatile int32_t t48 = 957570;

	t48 = ((x237-x238)<=(x239/x240));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint32_t x242 = 1661U;
	int64_t x244 = INT64_MAX;
	int32_t t49 = 80549521;

	t49 = ((x241-x242)<=(x243/x244));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x249 = INT64_MIN;
	static int32_t x250 = -1;
	static int8_t x252 = INT8_MIN;

	t50 = ((x249-x250)<=(x251/x252));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x254 = INT32_MIN;
	uint8_t x256 = 6U;
	int32_t t51 = -2;

	t51 = ((x253-x254)<=(x255/x256));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x257 = 1864236577LLU;
	uint8_t x258 = 0U;
	int16_t x260 = 1746;
	int32_t t52 = 619483;

	t52 = ((x257-x258)<=(x259/x260));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x262 = -1;
	int64_t x263 = -1LL;
	int16_t x264 = INT16_MIN;
	volatile int32_t t53 = 0;

	t53 = ((x261-x262)<=(x263/x264));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x266 = 146U;
	volatile int8_t x267 = INT8_MAX;
	int8_t x268 = 4;
	int32_t t54 = 3125252;

	t54 = ((x265-x266)<=(x267/x268));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint16_t x269 = 348U;
	static int32_t x270 = -1;
	int16_t x271 = -4051;
	int16_t x272 = INT16_MIN;

	t55 = ((x269-x270)<=(x271/x272));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x273 = 1221LLU;
	uint64_t x274 = UINT64_MAX;
	uint32_t x275 = 2U;
	static volatile int32_t x276 = -3848939;
	static volatile int32_t t56 = -11;

	t56 = ((x273-x274)<=(x275/x276));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x277 = 10684504819723LL;
	uint16_t x280 = UINT16_MAX;
	volatile int32_t t57 = 44047692;

	t57 = ((x277-x278)<=(x279/x280));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x282 = 619U;
	uint64_t x283 = 31253809120186LLU;
	volatile int32_t x284 = 115;
	static volatile int32_t t58 = -1333;

	t58 = ((x281-x282)<=(x283/x284));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x285 = INT16_MIN;
	static int16_t x287 = INT16_MIN;
	static volatile int64_t x288 = -16137558463602320LL;
	int32_t t59 = 13029520;

	t59 = ((x285-x286)<=(x287/x288));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x290 = INT32_MAX;
	static int16_t x291 = -1;
	volatile int32_t t60 = 494501965;

	t60 = ((x289-x290)<=(x291/x292));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x297 = 1;
	int8_t x299 = -1;

	t61 = ((x297-x298)<=(x299/x300));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint8_t x301 = 26U;
	int8_t x302 = 24;
	static volatile uint32_t x303 = 14392U;
	volatile uint8_t x304 = UINT8_MAX;
	volatile int32_t t62 = -2;

	t62 = ((x301-x302)<=(x303/x304));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x306 = INT32_MIN;
	int8_t x307 = INT8_MIN;

	t63 = ((x305-x306)<=(x307/x308));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x309 = 7630LLU;
	static volatile uint64_t x311 = 26LLU;
	int16_t x312 = INT16_MIN;
	int32_t t64 = -62973;

	t64 = ((x309-x310)<=(x311/x312));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x314 = 14826596239LL;
	int64_t x315 = INT64_MIN;
	uint16_t x316 = 8146U;
	int32_t t65 = 100812;

	t65 = ((x313-x314)<=(x315/x316));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x325 = INT64_MAX;
	uint64_t x326 = 443622700363685828LLU;
	int16_t x327 = INT16_MIN;
	int16_t x328 = -1;
	volatile int32_t t66 = 3;

	t66 = ((x325-x326)<=(x327/x328));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x329 = INT64_MIN;
	int32_t x330 = -1;
	uint32_t x332 = UINT32_MAX;
	static int32_t t67 = -1299210;

	t67 = ((x329-x330)<=(x331/x332));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x333 = -1264034LL;
	uint32_t x334 = 352U;
	int8_t x335 = INT8_MAX;
	volatile int32_t t68 = -40;

	t68 = ((x333-x334)<=(x335/x336));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x338 = INT32_MIN;
	static uint16_t x339 = 283U;
	int64_t x340 = INT64_MAX;

	t69 = ((x337-x338)<=(x339/x340));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x341 = 14700;
	uint16_t x342 = UINT16_MAX;
	volatile int16_t x343 = INT16_MIN;
	static int8_t x344 = 1;
	volatile int32_t t70 = 146552;

	t70 = ((x341-x342)<=(x343/x344));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x348 = UINT16_MAX;
	static volatile int32_t t71 = 191042;

	t71 = ((x345-x346)<=(x347/x348));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x353 = INT8_MIN;
	uint8_t x354 = UINT8_MAX;
	static int16_t x355 = -1;
	int32_t x356 = INT32_MIN;
	static volatile int32_t t72 = -156400;

	t72 = ((x353-x354)<=(x355/x356));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x358 = 217269U;
	volatile uint8_t x359 = 7U;
	int8_t x360 = INT8_MIN;
	volatile int32_t t73 = 616916;

	t73 = ((x357-x358)<=(x359/x360));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x361 = 18U;
	int8_t x363 = -1;
	static volatile uint64_t x364 = 73LLU;

	t74 = ((x361-x362)<=(x363/x364));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x365 = 1852785U;
	volatile uint64_t x367 = UINT64_MAX;
	uint32_t x368 = UINT32_MAX;
	volatile int32_t t75 = -798;

	t75 = ((x365-x366)<=(x367/x368));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x369 = INT64_MIN;
	static int16_t x370 = INT16_MIN;
	static volatile int16_t x371 = -2013;
	volatile int8_t x372 = INT8_MIN;
	int32_t t76 = 900370;

	t76 = ((x369-x370)<=(x371/x372));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x374 = 25844U;
	int8_t x375 = 0;
	uint16_t x376 = 26U;
	int32_t t77 = 10;

	t77 = ((x373-x374)<=(x375/x376));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x377 = INT16_MAX;
	static uint8_t x378 = UINT8_MAX;
	int32_t x379 = INT32_MIN;
	uint64_t x380 = 69711485601214LLU;
	int32_t t78 = -3;

	t78 = ((x377-x378)<=(x379/x380));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x381 = 2U;
	uint32_t x382 = UINT32_MAX;
	int64_t x384 = INT64_MAX;

	t79 = ((x381-x382)<=(x383/x384));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x385 = -1LL;
	int16_t x386 = INT16_MAX;
	int32_t t80 = 18902778;

	t80 = ((x385-x386)<=(x387/x388));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x393 = 41U;
	static volatile uint16_t x394 = 55U;
	volatile int64_t x395 = INT64_MIN;
	uint16_t x396 = 4U;
	volatile int32_t t81 = -22497642;

	t81 = ((x393-x394)<=(x395/x396));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x397 = -1LL;
	int8_t x398 = -1;
	int16_t x399 = INT16_MIN;

	t82 = ((x397-x398)<=(x399/x400));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x401 = -145;
	volatile uint64_t x403 = UINT64_MAX;
	static int32_t t83 = 494;

	t83 = ((x401-x402)<=(x403/x404));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x405 = INT32_MIN;
	int32_t x406 = INT32_MIN;
	int64_t x407 = INT64_MAX;
	int8_t x408 = 19;

	t84 = ((x405-x406)<=(x407/x408));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x409 = 6054U;
	uint8_t x410 = 1U;
	int8_t x411 = INT8_MIN;

	t85 = ((x409-x410)<=(x411/x412));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x414 = -1;
	uint16_t x416 = 8118U;
	static volatile int32_t t86 = -469;

	t86 = ((x413-x414)<=(x415/x416));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x417 = INT8_MIN;
	volatile uint8_t x418 = 8U;
	int32_t x420 = -1;
	static int32_t t87 = 257712499;

	t87 = ((x417-x418)<=(x419/x420));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x421 = 0U;
	int32_t x422 = INT32_MAX;
	static int16_t x423 = 15;
	static int32_t t88 = 443;

	t88 = ((x421-x422)<=(x423/x424));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x426 = 36U;
	static volatile uint8_t x427 = 74U;
	volatile int64_t x428 = 205770086LL;
	volatile int32_t t89 = 9;

	t89 = ((x425-x426)<=(x427/x428));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x429 = 126;
	static uint32_t x430 = 782984744U;
	int32_t x431 = -1;
	int16_t x432 = INT16_MIN;
	int32_t t90 = 283;

	t90 = ((x429-x430)<=(x431/x432));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x433 = INT32_MAX;
	int16_t x434 = INT16_MAX;
	int16_t x436 = -21;
	volatile int32_t t91 = 673;

	t91 = ((x433-x434)<=(x435/x436));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x439 = UINT32_MAX;
	volatile uint8_t x440 = UINT8_MAX;
	static int32_t t92 = -2;

	t92 = ((x437-x438)<=(x439/x440));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x441 = UINT32_MAX;
	int64_t x442 = -1LL;
	uint64_t x444 = 1095585963530783LLU;
	int32_t t93 = -388716;

	t93 = ((x441-x442)<=(x443/x444));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x450 = -1LL;
	static uint64_t x451 = UINT64_MAX;
	volatile int32_t t94 = -1;

	t94 = ((x449-x450)<=(x451/x452));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x454 = UINT8_MAX;
	int8_t x456 = -26;

	t95 = ((x453-x454)<=(x455/x456));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x457 = 577692010;
	uint64_t x458 = 165LLU;
	int8_t x459 = INT8_MAX;
	volatile int32_t t96 = -91;

	t96 = ((x457-x458)<=(x459/x460));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x465 = -1;
	int8_t x466 = INT8_MIN;
	uint64_t x467 = 222203582LLU;
	uint8_t x468 = 99U;

	t97 = ((x465-x466)<=(x467/x468));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x477 = INT8_MIN;
	int16_t x478 = INT16_MIN;
	static uint64_t x479 = 124281LLU;
	int64_t x480 = INT64_MIN;
	static int32_t t98 = 1;

	t98 = ((x477-x478)<=(x479/x480));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x481 = 4U;
	int8_t x484 = INT8_MIN;
	volatile int32_t t99 = 41437304;

	t99 = ((x481-x482)<=(x483/x484));

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

