#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x5 = 2U;
static uint8_t x6 = 4U;
uint16_t x17 = 2851U;
volatile uint16_t x24 = 1242U;
int16_t x35 = INT16_MIN;
volatile uint64_t t7 = 825LLU;
int32_t x39 = -2963029;
volatile int8_t x41 = INT8_MIN;
int8_t x45 = 1;
int32_t x52 = INT32_MIN;
volatile int64_t t11 = -999LL;
static uint16_t x55 = UINT16_MAX;
static volatile int32_t t12 = 18131;
volatile uint8_t x58 = 0U;
uint64_t x59 = 3226375LLU;
static int16_t x64 = INT16_MIN;
int32_t t14 = -1;
volatile int16_t x79 = -1;
uint32_t x80 = 1012233096U;
static volatile int64_t x98 = 10315599LL;
int64_t x100 = -1LL;
int32_t x111 = -82619089;
static int8_t x125 = INT8_MIN;
volatile int64_t t24 = -274130595LL;
static uint64_t x133 = 1026594LLU;
volatile uint64_t t25 = 6641481846004LLU;
static int8_t x137 = INT8_MIN;
uint16_t x140 = UINT16_MAX;
volatile uint32_t x144 = 14U;
int8_t x149 = 26;
int32_t x159 = INT32_MIN;
uint16_t x160 = 780U;
static int32_t x161 = INT32_MAX;
int32_t x163 = INT32_MIN;
int16_t x165 = INT16_MAX;
int32_t x176 = 4459;
volatile uint32_t t36 = 430008U;
int16_t x213 = -1;
int64_t t37 = 93509239975LL;
uint64_t x218 = 1331053772089LLU;
static uint64_t x222 = 13744LLU;
uint16_t x227 = UINT16_MAX;
static int16_t x228 = -7666;
uint32_t x230 = 73317U;
static uint64_t x235 = UINT64_MAX;
volatile int64_t x246 = -1LL;
int16_t x247 = INT16_MAX;
uint8_t x258 = 1U;
int8_t x259 = 1;
static volatile int16_t x286 = 1556;
uint8_t x297 = 12U;
int16_t x304 = INT16_MIN;
int32_t t53 = -18;
static volatile int32_t x314 = -25401634;
int8_t x316 = INT8_MIN;
static uint16_t x321 = 53U;
static int8_t x335 = 1;
volatile uint32_t t59 = 191U;
volatile uint32_t t60 = 190621U;
static int16_t x351 = -1;
int16_t x355 = -11147;
volatile uint32_t t62 = 1U;
uint8_t x357 = 38U;
volatile int64_t t64 = -6LL;
int16_t x366 = INT16_MIN;
static int8_t x369 = 13;
int32_t x388 = 6233;
uint64_t t69 = 3896753205845502LLU;
static int8_t x399 = -5;
int64_t x401 = 970433227LL;
static int16_t x403 = -1;
int64_t t72 = 96874LL;
uint32_t x423 = 103U;
uint8_t x424 = 95U;
uint64_t x429 = UINT64_MAX;
int8_t x445 = INT8_MIN;
uint32_t x451 = UINT32_MAX;
int16_t x465 = INT16_MIN;
int64_t x466 = INT64_MIN;
volatile int16_t x476 = INT16_MIN;
uint32_t x480 = 3767U;
int32_t x491 = -13;
int64_t x494 = -1LL;
int64_t t86 = 688189003713LL;
int16_t x511 = 17;
uint16_t x514 = 924U;
int16_t x519 = 13;
int8_t x520 = 5;
int16_t x526 = INT16_MIN;
static volatile int16_t x530 = 0;
uint32_t x541 = UINT32_MAX;
uint64_t t92 = 298889472535LLU;
uint64_t x549 = 28424LLU;
uint8_t x551 = 12U;
static uint64_t t93 = 121981793233LLU;
int64_t x561 = INT64_MAX;
volatile int64_t t94 = 232537662085710480LL;
int64_t x565 = INT64_MIN;
volatile uint64_t t95 = 14LLU;
int8_t x581 = -1;
int64_t x583 = 29414347760LL;
int8_t x585 = 0;
static int32_t x595 = INT32_MIN;
volatile uint64_t t99 = 843LLU;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static uint32_t x2 = UINT32_MAX;
	static int64_t x3 = INT64_MAX;
	static int32_t x4 = -1;
	volatile int64_t t0 = 15LL;

	t0 = ((x1+(x2-x3))+x4);

	if (t0 != -9223372032559808641LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x7 = INT8_MAX;
	int32_t x8 = INT32_MAX;
	int32_t t1 = 49;

	t1 = ((x5+(x6-x7))+x8);

	if (t1 != 2147483526) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x9 = 87062LLU;
	uint64_t x10 = 17281106LLU;
	static volatile int16_t x11 = INT16_MIN;
	int8_t x12 = -1;
	volatile uint64_t t2 = 185LLU;

	t2 = ((x9+(x10-x11))+x12);

	if (t2 != 17400935LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -3;
	uint16_t x14 = 5636U;
	volatile int16_t x15 = INT16_MIN;
	uint32_t x16 = 14U;
	uint32_t t3 = 641U;

	t3 = ((x13+(x14-x15))+x16);

	if (t3 != 38415U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x18 = UINT32_MAX;
	static int16_t x19 = INT16_MIN;
	volatile int32_t x20 = -1;
	uint32_t t4 = 770902U;

	t4 = ((x17+(x18-x19))+x20);

	if (t4 != 35617U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 31U;
	int8_t x22 = -1;
	static int16_t x23 = INT16_MAX;
	uint32_t t5 = 492772232U;

	t5 = ((x21+(x22-x23))+x24);

	if (t5 != 4294935801U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x29 = UINT64_MAX;
	int64_t x30 = -1LL;
	volatile int8_t x31 = 3;
	volatile int64_t x32 = -1LL;
	static volatile uint64_t t6 = 35307098LLU;

	t6 = ((x29+(x30-x31))+x32);

	if (t6 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x33 = 13U;
	int32_t x34 = -3;
	uint64_t x36 = 1848314LLU;

	t7 = ((x33+(x34-x35))+x36);

	if (t7 != 1881092LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = 13U;
	int16_t x38 = -10352;
	int64_t x40 = INT64_MIN;
	volatile int64_t t8 = -207038738LL;

	t8 = ((x37+(x38-x39))+x40);

	if (t8 != -9223372036851823118LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x42 = INT16_MAX;
	static volatile int32_t x43 = 8;
	int32_t x44 = INT32_MIN;
	volatile int32_t t9 = -19293;

	t9 = ((x41+(x42-x43))+x44);

	if (t9 != -2147451017) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x46 = 21U;
	int32_t x47 = -7;
	uint32_t x48 = 145U;
	volatile uint32_t t10 = 6426U;

	t10 = ((x45+(x46-x47))+x48);

	if (t10 != 174U) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = UINT8_MAX;
	int64_t x50 = -1LL;
	int16_t x51 = 19;

	t11 = ((x49+(x50-x51))+x52);

	if (t11 != -2147483413LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = INT8_MIN;
	static volatile int16_t x54 = -25;
	static int8_t x56 = -7;

	t12 = ((x53+(x54-x55))+x56);

	if (t12 != -65695) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x57 = INT32_MIN;
	uint16_t x60 = 11U;
	volatile uint64_t t13 = 800315623087715405LLU;

	t13 = ((x57+(x58-x59))+x60);

	if (t13 != 18446744071558841604LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x61 = -8;
	volatile uint8_t x62 = 0U;
	volatile uint16_t x63 = 327U;

	t14 = ((x61+(x62-x63))+x64);

	if (t14 != -33103) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = UINT16_MAX;
	uint64_t x66 = 1LLU;
	int32_t x67 = -2;
	static uint64_t x68 = 1113266357309418134LLU;
	volatile uint64_t t15 = 486826649981LLU;

	t15 = ((x65+(x66-x67))+x68);

	if (t15 != 1113266357309483672LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x69 = 10;
	volatile uint64_t x70 = 1368012933363632595LLU;
	int16_t x71 = -1;
	static volatile int64_t x72 = INT64_MAX;
	static uint64_t t16 = 11605806LLU;

	t16 = ((x69+(x70-x71))+x72);

	if (t16 != 10591384970218408413LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x77 = -189067495700LL;
	int64_t x78 = 284959638LL;
	volatile int64_t t17 = -599812579576545478LL;

	t17 = ((x77+(x78-x79))+x80);

	if (t17 != -187770302965LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x89 = 1167;
	static uint8_t x90 = 12U;
	static volatile uint8_t x91 = 0U;
	static volatile int32_t x92 = INT32_MIN;
	int32_t t18 = 106583299;

	t18 = ((x89+(x90-x91))+x92);

	if (t18 != -2147482469) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x93 = INT64_MIN;
	uint64_t x94 = 66332264LLU;
	uint8_t x95 = UINT8_MAX;
	static int32_t x96 = 30572;
	volatile uint64_t t19 = 3954803LLU;

	t19 = ((x93+(x94-x95))+x96);

	if (t19 != 9223372036921138389LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x97 = 215290772002258LLU;
	uint8_t x99 = 7U;
	uint64_t t20 = 12480101828593LLU;

	t20 = ((x97+(x98-x99))+x100);

	if (t20 != 215290782317849LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x101 = 25451LLU;
	volatile uint16_t x102 = 3453U;
	int16_t x103 = -1;
	int16_t x104 = INT16_MAX;
	volatile uint64_t t21 = 1702006637509550LLU;

	t21 = ((x101+(x102-x103))+x104);

	if (t21 != 61672LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x109 = UINT8_MAX;
	static int8_t x110 = INT8_MIN;
	static uint8_t x112 = 40U;
	static volatile int32_t t22 = 14809;

	t22 = ((x109+(x110-x111))+x112);

	if (t22 != 82619256) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x126 = INT64_MIN;
	int8_t x127 = INT8_MIN;
	uint8_t x128 = UINT8_MAX;
	volatile int64_t t23 = -3362187315LL;

	t23 = ((x125+(x126-x127))+x128);

	if (t23 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x129 = INT64_MIN;
	static int16_t x130 = INT16_MIN;
	static uint32_t x131 = 335U;
	volatile uint16_t x132 = 26721U;

	t24 = ((x129+(x130-x131))+x132);

	if (t24 != -9223372032559814894LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x134 = INT64_MAX;
	uint8_t x135 = UINT8_MAX;
	static volatile uint32_t x136 = 1237U;

	t25 = ((x133+(x134-x135))+x136);

	if (t25 != 9223372036855803383LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x138 = INT8_MAX;
	int8_t x139 = INT8_MIN;
	static int32_t t26 = 21728971;

	t26 = ((x137+(x138-x139))+x140);

	if (t26 != 65662) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x141 = UINT32_MAX;
	volatile uint16_t x142 = 0U;
	int8_t x143 = -9;
	uint32_t t27 = 40U;

	t27 = ((x141+(x142-x143))+x144);

	if (t27 != 22U) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x145 = INT8_MAX;
	volatile int64_t x146 = -1LL;
	volatile uint16_t x147 = 20347U;
	static volatile int16_t x148 = 6957;
	static int64_t t28 = 59676446LL;

	t28 = ((x145+(x146-x147))+x148);

	if (t28 != -13264LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x150 = -1LL;
	volatile uint16_t x151 = UINT16_MAX;
	volatile uint8_t x152 = UINT8_MAX;
	int64_t t29 = -57623582168182479LL;

	t29 = ((x149+(x150-x151))+x152);

	if (t29 != -65255LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x157 = -10747450;
	int16_t x158 = INT16_MIN;
	int32_t t30 = -6737;

	t30 = ((x157+(x158-x159))+x160);

	if (t30 != 2136704210) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x162 = -35753208741665LL;
	volatile int8_t x164 = -1;
	volatile int64_t t31 = 6907950865705781LL;

	t31 = ((x161+(x162-x163))+x164);

	if (t31 != -35748913774371LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x166 = -1LL;
	volatile int32_t x167 = -1;
	static volatile int32_t x168 = -1;
	volatile int64_t t32 = 793LL;

	t32 = ((x165+(x166-x167))+x168);

	if (t32 != 32766LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x169 = 6499LL;
	int16_t x170 = -14484;
	volatile int64_t x171 = -1LL;
	uint64_t x172 = UINT64_MAX;
	volatile uint64_t t33 = 11349669957816LLU;

	t33 = ((x169+(x170-x171))+x172);

	if (t33 != 18446744073709543631LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x173 = 1;
	volatile int32_t x174 = -1;
	int16_t x175 = 3;
	int32_t t34 = 8323939;

	t34 = ((x173+(x174-x175))+x176);

	if (t34 != 4456) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x185 = 1896830LLU;
	volatile int64_t x186 = -31723416LL;
	int64_t x187 = 96LL;
	int64_t x188 = INT64_MAX;
	uint64_t t35 = 529225289993742LLU;

	t35 = ((x185+(x186-x187))+x188);

	if (t35 != 9223372036824949125LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x197 = -157;
	static uint32_t x198 = UINT32_MAX;
	static uint8_t x199 = UINT8_MAX;
	int32_t x200 = -7781;

	t36 = ((x197+(x198-x199))+x200);

	if (t36 != 4294959102U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x214 = -7294;
	int64_t x215 = INT64_MIN;
	int32_t x216 = -17;

	t37 = ((x213+(x214-x215))+x216);

	if (t37 != 9223372036854768496LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x217 = -1;
	uint8_t x219 = 44U;
	static volatile int8_t x220 = INT8_MIN;
	volatile uint64_t t38 = 40647218LLU;

	t38 = ((x217+(x218-x219))+x220);

	if (t38 != 1331053771916LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x221 = INT8_MAX;
	int64_t x223 = INT64_MIN;
	int32_t x224 = INT32_MAX;
	volatile uint64_t t39 = 830LLU;

	t39 = ((x221+(x222-x223))+x224);

	if (t39 != 9223372039002273326LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x225 = -1;
	int8_t x226 = INT8_MIN;
	int32_t t40 = 47283209;

	t40 = ((x225+(x226-x227))+x228);

	if (t40 != -73330) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x229 = INT32_MAX;
	uint8_t x231 = UINT8_MAX;
	volatile uint32_t x232 = UINT32_MAX;
	volatile uint32_t t41 = 2217722U;

	t41 = ((x229+(x230-x231))+x232);

	if (t41 != 2147556708U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x233 = INT64_MAX;
	uint8_t x234 = 42U;
	uint16_t x236 = 201U;
	uint64_t t42 = 2521984671943068116LLU;

	t42 = ((x233+(x234-x235))+x236);

	if (t42 != 9223372036854776051LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x245 = 1;
	int8_t x248 = -1;
	volatile int64_t t43 = -11142016LL;

	t43 = ((x245+(x246-x247))+x248);

	if (t43 != -32768LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x249 = INT16_MIN;
	int64_t x250 = INT64_MAX;
	int8_t x251 = 6;
	volatile int32_t x252 = 85;
	static int64_t t44 = 1LL;

	t44 = ((x249+(x250-x251))+x252);

	if (t44 != 9223372036854743118LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x253 = 2;
	int32_t x254 = INT32_MAX;
	uint16_t x255 = 2026U;
	static int8_t x256 = INT8_MAX;
	volatile int32_t t45 = -1;

	t45 = ((x253+(x254-x255))+x256);

	if (t45 != 2147481750) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x257 = INT32_MIN;
	uint16_t x260 = 0U;
	volatile int32_t t46 = INT32_MIN;

	t46 = ((x257+(x258-x259))+x260);

	if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x261 = INT8_MIN;
	volatile int8_t x262 = INT8_MIN;
	int8_t x263 = INT8_MAX;
	int8_t x264 = -43;
	volatile int32_t t47 = -665215;

	t47 = ((x261+(x262-x263))+x264);

	if (t47 != -426) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x269 = INT64_MIN;
	static uint32_t x270 = 14459U;
	static int8_t x271 = 11;
	uint8_t x272 = UINT8_MAX;
	int64_t t48 = -12389702966LL;

	t48 = ((x269+(x270-x271))+x272);

	if (t48 != -9223372036854761105LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x285 = 399998588;
	static int16_t x287 = -230;
	int64_t x288 = INT64_MIN;
	int64_t t49 = -1345363492987LL;

	t49 = ((x285+(x286-x287))+x288);

	if (t49 != -9223372036454775434LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x289 = -435608976LL;
	static volatile uint32_t x290 = 927U;
	int8_t x291 = INT8_MIN;
	static uint64_t x292 = 648091313236612LLU;
	volatile uint64_t t50 = 241863718LLU;

	t50 = ((x289+(x290-x291))+x292);

	if (t50 != 648090877628691LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x293 = 18U;
	int8_t x294 = INT8_MAX;
	int8_t x295 = INT8_MIN;
	uint32_t x296 = 517994U;
	volatile uint32_t t51 = 0U;

	t51 = ((x293+(x294-x295))+x296);

	if (t51 != 518267U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x298 = 3U;
	int8_t x299 = -1;
	static int8_t x300 = INT8_MIN;
	volatile uint32_t t52 = 841202U;

	t52 = ((x297+(x298-x299))+x300);

	if (t52 != 4294967184U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x301 = INT16_MAX;
	uint16_t x302 = 1U;
	int8_t x303 = -1;

	t53 = ((x301+(x302-x303))+x304);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x305 = UINT32_MAX;
	static int16_t x306 = -20;
	static volatile int32_t x307 = -1;
	int32_t x308 = 835;
	volatile uint32_t t54 = 247765U;

	t54 = ((x305+(x306-x307))+x308);

	if (t54 != 815U) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x309 = UINT32_MAX;
	volatile uint8_t x310 = 94U;
	int16_t x311 = INT16_MIN;
	uint32_t x312 = UINT32_MAX;
	uint32_t t55 = 96U;

	t55 = ((x309+(x310-x311))+x312);

	if (t55 != 32860U) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x313 = 2;
	int32_t x315 = INT32_MIN;
	static int32_t t56 = 2;

	t56 = ((x313+(x314-x315))+x316);

	if (t56 != 2122081888) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x322 = -4;
	uint16_t x323 = 28U;
	int8_t x324 = INT8_MIN;
	volatile int32_t t57 = 181;

	t57 = ((x321+(x322-x323))+x324);

	if (t57 != -107) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x333 = 1;
	int16_t x334 = 1266;
	uint16_t x336 = 464U;
	int32_t t58 = 72;

	t58 = ((x333+(x334-x335))+x336);

	if (t58 != 1730) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x337 = INT16_MIN;
	uint32_t x338 = 1974U;
	uint8_t x339 = UINT8_MAX;
	int16_t x340 = INT16_MAX;

	t59 = ((x337+(x338-x339))+x340);

	if (t59 != 1718U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x345 = 15;
	uint8_t x346 = UINT8_MAX;
	uint32_t x347 = UINT32_MAX;
	static int16_t x348 = -13;

	t60 = ((x345+(x346-x347))+x348);

	if (t60 != 258U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x349 = 13;
	int32_t x350 = -1;
	int16_t x352 = INT16_MIN;
	volatile int32_t t61 = -184275;

	t61 = ((x349+(x350-x351))+x352);

	if (t61 != -32755) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x353 = UINT32_MAX;
	int8_t x354 = INT8_MIN;
	volatile int16_t x356 = INT16_MIN;

	t62 = ((x353+(x354-x355))+x356);

	if (t62 != 4294945546U) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x358 = 624LLU;
	static int64_t x359 = INT64_MIN;
	uint16_t x360 = 1030U;
	uint64_t t63 = 6LLU;

	t63 = ((x357+(x358-x359))+x360);

	if (t63 != 9223372036854777500LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x361 = INT64_MIN;
	uint32_t x362 = UINT32_MAX;
	static uint8_t x363 = 25U;
	uint8_t x364 = 0U;

	t64 = ((x361+(x362-x363))+x364);

	if (t64 != -9223372032559808538LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x365 = 21U;
	static volatile uint8_t x367 = 0U;
	int16_t x368 = -3;
	int32_t t65 = -12254;

	t65 = ((x365+(x366-x367))+x368);

	if (t65 != -32750) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x370 = INT8_MAX;
	int16_t x371 = -1;
	int16_t x372 = INT16_MIN;
	volatile int32_t t66 = -398354436;

	t66 = ((x369+(x370-x371))+x372);

	if (t66 != -32627) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x377 = -2;
	int16_t x378 = -27;
	static int16_t x379 = INT16_MIN;
	static volatile int64_t x380 = INT64_MIN;
	volatile int64_t t67 = 3671384773789LL;

	t67 = ((x377+(x378-x379))+x380);

	if (t67 != -9223372036854743069LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x385 = -1;
	volatile int16_t x386 = 490;
	int16_t x387 = INT16_MIN;
	volatile int32_t t68 = 53618129;

	t68 = ((x385+(x386-x387))+x388);

	if (t68 != 39490) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x393 = INT32_MIN;
	static int64_t x394 = 11LL;
	volatile uint8_t x395 = 12U;
	uint64_t x396 = 97888667841209789LLU;

	t69 = ((x393+(x394-x395))+x396);

	if (t69 != 97888665693726140LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x397 = 3953436U;
	volatile uint8_t x398 = UINT8_MAX;
	static int32_t x400 = -1;
	uint32_t t70 = 0U;

	t70 = ((x397+(x398-x399))+x400);

	if (t70 != 3953695U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x402 = UINT64_MAX;
	int16_t x404 = INT16_MIN;
	uint64_t t71 = 2083449298159863397LLU;

	t71 = ((x401+(x402-x403))+x404);

	if (t71 != 970400459LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x405 = 1U;
	int16_t x406 = 323;
	int64_t x407 = -2753383LL;
	int64_t x408 = -1LL;

	t72 = ((x405+(x406-x407))+x408);

	if (t72 != 2753706LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x421 = UINT8_MAX;
	uint64_t x422 = UINT64_MAX;
	volatile uint64_t t73 = 543LLU;

	t73 = ((x421+(x422-x423))+x424);

	if (t73 != 246LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x430 = 1457540345U;
	int8_t x431 = INT8_MIN;
	int8_t x432 = -1;
	volatile uint64_t t74 = 252758702LLU;

	t74 = ((x429+(x430-x431))+x432);

	if (t74 != 1457540471LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x441 = UINT32_MAX;
	int32_t x442 = INT32_MIN;
	uint32_t x443 = UINT32_MAX;
	int16_t x444 = -64;
	uint32_t t75 = 1215U;

	t75 = ((x441+(x442-x443))+x444);

	if (t75 != 2147483584U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x446 = INT32_MIN;
	int16_t x447 = INT16_MIN;
	uint16_t x448 = UINT16_MAX;
	static volatile int32_t t76 = -2108314;

	t76 = ((x445+(x446-x447))+x448);

	if (t76 != -2147385473) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x449 = -1;
	int64_t x450 = -1LL;
	static uint64_t x452 = 112320732LLU;
	volatile uint64_t t77 = 128948320LLU;

	t77 = ((x449+(x450-x451))+x452);

	if (t77 != 18446744069526905051LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x461 = 506203LL;
	uint32_t x462 = UINT32_MAX;
	int16_t x463 = 1;
	int8_t x464 = 26;
	volatile int64_t t78 = -1192785780LL;

	t78 = ((x461+(x462-x463))+x464);

	if (t78 != 4295473523LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x467 = INT32_MIN;
	volatile int64_t x468 = 1276537020154426383LL;
	static volatile int64_t t79 = 6LL;

	t79 = ((x465+(x466-x467))+x468);

	if (t79 != -7946835014552898545LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x469 = 0;
	volatile uint8_t x470 = 8U;
	int16_t x471 = INT16_MIN;
	volatile uint32_t x472 = 240U;
	volatile uint32_t t80 = 219077U;

	t80 = ((x469+(x470-x471))+x472);

	if (t80 != 33016U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x473 = INT64_MAX;
	static int16_t x474 = INT16_MIN;
	int8_t x475 = 1;
	int64_t t81 = 575LL;

	t81 = ((x473+(x474-x475))+x476);

	if (t81 != 9223372036854710270LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x477 = -8;
	int16_t x478 = INT16_MIN;
	int16_t x479 = -1;
	static volatile uint32_t t82 = 4U;

	t82 = ((x477+(x478-x479))+x480);

	if (t82 != 4294938288U) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x485 = INT32_MIN;
	static int16_t x486 = INT16_MIN;
	static volatile int64_t x487 = -1LL;
	uint32_t x488 = 3638291U;
	volatile int64_t t83 = -13LL;

	t83 = ((x485+(x486-x487))+x488);

	if (t83 != -2143878124LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x489 = INT32_MIN;
	volatile uint64_t x490 = 358LLU;
	int8_t x492 = INT8_MIN;
	uint64_t t84 = 65617584847985802LLU;

	t84 = ((x489+(x490-x491))+x492);

	if (t84 != 18446744071562068211LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x493 = -5LL;
	uint64_t x495 = 173342996377833316LLU;
	static int64_t x496 = 16104038146LL;
	static volatile uint64_t t85 = 22944173222683LLU;

	t85 = ((x493+(x494-x495))+x496);

	if (t85 != 18273401093435756440LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x505 = 27648U;
	int64_t x506 = 89438LL;
	int32_t x507 = INT32_MIN;
	int8_t x508 = 4;

	t86 = ((x505+(x506-x507))+x508);

	if (t86 != 2147600738LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x509 = 108U;
	uint16_t x510 = 25U;
	uint16_t x512 = 24705U;
	volatile int32_t t87 = -31084;

	t87 = ((x509+(x510-x511))+x512);

	if (t87 != 24821) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x513 = -2LL;
	static volatile int16_t x515 = INT16_MIN;
	int32_t x516 = -1;
	int64_t t88 = -2784458149994689431LL;

	t88 = ((x513+(x514-x515))+x516);

	if (t88 != 33689LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x517 = UINT16_MAX;
	uint16_t x518 = 6U;
	volatile int32_t t89 = -19307;

	t89 = ((x517+(x518-x519))+x520);

	if (t89 != 65533) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x525 = 48746858200LLU;
	uint64_t x527 = 80573664211409LLU;
	static volatile int64_t x528 = -141046413401843661LL;
	static volatile uint64_t t90 = 1558962LLU;

	t90 = ((x525+(x526-x527))+x528);

	if (t90 != 18305617135390321978LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x529 = -1LL;
	static int32_t x531 = INT32_MAX;
	static int8_t x532 = INT8_MIN;
	static volatile int64_t t91 = -863473167783422917LL;

	t91 = ((x529+(x530-x531))+x532);

	if (t91 != -2147483776LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x542 = 1102426182781234991LLU;
	int16_t x543 = INT16_MIN;
	static volatile uint32_t x544 = UINT32_MAX;

	t92 = ((x541+(x542-x543))+x544);

	if (t92 != 1102426191371202349LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x550 = -1;
	int16_t x552 = 1;

	t93 = ((x549+(x550-x551))+x552);

	if (t93 != 28412LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x562 = INT16_MIN;
	uint16_t x563 = 0U;
	int16_t x564 = -1;

	t94 = ((x561+(x562-x563))+x564);

	if (t94 != 9223372036854743038LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x566 = 9552027389LLU;
	static volatile int16_t x567 = INT16_MIN;
	int8_t x568 = INT8_MAX;

	t95 = ((x565+(x566-x567))+x568);

	if (t95 != 9223372046406836092LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x582 = 450297U;
	uint8_t x584 = 0U;
	int64_t t96 = 15900960412204752LL;

	t96 = ((x581+(x582-x583))+x584);

	if (t96 != -29413897464LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x586 = INT8_MIN;
	static int8_t x587 = INT8_MIN;
	uint16_t x588 = 4U;
	int32_t t97 = 1;

	t97 = ((x585+(x586-x587))+x588);

	if (t97 != 4) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x589 = UINT32_MAX;
	volatile int32_t x590 = -1541;
	volatile int8_t x591 = 37;
	uint32_t x592 = 24463668U;
	volatile uint32_t t98 = 121080U;

	t98 = ((x589+(x590-x591))+x592);

	if (t98 != 24462089U) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x593 = -1LL;
	int16_t x594 = INT16_MIN;
	uint64_t x596 = 15LLU;

	t99 = ((x593+(x594-x595))+x596);

	if (t99 != 2147450894LLU) { NG(); } else { ; }
	
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

