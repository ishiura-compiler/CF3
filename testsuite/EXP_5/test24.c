#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x9 = -1;
int16_t x18 = INT16_MIN;
volatile int64_t t4 = -114733192LL;
static int32_t x26 = 52505;
static uint8_t x28 = 31U;
uint64_t x42 = UINT64_MAX;
volatile uint8_t x43 = 1U;
int8_t x46 = INT8_MAX;
int16_t x47 = -73;
int8_t x51 = -1;
volatile uint64_t x53 = 93LLU;
static uint32_t x55 = 5405379U;
uint8_t x66 = 1U;
uint64_t x67 = UINT64_MAX;
static volatile uint8_t x81 = 8U;
volatile uint64_t t19 = 10125970746521LLU;
uint64_t x89 = UINT64_MAX;
volatile uint64_t t20 = 14625193280276LLU;
static int16_t x95 = -1;
uint16_t x102 = 2600U;
uint64_t t23 = 16992221563662315LLU;
int32_t x107 = INT32_MIN;
int8_t x111 = INT8_MIN;
static int32_t x115 = INT32_MAX;
static uint64_t t26 = 2098LLU;
volatile int64_t t27 = -12689798LL;
volatile int16_t x125 = -1;
uint64_t x127 = 5326842365584331LLU;
int16_t x128 = 15981;
volatile int64_t t29 = -62619LL;
uint64_t x133 = UINT64_MAX;
volatile uint64_t t30 = 4LLU;
int8_t x143 = INT8_MAX;
static int16_t x155 = INT16_MAX;
uint8_t x156 = 10U;
int32_t t33 = -25;
uint32_t x166 = 16271352U;
volatile uint8_t x167 = 36U;
volatile uint64_t t37 = 1263466LLU;
volatile uint64_t t41 = 12651635LLU;
static int16_t x197 = -2;
uint64_t x198 = 205967726LLU;
static int16_t x206 = -1;
int32_t x208 = INT32_MAX;
int32_t x209 = INT32_MAX;
volatile uint64_t t45 = 3669408226LLU;
uint32_t x216 = 1057U;
int32_t t47 = -870518000;
volatile int16_t x232 = -1;
int8_t x234 = INT8_MIN;
int32_t x256 = INT32_MAX;
volatile int8_t x258 = INT8_MAX;
static volatile uint32_t t52 = 3931U;
int32_t t53 = 34758696;
static int32_t x266 = INT32_MIN;
volatile int64_t t55 = -9290365360996LL;
uint16_t x273 = 97U;
volatile uint32_t x278 = UINT32_MAX;
int8_t x280 = INT8_MAX;
uint64_t t58 = 11087LLU;
volatile int32_t x286 = -1;
volatile uint64_t t59 = 76337LLU;
int16_t x291 = INT16_MIN;
volatile uint64_t t60 = 1766402816LLU;
static uint64_t x300 = 91170831LLU;
uint64_t x307 = 1236272940LLU;
volatile uint8_t x308 = UINT8_MAX;
uint64_t t64 = 27LLU;
int64_t x310 = INT64_MIN;
int16_t x311 = 32;
int16_t x323 = INT16_MAX;
static int8_t x325 = INT8_MIN;
static volatile int8_t x329 = INT8_MAX;
int8_t x333 = INT8_MAX;
static int8_t x336 = INT8_MIN;
int8_t x349 = INT8_MAX;
int64_t x350 = -1LL;
int64_t x355 = 2767LL;
uint32_t x359 = 476893582U;
static volatile int64_t t77 = 1282273LL;
int32_t x382 = INT32_MIN;
uint8_t x385 = 124U;
int8_t x387 = -1;
uint64_t x402 = 60466LLU;
int64_t x407 = INT64_MIN;
int64_t t85 = -1799783440131370LL;
volatile uint8_t x410 = 0U;
uint16_t x423 = 3303U;
volatile int32_t x431 = -5;
static int32_t x432 = -1;
int8_t x433 = INT8_MIN;
static uint8_t x437 = 4U;
uint32_t x440 = UINT32_MAX;
volatile int16_t x455 = -1422;
uint64_t x461 = 8480697523150437741LLU;
uint8_t x468 = UINT8_MAX;
volatile uint64_t t98 = 3661112272478669LLU;
volatile uint32_t t99 = 4715782U;


void f0(void) {
	uint64_t x1 = 0LLU;
	int8_t x2 = INT8_MIN;
	int8_t x3 = 15;
	int8_t x4 = -5;
	uint64_t t0 = 426LLU;

	t0 = (x1&((x2+x3)-x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x5 = -29;
	int32_t x6 = 30655724;
	int16_t x7 = -1;
	uint8_t x8 = 107U;
	int32_t t1 = -2396;

	t1 = (x5&((x6+x7)-x8));

	if (t1 != 30655616) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x10 = -251444518529771LL;
	uint32_t x11 = 3U;
	static uint8_t x12 = 79U;
	int64_t t2 = 23811902LL;

	t2 = (x9&((x10+x11)-x12));

	if (t2 != -251444518529847LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x13 = 2U;
	volatile int8_t x14 = INT8_MIN;
	int64_t x15 = 5LL;
	uint64_t x16 = 32333967LLU;
	volatile uint64_t t3 = 12LLU;

	t3 = (x13&((x14+x15)-x16));

	if (t3 != 2LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = 414079424LL;
	int16_t x19 = INT16_MAX;
	int64_t x20 = INT64_MIN;

	t4 = (x17&((x18+x19)-x20));

	if (t4 != 414079424LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = 0U;
	static int64_t x27 = -34035353149596LL;
	int64_t t5 = 3LL;

	t5 = (x25&((x26+x27)-x28));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MIN;
	volatile int32_t x30 = INT32_MAX;
	int32_t x31 = INT32_MIN;
	uint8_t x32 = 2U;
	static volatile int32_t t6 = -3;

	t6 = (x29&((x30+x31)-x32));

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = 0;
	uint8_t x38 = 0U;
	uint16_t x39 = UINT16_MAX;
	int16_t x40 = -101;
	static volatile int32_t t7 = 13382;

	t7 = (x37&((x38+x39)-x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x41 = INT8_MIN;
	uint16_t x44 = 11U;
	volatile uint64_t t8 = 1LLU;

	t8 = (x41&((x42+x43)-x44));

	if (t8 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x45 = -1;
	int16_t x48 = INT16_MIN;
	volatile int32_t t9 = -338742;

	t9 = (x45&((x46+x47)-x48));

	if (t9 != 32822) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = INT64_MAX;
	int8_t x50 = INT8_MAX;
	uint32_t x52 = UINT32_MAX;
	volatile int64_t t10 = -1123065770110381459LL;

	t10 = (x49&((x50+x51)-x52));

	if (t10 != 127LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x54 = UINT8_MAX;
	static uint16_t x56 = 2028U;
	uint64_t t11 = 5704219009LLU;

	t11 = (x53&((x54+x55)-x56));

	if (t11 != 84LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x57 = 1881815U;
	int8_t x58 = -9;
	volatile uint16_t x59 = 30U;
	uint64_t x60 = 15646929058232LLU;
	volatile uint64_t t12 = 3002LLU;

	t12 = (x57&((x58+x59)-x60));

	if (t12 != 1574485LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x61 = -1;
	int64_t x62 = INT64_MIN;
	volatile int32_t x63 = 40391;
	volatile int8_t x64 = INT8_MIN;
	static int64_t t13 = -26735LL;

	t13 = (x61&((x62+x63)-x64));

	if (t13 != -9223372036854735289LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x65 = UINT16_MAX;
	int16_t x68 = INT16_MAX;
	static uint64_t t14 = 0LLU;

	t14 = (x65&((x66+x67)-x68));

	if (t14 != 32769LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = -1LL;
	uint32_t x70 = UINT32_MAX;
	static int32_t x71 = 3250;
	static uint32_t x72 = UINT32_MAX;
	static volatile int64_t t15 = -7805750LL;

	t15 = (x69&((x70+x71)-x72));

	if (t15 != 3250LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x73 = 0U;
	uint16_t x74 = 280U;
	uint64_t x75 = UINT64_MAX;
	static int8_t x76 = INT8_MAX;
	volatile uint64_t t16 = 35206LLU;

	t16 = (x73&((x74+x75)-x76));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x77 = UINT64_MAX;
	static uint64_t x78 = 265651987053109026LLU;
	uint32_t x79 = UINT32_MAX;
	static volatile int8_t x80 = INT8_MAX;
	volatile uint64_t t17 = 232538876043821LLU;

	t17 = (x77&((x78+x79)-x80));

	if (t17 != 265651991348076194LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x82 = UINT8_MAX;
	uint32_t x83 = 74670453U;
	uint32_t x84 = 7788U;
	volatile uint32_t t18 = 2785U;

	t18 = (x81&((x82+x83)-x84));

	if (t18 != 8U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = INT8_MIN;
	int8_t x86 = INT8_MIN;
	int8_t x87 = -1;
	uint64_t x88 = UINT64_MAX;

	t19 = (x85&((x86+x87)-x88));

	if (t19 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x90 = INT8_MIN;
	uint8_t x91 = UINT8_MAX;
	volatile int32_t x92 = -26;

	t20 = (x89&((x90+x91)-x92));

	if (t20 != 153LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = -1;
	volatile uint8_t x94 = UINT8_MAX;
	volatile uint16_t x96 = 0U;
	volatile int32_t t21 = -22708564;

	t21 = (x93&((x94+x95)-x96));

	if (t21 != 254) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x97 = 12914595316988317LLU;
	static uint16_t x98 = UINT16_MAX;
	static int32_t x99 = 382;
	int32_t x100 = -1;
	uint64_t t22 = 542588487314307455LLU;

	t22 = (x97&((x98+x99)-x100));

	if (t22 != 65820LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = 3;
	volatile int32_t x103 = INT32_MIN;
	uint64_t x104 = UINT64_MAX;

	t23 = (x101&((x102+x103)-x104));

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x105 = INT64_MIN;
	int32_t x106 = 1229383;
	int64_t x108 = INT64_MIN;
	volatile int64_t t24 = 6626956275762503LL;

	t24 = (x105&((x106+x107)-x108));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x109 = 969LLU;
	uint32_t x110 = 11154816U;
	int16_t x112 = -6;
	static uint64_t t25 = 3478114532735LLU;

	t25 = (x109&((x110+x111)-x112));

	if (t25 != 256LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x113 = -1LL;
	uint64_t x114 = 111822LLU;
	int32_t x116 = -1;

	t26 = (x113&((x114+x115)-x116));

	if (t26 != 2147595470LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x121 = 114U;
	static int32_t x122 = INT32_MIN;
	uint8_t x123 = 0U;
	static int64_t x124 = INT64_MIN;

	t27 = (x121&((x122+x123)-x124));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x126 = 2242LL;
	volatile uint64_t t28 = 195927762948500LLU;

	t28 = (x125&((x126+x127)-x128));

	if (t28 != 5326842365570592LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x129 = 5;
	int64_t x130 = INT64_MAX;
	int8_t x131 = INT8_MIN;
	static uint32_t x132 = 2794U;

	t29 = (x129&((x130+x131)-x132));

	if (t29 != 5LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x134 = 19986672713LL;
	int16_t x135 = INT16_MIN;
	int16_t x136 = 0;

	t30 = (x133&((x134+x135)-x136));

	if (t30 != 19986639945LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x137 = 45U;
	static int16_t x138 = INT16_MIN;
	static volatile int16_t x139 = -160;
	int8_t x140 = -41;
	volatile int32_t t31 = -2008953;

	t31 = (x137&((x138+x139)-x140));

	if (t31 != 9) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x141 = 47LLU;
	int8_t x142 = INT8_MAX;
	uint32_t x144 = 0U;
	uint64_t t32 = 1564993LLU;

	t32 = (x141&((x142+x143)-x144));

	if (t32 != 46LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x153 = INT8_MAX;
	volatile int8_t x154 = -12;

	t33 = (x153&((x154+x155)-x156));

	if (t33 != 105) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x157 = 99172638445711LLU;
	int8_t x158 = -11;
	uint8_t x159 = 76U;
	uint32_t x160 = 0U;
	uint64_t t34 = 9664946244945964LLU;

	t34 = (x157&((x158+x159)-x160));

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x161 = 1742109953LL;
	volatile int16_t x162 = -1;
	int8_t x163 = 0;
	volatile int64_t x164 = -1LL;
	volatile int64_t t35 = 1242LL;

	t35 = (x161&((x162+x163)-x164));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x165 = 74U;
	int16_t x168 = INT16_MIN;
	volatile uint32_t t36 = 62551379U;

	t36 = (x165&((x166+x167)-x168));

	if (t36 != 8U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x169 = 611509428LLU;
	int16_t x170 = -4;
	uint32_t x171 = UINT32_MAX;
	static int8_t x172 = INT8_MIN;

	t37 = (x169&((x170+x171)-x172));

	if (t37 != 48LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x177 = -1;
	volatile uint64_t x178 = 217LLU;
	int16_t x179 = INT16_MAX;
	uint8_t x180 = 0U;
	uint64_t t38 = 1015529163181624590LLU;

	t38 = (x177&((x178+x179)-x180));

	if (t38 != 32984LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x181 = INT16_MIN;
	static int8_t x182 = -1;
	int64_t x183 = 1125948117380LL;
	uint64_t x184 = UINT64_MAX;
	uint64_t t39 = 74297432LLU;

	t39 = (x181&((x182+x183)-x184));

	if (t39 != 1125948096512LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x185 = INT8_MIN;
	static int8_t x186 = INT8_MIN;
	volatile uint64_t x187 = 1660002598783377603LLU;
	volatile uint16_t x188 = UINT16_MAX;
	static uint64_t t40 = 47432861191718LLU;

	t40 = (x185&((x186+x187)-x188));

	if (t40 != 1660002598783311872LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x193 = INT8_MIN;
	uint64_t x194 = 13952987031LLU;
	uint8_t x195 = 5U;
	int8_t x196 = INT8_MIN;

	t41 = (x193&((x194+x195)-x196));

	if (t41 != 13952987136LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x199 = INT32_MAX;
	static volatile int32_t x200 = INT32_MAX;
	uint64_t t42 = 102999837822791LLU;

	t42 = (x197&((x198+x199)-x200));

	if (t42 != 205967726LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x201 = UINT32_MAX;
	uint16_t x202 = 1U;
	int16_t x203 = -1;
	int8_t x204 = -55;
	volatile uint32_t t43 = 652002U;

	t43 = (x201&((x202+x203)-x204));

	if (t43 != 55U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x205 = -23;
	int64_t x207 = INT64_MAX;
	static int64_t t44 = 7458LL;

	t44 = (x205&((x206+x207)-x208));

	if (t44 != 9223372034707292137LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x210 = UINT64_MAX;
	static volatile int16_t x211 = INT16_MIN;
	uint32_t x212 = 1623U;

	t45 = (x209&((x210+x211)-x212));

	if (t45 != 2147449256LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x213 = -1835345855422820LL;
	uint8_t x214 = 7U;
	uint16_t x215 = 0U;
	volatile int64_t t46 = 242LL;

	t46 = (x213&((x214+x215)-x216));

	if (t46 != 1044339332LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x217 = INT32_MIN;
	int8_t x218 = INT8_MIN;
	int32_t x219 = INT32_MAX;
	int8_t x220 = INT8_MAX;

	t47 = (x217&((x218+x219)-x220));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x225 = INT16_MAX;
	static int8_t x226 = -28;
	int8_t x227 = -1;
	int16_t x228 = INT16_MAX;
	volatile int32_t t48 = 410963;

	t48 = (x225&((x226+x227)-x228));

	if (t48 != 32740) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x229 = -325455138600791486LL;
	volatile int8_t x230 = -1;
	static int16_t x231 = INT16_MIN;
	volatile int64_t t49 = 301LL;

	t49 = (x229&((x230+x231)-x232));

	if (t49 != -325455138600812544LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x233 = -1;
	volatile uint8_t x235 = UINT8_MAX;
	static volatile int64_t x236 = -1LL;
	volatile int64_t t50 = 9LL;

	t50 = (x233&((x234+x235)-x236));

	if (t50 != 128LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x253 = 0;
	int64_t x254 = 1318553917517276603LL;
	static int32_t x255 = -4035598;
	volatile int64_t t51 = 17963272092019757LL;

	t51 = (x253&((x254+x255)-x256));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x257 = INT8_MIN;
	volatile uint8_t x259 = UINT8_MAX;
	static uint32_t x260 = 309128591U;

	t52 = (x257&((x258+x259)-x260));

	if (t52 != 3985838976U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x261 = INT32_MAX;
	int16_t x262 = -1;
	static uint8_t x263 = UINT8_MAX;
	static int16_t x264 = -430;

	t53 = (x261&((x262+x263)-x264));

	if (t53 != 684) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x265 = UINT64_MAX;
	volatile int64_t x267 = INT64_MAX;
	uint16_t x268 = 1743U;
	volatile uint64_t t54 = 3LLU;

	t54 = (x265&((x266+x267)-x268));

	if (t54 != 9223372034707290416LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x269 = INT64_MAX;
	int32_t x270 = INT32_MAX;
	volatile int64_t x271 = 212661642232043LL;
	uint16_t x272 = 30U;

	t55 = (x269&((x270+x271)-x272));

	if (t55 != 212663789715660LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x274 = 59973410097113435LLU;
	uint32_t x275 = 678U;
	int32_t x276 = -32;
	volatile uint64_t t56 = 7209506204LLU;

	t56 = (x273&((x274+x275)-x276));

	if (t56 != 33LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x277 = INT8_MIN;
	int16_t x279 = 11275;
	uint32_t t57 = 252U;

	t57 = (x277&((x278+x279)-x280));

	if (t57 != 11136U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x281 = UINT64_MAX;
	volatile int8_t x282 = INT8_MIN;
	int64_t x283 = -14441LL;
	static uint16_t x284 = 77U;

	t58 = (x281&((x282+x283)-x284));

	if (t58 != 18446744073709536970LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x285 = UINT8_MAX;
	uint64_t x287 = 1636622174151055307LLU;
	volatile int8_t x288 = 1;

	t59 = (x285&((x286+x287)-x288));

	if (t59 != 201LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x289 = UINT8_MAX;
	uint64_t x290 = 3274442LLU;
	int16_t x292 = -1;

	t60 = (x289&((x290+x291)-x292));

	if (t60 != 203LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x293 = 6U;
	static int16_t x294 = 0;
	uint64_t x295 = 906990297211878LLU;
	uint64_t x296 = 226572439LLU;
	volatile uint64_t t61 = 75875879420LLU;

	t61 = (x293&((x294+x295)-x296));

	if (t61 != 6LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x297 = INT32_MIN;
	uint32_t x298 = UINT32_MAX;
	int16_t x299 = INT16_MIN;
	uint64_t t62 = 667131896948905LLU;

	t62 = (x297&((x298+x299)-x300));

	if (t62 != 2147483648LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x301 = -1;
	volatile int64_t x302 = -19181LL;
	volatile uint64_t x303 = 559849675LLU;
	int8_t x304 = INT8_MIN;
	volatile uint64_t t63 = 62LLU;

	t63 = (x301&((x302+x303)-x304));

	if (t63 != 559830622LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x305 = 4431124832604013LL;
	int16_t x306 = 13817;

	t64 = (x305&((x306+x307)-x308));

	if (t64 != 26217508LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x309 = UINT8_MAX;
	volatile int8_t x312 = 2;
	int64_t t65 = 3378861024797LL;

	t65 = (x309&((x310+x311)-x312));

	if (t65 != 30LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x313 = INT32_MIN;
	static volatile uint64_t x314 = 772438648LLU;
	int32_t x315 = INT32_MAX;
	uint64_t x316 = 769967440633550LLU;
	static volatile uint64_t t66 = 1889507LLU;

	t66 = (x313&((x314+x315)-x316));

	if (t66 != 18445974108479946752LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x321 = -1;
	uint64_t x322 = 44563022LLU;
	volatile int16_t x324 = 1;
	volatile uint64_t t67 = 57691902853811LLU;

	t67 = (x321&((x322+x323)-x324));

	if (t67 != 44595788LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x326 = 121U;
	int8_t x327 = 4;
	uint16_t x328 = 41U;
	static volatile int32_t t68 = -4642;

	t68 = (x325&((x326+x327)-x328));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x330 = -1;
	uint16_t x331 = 8U;
	int64_t x332 = 107323010977574LL;
	volatile int64_t t69 = -31530LL;

	t69 = (x329&((x330+x331)-x332));

	if (t69 != 97LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x334 = INT32_MIN;
	int16_t x335 = 12755;
	static volatile int32_t t70 = 834526697;

	t70 = (x333&((x334+x335)-x336));

	if (t70 != 83) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x337 = -1;
	static volatile uint32_t x338 = UINT32_MAX;
	int8_t x339 = INT8_MIN;
	volatile int16_t x340 = INT16_MIN;
	static volatile uint32_t t71 = 1465U;

	t71 = (x337&((x338+x339)-x340));

	if (t71 != 32639U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x341 = UINT8_MAX;
	int16_t x342 = INT16_MIN;
	int8_t x343 = 4;
	int8_t x344 = 0;
	volatile int32_t t72 = -19;

	t72 = (x341&((x342+x343)-x344));

	if (t72 != 4) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x351 = 0U;
	static int32_t x352 = 14643469;
	volatile int64_t t73 = 3194142LL;

	t73 = (x349&((x350+x351)-x352));

	if (t73 != 114LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x353 = 7U;
	int8_t x354 = INT8_MIN;
	int64_t x356 = 553672LL;
	volatile int64_t t74 = -508936719941164LL;

	t74 = (x353&((x354+x355)-x356));

	if (t74 != 7LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x357 = INT32_MIN;
	static volatile int8_t x358 = INT8_MAX;
	int32_t x360 = INT32_MIN;
	static uint32_t t75 = 3549736U;

	t75 = (x357&((x358+x359)-x360));

	if (t75 != 2147483648U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x365 = 84U;
	static uint32_t x366 = 1694955348U;
	uint32_t x367 = UINT32_MAX;
	static int16_t x368 = -1;
	volatile uint32_t t76 = 32562U;

	t76 = (x365&((x366+x367)-x368));

	if (t76 != 84U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x369 = 31;
	int32_t x370 = 23081202;
	volatile int64_t x371 = 47729620238557668LL;
	uint32_t x372 = UINT32_MAX;

	t77 = (x369&((x370+x371)-x372));

	if (t77 != 23LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x373 = -28LL;
	uint32_t x374 = 7U;
	static volatile uint32_t x375 = UINT32_MAX;
	int32_t x376 = -42;
	int64_t t78 = 23017LL;

	t78 = (x373&((x374+x375)-x376));

	if (t78 != 32LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x381 = -2043240LL;
	int64_t x383 = -171192950LL;
	int8_t x384 = -1;
	int64_t t79 = -182268564221235659LL;

	t79 = (x381&((x382+x383)-x384));

	if (t79 != -2319400824LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x386 = 40;
	int32_t x388 = -1;
	volatile int32_t t80 = 0;

	t80 = (x385&((x386+x387)-x388));

	if (t80 != 40) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x389 = 804545215U;
	int64_t x390 = 39641576536LL;
	int32_t x391 = 570844289;
	uint16_t x392 = 2U;
	int64_t t81 = 194245593804LL;

	t81 = (x389&((x390+x391)-x392));

	if (t81 != 214974615LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x393 = 2U;
	int64_t x394 = INT64_MIN;
	uint32_t x395 = UINT32_MAX;
	int8_t x396 = -1;
	static int64_t t82 = -30979137406451LL;

	t82 = (x393&((x394+x395)-x396));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x397 = INT64_MIN;
	int8_t x398 = INT8_MIN;
	uint16_t x399 = UINT16_MAX;
	static int16_t x400 = -214;
	int64_t t83 = -1354412019411496LL;

	t83 = (x397&((x398+x399)-x400));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x401 = INT32_MAX;
	int64_t x403 = INT64_MAX;
	uint32_t x404 = 33U;
	uint64_t t84 = 161920LLU;

	t84 = (x401&((x402+x403)-x404));

	if (t84 != 60432LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x405 = -1LL;
	uint8_t x406 = 15U;
	uint32_t x408 = 4U;

	t85 = (x405&((x406+x407)-x408));

	if (t85 != -9223372036854775797LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x409 = 6U;
	int8_t x411 = -18;
	int8_t x412 = INT8_MIN;
	volatile int32_t t86 = 16961052;

	t86 = (x409&((x410+x411)-x412));

	if (t86 != 6) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x413 = INT64_MAX;
	int8_t x414 = 1;
	volatile int64_t x415 = -1LL;
	int16_t x416 = -1387;
	volatile int64_t t87 = 8LL;

	t87 = (x413&((x414+x415)-x416));

	if (t87 != 1387LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x421 = INT64_MIN;
	int16_t x422 = INT16_MAX;
	uint16_t x424 = 13U;
	int64_t t88 = 24345708875353564LL;

	t88 = (x421&((x422+x423)-x424));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x429 = 815553647;
	int8_t x430 = INT8_MIN;
	volatile int32_t t89 = -76;

	t89 = (x429&((x430+x431)-x432));

	if (t89 != 815553644) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x434 = -1;
	static uint64_t x435 = 3LLU;
	static int32_t x436 = INT32_MIN;
	volatile uint64_t t90 = 40LLU;

	t90 = (x433&((x434+x435)-x436));

	if (t90 != 2147483648LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x438 = INT16_MIN;
	uint64_t x439 = UINT64_MAX;
	static uint64_t t91 = 12891595LLU;

	t91 = (x437&((x438+x439)-x440));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x441 = 16176U;
	int64_t x442 = 1709LL;
	uint16_t x443 = 21733U;
	static uint32_t x444 = 26737U;
	volatile int64_t t92 = 687069235819LL;

	t92 = (x441&((x442+x443)-x444));

	if (t92 != 13088LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x449 = INT16_MIN;
	uint16_t x450 = 11U;
	uint64_t x451 = 10975962LLU;
	int32_t x452 = INT32_MAX;
	volatile uint64_t t93 = 1LLU;

	t93 = (x449&((x450+x451)-x452));

	if (t93 != 18446744071573012480LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x453 = 482437U;
	static int8_t x454 = INT8_MIN;
	static int64_t x456 = INT64_MIN;
	volatile int64_t t94 = 6993376297539196LL;

	t94 = (x453&((x454+x455)-x456));

	if (t94 != 481408LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x457 = -168;
	uint64_t x458 = 135LLU;
	int64_t x459 = INT64_MAX;
	uint32_t x460 = 60820850U;
	uint64_t t95 = 3700LLU;

	t95 = (x457&((x458+x459)-x460));

	if (t95 != 9223372036793955088LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x462 = 1151953623U;
	int32_t x463 = -1;
	int32_t x464 = INT32_MAX;
	uint64_t t96 = 1307362163362005288LLU;

	t96 = (x461&((x462+x463)-x464));

	if (t96 != 3232245829LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x465 = UINT8_MAX;
	static int8_t x466 = -3;
	int8_t x467 = INT8_MIN;
	int32_t t97 = 0;

	t97 = (x465&((x466+x467)-x468));

	if (t97 != 126) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x469 = INT8_MIN;
	volatile int32_t x470 = -1;
	int64_t x471 = 1892LL;
	uint64_t x472 = UINT64_MAX;

	t98 = (x469&((x470+x471)-x472));

	if (t98 != 1792LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x473 = INT32_MAX;
	int16_t x474 = -1;
	volatile uint32_t x475 = 198417U;
	int32_t x476 = INT32_MAX;

	t99 = (x473&((x474+x475)-x476));

	if (t99 != 198417U) { NG(); } else { ; }
	
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

