#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = 283519500839552390LL;
int16_t x8 = -1;
volatile uint32_t x21 = 1382U;
uint64_t x24 = 35976501256318850LLU;
int16_t x29 = -4647;
int32_t x32 = 23;
int32_t x36 = INT32_MAX;
static int32_t t7 = -19461431;
int16_t x42 = INT16_MIN;
uint8_t x51 = 91U;
uint32_t x55 = UINT32_MAX;
volatile int32_t t11 = 100325;
int32_t x60 = INT32_MAX;
uint32_t x104 = UINT32_MAX;
int8_t x106 = -15;
int32_t t18 = 3255057;
static int64_t x109 = -2039843486808890LL;
static volatile int64_t x111 = -7LL;
int32_t x112 = -561751;
static int64_t x121 = INT64_MIN;
volatile int8_t x123 = INT8_MIN;
int16_t x124 = 31;
volatile int32_t t24 = -45536837;
uint64_t x137 = 6321536686LLU;
static volatile int64_t x138 = INT64_MAX;
volatile int32_t t26 = 336817958;
uint8_t x151 = 71U;
uint64_t x156 = UINT64_MAX;
static volatile int32_t t28 = 120220;
uint64_t x157 = UINT64_MAX;
uint16_t x158 = UINT16_MAX;
volatile int8_t x159 = INT8_MIN;
int32_t x175 = -1;
int64_t x176 = INT64_MIN;
static uint64_t x187 = 4LLU;
uint16_t x196 = 2884U;
int32_t x197 = -1;
volatile uint16_t x208 = 1U;
int16_t x209 = INT16_MIN;
static int16_t x216 = INT16_MIN;
volatile int32_t t39 = 1;
int64_t x220 = INT64_MAX;
int32_t t41 = -110070;
uint16_t x227 = 2U;
int64_t x228 = -12068065968LL;
int32_t x250 = INT32_MIN;
uint32_t x251 = UINT32_MAX;
int32_t t45 = 5455;
volatile int8_t x253 = INT8_MAX;
uint32_t x254 = 42055214U;
uint16_t x256 = UINT16_MAX;
uint64_t x263 = 2734044246840LLU;
int8_t x270 = -1;
uint8_t x278 = 6U;
static int32_t x288 = 459;
uint32_t x294 = 117U;
volatile int16_t x306 = -1;
int32_t t54 = -486392077;
volatile uint16_t x322 = 3703U;
int16_t x323 = INT16_MIN;
volatile int16_t x326 = INT16_MIN;
static uint32_t x327 = 740155119U;
int32_t x328 = INT32_MIN;
int32_t t57 = 23;
static int16_t x334 = -14239;
int16_t x336 = INT16_MIN;
uint64_t x339 = UINT64_MAX;
uint16_t x340 = 0U;
uint32_t x342 = 9945U;
uint8_t x349 = 14U;
uint16_t x352 = 13U;
int32_t x364 = 25651610;
static int16_t x367 = -297;
int32_t t65 = -111;
static int64_t x378 = -1LL;
uint32_t x379 = 552U;
uint32_t x394 = 2603309U;
int64_t x404 = INT64_MIN;
int32_t x410 = -1;
int32_t x411 = -1;
uint32_t x412 = 32U;
static int8_t x418 = INT8_MIN;
int32_t x421 = -1;
static uint64_t x425 = UINT64_MAX;
int8_t x427 = -7;
uint16_t x428 = 8U;
uint64_t x431 = UINT64_MAX;
volatile int8_t x435 = INT8_MIN;
static int8_t x436 = INT8_MIN;
int32_t x444 = INT32_MIN;
int32_t x446 = INT32_MIN;
uint8_t x450 = UINT8_MAX;
static int16_t x452 = -1;
int32_t t80 = -6457;
static int16_t x457 = 9;
uint64_t x460 = UINT64_MAX;
uint32_t x463 = UINT32_MAX;
uint8_t x494 = 116U;
int16_t x499 = 0;
int32_t x502 = -964286;
uint8_t x517 = UINT8_MAX;
int64_t x522 = -9289115LL;
volatile int32_t t91 = 904695;
int64_t x532 = INT64_MIN;
int32_t t93 = 4186631;
static uint8_t x553 = 17U;
volatile int32_t t94 = 3421412;
int16_t x563 = -1;
static int8_t x564 = -1;
static int32_t t96 = -18234014;
volatile int64_t x566 = -1LL;
static int8_t x574 = INT8_MIN;


void f0(void) {
	static int32_t x1 = -1;
	static int64_t x2 = 228669LL;
	uint32_t x3 = 1U;
	volatile int16_t x4 = INT16_MIN;
	static volatile int32_t t0 = 1353;

	t0 = ((x1+(x2*x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x5 = UINT8_MAX;
	static int8_t x7 = 0;
	int32_t t1 = -1;

	t1 = ((x5+(x6*x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x13 = UINT32_MAX;
	int32_t x14 = -1;
	int16_t x15 = -1;
	volatile int32_t x16 = INT32_MIN;
	volatile int32_t t2 = 235800;

	t2 = ((x13+(x14*x15))<=x16);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x22 = INT8_MAX;
	static uint64_t x23 = 1566670917565770LLU;
	volatile int32_t t3 = 737;

	t3 = ((x21+(x22*x23))<=x24);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = 198;
	volatile int32_t x26 = -1;
	volatile int16_t x27 = 4675;
	uint16_t x28 = 6944U;
	volatile int32_t t4 = -2067182;

	t4 = ((x25+(x26*x27))<=x28);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x30 = 2;
	int32_t x31 = 11171;
	volatile int32_t t5 = -7;

	t5 = ((x29+(x30*x31))<=x32);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = INT8_MAX;
	uint16_t x34 = 118U;
	int32_t x35 = -1;
	int32_t t6 = 6;

	t6 = ((x33+(x34*x35))<=x36);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x37 = UINT32_MAX;
	uint32_t x38 = 395U;
	volatile uint64_t x39 = 0LLU;
	int16_t x40 = -1;

	t7 = ((x37+(x38*x39))<=x40);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = -1;
	static int32_t x43 = 1;
	uint32_t x44 = 57268032U;
	volatile int32_t t8 = 15;

	t8 = ((x41+(x42*x43))<=x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x45 = UINT8_MAX;
	uint8_t x46 = UINT8_MAX;
	int16_t x47 = -33;
	int8_t x48 = -1;
	volatile int32_t t9 = 5488618;

	t9 = ((x45+(x46*x47))<=x48);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x49 = 0U;
	uint64_t x50 = UINT64_MAX;
	uint16_t x52 = UINT16_MAX;
	int32_t t10 = 1436;

	t10 = ((x49+(x50*x51))<=x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = INT16_MIN;
	int32_t x54 = -1;
	int16_t x56 = -1;

	t11 = ((x53+(x54*x55))<=x56);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = 13U;
	int8_t x58 = INT8_MIN;
	int32_t x59 = 7;
	int32_t t12 = -243232763;

	t12 = ((x57+(x58*x59))<=x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x81 = 1U;
	int32_t x82 = -311;
	int8_t x83 = INT8_MIN;
	int8_t x84 = INT8_MIN;
	volatile int32_t t13 = -12;

	t13 = ((x81+(x82*x83))<=x84);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x85 = INT8_MAX;
	int64_t x86 = -1LL;
	static int32_t x87 = -38485745;
	volatile uint16_t x88 = UINT16_MAX;
	static volatile int32_t t14 = -9386;

	t14 = ((x85+(x86*x87))<=x88);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x89 = -1;
	static int32_t x90 = -11381447;
	volatile uint8_t x91 = 8U;
	int16_t x92 = -451;
	int32_t t15 = 0;

	t15 = ((x89+(x90*x91))<=x92);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x97 = 901001LL;
	int16_t x98 = INT16_MIN;
	int8_t x99 = INT8_MIN;
	static volatile uint64_t x100 = 475141397661885315LLU;
	int32_t t16 = -8690161;

	t16 = ((x97+(x98*x99))<=x100);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x101 = INT8_MAX;
	volatile int64_t x102 = -7LL;
	int64_t x103 = -1LL;
	volatile int32_t t17 = 51179546;

	t17 = ((x101+(x102*x103))<=x104);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x105 = -1030;
	int32_t x107 = -1;
	int64_t x108 = INT64_MIN;

	t18 = ((x105+(x106*x107))<=x108);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x110 = 16U;
	int32_t t19 = -1841984;

	t19 = ((x109+(x110*x111))<=x112);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x113 = 1LL;
	static int16_t x114 = 569;
	volatile int32_t x115 = 0;
	uint8_t x116 = 6U;
	volatile int32_t t20 = 13287650;

	t20 = ((x113+(x114*x115))<=x116);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x117 = INT8_MAX;
	uint64_t x118 = 3118169808031463LLU;
	static uint8_t x119 = 15U;
	int32_t x120 = -1;
	static int32_t t21 = -63;

	t21 = ((x117+(x118*x119))<=x120);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x122 = -1;
	int32_t t22 = -40598107;

	t22 = ((x121+(x122*x123))<=x124);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x125 = -11;
	static uint8_t x126 = 1U;
	int16_t x127 = INT16_MIN;
	volatile int32_t x128 = INT32_MAX;
	volatile int32_t t23 = -7700;

	t23 = ((x125+(x126*x127))<=x128);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint16_t x133 = UINT16_MAX;
	uint16_t x134 = 19U;
	uint16_t x135 = 5U;
	int64_t x136 = INT64_MIN;

	t24 = ((x133+(x134*x135))<=x136);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x139 = 185735026591LLU;
	volatile int32_t x140 = -1;
	volatile int32_t t25 = 0;

	t25 = ((x137+(x138*x139))<=x140);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x141 = INT16_MIN;
	int16_t x142 = INT16_MAX;
	int64_t x143 = -3791LL;
	int16_t x144 = INT16_MAX;

	t26 = ((x141+(x142*x143))<=x144);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x149 = INT8_MAX;
	uint32_t x150 = UINT32_MAX;
	volatile int32_t x152 = -1;
	static int32_t t27 = -3;

	t27 = ((x149+(x150*x151))<=x152);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x153 = 1U;
	static int64_t x154 = 1LL;
	volatile int32_t x155 = 1;

	t28 = ((x153+(x154*x155))<=x156);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x160 = 5U;
	int32_t t29 = -979;

	t29 = ((x157+(x158*x159))<=x160);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x173 = INT32_MAX;
	uint8_t x174 = 1U;
	int32_t t30 = 3;

	t30 = ((x173+(x174*x175))<=x176);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x181 = -121LL;
	int32_t x182 = 1;
	int8_t x183 = -1;
	volatile uint16_t x184 = 1615U;
	volatile int32_t t31 = 756197480;

	t31 = ((x181+(x182*x183))<=x184);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x185 = UINT64_MAX;
	int8_t x186 = INT8_MIN;
	int32_t x188 = INT32_MAX;
	volatile int32_t t32 = 54352;

	t32 = ((x185+(x186*x187))<=x188);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x189 = INT16_MIN;
	int32_t x190 = 30466;
	uint16_t x191 = 16191U;
	static volatile int32_t x192 = 5;
	volatile int32_t t33 = 10776761;

	t33 = ((x189+(x190*x191))<=x192);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x193 = INT8_MIN;
	volatile int16_t x194 = 0;
	uint64_t x195 = 1LLU;
	volatile int32_t t34 = -1;

	t34 = ((x193+(x194*x195))<=x196);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x198 = -1;
	int64_t x199 = -1LL;
	int64_t x200 = INT64_MAX;
	int32_t t35 = 54441;

	t35 = ((x197+(x198*x199))<=x200);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x201 = -1;
	volatile int8_t x202 = -1;
	static volatile int16_t x203 = INT16_MAX;
	static int16_t x204 = INT16_MIN;
	int32_t t36 = -1;

	t36 = ((x201+(x202*x203))<=x204);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x205 = INT16_MIN;
	int8_t x206 = -1;
	static int32_t x207 = -1;
	static int32_t t37 = -2246035;

	t37 = ((x205+(x206*x207))<=x208);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x210 = UINT8_MAX;
	volatile int16_t x211 = -13;
	int32_t x212 = 12141;
	volatile int32_t t38 = -57531;

	t38 = ((x209+(x210*x211))<=x212);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint32_t x213 = 12948U;
	int8_t x214 = -1;
	uint16_t x215 = 887U;

	t39 = ((x213+(x214*x215))<=x216);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x217 = INT16_MIN;
	static uint64_t x218 = 10174057277973LLU;
	static int64_t x219 = -1955LL;
	volatile int32_t t40 = 2;

	t40 = ((x217+(x218*x219))<=x220);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x221 = INT32_MIN;
	int64_t x222 = -1LL;
	int64_t x223 = 9LL;
	volatile int8_t x224 = -44;

	t41 = ((x221+(x222*x223))<=x224);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x225 = INT64_MIN;
	uint32_t x226 = 45145U;
	int32_t t42 = -288342;

	t42 = ((x225+(x226*x227))<=x228);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x229 = INT64_MIN;
	static int8_t x230 = INT8_MIN;
	int16_t x231 = -4734;
	volatile uint16_t x232 = UINT16_MAX;
	static volatile int32_t t43 = 17;

	t43 = ((x229+(x230*x231))<=x232);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x237 = 1047549758U;
	int8_t x238 = -1;
	uint16_t x239 = 3028U;
	int32_t x240 = -1;
	volatile int32_t t44 = -3244374;

	t44 = ((x237+(x238*x239))<=x240);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x249 = -1338;
	static uint64_t x252 = UINT64_MAX;

	t45 = ((x249+(x250*x251))<=x252);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x255 = -1397LL;
	int32_t t46 = 152474;

	t46 = ((x253+(x254*x255))<=x256);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x257 = 1917103LL;
	static int16_t x258 = INT16_MIN;
	uint8_t x259 = 5U;
	int64_t x260 = INT64_MAX;
	int32_t t47 = -862;

	t47 = ((x257+(x258*x259))<=x260);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x261 = 74U;
	volatile uint64_t x262 = UINT64_MAX;
	int32_t x264 = INT32_MIN;
	int32_t t48 = -813;

	t48 = ((x261+(x262*x263))<=x264);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x269 = 989U;
	static uint8_t x271 = UINT8_MAX;
	int32_t x272 = INT32_MIN;
	volatile int32_t t49 = 2985;

	t49 = ((x269+(x270*x271))<=x272);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x277 = 32094428532766LLU;
	static uint32_t x279 = 156251U;
	static uint64_t x280 = UINT64_MAX;
	volatile int32_t t50 = 1899;

	t50 = ((x277+(x278*x279))<=x280);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x285 = 8080U;
	volatile int16_t x286 = INT16_MIN;
	int16_t x287 = -1;
	volatile int32_t t51 = -18519264;

	t51 = ((x285+(x286*x287))<=x288);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x293 = -1;
	int64_t x295 = -1LL;
	int16_t x296 = -3;
	volatile int32_t t52 = 72576686;

	t52 = ((x293+(x294*x295))<=x296);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x305 = INT16_MIN;
	uint16_t x307 = 186U;
	uint64_t x308 = 44848623017401765LLU;
	volatile int32_t t53 = 945527830;

	t53 = ((x305+(x306*x307))<=x308);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x317 = -127887;
	uint64_t x318 = 3735LLU;
	static uint8_t x319 = 1U;
	int32_t x320 = INT32_MAX;

	t54 = ((x317+(x318*x319))<=x320);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x321 = 10;
	int32_t x324 = INT32_MIN;
	volatile int32_t t55 = -8;

	t55 = ((x321+(x322*x323))<=x324);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x325 = 7;
	static volatile int32_t t56 = 21;

	t56 = ((x325+(x326*x327))<=x328);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x329 = -1LL;
	static volatile uint32_t x330 = 2082232170U;
	int16_t x331 = 76;
	int16_t x332 = -1;

	t57 = ((x329+(x330*x331))<=x332);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x333 = 10U;
	int32_t x335 = -110262;
	volatile int32_t t58 = -4;

	t58 = ((x333+(x334*x335))<=x336);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x337 = INT32_MIN;
	uint64_t x338 = 190LLU;
	volatile int32_t t59 = 0;

	t59 = ((x337+(x338*x339))<=x340);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x341 = UINT16_MAX;
	volatile uint32_t x343 = UINT32_MAX;
	uint64_t x344 = 119519949340846554LLU;
	int32_t t60 = 7;

	t60 = ((x341+(x342*x343))<=x344);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x345 = INT16_MIN;
	uint64_t x346 = 105LLU;
	static int32_t x347 = INT32_MIN;
	volatile uint32_t x348 = 247435U;
	volatile int32_t t61 = -4989;

	t61 = ((x345+(x346*x347))<=x348);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x350 = INT64_MIN;
	volatile uint8_t x351 = 0U;
	static int32_t t62 = 222746;

	t62 = ((x349+(x350*x351))<=x352);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x357 = 745591;
	volatile int8_t x358 = INT8_MAX;
	static volatile uint64_t x359 = UINT64_MAX;
	volatile int64_t x360 = INT64_MIN;
	volatile int32_t t63 = 27;

	t63 = ((x357+(x358*x359))<=x360);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x361 = INT16_MIN;
	int32_t x362 = -4;
	static int8_t x363 = INT8_MIN;
	volatile int32_t t64 = 1689718;

	t64 = ((x361+(x362*x363))<=x364);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x365 = 183238LL;
	int8_t x366 = -1;
	uint64_t x368 = UINT64_MAX;

	t65 = ((x365+(x366*x367))<=x368);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x373 = UINT32_MAX;
	uint8_t x374 = 11U;
	static volatile int8_t x375 = -2;
	uint16_t x376 = 488U;
	volatile int32_t t66 = 231473;

	t66 = ((x373+(x374*x375))<=x376);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x377 = 17U;
	volatile int64_t x380 = INT64_MAX;
	int32_t t67 = -3371;

	t67 = ((x377+(x378*x379))<=x380);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x385 = 923027U;
	uint64_t x386 = 16017672117115LLU;
	int32_t x387 = 6280;
	static int16_t x388 = -1;
	static volatile int32_t t68 = 6;

	t68 = ((x385+(x386*x387))<=x388);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x393 = -1;
	volatile int64_t x395 = -1LL;
	int64_t x396 = INT64_MIN;
	int32_t t69 = 1;

	t69 = ((x393+(x394*x395))<=x396);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x401 = INT64_MIN;
	volatile int32_t x402 = -1;
	int8_t x403 = -1;
	static volatile int32_t t70 = 153950;

	t70 = ((x401+(x402*x403))<=x404);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x405 = INT16_MIN;
	static volatile int16_t x406 = -1;
	static int32_t x407 = 1195844;
	int32_t x408 = INT32_MAX;
	static int32_t t71 = -4;

	t71 = ((x405+(x406*x407))<=x408);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x409 = 1U;
	int32_t t72 = -316944778;

	t72 = ((x409+(x410*x411))<=x412);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x417 = UINT32_MAX;
	int64_t x419 = -1LL;
	int32_t x420 = INT32_MIN;
	volatile int32_t t73 = -572278;

	t73 = ((x417+(x418*x419))<=x420);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x422 = 63801U;
	volatile int16_t x423 = -444;
	int8_t x424 = INT8_MIN;
	volatile int32_t t74 = -95036749;

	t74 = ((x421+(x422*x423))<=x424);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x426 = -1;
	int32_t t75 = -199;

	t75 = ((x425+(x426*x427))<=x428);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x429 = 5U;
	static volatile int16_t x430 = -1;
	static int32_t x432 = 1409701;
	static volatile int32_t t76 = -49664960;

	t76 = ((x429+(x430*x431))<=x432);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x433 = 72;
	int8_t x434 = 1;
	volatile int32_t t77 = -1;

	t77 = ((x433+(x434*x435))<=x436);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x441 = INT64_MIN;
	volatile uint32_t x442 = 122U;
	volatile int16_t x443 = -58;
	int32_t t78 = -2700920;

	t78 = ((x441+(x442*x443))<=x444);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x445 = 24518769642903931LLU;
	uint64_t x447 = UINT64_MAX;
	int64_t x448 = -1LL;
	static int32_t t79 = -2048801;

	t79 = ((x445+(x446*x447))<=x448);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x449 = 3U;
	uint16_t x451 = UINT16_MAX;

	t80 = ((x449+(x450*x451))<=x452);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x458 = -1;
	static uint64_t x459 = UINT64_MAX;
	int32_t t81 = 1266137;

	t81 = ((x457+(x458*x459))<=x460);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x461 = INT8_MAX;
	int16_t x462 = INT16_MIN;
	int32_t x464 = INT32_MIN;
	int32_t t82 = 6941880;

	t82 = ((x461+(x462*x463))<=x464);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x469 = 58U;
	volatile uint16_t x470 = 3U;
	uint32_t x471 = 10483630U;
	int32_t x472 = INT32_MIN;
	static volatile int32_t t83 = 136;

	t83 = ((x469+(x470*x471))<=x472);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x473 = -31;
	int8_t x474 = INT8_MAX;
	int16_t x475 = -1;
	int16_t x476 = INT16_MIN;
	int32_t t84 = 0;

	t84 = ((x473+(x474*x475))<=x476);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x485 = UINT32_MAX;
	int64_t x486 = 183752088972840LL;
	static int16_t x487 = INT16_MIN;
	int64_t x488 = INT64_MIN;
	volatile int32_t t85 = -995305;

	t85 = ((x485+(x486*x487))<=x488);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x493 = -1;
	int16_t x495 = -1;
	int32_t x496 = 1;
	volatile int32_t t86 = -852;

	t86 = ((x493+(x494*x495))<=x496);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x497 = 308304081LLU;
	volatile uint8_t x498 = 2U;
	volatile int16_t x500 = INT16_MAX;
	static int32_t t87 = -122725;

	t87 = ((x497+(x498*x499))<=x500);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x501 = 16064010LLU;
	uint64_t x503 = UINT64_MAX;
	static uint32_t x504 = UINT32_MAX;
	int32_t t88 = 13;

	t88 = ((x501+(x502*x503))<=x504);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x505 = INT8_MIN;
	int64_t x506 = -3192815910LL;
	volatile uint16_t x507 = 642U;
	static int64_t x508 = -70466170607LL;
	static int32_t t89 = -3566;

	t89 = ((x505+(x506*x507))<=x508);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x518 = UINT8_MAX;
	int8_t x519 = INT8_MIN;
	uint32_t x520 = 819U;
	volatile int32_t t90 = 576207;

	t90 = ((x517+(x518*x519))<=x520);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x521 = 9916U;
	static uint8_t x523 = UINT8_MAX;
	int16_t x524 = INT16_MIN;

	t91 = ((x521+(x522*x523))<=x524);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x529 = -1;
	uint32_t x530 = UINT32_MAX;
	volatile int16_t x531 = INT16_MIN;
	volatile int32_t t92 = 32125210;

	t92 = ((x529+(x530*x531))<=x532);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x549 = 61U;
	int8_t x550 = INT8_MIN;
	int8_t x551 = INT8_MIN;
	uint32_t x552 = 1U;

	t93 = ((x549+(x550*x551))<=x552);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x554 = -40365530;
	static volatile uint32_t x555 = UINT32_MAX;
	int8_t x556 = -1;

	t94 = ((x553+(x554*x555))<=x556);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x557 = 56U;
	volatile int32_t x558 = 15051;
	int16_t x559 = INT16_MAX;
	int32_t x560 = -29427786;
	volatile int32_t t95 = 60383;

	t95 = ((x557+(x558*x559))<=x560);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x561 = 0;
	static int8_t x562 = -6;

	t96 = ((x561+(x562*x563))<=x564);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x565 = INT16_MIN;
	int32_t x567 = INT32_MAX;
	volatile uint16_t x568 = 1404U;
	int32_t t97 = -16117079;

	t97 = ((x565+(x566*x567))<=x568);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x573 = 32U;
	uint32_t x575 = UINT32_MAX;
	static int16_t x576 = 365;
	static volatile int32_t t98 = 115311253;

	t98 = ((x573+(x574*x575))<=x576);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x577 = 100947482LLU;
	uint32_t x578 = 483U;
	int16_t x579 = INT16_MAX;
	uint16_t x580 = UINT16_MAX;
	volatile int32_t t99 = -2811;

	t99 = ((x577+(x578*x579))<=x580);

	if (t99 != 0) { NG(); } else { ; }
	
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

