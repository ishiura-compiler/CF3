#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x13 = 503U;
volatile uint16_t x14 = 1U;
int64_t x21 = INT64_MIN;
volatile uint64_t t4 = 11LLU;
volatile int32_t t8 = 44;
volatile uint16_t x46 = 6561U;
uint16_t x47 = UINT16_MAX;
volatile uint64_t x49 = 11408493622LLU;
volatile int16_t x65 = INT16_MAX;
static int64_t x76 = -1650202068783194959LL;
int64_t t15 = 49455933LL;
volatile int16_t x77 = INT16_MAX;
uint16_t x80 = UINT16_MAX;
volatile int64_t x86 = -1LL;
uint16_t x88 = UINT16_MAX;
volatile int64_t t18 = 125LL;
int8_t x90 = INT8_MIN;
int64_t x100 = -1LL;
int16_t x102 = INT16_MIN;
uint8_t x104 = 2U;
static int64_t t24 = 14320987324087605LL;
volatile uint16_t x118 = 1419U;
int32_t t25 = 26;
uint16_t x125 = UINT16_MAX;
int32_t x128 = INT32_MIN;
int8_t x138 = INT8_MIN;
volatile int8_t x139 = -1;
int16_t x140 = INT16_MIN;
int32_t t29 = 21024369;
int16_t x143 = 3;
volatile int64_t x148 = INT64_MIN;
int64_t x149 = INT64_MIN;
uint16_t x152 = 4529U;
volatile int32_t x161 = -1;
static uint16_t x162 = 7U;
int32_t x163 = -15351361;
int32_t x166 = INT32_MAX;
volatile uint64_t x174 = UINT64_MAX;
uint8_t x175 = UINT8_MAX;
int64_t x185 = INT64_MAX;
uint64_t x189 = 257870858627603LLU;
uint32_t x191 = UINT32_MAX;
static uint32_t x198 = 494974U;
volatile uint32_t x204 = 326597U;
uint32_t x212 = 26276U;
int16_t x214 = -1;
uint8_t x217 = 32U;
static volatile int32_t t48 = 1;
int64_t x235 = INT64_MIN;
volatile uint64_t x241 = 9838666LLU;
uint32_t x242 = 4189409U;
int32_t x243 = INT32_MIN;
static int8_t x259 = INT8_MIN;
int16_t x265 = -1;
uint32_t x269 = UINT32_MAX;
volatile int16_t x270 = -1666;
volatile uint16_t x271 = 1U;
static volatile int32_t x272 = -1;
uint16_t x281 = UINT16_MAX;
volatile uint8_t x282 = UINT8_MAX;
int64_t t58 = 233296LL;
int32_t x289 = INT32_MIN;
int8_t x292 = INT8_MAX;
static int16_t x298 = 14;
static int32_t t61 = -876904;
int32_t x303 = 42;
uint8_t x305 = 2U;
uint8_t x308 = 25U;
volatile int32_t x313 = 1141;
volatile int32_t t64 = 2;
uint8_t x318 = 24U;
static uint64_t t67 = 41044984LLU;
volatile int16_t x331 = INT16_MIN;
static volatile int64_t x335 = -1LL;
int16_t x341 = INT16_MIN;
static volatile int8_t x346 = INT8_MIN;
volatile int32_t x348 = INT32_MIN;
volatile uint32_t t71 = 26062U;
uint64_t x354 = 34400748526219LLU;
volatile int32_t x359 = 1970;
int32_t x360 = -1;
int64_t t74 = 1LL;
uint16_t x364 = 2885U;
int8_t x373 = -1;
int64_t x382 = INT64_MIN;
int64_t t80 = 8501LL;
int8_t x386 = INT8_MIN;
int32_t x393 = 1;
volatile int32_t x397 = INT32_MAX;
int8_t x400 = INT8_MAX;
int16_t x401 = -1;
int32_t x403 = INT32_MIN;
int64_t x405 = -1LL;
static volatile uint64_t x408 = 485747424498109LLU;
volatile uint64_t t86 = 1LLU;
static uint16_t x410 = 2U;
volatile int32_t x411 = -1;
volatile uint64_t x427 = 2809418665LLU;
static int8_t x431 = INT8_MIN;
static volatile uint64_t t92 = 3730822026948779LLU;
static int64_t x437 = -41317698235721LL;
volatile int64_t t93 = -66LL;
int64_t x442 = -4594866124LL;
static int64_t x445 = -1LL;
int32_t x453 = -159007651;
volatile uint32_t x455 = 21517U;
volatile int64_t t97 = -40239744682LL;
static volatile uint32_t t98 = 65710U;
int16_t x462 = -1621;
static int64_t x464 = -1LL;


void f0(void) {
	volatile int8_t x1 = -33;
	static int16_t x2 = INT16_MIN;
	int32_t x3 = -22;
	int32_t x4 = INT32_MAX;
	volatile int32_t t0 = -1028687;

	t0 = (((x1-x2)^x3)/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1916;
	uint16_t x6 = 7145U;
	int64_t x7 = INT64_MIN;
	int32_t x8 = -3408215;
	volatile int64_t t1 = 18837320855683LL;

	t1 = (((x5-x6)^x7)/x8);

	if (t1 != -2706217781699LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MIN;
	int16_t x10 = INT16_MIN;
	static int8_t x11 = INT8_MIN;
	int64_t x12 = INT64_MIN;
	volatile int64_t t2 = 79144166LL;

	t2 = (((x9-x10)^x11)/x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x15 = 3U;
	static int8_t x16 = 1;
	uint32_t t3 = 460U;

	t3 = (((x13-x14)^x15)/x16);

	if (t3 != 501U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x22 = INT8_MIN;
	volatile int8_t x23 = 29;
	static uint64_t x24 = 22539735527139172LLU;

	t4 = (((x21-x22)^x23)/x24);

	if (t4 != 409LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x25 = 1033982094;
	int8_t x26 = 4;
	static int8_t x27 = -53;
	int16_t x28 = INT16_MIN;
	volatile int32_t t5 = -355177554;

	t5 = (((x25-x26)^x27)/x28);

	if (t5 != 31554) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x29 = INT32_MIN;
	uint64_t x30 = 12374048884LLU;
	int16_t x31 = -1;
	uint64_t x32 = 243558547190494209LLU;
	volatile uint64_t t6 = 12386LLU;

	t6 = (((x29-x30)^x31)/x32);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = UINT16_MAX;
	int32_t x34 = -1;
	volatile int16_t x35 = INT16_MIN;
	uint64_t x36 = 12836757LLU;
	uint64_t t7 = 915085533LLU;

	t7 = (((x33-x34)^x35)/x36);

	if (t7 != 1437025260640LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x37 = UINT16_MAX;
	static uint8_t x38 = 5U;
	volatile int8_t x39 = INT8_MIN;
	int16_t x40 = INT16_MAX;

	t8 = (((x37-x38)^x39)/x40);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = INT16_MAX;
	static volatile int16_t x48 = INT16_MAX;
	volatile int32_t t9 = 45319711;

	t9 = (((x45-x46)^x47)/x48);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x50 = -1;
	uint8_t x51 = 31U;
	volatile int32_t x52 = 9;
	volatile uint64_t t10 = 6962662910623883116LLU;

	t10 = (((x49-x50)^x51)/x52);

	if (t10 != 1267610400LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x57 = -1791LL;
	uint32_t x58 = 44220U;
	int64_t x59 = INT64_MIN;
	uint16_t x60 = 1U;
	volatile int64_t t11 = -3426276984371790268LL;

	t11 = (((x57-x58)^x59)/x60);

	if (t11 != 9223372036854729797LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x61 = INT64_MAX;
	volatile uint16_t x62 = 38U;
	int32_t x63 = 7;
	volatile uint64_t x64 = 118443851065LLU;
	static uint64_t t12 = 229148205387LLU;

	t12 = (((x61-x62)^x63)/x64);

	if (t12 != 77871260LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x66 = 711475700533664626LL;
	int32_t x67 = INT32_MAX;
	uint16_t x68 = 1U;
	volatile int64_t t13 = -5LL;

	t13 = (((x65-x66)^x67)/x68);

	if (t13 != -711475700109862030LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x69 = 24U;
	volatile uint32_t x70 = 3U;
	int64_t x71 = -1LL;
	uint64_t x72 = UINT64_MAX;
	volatile uint64_t t14 = 85LLU;

	t14 = (((x69-x70)^x71)/x72);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = -1;
	int32_t x74 = -412601;
	static volatile int16_t x75 = INT16_MIN;

	t15 = (((x73-x74)^x75)/x76);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x78 = UINT8_MAX;
	uint8_t x79 = 14U;
	volatile int32_t t16 = 22828311;

	t16 = (((x77-x78)^x79)/x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x81 = -3927404143005070LL;
	int16_t x82 = -1;
	static uint32_t x83 = 3U;
	int32_t x84 = INT32_MIN;
	int64_t t17 = 1000863577395LL;

	t17 = (((x81-x82)^x83)/x84);

	if (t17 != 1828840LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x85 = UINT32_MAX;
	int32_t x87 = INT32_MIN;

	t18 = (((x85-x86)^x87)/x88);

	if (t18 != -98305LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x89 = UINT64_MAX;
	volatile uint64_t x91 = 10839LLU;
	static volatile int16_t x92 = -111;
	uint64_t t19 = 731451416LLU;

	t19 = (((x89-x90)^x91)/x92);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x93 = -1LL;
	volatile uint32_t x94 = 30151336U;
	uint8_t x95 = 6U;
	volatile uint64_t x96 = 28333552LLU;
	uint64_t t20 = 306405280LLU;

	t20 = (((x93-x94)^x95)/x96);

	if (t20 != 651056530917LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x97 = INT16_MAX;
	uint32_t x98 = 16U;
	int8_t x99 = INT8_MIN;
	int64_t t21 = -1859LL;

	t21 = (((x97-x98)^x99)/x100);

	if (t21 != -4294934639LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x101 = 0U;
	int32_t x103 = INT32_MIN;
	int32_t t22 = -520336921;

	t22 = (((x101-x102)^x103)/x104);

	if (t22 != -1073725440) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x109 = 3U;
	uint32_t x110 = UINT32_MAX;
	uint8_t x111 = UINT8_MAX;
	static uint64_t x112 = UINT64_MAX;
	static uint64_t t23 = 20012436774LLU;

	t23 = (((x109-x110)^x111)/x112);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x113 = 1230U;
	static int64_t x114 = INT64_MAX;
	int32_t x115 = INT32_MAX;
	int8_t x116 = INT8_MAX;

	t24 = (((x113-x114)^x115)/x116);

	if (t24 != -72624976651238530LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x117 = -1;
	int32_t x119 = 200466;
	int32_t x120 = INT32_MIN;

	t25 = (((x117-x118)^x119)/x120);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint8_t x126 = 3U;
	uint16_t x127 = 3U;
	static int32_t t26 = 4274;

	t26 = (((x125-x126)^x127)/x128);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x129 = 4856986378LL;
	int64_t x130 = -1LL;
	int16_t x131 = 13;
	int16_t x132 = INT16_MAX;
	int64_t t27 = 20581473LL;

	t27 = (((x129-x130)^x131)/x132);

	if (t27 != 148227LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x133 = -502816526;
	volatile int8_t x134 = 0;
	int64_t x135 = -1LL;
	int32_t x136 = 15733525;
	volatile int64_t t28 = 0LL;

	t28 = (((x133-x134)^x135)/x136);

	if (t28 != 31LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x137 = 431U;

	t29 = (((x137-x138)^x139)/x140);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x141 = 370089974930997457LL;
	int16_t x142 = INT16_MAX;
	static int16_t x144 = INT16_MIN;
	volatile int64_t t30 = -6306515514357023LL;

	t30 = (((x141-x142)^x143)/x144);

	if (t30 != -11294249723235LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x145 = 24921280;
	uint16_t x146 = 0U;
	int16_t x147 = INT16_MAX;
	int64_t t31 = 12166541144842LL;

	t31 = (((x145-x146)^x147)/x148);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x150 = 0;
	volatile uint8_t x151 = 6U;
	volatile int64_t t32 = 12310364LL;

	t32 = (((x149-x150)^x151)/x152);

	if (t32 != -2036514028892642LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x153 = 3U;
	uint8_t x154 = 34U;
	int32_t x155 = INT32_MAX;
	static int64_t x156 = INT64_MIN;
	volatile int64_t t33 = -1161989802899LL;

	t33 = (((x153-x154)^x155)/x156);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x157 = UINT64_MAX;
	int16_t x158 = 0;
	uint8_t x159 = 102U;
	static int16_t x160 = INT16_MAX;
	static volatile uint64_t t34 = 110LLU;

	t34 = (((x157-x158)^x159)/x160);

	if (t34 != 562967133814799LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x164 = 12U;
	static int32_t t35 = -7456;

	t35 = (((x161-x162)^x163)/x164);

	if (t35 != 1279280) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x165 = 2550;
	static int32_t x167 = INT32_MIN;
	static uint32_t x168 = UINT32_MAX;
	uint32_t t36 = 2903U;

	t36 = (((x165-x166)^x167)/x168);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x169 = 2U;
	int64_t x170 = INT64_MAX;
	volatile int64_t x171 = -1LL;
	int32_t x172 = INT32_MAX;
	volatile int64_t t37 = -4525LL;

	t37 = (((x169-x170)^x171)/x172);

	if (t37 != 4294967297LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x173 = UINT16_MAX;
	volatile int32_t x176 = INT32_MAX;
	uint64_t t38 = 50191135553LLU;

	t38 = (((x173-x174)^x175)/x176);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x177 = INT16_MAX;
	uint8_t x178 = 23U;
	volatile int16_t x179 = -1;
	static int64_t x180 = 248930362LL;
	int64_t t39 = 110050LL;

	t39 = (((x177-x178)^x179)/x180);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x181 = INT16_MIN;
	int64_t x182 = INT64_MIN;
	static uint64_t x183 = UINT64_MAX;
	static int32_t x184 = INT32_MAX;
	uint64_t t40 = 308LLU;

	t40 = (((x181-x182)^x183)/x184);

	if (t40 != 4294967298LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x186 = 112905U;
	volatile int8_t x187 = INT8_MIN;
	static uint8_t x188 = 8U;
	static volatile int64_t t41 = 547847LL;

	t41 = (((x185-x186)^x187)/x188);

	if (t41 != -1152921504606832849LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x190 = 2U;
	int64_t x192 = INT64_MIN;
	volatile uint64_t t42 = 14105714LLU;

	t42 = (((x189-x190)^x191)/x192);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x197 = -11003LL;
	int8_t x199 = INT8_MAX;
	int8_t x200 = INT8_MIN;
	int64_t t43 = 32LL;

	t43 = (((x197-x198)^x199)/x200);

	if (t43 != 3952LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x201 = 10U;
	volatile int32_t x202 = INT32_MIN;
	uint16_t x203 = 16563U;
	static uint32_t t44 = 10U;

	t44 = (((x201-x202)^x203)/x204);

	if (t44 != 6575U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x205 = 15267LL;
	volatile int8_t x206 = INT8_MIN;
	int64_t x207 = INT64_MIN;
	static int64_t x208 = INT64_MIN;
	static volatile int64_t t45 = -27992526LL;

	t45 = (((x205-x206)^x207)/x208);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x209 = -91078440LL;
	int16_t x210 = 0;
	int16_t x211 = INT16_MAX;
	volatile int64_t t46 = 98442775106LL;

	t46 = (((x209-x210)^x211)/x212);

	if (t46 != -3466LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x213 = INT8_MAX;
	uint64_t x215 = UINT64_MAX;
	int8_t x216 = -1;
	uint64_t t47 = 16354LLU;

	t47 = (((x213-x214)^x215)/x216);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x218 = INT32_MAX;
	int8_t x219 = -1;
	volatile uint16_t x220 = UINT16_MAX;

	t48 = (((x217-x218)^x219)/x220);

	if (t48 != 32768) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x229 = 13;
	uint32_t x230 = UINT32_MAX;
	uint64_t x231 = 989930224980032LLU;
	uint16_t x232 = 301U;
	static volatile uint64_t t49 = 823776073309LLU;

	t49 = (((x229-x230)^x231)/x232);

	if (t49 != 3288804734152LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x233 = -62;
	static uint16_t x234 = 15527U;
	volatile uint32_t x236 = UINT32_MAX;
	int64_t t50 = 116552692LL;

	t50 = (((x233-x234)^x235)/x236);

	if (t50 != 2147483648LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x244 = -11;
	volatile uint64_t t51 = 3LLU;

	t51 = (((x241-x242)^x243)/x244);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x253 = INT16_MAX;
	uint32_t x254 = UINT32_MAX;
	static int32_t x255 = INT32_MAX;
	uint16_t x256 = 71U;
	volatile uint32_t t52 = 29222825U;

	t52 = (((x253-x254)^x255)/x256);

	if (t52 != 30245787U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x257 = INT8_MIN;
	uint32_t x258 = 1030974971U;
	int64_t x260 = -1LL;
	volatile int64_t t53 = -15406871LL;

	t53 = (((x257-x258)^x259)/x260);

	if (t53 != -1030974981LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x266 = 16576322959983LLU;
	uint32_t x267 = 3U;
	uint16_t x268 = 20300U;
	static volatile uint64_t t54 = 156455077060662LLU;

	t54 = (((x265-x266)^x267)/x268);

	if (t54 != 908705788048600LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint32_t t55 = 15423714U;

	t55 = (((x269-x270)^x271)/x272);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x273 = INT16_MIN;
	volatile int8_t x274 = INT8_MIN;
	int64_t x275 = INT64_MIN;
	volatile uint32_t x276 = 225770039U;
	static volatile int64_t t56 = 514410831LL;

	t56 = (((x273-x274)^x275)/x276);

	if (t56 != 40852949654LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x277 = INT64_MAX;
	int8_t x278 = INT8_MAX;
	volatile uint32_t x279 = 14743706U;
	volatile uint32_t x280 = 472572U;
	volatile int64_t t57 = -39LL;

	t57 = (((x277-x278)^x279)/x280);

	if (t57 != 19517390020653LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x283 = UINT16_MAX;
	static int64_t x284 = INT64_MAX;

	t58 = (((x281-x282)^x283)/x284);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x290 = -1LL;
	volatile int16_t x291 = 0;
	volatile int64_t t59 = -1LL;

	t59 = (((x289-x290)^x291)/x292);

	if (t59 != -16909320LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x293 = -1;
	int64_t x294 = INT64_MIN;
	int16_t x295 = INT16_MAX;
	int64_t x296 = 97344545658967LL;
	int64_t t60 = 222023385LL;

	t60 = (((x293-x294)^x295)/x296);

	if (t60 != 94749LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x297 = -1;
	int16_t x299 = INT16_MAX;
	volatile int32_t x300 = -1;

	t61 = (((x297-x298)^x299)/x300);

	if (t61 != 32754) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x301 = -1;
	int8_t x302 = -1;
	int8_t x304 = INT8_MIN;
	volatile int32_t t62 = 19047;

	t62 = (((x301-x302)^x303)/x304);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x306 = 3U;
	uint64_t x307 = UINT64_MAX;
	static volatile uint64_t t63 = 425736749957698LLU;

	t63 = (((x305-x306)^x307)/x308);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x314 = INT8_MAX;
	int32_t x315 = 297799;
	int32_t x316 = 33;

	t64 = (((x313-x314)^x315)/x316);

	if (t64 != 9004) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x317 = -1LL;
	static volatile uint8_t x319 = 27U;
	uint64_t x320 = 7736LLU;
	volatile uint64_t t65 = 5506917754874049LLU;

	t65 = (((x317-x318)^x319)/x320);

	if (t65 != 2384532584502268LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x321 = 1091074LLU;
	static int8_t x322 = INT8_MIN;
	int64_t x323 = 346861795LL;
	int16_t x324 = 7756;
	static volatile uint64_t t66 = 9528086836507LLU;

	t66 = (((x321-x322)^x323)/x324);

	if (t66 != 44851LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x325 = INT32_MIN;
	uint32_t x326 = 3898U;
	int64_t x327 = INT64_MAX;
	uint64_t x328 = UINT64_MAX;

	t67 = (((x325-x326)^x327)/x328);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x329 = 20U;
	static volatile int32_t x330 = INT32_MAX;
	static uint32_t x332 = 5906953U;
	volatile uint32_t t68 = 237135432U;

	t68 = (((x329-x330)^x331)/x332);

	if (t68 != 363U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x333 = -880290873280386LL;
	int8_t x334 = INT8_MIN;
	int64_t x336 = -116847606583382LL;
	int64_t t69 = -3LL;

	t69 = (((x333-x334)^x335)/x336);

	if (t69 != -7LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x342 = 1529999729LLU;
	uint8_t x343 = UINT8_MAX;
	int16_t x344 = -1;
	volatile uint64_t t70 = 2922LLU;

	t70 = (((x341-x342)^x343)/x344);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x345 = UINT32_MAX;
	static int8_t x347 = -1;

	t71 = (((x345-x346)^x347)/x348);

	if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x349 = INT8_MIN;
	uint16_t x350 = UINT16_MAX;
	static volatile int32_t x351 = INT32_MAX;
	uint16_t x352 = UINT16_MAX;
	volatile int32_t t72 = -628029;

	t72 = (((x349-x350)^x351)/x352);

	if (t72 != -32767) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x353 = INT8_MAX;
	int8_t x355 = INT8_MIN;
	int64_t x356 = INT64_MIN;
	static uint64_t t73 = 764759LLU;

	t73 = (((x353-x354)^x355)/x356);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x357 = -1LL;
	static int8_t x358 = -1;

	t74 = (((x357-x358)^x359)/x360);

	if (t74 != -1970LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x361 = 6LLU;
	uint16_t x362 = 1U;
	int32_t x363 = -249609154;
	uint64_t t75 = 67234042277LLU;

	t75 = (((x361-x362)^x363)/x364);

	if (t75 != 6394018742967051LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x365 = INT8_MIN;
	int32_t x366 = -1;
	int16_t x367 = INT16_MIN;
	volatile int8_t x368 = INT8_MIN;
	int32_t t76 = -5;

	t76 = (((x365-x366)^x367)/x368);

	if (t76 != -255) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x369 = INT64_MAX;
	int64_t x370 = INT64_MAX;
	uint64_t x371 = UINT64_MAX;
	volatile int32_t x372 = INT32_MAX;
	volatile uint64_t t77 = 731982882LLU;

	t77 = (((x369-x370)^x371)/x372);

	if (t77 != 8589934596LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x374 = INT16_MAX;
	int32_t x375 = -1;
	uint8_t x376 = UINT8_MAX;
	volatile int32_t t78 = -34700;

	t78 = (((x373-x374)^x375)/x376);

	if (t78 != 128) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x377 = INT32_MAX;
	static uint64_t x378 = 24165LLU;
	static volatile int64_t x379 = INT64_MAX;
	uint32_t x380 = UINT32_MAX;
	uint64_t t79 = 1829LLU;

	t79 = (((x377-x378)^x379)/x380);

	if (t79 != 2147483648LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x381 = INT32_MIN;
	static int16_t x383 = INT16_MAX;
	volatile int8_t x384 = INT8_MIN;

	t80 = (((x381-x382)^x383)/x384);

	if (t80 != -72057594021150975LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x385 = -154645808846857475LL;
	volatile uint32_t x387 = 15734U;
	int16_t x388 = INT16_MAX;
	int64_t t81 = 3640921345034526LL;

	t81 = (((x385-x386)^x387)/x388);

	if (t81 != -4719559582715LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x389 = -471956253050326LL;
	uint32_t x390 = 230U;
	volatile uint8_t x391 = UINT8_MAX;
	static uint64_t x392 = 43782773918753LLU;
	static volatile uint64_t t82 = 89147094786478633LLU;

	t82 = (((x389-x390)^x391)/x392);

	if (t82 != 421313LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x394 = 4173U;
	int32_t x395 = INT32_MIN;
	volatile int64_t x396 = -1972293LL;
	int64_t t83 = -112296522038LL;

	t83 = (((x393-x394)^x395)/x396);

	if (t83 != -1088LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x398 = UINT8_MAX;
	int64_t x399 = INT64_MIN;
	int64_t t84 = 17222200LL;

	t84 = (((x397-x398)^x399)/x400);

	if (t84 != -72624976651238522LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x402 = -1;
	uint64_t x404 = 2626704LLU;
	volatile uint64_t t85 = 1LLU;

	t85 = (((x401-x402)^x403)/x404);

	if (t85 != 7022772292409LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x406 = 25U;
	int16_t x407 = 0;

	t86 = (((x405-x406)^x407)/x408);

	if (t86 != 37975LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x409 = -151699359046084LL;
	int32_t x412 = -1;
	static int64_t t87 = 4716014669228LL;

	t87 = (((x409-x410)^x411)/x412);

	if (t87 != -151699359046085LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x417 = -1;
	int32_t x418 = 1778117;
	uint8_t x419 = 19U;
	int64_t x420 = -1LL;
	volatile int64_t t88 = 127198805LL;

	t88 = (((x417-x418)^x419)/x420);

	if (t88 != 1778135LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x421 = 2699630699836376LLU;
	int64_t x422 = -1LL;
	volatile uint32_t x423 = 7412160U;
	uint16_t x424 = UINT16_MAX;
	volatile uint64_t t89 = 3240940128LLU;

	t89 = (((x421-x422)^x423)/x424);

	if (t89 != 41193723880LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x425 = UINT16_MAX;
	int16_t x426 = 54;
	uint8_t x428 = 42U;
	uint64_t t90 = 1507089008703669LLU;

	t90 = (((x425-x426)^x427)/x428);

	if (t90 != 66891461LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x429 = UINT64_MAX;
	uint8_t x430 = 9U;
	int16_t x432 = INT16_MIN;
	static volatile uint64_t t91 = 58133351035LLU;

	t91 = (((x429-x430)^x431)/x432);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x433 = -3768;
	uint64_t x434 = UINT64_MAX;
	uint64_t x435 = 180577LLU;
	int16_t x436 = INT16_MIN;

	t92 = (((x433-x434)^x435)/x436);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x438 = INT16_MAX;
	static volatile int8_t x439 = -30;
	uint8_t x440 = 1U;

	t93 = (((x437-x438)^x439)/x440);

	if (t93 != 41317698268506LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x441 = -1;
	volatile int16_t x443 = INT16_MIN;
	int32_t x444 = -1;
	volatile int64_t t94 = -157439480LL;

	t94 = (((x441-x442)^x443)/x444);

	if (t94 != 4594886709LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x446 = INT64_MIN;
	int64_t x447 = INT64_MAX;
	volatile int64_t x448 = INT64_MAX;
	int64_t t95 = 1186995LL;

	t95 = (((x445-x446)^x447)/x448);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x449 = 409647;
	int32_t x450 = INT32_MAX;
	volatile int16_t x451 = INT16_MIN;
	uint16_t x452 = 22U;
	volatile int32_t t96 = 0;

	t96 = (((x449-x450)^x451)/x452);

	if (t96 != 97594277) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x454 = -1LL;
	static volatile int64_t x456 = 117662438LL;

	t97 = (((x453-x454)^x455)/x456);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x457 = 0;
	static uint32_t x458 = 86175719U;
	uint32_t x459 = 787864060U;
	volatile int8_t x460 = INT8_MIN;

	t98 = (((x457-x458)^x459)/x460);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x461 = INT64_MIN;
	uint8_t x463 = UINT8_MAX;
	static int64_t t99 = 13048781LL;

	t99 = (((x461-x462)^x463)/x464);

	if (t99 != 9223372036854774102LL) { NG(); } else { ; }
	
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

