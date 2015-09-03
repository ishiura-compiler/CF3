#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = -1;
int8_t x4 = INT8_MAX;
static volatile int64_t x6 = -97877LL;
volatile int64_t t1 = -187308LL;
int32_t t3 = -7286842;
static uint64_t x17 = UINT64_MAX;
int8_t x18 = -1;
volatile uint32_t x24 = 593U;
int32_t x25 = INT32_MIN;
int16_t x33 = INT16_MIN;
int8_t x35 = -1;
int32_t t8 = -3843793;
int16_t x43 = -1;
int8_t x48 = INT8_MIN;
uint8_t x50 = UINT8_MAX;
int16_t x54 = 5020;
static volatile int64_t t13 = -1738913LL;
int32_t x61 = INT32_MAX;
static uint32_t x62 = 61003U;
uint64_t x66 = UINT64_MAX;
int32_t t16 = 0;
volatile int32_t x79 = -1;
int16_t x80 = -1;
int8_t x81 = -4;
volatile uint16_t x82 = 1468U;
int16_t x85 = -1;
int32_t t20 = -562634;
int8_t x92 = INT8_MIN;
static int64_t x93 = INT64_MAX;
uint16_t x97 = 420U;
volatile uint32_t x98 = 14058U;
uint8_t x108 = 20U;
int64_t x111 = -33LL;
int64_t x121 = INT64_MAX;
uint64_t t30 = 7944093894878433587LLU;
static uint64_t x132 = 83404328380LLU;
volatile int32_t t31 = 0;
uint32_t x134 = 30400U;
int16_t x137 = INT16_MAX;
int8_t x138 = -1;
static int32_t t33 = -3725;
int8_t x142 = -1;
int16_t x151 = -12635;
int64_t x155 = INT64_MAX;
uint64_t t37 = UINT64_MAX;
int8_t x157 = INT8_MAX;
uint16_t x166 = 283U;
int32_t x167 = INT32_MIN;
static int32_t t40 = -6321973;
static int16_t x175 = -94;
int8_t x179 = 7;
volatile uint64_t x183 = UINT64_MAX;
int16_t x186 = INT16_MIN;
volatile int32_t x189 = -29470;
int32_t x195 = -1;
uint32_t x197 = UINT32_MAX;
uint32_t x209 = UINT32_MAX;
volatile uint32_t t50 = UINT32_MAX;
int32_t x231 = INT32_MIN;
volatile int32_t t54 = 7;
int64_t x239 = -1649366LL;
int64_t x241 = INT64_MIN;
int64_t t56 = 181074LL;
static volatile int32_t t57 = 3350;
int32_t t59 = -1;
uint32_t x258 = 547779U;
int64_t x260 = -1LL;
static uint32_t t60 = 102468512U;
static uint64_t x261 = 2649325480878383271LLU;
volatile uint64_t x264 = 44710965637044064LLU;
int64_t x265 = -8LL;
int16_t x266 = -1;
uint8_t x275 = 40U;
static volatile uint32_t t65 = 62U;
int8_t x282 = 4;
volatile int32_t t66 = -63;
int16_t x288 = -1;
static volatile int64_t t68 = 685461886610013LL;
int64_t x310 = INT64_MAX;
static int32_t x312 = -1;
volatile int64_t t71 = 574336254444832908LL;
uint32_t x320 = 35539U;
volatile uint32_t t73 = 1807877U;
uint32_t x321 = 10061U;
volatile uint16_t x331 = 80U;
volatile uint32_t x333 = 6760U;
int32_t x341 = INT32_MIN;
int8_t x342 = 2;
int32_t x343 = INT32_MIN;
int32_t x344 = -30841600;
volatile int64_t t81 = 235997427LL;
int16_t x353 = 102;
int32_t x354 = -1;
int16_t x359 = -35;
int64_t t83 = 104029011LL;
uint8_t x362 = UINT8_MAX;
int8_t x363 = INT8_MAX;
static uint64_t x368 = UINT64_MAX;
uint32_t x377 = 870087205U;
int16_t x385 = 1;
int32_t t89 = 67942;
static int32_t t90 = -57314;
volatile uint8_t x393 = UINT8_MAX;
uint8_t x394 = 24U;
static volatile int32_t t91 = -39;
int16_t x414 = INT16_MIN;
int32_t x421 = INT32_MIN;
static int16_t x426 = INT16_MIN;
int64_t t98 = 206344845LL;
int8_t x429 = -1;


void f0(void) {
	int16_t x1 = 3238;
	uint32_t x3 = 1U;
	volatile int32_t t0 = -1624125;

	t0 = (x1|(x2-(x3<=x4)));

	if (t0 != -2) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 7054U;
	int64_t x7 = 4158172LL;
	uint16_t x8 = 2U;

	t1 = (x5|(x6-(x7<=x8)));

	if (t1 != -91217LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 381371626LLU;
	volatile int32_t x10 = -5509;
	static volatile int16_t x11 = -1;
	int64_t x12 = INT64_MIN;
	volatile uint64_t t2 = 8LLU;

	t2 = (x9|(x10-(x11<=x12)));

	if (t2 != 18446744073709547259LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	volatile int8_t x14 = -1;
	uint64_t x15 = UINT64_MAX;
	int8_t x16 = -3;

	t3 = (x13|(x14-(x15<=x16)));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x19 = INT8_MIN;
	int16_t x20 = INT16_MIN;
	uint64_t t4 = UINT64_MAX;

	t4 = (x17|(x18-(x19<=x20)));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = -14551499LL;
	int64_t x22 = INT64_MIN;
	uint32_t x23 = 3089174U;
	int64_t t5 = -1LL;

	t5 = (x21|(x22-(x23<=x24)));

	if (t5 != -14551499LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x26 = UINT8_MAX;
	uint32_t x27 = 19255559U;
	int8_t x28 = 0;
	int32_t t6 = 16238706;

	t6 = (x25|(x26-(x27<=x28)));

	if (t6 != -2147483393) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x34 = 1U;
	static volatile int64_t x36 = -32536890393120835LL;
	volatile int32_t t7 = 4083;

	t7 = (x33|(x34-(x35<=x36)));

	if (t7 != -32767) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x37 = 0U;
	int8_t x38 = -1;
	int32_t x39 = -255;
	int16_t x40 = INT16_MAX;

	t8 = (x37|(x38-(x39<=x40)));

	if (t8 != -2) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x41 = 86954U;
	uint8_t x42 = 6U;
	volatile int8_t x44 = INT8_MIN;
	uint32_t t9 = 239952044U;

	t9 = (x41|(x42-(x43<=x44)));

	if (t9 != 86958U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = -1;
	int8_t x46 = INT8_MIN;
	static int8_t x47 = INT8_MIN;
	volatile int32_t t10 = -11;

	t10 = (x45|(x46-(x47<=x48)));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x49 = INT8_MAX;
	static uint16_t x51 = UINT16_MAX;
	static int32_t x52 = INT32_MIN;
	int32_t t11 = 93088;

	t11 = (x49|(x50-(x51<=x52)));

	if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x53 = -53;
	uint16_t x55 = UINT16_MAX;
	int64_t x56 = -1LL;
	int32_t t12 = 63226;

	t12 = (x53|(x54-(x55<=x56)));

	if (t12 != -33) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = INT8_MIN;
	int64_t x58 = INT64_MIN;
	static uint8_t x59 = 0U;
	volatile int16_t x60 = -1;

	t13 = (x57|(x58-(x59<=x60)));

	if (t13 != -128LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x63 = 2887280U;
	uint16_t x64 = 37U;
	volatile uint32_t t14 = 1130U;

	t14 = (x61|(x62-(x63<=x64)));

	if (t14 != 2147483647U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = INT64_MIN;
	uint8_t x67 = 117U;
	int8_t x68 = -1;
	static uint64_t t15 = UINT64_MAX;

	t15 = (x65|(x66-(x67<=x68)));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = UINT16_MAX;
	volatile int16_t x70 = INT16_MAX;
	int32_t x71 = -110577157;
	volatile uint64_t x72 = UINT64_MAX;

	t16 = (x69|(x70-(x71<=x72)));

	if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = 17161;
	int64_t x74 = -1LL;
	static int32_t x75 = -470;
	uint16_t x76 = 3005U;
	int64_t t17 = -7464LL;

	t17 = (x73|(x74-(x75<=x76)));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x77 = 12U;
	static int8_t x78 = -22;
	volatile int32_t t18 = 1;

	t18 = (x77|(x78-(x79<=x80)));

	if (t18 != -19) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x83 = INT16_MIN;
	uint16_t x84 = UINT16_MAX;
	static int32_t t19 = 2;

	t19 = (x81|(x82-(x83<=x84)));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x86 = INT16_MIN;
	volatile int32_t x87 = INT32_MIN;
	static volatile uint64_t x88 = 2LLU;

	t20 = (x85|(x86-(x87<=x88)));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = 0;
	int32_t x90 = -1;
	int8_t x91 = INT8_MIN;
	volatile int32_t t21 = 227364842;

	t21 = (x89|(x90-(x91<=x92)));

	if (t21 != -2) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x94 = UINT16_MAX;
	static uint64_t x95 = 27523LLU;
	int8_t x96 = 3;
	volatile int64_t t22 = INT64_MAX;

	t22 = (x93|(x94-(x95<=x96)));

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x99 = 2U;
	int32_t x100 = -12246;
	static uint32_t t23 = 43427477U;

	t23 = (x97|(x98-(x99<=x100)));

	if (t23 != 14318U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = INT8_MAX;
	uint32_t x102 = 124444U;
	int64_t x103 = 179554063LL;
	volatile int64_t x104 = -16726127111876138LL;
	volatile uint32_t t24 = 27969039U;

	t24 = (x101|(x102-(x103<=x104)));

	if (t24 != 124543U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = -60;
	static int16_t x106 = -1;
	int32_t x107 = INT32_MAX;
	int32_t t25 = 790491;

	t25 = (x105|(x106-(x107<=x108)));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x109 = 5U;
	int32_t x110 = -10881;
	int32_t x112 = INT32_MIN;
	volatile int32_t t26 = 57;

	t26 = (x109|(x110-(x111<=x112)));

	if (t26 != -10881) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = INT8_MIN;
	int16_t x114 = INT16_MAX;
	uint32_t x115 = 3U;
	uint8_t x116 = UINT8_MAX;
	static int32_t t27 = 22871;

	t27 = (x113|(x114-(x115<=x116)));

	if (t27 != -2) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x117 = UINT8_MAX;
	uint32_t x118 = 2U;
	int8_t x119 = INT8_MAX;
	int64_t x120 = -11760744LL;
	volatile uint32_t t28 = 595U;

	t28 = (x117|(x118-(x119<=x120)));

	if (t28 != 255U) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x122 = -1;
	int32_t x123 = INT32_MIN;
	volatile uint16_t x124 = 188U;
	int64_t t29 = -7730458742643361LL;

	t29 = (x121|(x122-(x123<=x124)));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x125 = 141014184422740LLU;
	int64_t x126 = -1LL;
	uint32_t x127 = 0U;
	static volatile uint8_t x128 = 19U;

	t30 = (x125|(x126-(x127<=x128)));

	if (t30 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = INT8_MIN;
	volatile int16_t x130 = INT16_MIN;
	int32_t x131 = 170;

	t31 = (x129|(x130-(x131<=x132)));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x133 = -12;
	int8_t x135 = INT8_MIN;
	int32_t x136 = INT32_MAX;
	volatile uint32_t t32 = UINT32_MAX;

	t32 = (x133|(x134-(x135<=x136)));

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x139 = INT32_MIN;
	int8_t x140 = 18;

	t33 = (x137|(x138-(x139<=x140)));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = INT64_MIN;
	static int8_t x143 = -1;
	static int32_t x144 = INT32_MIN;
	volatile int64_t t34 = 4719LL;

	t34 = (x141|(x142-(x143<=x144)));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x145 = 61U;
	static int8_t x146 = INT8_MIN;
	volatile int8_t x147 = INT8_MIN;
	volatile uint16_t x148 = 41U;
	static int32_t t35 = 1795986;

	t35 = (x145|(x146-(x147<=x148)));

	if (t35 != -129) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x149 = INT16_MIN;
	volatile uint8_t x150 = 1U;
	static uint8_t x152 = 21U;
	volatile int32_t t36 = 1217;

	t36 = (x149|(x150-(x151<=x152)));

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x153 = 1285992436LLU;
	int64_t x154 = -1LL;
	int16_t x156 = INT16_MIN;

	t37 = (x153|(x154-(x155<=x156)));

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x158 = UINT16_MAX;
	int64_t x159 = 211845565713941LL;
	volatile int16_t x160 = -1;
	static int32_t t38 = 126396;

	t38 = (x157|(x158-(x159<=x160)));

	if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x165 = INT32_MIN;
	volatile int16_t x168 = INT16_MAX;
	static int32_t t39 = -243;

	t39 = (x165|(x166-(x167<=x168)));

	if (t39 != -2147483366) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x169 = 11U;
	int32_t x170 = INT32_MIN;
	int8_t x171 = 22;
	int8_t x172 = INT8_MIN;

	t40 = (x169|(x170-(x171<=x172)));

	if (t40 != -2147483637) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x173 = 10LLU;
	volatile uint8_t x174 = 2U;
	uint16_t x176 = 296U;
	static uint64_t t41 = 1828787073LLU;

	t41 = (x173|(x174-(x175<=x176)));

	if (t41 != 11LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x177 = -1;
	static int32_t x178 = -1;
	volatile int8_t x180 = 16;
	static volatile int32_t t42 = 223;

	t42 = (x177|(x178-(x179<=x180)));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x181 = 0;
	int8_t x182 = 32;
	int16_t x184 = 1;
	volatile int32_t t43 = -296715;

	t43 = (x181|(x182-(x183<=x184)));

	if (t43 != 32) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x185 = 308LLU;
	int64_t x187 = INT64_MIN;
	int8_t x188 = INT8_MIN;
	uint64_t t44 = 533843863226444LLU;

	t44 = (x185|(x186-(x187<=x188)));

	if (t44 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x190 = INT8_MAX;
	int32_t x191 = -1;
	int64_t x192 = 83138052183483LL;
	int32_t t45 = -67;

	t45 = (x189|(x190-(x191<=x192)));

	if (t45 != -29442) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint8_t x193 = 0U;
	int16_t x194 = -5;
	static int16_t x196 = INT16_MAX;
	static volatile int32_t t46 = 2702720;

	t46 = (x193|(x194-(x195<=x196)));

	if (t46 != -6) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x198 = -1;
	volatile int8_t x199 = -1;
	int32_t x200 = INT32_MIN;
	uint32_t t47 = UINT32_MAX;

	t47 = (x197|(x198-(x199<=x200)));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x201 = INT16_MIN;
	volatile int32_t x202 = INT32_MAX;
	uint8_t x203 = UINT8_MAX;
	int8_t x204 = INT8_MIN;
	int32_t t48 = 5417;

	t48 = (x201|(x202-(x203<=x204)));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x205 = 11U;
	uint8_t x206 = 1U;
	static int16_t x207 = -1;
	uint8_t x208 = 5U;
	int32_t t49 = 72;

	t49 = (x205|(x206-(x207<=x208)));

	if (t49 != 11) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x210 = 77U;
	static int8_t x211 = -16;
	volatile int8_t x212 = 2;

	t50 = (x209|(x210-(x211<=x212)));

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x217 = -19;
	static int16_t x218 = INT16_MAX;
	uint64_t x219 = UINT64_MAX;
	volatile int8_t x220 = -1;
	volatile int32_t t51 = 229;

	t51 = (x217|(x218-(x219<=x220)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x221 = UINT32_MAX;
	int64_t x222 = INT64_MIN;
	int16_t x223 = 4530;
	int8_t x224 = INT8_MIN;
	volatile int64_t t52 = -776303691259097163LL;

	t52 = (x221|(x222-(x223<=x224)));

	if (t52 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x229 = -1;
	static volatile int16_t x230 = INT16_MAX;
	volatile int64_t x232 = INT64_MIN;
	static int32_t t53 = 2;

	t53 = (x229|(x230-(x231<=x232)));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x233 = INT32_MAX;
	int8_t x234 = INT8_MIN;
	uint32_t x235 = 1U;
	uint8_t x236 = 58U;

	t54 = (x233|(x234-(x235<=x236)));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x237 = UINT8_MAX;
	static uint32_t x238 = UINT32_MAX;
	static int32_t x240 = INT32_MIN;
	volatile uint32_t t55 = UINT32_MAX;

	t55 = (x237|(x238-(x239<=x240)));

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x242 = INT64_MAX;
	int64_t x243 = INT64_MAX;
	static uint64_t x244 = UINT64_MAX;

	t56 = (x241|(x242-(x243<=x244)));

	if (t56 != -2LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x245 = 11U;
	volatile int16_t x246 = -1;
	uint8_t x247 = UINT8_MAX;
	int32_t x248 = INT32_MIN;

	t57 = (x245|(x246-(x247<=x248)));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x249 = 1LLU;
	int16_t x250 = INT16_MAX;
	static int16_t x251 = INT16_MAX;
	int32_t x252 = INT32_MIN;
	volatile uint64_t t58 = 1158148378LLU;

	t58 = (x249|(x250-(x251<=x252)));

	if (t58 != 32767LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x253 = 1;
	int16_t x254 = -1;
	int8_t x255 = INT8_MIN;
	static volatile int64_t x256 = INT64_MIN;

	t59 = (x253|(x254-(x255<=x256)));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x257 = INT32_MIN;
	uint8_t x259 = UINT8_MAX;

	t60 = (x257|(x258-(x259<=x260)));

	if (t60 != 2148031427U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x262 = INT8_MIN;
	uint64_t x263 = 655894621200LLU;
	volatile uint64_t t61 = UINT64_MAX;

	t61 = (x261|(x262-(x263<=x264)));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x267 = INT32_MAX;
	int16_t x268 = -470;
	int64_t t62 = -500LL;

	t62 = (x265|(x266-(x267<=x268)));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x269 = -1;
	int8_t x270 = 1;
	int64_t x271 = INT64_MIN;
	int32_t x272 = -7626432;
	volatile int32_t t63 = 8;

	t63 = (x269|(x270-(x271<=x272)));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x273 = 3703541572462LLU;
	volatile int32_t x274 = -353192;
	volatile int32_t x276 = INT32_MAX;
	static volatile uint64_t t64 = 604LLU;

	t64 = (x273|(x274-(x275<=x276)));

	if (t64 != 18446744073709535103LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x277 = 2144648117U;
	uint8_t x278 = UINT8_MAX;
	int64_t x279 = -1LL;
	int16_t x280 = -44;

	t65 = (x277|(x278-(x279<=x280)));

	if (t65 != 2144648191U) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x281 = -1;
	int64_t x283 = -28330221643LL;
	volatile uint32_t x284 = UINT32_MAX;

	t66 = (x281|(x282-(x283<=x284)));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x285 = 266585283LLU;
	int8_t x286 = 0;
	volatile uint16_t x287 = 2U;
	volatile uint64_t t67 = 19660150214231LLU;

	t67 = (x285|(x286-(x287<=x288)));

	if (t67 != 266585283LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x297 = -1;
	int64_t x298 = -469922528515LL;
	uint16_t x299 = 7U;
	static int8_t x300 = 6;

	t68 = (x297|(x298-(x299<=x300)));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x301 = UINT32_MAX;
	int32_t x302 = -1;
	volatile int16_t x303 = INT16_MIN;
	static uint8_t x304 = UINT8_MAX;
	volatile uint32_t t69 = UINT32_MAX;

	t69 = (x301|(x302-(x303<=x304)));

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x305 = 30;
	uint16_t x306 = UINT16_MAX;
	int8_t x307 = INT8_MIN;
	volatile uint32_t x308 = UINT32_MAX;
	volatile int32_t t70 = 1560321;

	t70 = (x305|(x306-(x307<=x308)));

	if (t70 != 65534) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x309 = -32;
	int16_t x311 = INT16_MAX;

	t71 = (x309|(x310-(x311<=x312)));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x313 = INT32_MAX;
	volatile int32_t x314 = INT32_MIN;
	uint16_t x315 = UINT16_MAX;
	uint16_t x316 = 1U;
	int32_t t72 = 271;

	t72 = (x313|(x314-(x315<=x316)));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x317 = INT8_MAX;
	uint32_t x318 = 858933U;
	static int32_t x319 = 184;

	t73 = (x317|(x318-(x319<=x320)));

	if (t73 != 859007U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x322 = 3U;
	int64_t x323 = -1LL;
	static int32_t x324 = -1;
	volatile uint32_t t74 = 4752854U;

	t74 = (x321|(x322-(x323<=x324)));

	if (t74 != 10063U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x325 = UINT64_MAX;
	static uint64_t x326 = 56636707025541654LLU;
	uint8_t x327 = 25U;
	static int32_t x328 = 13230;
	volatile uint64_t t75 = UINT64_MAX;

	t75 = (x325|(x326-(x327<=x328)));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x329 = UINT32_MAX;
	uint64_t x330 = 1543407LLU;
	int64_t x332 = INT64_MAX;
	volatile uint64_t t76 = 1278163LLU;

	t76 = (x329|(x330-(x331<=x332)));

	if (t76 != 4294967295LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x334 = 35U;
	uint8_t x335 = 0U;
	static uint32_t x336 = 1648073188U;
	uint32_t t77 = 207U;

	t77 = (x333|(x334-(x335<=x336)));

	if (t77 != 6762U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x337 = 7993U;
	static int16_t x338 = INT16_MAX;
	int64_t x339 = INT64_MAX;
	uint64_t x340 = 13334167241605585LLU;
	volatile int32_t t78 = 0;

	t78 = (x337|(x338-(x339<=x340)));

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t t79 = -1440138;

	t79 = (x341|(x342-(x343<=x344)));

	if (t79 != -2147483647) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x345 = INT8_MIN;
	static uint8_t x346 = UINT8_MAX;
	int16_t x347 = INT16_MAX;
	uint32_t x348 = 3848U;
	int32_t t80 = -605;

	t80 = (x345|(x346-(x347<=x348)));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x349 = INT64_MIN;
	volatile uint16_t x350 = 9473U;
	uint32_t x351 = 1387542361U;
	int64_t x352 = -283148022951589LL;

	t81 = (x349|(x350-(x351<=x352)));

	if (t81 != -9223372036854766335LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x355 = UINT8_MAX;
	int64_t x356 = -7LL;
	int32_t t82 = -1;

	t82 = (x353|(x354-(x355<=x356)));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x357 = -1LL;
	uint16_t x358 = 39U;
	volatile uint32_t x360 = UINT32_MAX;

	t83 = (x357|(x358-(x359<=x360)));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x361 = UINT16_MAX;
	uint32_t x364 = 73759U;
	volatile int32_t t84 = 21239579;

	t84 = (x361|(x362-(x363<=x364)));

	if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x365 = -1LL;
	uint16_t x366 = 2746U;
	static int8_t x367 = INT8_MAX;
	static int64_t t85 = -586812116LL;

	t85 = (x365|(x366-(x367<=x368)));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x369 = -20;
	static int32_t x370 = INT32_MAX;
	int16_t x371 = -1;
	int8_t x372 = INT8_MAX;
	volatile int32_t t86 = 7;

	t86 = (x369|(x370-(x371<=x372)));

	if (t86 != -2) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x378 = INT8_MIN;
	volatile int64_t x379 = INT64_MIN;
	int64_t x380 = -45161248264004LL;
	volatile uint32_t t87 = 1988675456U;

	t87 = (x377|(x378-(x379<=x380)));

	if (t87 != 4294967167U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x381 = INT64_MAX;
	int16_t x382 = INT16_MIN;
	uint64_t x383 = UINT64_MAX;
	int64_t x384 = -101614856847LL;
	volatile int64_t t88 = 8731155759779LL;

	t88 = (x381|(x382-(x383<=x384)));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x386 = -1;
	static int8_t x387 = 25;
	int32_t x388 = INT32_MIN;

	t89 = (x385|(x386-(x387<=x388)));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x389 = UINT8_MAX;
	static volatile uint16_t x390 = UINT16_MAX;
	volatile int64_t x391 = INT64_MAX;
	static int8_t x392 = 27;

	t90 = (x389|(x390-(x391<=x392)));

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x395 = 3597554U;
	int16_t x396 = INT16_MAX;

	t91 = (x393|(x394-(x395<=x396)));

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x397 = INT64_MIN;
	static uint8_t x398 = UINT8_MAX;
	int8_t x399 = INT8_MIN;
	static int8_t x400 = 0;
	volatile int64_t t92 = 0LL;

	t92 = (x397|(x398-(x399<=x400)));

	if (t92 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x401 = 0;
	volatile int16_t x402 = INT16_MAX;
	int16_t x403 = -6;
	static uint8_t x404 = UINT8_MAX;
	volatile int32_t t93 = -14862;

	t93 = (x401|(x402-(x403<=x404)));

	if (t93 != 32766) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x405 = INT8_MIN;
	int16_t x406 = INT16_MIN;
	volatile int8_t x407 = -1;
	static uint64_t x408 = 592528164LLU;
	static int32_t t94 = -2;

	t94 = (x405|(x406-(x407<=x408)));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x409 = 313480419LLU;
	static volatile uint64_t x410 = 985LLU;
	int16_t x411 = INT16_MAX;
	volatile int32_t x412 = -1;
	uint64_t t95 = 40687LLU;

	t95 = (x409|(x410-(x411<=x412)));

	if (t95 != 313481211LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x413 = -421760016495962LL;
	uint8_t x415 = 5U;
	int16_t x416 = INT16_MIN;
	int64_t t96 = -1LL;

	t96 = (x413|(x414-(x415<=x416)));

	if (t96 != -13658LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x422 = 192U;
	volatile uint64_t x423 = 11LLU;
	int32_t x424 = -1;
	int32_t t97 = -944709433;

	t97 = (x421|(x422-(x423<=x424)));

	if (t97 != -2147483457) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x425 = INT64_MAX;
	int8_t x427 = INT8_MIN;
	static int32_t x428 = -1;

	t98 = (x425|(x426-(x427<=x428)));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x430 = INT64_MAX;
	static volatile int8_t x431 = INT8_MIN;
	uint64_t x432 = 34662995598LLU;
	volatile int64_t t99 = -9644LL;

	t99 = (x429|(x430-(x431<=x432)));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

