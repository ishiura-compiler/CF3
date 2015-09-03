#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = -20;
int32_t x5 = -1;
int16_t x8 = INT16_MIN;
static int32_t t1 = -7428523;
int8_t x12 = INT8_MIN;
static uint16_t x13 = UINT16_MAX;
int16_t x15 = INT16_MIN;
volatile uint32_t x18 = UINT32_MAX;
int8_t x24 = -1;
int32_t t7 = 3;
volatile int16_t x41 = -4;
volatile int64_t x42 = -1172616974610860LL;
static int64_t x46 = 795306145999199275LL;
int16_t x47 = INT16_MIN;
int32_t t10 = 59;
int16_t x79 = INT16_MIN;
int8_t x82 = INT8_MIN;
uint64_t x84 = 3565732841967LLU;
volatile int8_t x85 = INT8_MIN;
int32_t t15 = -424943;
uint8_t x92 = UINT8_MAX;
uint16_t x93 = 10U;
uint8_t x96 = 3U;
static volatile int32_t t18 = 1;
int16_t x104 = 1352;
uint8_t x128 = 0U;
volatile int64_t x133 = INT64_MIN;
volatile int32_t t23 = -251;
volatile int32_t t26 = -116558;
int64_t x154 = -1LL;
int32_t t27 = -66320;
static uint16_t x168 = 13855U;
static volatile uint64_t x179 = 187LLU;
int32_t x184 = -1;
static volatile int64_t x185 = INT64_MIN;
volatile uint16_t x191 = 39U;
static int32_t x194 = 32;
uint16_t x196 = UINT16_MAX;
int8_t x202 = INT8_MIN;
int8_t x207 = 4;
int16_t x210 = INT16_MAX;
static int64_t x211 = -7238122LL;
volatile int32_t t39 = 23974;
uint8_t x217 = UINT8_MAX;
uint8_t x218 = 15U;
volatile int32_t t42 = -16465;
uint8_t x232 = 0U;
static int32_t t45 = -4165473;
int32_t t46 = -261086;
int8_t x257 = -1;
uint32_t x260 = 23648841U;
int8_t x276 = -1;
volatile int32_t t52 = 9511818;
volatile int32_t t55 = -1061892;
volatile int16_t x295 = 105;
static volatile uint64_t x305 = 3498078555LLU;
volatile int64_t x309 = -1LL;
int32_t x312 = INT32_MIN;
int16_t x313 = INT16_MIN;
volatile int16_t x321 = -1;
int16_t x322 = INT16_MIN;
uint16_t x325 = 6U;
int32_t x333 = 45;
int32_t x335 = INT32_MAX;
int64_t x347 = 1430984LL;
uint32_t x348 = UINT32_MAX;
uint32_t x350 = 2268U;
int16_t x354 = INT16_MIN;
uint64_t x358 = 2750LLU;
static volatile int16_t x360 = INT16_MIN;
volatile int32_t t70 = -3227209;
volatile int32_t t71 = 1752;
uint64_t x371 = 5916203938132LLU;
static volatile int32_t t73 = -55328476;
uint8_t x374 = UINT8_MAX;
int64_t x377 = INT64_MIN;
static volatile int32_t t75 = -932;
int64_t x381 = 4227300264221LL;
static int64_t x399 = -1LL;
static uint8_t x411 = UINT8_MAX;
uint64_t x414 = UINT64_MAX;
static int16_t x417 = INT16_MIN;
int16_t x419 = -1;
volatile uint32_t x423 = 91U;
static uint16_t x427 = 1U;
volatile int8_t x449 = INT8_MAX;
uint32_t x451 = 11U;
static int32_t t91 = -851727;
int16_t x475 = INT16_MAX;
uint16_t x477 = 18U;
uint32_t x480 = UINT32_MAX;
static volatile int32_t t95 = -97782;
int32_t t96 = 179;
int32_t x490 = -1;
uint8_t x492 = 33U;
int16_t x498 = INT16_MIN;


void f0(void) {
	volatile uint32_t x1 = 12522U;
	uint64_t x2 = UINT64_MAX;
	int32_t x3 = INT32_MIN;
	static volatile int32_t t0 = 18914269;

	t0 = (x1<=((x2|x3)*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = 8;
	uint8_t x7 = 6U;

	t1 = (x5<=((x6|x7)*x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 7U;
	uint64_t x10 = UINT64_MAX;
	int8_t x11 = 0;
	static volatile int32_t t2 = 46856445;

	t2 = (x9<=((x10|x11)*x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x14 = 457407764760044LLU;
	uint64_t x16 = 1385421217275LLU;
	static volatile int32_t t3 = 698482787;

	t3 = (x13<=((x14|x15)*x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -58;
	int64_t x19 = INT64_MAX;
	uint64_t x20 = UINT64_MAX;
	int32_t t4 = 249812;

	t4 = (x17<=((x18|x19)*x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MIN;
	static volatile int64_t x22 = INT64_MIN;
	static uint64_t x23 = 67991535821LLU;
	int32_t t5 = 1690609;

	t5 = (x21<=((x22|x23)*x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint16_t x29 = UINT16_MAX;
	volatile uint64_t x30 = 133LLU;
	int64_t x31 = INT64_MIN;
	volatile uint32_t x32 = UINT32_MAX;
	volatile int32_t t6 = -252;

	t6 = (x29<=((x30|x31)*x32));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x33 = INT64_MAX;
	uint16_t x34 = UINT16_MAX;
	uint16_t x35 = UINT16_MAX;
	int16_t x36 = INT16_MIN;

	t7 = (x33<=((x34|x35)*x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x43 = -1;
	int16_t x44 = INT16_MIN;
	volatile int32_t t8 = 249281;

	t8 = (x41<=((x42|x43)*x44));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = INT8_MIN;
	int16_t x48 = 16286;
	volatile int32_t t9 = 13483209;

	t9 = (x45<=((x46|x47)*x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x57 = -6284;
	uint64_t x58 = UINT64_MAX;
	int8_t x59 = INT8_MIN;
	int8_t x60 = -1;

	t10 = (x57<=((x58|x59)*x60));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x61 = INT8_MAX;
	static volatile int64_t x62 = INT64_MIN;
	static int32_t x63 = -63;
	uint16_t x64 = UINT16_MAX;
	static int32_t t11 = 981740721;

	t11 = (x61<=((x62|x63)*x64));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x73 = -1;
	static volatile int64_t x74 = -194104945154LL;
	int64_t x75 = INT64_MIN;
	int16_t x76 = -5;
	int32_t t12 = 28340797;

	t12 = (x73<=((x74|x75)*x76));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x77 = INT8_MIN;
	static uint64_t x78 = 13179895LLU;
	int8_t x80 = INT8_MAX;
	int32_t t13 = -470;

	t13 = (x77<=((x78|x79)*x80));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x81 = INT32_MIN;
	uint8_t x83 = UINT8_MAX;
	volatile int32_t t14 = -181388552;

	t14 = (x81<=((x82|x83)*x84));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x86 = 1LL;
	static int32_t x87 = INT32_MAX;
	int8_t x88 = INT8_MIN;

	t15 = (x85<=((x86|x87)*x88));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x89 = INT32_MIN;
	volatile uint64_t x90 = 47913855LLU;
	int8_t x91 = INT8_MIN;
	static volatile int32_t t16 = -49749;

	t16 = (x89<=((x90|x91)*x92));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x94 = UINT32_MAX;
	volatile uint64_t x95 = UINT64_MAX;
	volatile int32_t t17 = 116;

	t17 = (x93<=((x94|x95)*x96));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x97 = UINT16_MAX;
	int32_t x98 = INT32_MIN;
	int64_t x99 = 17177092072925352LL;
	static int8_t x100 = 61;

	t18 = (x97<=((x98|x99)*x100));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x101 = -1;
	static volatile int16_t x102 = 939;
	int32_t x103 = 15275;
	static volatile int32_t t19 = 842;

	t19 = (x101<=((x102|x103)*x104));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x113 = INT8_MAX;
	static int64_t x114 = 3LL;
	uint32_t x115 = 6850374U;
	volatile int8_t x116 = INT8_MIN;
	volatile int32_t t20 = -83612;

	t20 = (x113<=((x114|x115)*x116));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x125 = -1;
	int8_t x126 = INT8_MIN;
	int16_t x127 = INT16_MIN;
	volatile int32_t t21 = -1;

	t21 = (x125<=((x126|x127)*x128));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x129 = -9;
	int64_t x130 = 749087311LL;
	int64_t x131 = INT64_MIN;
	volatile int8_t x132 = -1;
	int32_t t22 = 10;

	t22 = (x129<=((x130|x131)*x132));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x134 = INT64_MIN;
	int16_t x135 = -40;
	static int64_t x136 = -1LL;

	t23 = (x133<=((x134|x135)*x136));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x141 = INT32_MAX;
	int64_t x142 = -1LL;
	volatile int16_t x143 = 91;
	uint32_t x144 = 5U;
	int32_t t24 = 4570;

	t24 = (x141<=((x142|x143)*x144));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x145 = UINT32_MAX;
	int64_t x146 = INT64_MIN;
	volatile int8_t x147 = -1;
	static uint64_t x148 = UINT64_MAX;
	static volatile int32_t t25 = 29823639;

	t25 = (x145<=((x146|x147)*x148));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x149 = INT64_MAX;
	static uint32_t x150 = UINT32_MAX;
	volatile int16_t x151 = INT16_MIN;
	static int8_t x152 = INT8_MAX;

	t26 = (x149<=((x150|x151)*x152));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x153 = INT32_MAX;
	volatile uint8_t x155 = UINT8_MAX;
	int8_t x156 = 9;

	t27 = (x153<=((x154|x155)*x156));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x161 = 98593;
	int64_t x162 = INT64_MIN;
	int16_t x163 = -1;
	static int32_t x164 = INT32_MAX;
	volatile int32_t t28 = 190148;

	t28 = (x161<=((x162|x163)*x164));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x165 = INT16_MAX;
	int64_t x166 = -1LL;
	static uint32_t x167 = 197U;
	static volatile int32_t t29 = 79;

	t29 = (x165<=((x166|x167)*x168));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x169 = -51;
	int64_t x170 = INT64_MIN;
	int64_t x171 = -1LL;
	int8_t x172 = INT8_MAX;
	volatile int32_t t30 = 7495;

	t30 = (x169<=((x170|x171)*x172));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x177 = -53;
	uint8_t x178 = 1U;
	int32_t x180 = 791488;
	int32_t t31 = 660856;

	t31 = (x177<=((x178|x179)*x180));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x181 = INT16_MAX;
	uint8_t x182 = UINT8_MAX;
	int32_t x183 = -347078261;
	volatile int32_t t32 = 0;

	t32 = (x181<=((x182|x183)*x184));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x186 = INT8_MAX;
	volatile int8_t x187 = INT8_MAX;
	static int8_t x188 = INT8_MIN;
	static int32_t t33 = -242814391;

	t33 = (x185<=((x186|x187)*x188));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x189 = INT64_MIN;
	static int64_t x190 = -407018184LL;
	volatile uint64_t x192 = UINT64_MAX;
	int32_t t34 = 13059;

	t34 = (x189<=((x190|x191)*x192));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x193 = -1LL;
	uint32_t x195 = 0U;
	static int32_t t35 = 9095598;

	t35 = (x193<=((x194|x195)*x196));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x197 = INT16_MIN;
	int8_t x198 = 22;
	int16_t x199 = 7651;
	static int16_t x200 = -1;
	int32_t t36 = 6;

	t36 = (x197<=((x198|x199)*x200));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x201 = INT32_MIN;
	int16_t x203 = -166;
	static int32_t x204 = 4362531;
	int32_t t37 = -11806807;

	t37 = (x201<=((x202|x203)*x204));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x205 = 14U;
	uint16_t x206 = UINT16_MAX;
	uint16_t x208 = 3708U;
	static int32_t t38 = 98;

	t38 = (x205<=((x206|x207)*x208));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x209 = 740767468;
	int32_t x212 = INT32_MIN;

	t39 = (x209<=((x210|x211)*x212));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x213 = -1;
	static int16_t x214 = -1;
	int16_t x215 = -1;
	int8_t x216 = -9;
	volatile int32_t t40 = 730390;

	t40 = (x213<=((x214|x215)*x216));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x219 = 19373188LLU;
	volatile uint32_t x220 = UINT32_MAX;
	static volatile int32_t t41 = 127202;

	t41 = (x217<=((x218|x219)*x220));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x221 = 193;
	uint8_t x222 = 88U;
	int8_t x223 = -1;
	uint64_t x224 = 837965913LLU;

	t42 = (x221<=((x222|x223)*x224));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x229 = INT64_MAX;
	uint8_t x230 = UINT8_MAX;
	int16_t x231 = 13463;
	static volatile int32_t t43 = 686644;

	t43 = (x229<=((x230|x231)*x232));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x233 = INT8_MAX;
	uint8_t x234 = UINT8_MAX;
	int64_t x235 = -35035971648963767LL;
	uint32_t x236 = 72U;
	volatile int32_t t44 = 21533365;

	t44 = (x233<=((x234|x235)*x236));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint16_t x241 = UINT16_MAX;
	int8_t x242 = 1;
	int32_t x243 = -1;
	static int8_t x244 = INT8_MIN;

	t45 = (x241<=((x242|x243)*x244));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x245 = INT64_MIN;
	uint16_t x246 = UINT16_MAX;
	int16_t x247 = -1;
	int16_t x248 = INT16_MAX;

	t46 = (x245<=((x246|x247)*x248));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x253 = UINT8_MAX;
	int32_t x254 = -1;
	int64_t x255 = INT64_MAX;
	static int32_t x256 = INT32_MIN;
	static int32_t t47 = 16365108;

	t47 = (x253<=((x254|x255)*x256));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x258 = INT16_MIN;
	static int64_t x259 = -1LL;
	int32_t t48 = 21;

	t48 = (x257<=((x258|x259)*x260));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x261 = INT64_MIN;
	int32_t x262 = -972975809;
	int16_t x263 = INT16_MIN;
	int32_t x264 = -1;
	int32_t t49 = -1384287;

	t49 = (x261<=((x262|x263)*x264));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x265 = -948062;
	uint64_t x266 = UINT64_MAX;
	int8_t x267 = INT8_MAX;
	static volatile int8_t x268 = INT8_MAX;
	int32_t t50 = -3258413;

	t50 = (x265<=((x266|x267)*x268));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x269 = 3U;
	static uint64_t x270 = 48957LLU;
	static uint32_t x271 = 49194156U;
	static int16_t x272 = INT16_MAX;
	int32_t t51 = -979717469;

	t51 = (x269<=((x270|x271)*x272));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x273 = -1LL;
	static int32_t x274 = -247681159;
	int32_t x275 = -1;

	t52 = (x273<=((x274|x275)*x276));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x277 = 213;
	int32_t x278 = INT32_MAX;
	uint32_t x279 = 7U;
	int16_t x280 = -1;
	volatile int32_t t53 = -10166;

	t53 = (x277<=((x278|x279)*x280));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x281 = 26U;
	int8_t x282 = -1;
	uint64_t x283 = 2092726792929LLU;
	static volatile int32_t x284 = INT32_MIN;
	static int32_t t54 = 18990;

	t54 = (x281<=((x282|x283)*x284));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x285 = -2;
	volatile int8_t x286 = -1;
	uint16_t x287 = UINT16_MAX;
	int32_t x288 = 30220;

	t55 = (x285<=((x286|x287)*x288));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x289 = 7639162U;
	volatile int8_t x290 = INT8_MAX;
	uint16_t x291 = UINT16_MAX;
	volatile uint64_t x292 = 3805015401LLU;
	static volatile int32_t t56 = 19674077;

	t56 = (x289<=((x290|x291)*x292));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x293 = -14;
	volatile uint8_t x294 = 3U;
	int16_t x296 = INT16_MIN;
	int32_t t57 = 12;

	t57 = (x293<=((x294|x295)*x296));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x301 = 986U;
	uint32_t x302 = 5U;
	volatile uint16_t x303 = UINT16_MAX;
	static int8_t x304 = INT8_MAX;
	volatile int32_t t58 = 16041386;

	t58 = (x301<=((x302|x303)*x304));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x306 = -1;
	static uint16_t x307 = UINT16_MAX;
	int16_t x308 = 1509;
	volatile int32_t t59 = -163498;

	t59 = (x305<=((x306|x307)*x308));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x310 = -1LL;
	int32_t x311 = INT32_MIN;
	volatile int32_t t60 = 88224;

	t60 = (x309<=((x310|x311)*x312));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x314 = -180;
	uint8_t x315 = UINT8_MAX;
	uint64_t x316 = UINT64_MAX;
	int32_t t61 = 227;

	t61 = (x313<=((x314|x315)*x316));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x317 = INT64_MAX;
	volatile uint64_t x318 = 121981LLU;
	int16_t x319 = INT16_MIN;
	int64_t x320 = -1LL;
	int32_t t62 = 2;

	t62 = (x317<=((x318|x319)*x320));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x323 = INT8_MIN;
	uint64_t x324 = UINT64_MAX;
	static volatile int32_t t63 = 92375018;

	t63 = (x321<=((x322|x323)*x324));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x326 = 161U;
	static uint64_t x327 = 1648171789898LLU;
	uint8_t x328 = 25U;
	volatile int32_t t64 = 273;

	t64 = (x325<=((x326|x327)*x328));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x334 = 4;
	int64_t x336 = -1LL;
	volatile int32_t t65 = -364847;

	t65 = (x333<=((x334|x335)*x336));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x341 = INT64_MIN;
	int64_t x342 = -1LL;
	int64_t x343 = INT64_MIN;
	uint8_t x344 = 42U;
	volatile int32_t t66 = 229847456;

	t66 = (x341<=((x342|x343)*x344));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x345 = UINT64_MAX;
	uint8_t x346 = 0U;
	int32_t t67 = -368002210;

	t67 = (x345<=((x346|x347)*x348));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x349 = 7U;
	uint64_t x351 = UINT64_MAX;
	int64_t x352 = -1LL;
	int32_t t68 = -23654;

	t68 = (x349<=((x350|x351)*x352));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x353 = INT32_MIN;
	int16_t x355 = 166;
	static uint32_t x356 = 12092693U;
	int32_t t69 = 4;

	t69 = (x353<=((x354|x355)*x356));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x357 = INT8_MAX;
	static volatile int64_t x359 = INT64_MAX;

	t70 = (x357<=((x358|x359)*x360));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x361 = INT8_MIN;
	int8_t x362 = -1;
	static int16_t x363 = -1;
	int32_t x364 = INT32_MAX;

	t71 = (x361<=((x362|x363)*x364));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x365 = 30U;
	volatile uint32_t x366 = UINT32_MAX;
	volatile uint64_t x367 = 21085536LLU;
	uint32_t x368 = UINT32_MAX;
	static int32_t t72 = -254045;

	t72 = (x365<=((x366|x367)*x368));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x369 = 0U;
	int8_t x370 = INT8_MIN;
	uint8_t x372 = UINT8_MAX;

	t73 = (x369<=((x370|x371)*x372));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x373 = 2005U;
	static int32_t x375 = INT32_MIN;
	int16_t x376 = -1;
	static int32_t t74 = 30;

	t74 = (x373<=((x374|x375)*x376));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x378 = 24060710241866691LL;
	static uint8_t x379 = 3U;
	static uint32_t x380 = 13U;

	t75 = (x377<=((x378|x379)*x380));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x382 = INT32_MIN;
	int32_t x383 = INT32_MIN;
	int64_t x384 = -1LL;
	int32_t t76 = -105842;

	t76 = (x381<=((x382|x383)*x384));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x385 = -1;
	int16_t x386 = INT16_MIN;
	volatile uint64_t x387 = 2671129513719LLU;
	int8_t x388 = -1;
	int32_t t77 = 30;

	t77 = (x385<=((x386|x387)*x388));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x389 = 1U;
	int8_t x390 = INT8_MIN;
	uint8_t x391 = UINT8_MAX;
	volatile uint16_t x392 = 1U;
	int32_t t78 = 651965;

	t78 = (x389<=((x390|x391)*x392));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x393 = INT64_MIN;
	int64_t x394 = 696LL;
	volatile uint8_t x395 = 6U;
	int64_t x396 = -1LL;
	int32_t t79 = 49;

	t79 = (x393<=((x394|x395)*x396));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x397 = -1;
	int16_t x398 = 437;
	int8_t x400 = -4;
	int32_t t80 = 661749921;

	t80 = (x397<=((x398|x399)*x400));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x401 = 192U;
	int32_t x402 = INT32_MIN;
	static int16_t x403 = -1;
	int32_t x404 = 1962144;
	volatile int32_t t81 = 827621;

	t81 = (x401<=((x402|x403)*x404));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x405 = -1;
	static int64_t x406 = INT64_MAX;
	int64_t x407 = -1LL;
	int32_t x408 = -1;
	int32_t t82 = -489;

	t82 = (x405<=((x406|x407)*x408));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x409 = -1;
	volatile uint16_t x410 = 26U;
	static int64_t x412 = 42972275149746LL;
	static volatile int32_t t83 = -115921;

	t83 = (x409<=((x410|x411)*x412));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x413 = INT64_MIN;
	int8_t x415 = 11;
	int8_t x416 = 43;
	volatile int32_t t84 = -1;

	t84 = (x413<=((x414|x415)*x416));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x418 = UINT8_MAX;
	volatile int32_t x420 = -107243;
	static volatile int32_t t85 = -1868;

	t85 = (x417<=((x418|x419)*x420));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x421 = INT32_MIN;
	volatile uint32_t x422 = 19297383U;
	int8_t x424 = 15;
	volatile int32_t t86 = 571731;

	t86 = (x421<=((x422|x423)*x424));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x425 = 392946716LLU;
	int16_t x426 = 31;
	int16_t x428 = INT16_MAX;
	int32_t t87 = 14946;

	t87 = (x425<=((x426|x427)*x428));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x429 = -1LL;
	uint64_t x430 = 226033033159LLU;
	static uint16_t x431 = 134U;
	static uint16_t x432 = 20471U;
	int32_t t88 = 0;

	t88 = (x429<=((x430|x431)*x432));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x441 = 41026498583LLU;
	uint8_t x442 = 0U;
	uint32_t x443 = 3U;
	int8_t x444 = INT8_MIN;
	volatile int32_t t89 = -817871;

	t89 = (x441<=((x442|x443)*x444));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x450 = UINT16_MAX;
	int8_t x452 = -1;
	static int32_t t90 = -340;

	t90 = (x449<=((x450|x451)*x452));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x457 = 7U;
	int32_t x458 = -10384;
	int64_t x459 = -1LL;
	uint16_t x460 = 1U;

	t91 = (x457<=((x458|x459)*x460));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x465 = -1;
	static int64_t x466 = INT64_MIN;
	int64_t x467 = -3111LL;
	static int8_t x468 = INT8_MAX;
	volatile int32_t t92 = 36564;

	t92 = (x465<=((x466|x467)*x468));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x469 = 2288746685LLU;
	int16_t x470 = INT16_MIN;
	uint16_t x471 = 519U;
	uint64_t x472 = 2016181411803906LLU;
	volatile int32_t t93 = 83;

	t93 = (x469<=((x470|x471)*x472));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x473 = -1;
	int16_t x474 = INT16_MIN;
	static int32_t x476 = 92257;
	int32_t t94 = -1;

	t94 = (x473<=((x474|x475)*x476));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x478 = 1U;
	static int8_t x479 = 4;

	t95 = (x477<=((x478|x479)*x480));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x485 = INT32_MIN;
	int64_t x486 = INT64_MIN;
	int16_t x487 = INT16_MIN;
	int32_t x488 = INT32_MAX;

	t96 = (x485<=((x486|x487)*x488));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x489 = UINT16_MAX;
	int32_t x491 = -1;
	int32_t t97 = -1432;

	t97 = (x489<=((x490|x491)*x492));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x493 = UINT16_MAX;
	uint16_t x494 = 874U;
	int32_t x495 = 21034;
	volatile int16_t x496 = INT16_MIN;
	volatile int32_t t98 = 21121089;

	t98 = (x493<=((x494|x495)*x496));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x497 = INT64_MIN;
	int8_t x499 = -24;
	static uint32_t x500 = 177U;
	volatile int32_t t99 = 1;

	t99 = (x497<=((x498|x499)*x500));

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

