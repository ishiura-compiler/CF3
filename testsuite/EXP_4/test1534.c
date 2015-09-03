#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t2 = -18;
int32_t x16 = INT32_MAX;
static uint64_t x20 = 35LLU;
int32_t x34 = -1;
int16_t x36 = 0;
uint64_t x41 = 19741485142128879LLU;
volatile uint32_t x47 = UINT32_MAX;
static uint16_t x57 = 52U;
volatile int32_t t13 = 197489;
uint32_t x61 = UINT32_MAX;
static volatile int32_t x62 = 8;
int32_t x68 = INT32_MIN;
int64_t x70 = -1LL;
int32_t x72 = INT32_MIN;
int16_t x73 = INT16_MAX;
volatile int16_t x74 = INT16_MIN;
uint32_t x75 = UINT32_MAX;
static volatile uint64_t x80 = 6LLU;
volatile uint64_t t18 = 4203030250715LLU;
int8_t x81 = -1;
volatile int8_t x82 = INT8_MIN;
uint8_t x83 = UINT8_MAX;
static uint64_t x84 = 1731LLU;
static volatile int32_t t19 = 37;
volatile int64_t t21 = 1964734105086645572LL;
static int8_t x94 = INT8_MIN;
static uint64_t t23 = 540715414802368LLU;
static int16_t x107 = INT16_MIN;
int64_t x109 = 5269LL;
uint8_t x119 = UINT8_MAX;
int32_t x120 = INT32_MAX;
static uint8_t x124 = UINT8_MAX;
int16_t x129 = INT16_MIN;
static int32_t t34 = -22;
static volatile uint8_t x150 = UINT8_MAX;
volatile uint16_t x151 = 1811U;
int64_t x156 = 914851734LL;
int64_t x157 = INT64_MIN;
int16_t x159 = -1;
static volatile int64_t t38 = 166237031168455LL;
int16_t x169 = INT16_MAX;
static int32_t x175 = -234116554;
uint64_t t43 = 432515821029582387LLU;
int64_t t44 = -411931751LL;
int8_t x195 = INT8_MAX;
static uint8_t x198 = UINT8_MAX;
static int8_t x208 = INT8_MIN;
static volatile int64_t t51 = 1558589LL;
int32_t x217 = 146773940;
uint8_t x223 = 1U;
uint64_t x225 = UINT64_MAX;
volatile int8_t x227 = INT8_MIN;
volatile uint16_t x230 = 28U;
uint8_t x232 = 0U;
int32_t x236 = INT32_MIN;
uint32_t t56 = 88087U;
uint64_t x238 = 0LLU;
int8_t x241 = INT8_MAX;
volatile int32_t x244 = INT32_MIN;
static int32_t x253 = -1;
static uint8_t x257 = UINT8_MAX;
static int8_t x258 = INT8_MIN;
volatile int32_t t62 = -1;
uint32_t x281 = 8067U;
int32_t x282 = INT32_MIN;
volatile int32_t t68 = 0;
static int16_t x290 = INT16_MAX;
uint64_t x291 = 793493830454228038LLU;
volatile uint32_t x295 = 6716801U;
volatile int8_t x299 = -1;
int8_t x301 = INT8_MIN;
volatile int32_t t72 = 20;
volatile int64_t t73 = 278910697366425LL;
uint64_t x313 = UINT64_MAX;
int8_t x320 = -1;
uint64_t x322 = 57663818345260516LLU;
int32_t x323 = 75;
uint64_t x328 = 44130LLU;
int32_t x329 = INT32_MAX;
uint16_t x332 = 0U;
static volatile uint64_t x341 = 251071816106204331LLU;
static int32_t x344 = 4051280;
volatile uint64_t t82 = 1418213LLU;
static int8_t x346 = -1;
int16_t x348 = -1;
int32_t x350 = -7290;
int64_t x352 = INT64_MIN;
volatile int32_t t92 = 301131;
static uint8_t x389 = 0U;
int32_t x394 = INT32_MIN;
int32_t t94 = -743;
volatile int8_t x413 = INT8_MIN;
int8_t x414 = INT8_MIN;
int32_t t98 = 219332;
volatile int32_t t99 = -17018;


void f0(void) {
	static uint64_t x1 = 28287653375LLU;
	static uint16_t x2 = 88U;
	int32_t x3 = -1;
	int16_t x4 = INT16_MAX;
	volatile uint64_t t0 = 91126357369071589LLU;

	t0 = (x1^(x2+(x3<=x4)));

	if (t0 != 28287653286LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = -1LL;
	volatile int16_t x6 = INT16_MIN;
	volatile int16_t x7 = INT16_MAX;
	int64_t x8 = -772LL;
	int64_t t1 = 348980LL;

	t1 = (x5^(x6+(x7<=x8)));

	if (t1 != 32767LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int8_t x10 = INT8_MIN;
	static int32_t x11 = INT32_MAX;
	int16_t x12 = -1;

	t2 = (x9^(x10+(x11<=x12)));

	if (t2 != 32640) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int8_t x14 = INT8_MAX;
	static uint16_t x15 = UINT16_MAX;
	static int32_t t3 = -7431;

	t3 = (x13^(x14+(x15<=x16)));

	if (t3 != -32640) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	int64_t x18 = -1LL;
	int16_t x19 = INT16_MAX;
	int64_t t4 = -6181LL;

	t4 = (x17^(x18+(x19<=x20)));

	if (t4 != -128LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	int64_t x22 = INT64_MIN;
	int64_t x23 = -1LL;
	static uint16_t x24 = UINT16_MAX;
	static int64_t t5 = -106965091151343LL;

	t5 = (x21^(x22+(x23<=x24)));

	if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -33;
	int64_t x26 = -572410LL;
	int64_t x27 = 68064742157982LL;
	int8_t x28 = -1;
	int64_t t6 = -7575377005611LL;

	t6 = (x25^(x26+(x27<=x28)));

	if (t6 != 572377LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 7788U;
	static int16_t x30 = -1;
	static volatile int32_t x31 = INT32_MIN;
	uint64_t x32 = UINT64_MAX;
	uint32_t t7 = 193U;

	t7 = (x29^(x30+(x31<=x32)));

	if (t7 != 7788U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x33 = UINT64_MAX;
	int32_t x35 = INT32_MIN;
	volatile uint64_t t8 = UINT64_MAX;

	t8 = (x33^(x34+(x35<=x36)));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = INT32_MIN;
	volatile uint8_t x38 = 89U;
	int64_t x39 = INT64_MIN;
	uint16_t x40 = 5428U;
	static volatile int32_t t9 = -1168;

	t9 = (x37^(x38+(x39<=x40)));

	if (t9 != -2147483558) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = -1;
	uint8_t x43 = 113U;
	volatile uint32_t x44 = UINT32_MAX;
	static uint64_t t10 = 887522203217725LLU;

	t10 = (x41^(x42+(x43<=x44)));

	if (t10 != 19741485142128879LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 9965U;
	static volatile int8_t x46 = 9;
	int64_t x48 = -1LL;
	volatile int32_t t11 = -40;

	t11 = (x45^(x46+(x47<=x48)));

	if (t11 != 9956) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = INT8_MIN;
	volatile uint16_t x50 = 7U;
	static uint32_t x51 = 11U;
	volatile int64_t x52 = -3787458701LL;
	static volatile int32_t t12 = -8916673;

	t12 = (x49^(x50+(x51<=x52)));

	if (t12 != -121) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x58 = 7927491;
	uint32_t x59 = 1U;
	static volatile uint32_t x60 = 5452U;

	t13 = (x57^(x58+(x59<=x60)));

	if (t13 != 7927536) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x63 = 1499;
	volatile int16_t x64 = 2;
	volatile uint32_t t14 = 27U;

	t14 = (x61^(x62+(x63<=x64)));

	if (t14 != 4294967287U) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x65 = INT16_MIN;
	static int16_t x66 = -34;
	uint8_t x67 = 5U;
	int32_t t15 = 811041;

	t15 = (x65^(x66+(x67<=x68)));

	if (t15 != 32734) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MIN;
	uint16_t x71 = 623U;
	int64_t t16 = -34291585209LL;

	t16 = (x69^(x70+(x71<=x72)));

	if (t16 != 127LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x76 = UINT8_MAX;
	volatile int32_t t17 = -952888;

	t17 = (x73^(x74+(x75<=x76)));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = 8;
	uint64_t x78 = UINT64_MAX;
	uint64_t x79 = 5962504879LLU;

	t18 = (x77^(x78+(x79<=x80)));

	if (t18 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f19(void) {


	t19 = (x81^(x82+(x83<=x84)));

	if (t19 != 126) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x85 = -4129;
	uint16_t x86 = UINT16_MAX;
	uint64_t x87 = UINT64_MAX;
	static uint16_t x88 = UINT16_MAX;
	volatile int32_t t20 = -2437625;

	t20 = (x85^(x86+(x87<=x88)));

	if (t20 != -61408) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x89 = 11182190396LL;
	uint16_t x90 = 7870U;
	static uint32_t x91 = UINT32_MAX;
	uint32_t x92 = UINT32_MAX;

	t21 = (x89^(x90+(x91<=x92)));

	if (t21 != 11182190979LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x93 = 8;
	uint8_t x95 = UINT8_MAX;
	volatile int8_t x96 = -1;
	volatile int32_t t22 = -61;

	t22 = (x93^(x94+(x95<=x96)));

	if (t22 != -120) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x97 = 93U;
	static uint64_t x98 = 1081581631692LLU;
	uint8_t x99 = 2U;
	static int16_t x100 = INT16_MIN;

	t23 = (x97^(x98+(x99<=x100)));

	if (t23 != 1081581631633LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = INT8_MAX;
	volatile uint64_t x102 = UINT64_MAX;
	volatile int8_t x103 = INT8_MIN;
	int64_t x104 = INT64_MIN;
	uint64_t t24 = 9LLU;

	t24 = (x101^(x102+(x103<=x104)));

	if (t24 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x105 = 25U;
	int8_t x106 = INT8_MIN;
	static uint16_t x108 = UINT16_MAX;
	volatile int32_t t25 = -127769;

	t25 = (x105^(x106+(x107<=x108)));

	if (t25 != -104) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x110 = 9244555U;
	int16_t x111 = 2;
	int8_t x112 = INT8_MIN;
	int64_t t26 = -6460255421283333LL;

	t26 = (x109^(x110+(x111<=x112)));

	if (t26 != 9247518LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x113 = UINT32_MAX;
	volatile int16_t x114 = -200;
	uint32_t x115 = 175148U;
	static int64_t x116 = -1480346004LL;
	static uint32_t t27 = 118U;

	t27 = (x113^(x114+(x115<=x116)));

	if (t27 != 199U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = INT8_MAX;
	int16_t x118 = INT16_MAX;
	int32_t t28 = -47391821;

	t28 = (x117^(x118+(x119<=x120)));

	if (t28 != 32895) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x121 = 17751605544897044LLU;
	int64_t x122 = 8461405822LL;
	uint8_t x123 = 1U;
	static volatile uint64_t t29 = 3431534591736940LLU;

	t29 = (x121^(x122+(x123<=x124)));

	if (t29 != 17751599239955563LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint8_t x125 = 30U;
	static volatile int64_t x126 = INT64_MIN;
	static int16_t x127 = INT16_MIN;
	volatile int16_t x128 = INT16_MAX;
	volatile int64_t t30 = -488603LL;

	t30 = (x125^(x126+(x127<=x128)));

	if (t30 != -9223372036854775777LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x130 = -1;
	int16_t x131 = INT16_MIN;
	int16_t x132 = INT16_MAX;
	volatile int32_t t31 = 1;

	t31 = (x129^(x130+(x131<=x132)));

	if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = -1;
	int64_t x134 = INT64_MAX;
	uint64_t x135 = UINT64_MAX;
	static uint32_t x136 = 916020U;
	static int64_t t32 = INT64_MIN;

	t32 = (x133^(x134+(x135<=x136)));

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x137 = INT64_MIN;
	int32_t x138 = INT32_MIN;
	volatile int32_t x139 = -6;
	int64_t x140 = 192927384LL;
	int64_t t33 = 3282535017816228114LL;

	t33 = (x137^(x138+(x139<=x140)));

	if (t33 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = -1;
	int8_t x142 = INT8_MIN;
	int64_t x143 = INT64_MAX;
	int32_t x144 = INT32_MIN;

	t34 = (x141^(x142+(x143<=x144)));

	if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x145 = 3LLU;
	int8_t x146 = INT8_MIN;
	static uint64_t x147 = 3LLU;
	int64_t x148 = INT64_MIN;
	uint64_t t35 = 870701729174060LLU;

	t35 = (x145^(x146+(x147<=x148)));

	if (t35 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x149 = UINT16_MAX;
	int16_t x152 = INT16_MIN;
	volatile int32_t t36 = -11;

	t36 = (x149^(x150+(x151<=x152)));

	if (t36 != 65280) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x153 = UINT64_MAX;
	int8_t x154 = -1;
	uint32_t x155 = UINT32_MAX;
	static uint64_t t37 = 619263LLU;

	t37 = (x153^(x154+(x155<=x156)));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x158 = 13U;
	volatile uint8_t x160 = 11U;

	t38 = (x157^(x158+(x159<=x160)));

	if (t38 != -9223372036854775794LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = INT8_MAX;
	static uint32_t x162 = 1298100668U;
	uint16_t x163 = UINT16_MAX;
	static int64_t x164 = INT64_MIN;
	volatile uint32_t t39 = 287890U;

	t39 = (x161^(x162+(x163<=x164)));

	if (t39 != 1298100675U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = INT16_MAX;
	volatile int32_t x166 = -1;
	int16_t x167 = INT16_MIN;
	static volatile int64_t x168 = INT64_MIN;
	int32_t t40 = -1;

	t40 = (x165^(x166+(x167<=x168)));

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x170 = INT64_MIN;
	volatile uint8_t x171 = 1U;
	int16_t x172 = INT16_MAX;
	volatile int64_t t41 = -1970459LL;

	t41 = (x169^(x170+(x171<=x172)));

	if (t41 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint64_t x173 = 51581770388LLU;
	uint64_t x174 = UINT64_MAX;
	uint32_t x176 = UINT32_MAX;
	volatile uint64_t t42 = 38LLU;

	t42 = (x173^(x174+(x175<=x176)));

	if (t42 != 51581770388LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x177 = UINT64_MAX;
	static uint64_t x178 = 6983LLU;
	int8_t x179 = INT8_MAX;
	uint32_t x180 = 16U;

	t43 = (x177^(x178+(x179<=x180)));

	if (t43 != 18446744073709544632LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x181 = INT16_MIN;
	volatile int64_t x182 = -5793254820388378LL;
	static uint64_t x183 = 952927827LLU;
	int32_t x184 = INT32_MIN;

	t44 = (x181^(x182+(x183<=x184)));

	if (t44 != 5793254820405735LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = -1LL;
	int64_t x186 = -1LL;
	uint32_t x187 = 784915453U;
	int8_t x188 = -1;
	static volatile int64_t t45 = -3494223699LL;

	t45 = (x185^(x186+(x187<=x188)));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x189 = INT32_MIN;
	static int16_t x190 = INT16_MIN;
	uint32_t x191 = UINT32_MAX;
	static volatile uint8_t x192 = 1U;
	volatile int32_t t46 = -757275;

	t46 = (x189^(x190+(x191<=x192)));

	if (t46 != 2147450880) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = INT8_MAX;
	int16_t x194 = -243;
	int64_t x196 = -1LL;
	volatile int32_t t47 = 2902336;

	t47 = (x193^(x194+(x195<=x196)));

	if (t47 != -142) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x197 = -38LL;
	static int32_t x199 = INT32_MAX;
	int8_t x200 = -1;
	int64_t t48 = 551879109087899652LL;

	t48 = (x197^(x198+(x199<=x200)));

	if (t48 != -219LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x201 = 3673LLU;
	int32_t x202 = -290613921;
	uint16_t x203 = UINT16_MAX;
	volatile int32_t x204 = -18;
	static uint64_t t49 = 268LLU;

	t49 = (x201^(x202+(x203<=x204)));

	if (t49 != 18446744073418939142LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x205 = -1;
	static volatile int64_t x206 = -936166343261651173LL;
	volatile int16_t x207 = INT16_MIN;
	static int64_t t50 = -25498LL;

	t50 = (x205^(x206+(x207<=x208)));

	if (t50 != 936166343261651171LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x213 = INT64_MIN;
	volatile uint32_t x214 = 408441271U;
	int16_t x215 = INT16_MIN;
	uint8_t x216 = 3U;

	t51 = (x213^(x214+(x215<=x216)));

	if (t51 != -9223372036446334536LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x218 = INT16_MAX;
	int8_t x219 = -1;
	uint8_t x220 = UINT8_MAX;
	int32_t t52 = 71;

	t52 = (x217^(x218+(x219<=x220)));

	if (t52 != 146741172) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x221 = 2;
	int8_t x222 = -1;
	int8_t x224 = 1;
	int32_t t53 = -55053;

	t53 = (x221^(x222+(x223<=x224)));

	if (t53 != 2) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x226 = -1;
	int64_t x228 = INT64_MAX;
	volatile uint64_t t54 = UINT64_MAX;

	t54 = (x225^(x226+(x227<=x228)));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x229 = -1;
	int8_t x231 = 49;
	volatile int32_t t55 = 1;

	t55 = (x229^(x230+(x231<=x232)));

	if (t55 != -29) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x233 = INT32_MAX;
	uint32_t x234 = 33228326U;
	volatile int8_t x235 = -1;

	t56 = (x233^(x234+(x235<=x236)));

	if (t56 != 2114255321U) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x237 = -1;
	uint64_t x239 = UINT64_MAX;
	int32_t x240 = INT32_MAX;
	volatile uint64_t t57 = UINT64_MAX;

	t57 = (x237^(x238+(x239<=x240)));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x242 = 62217242U;
	int64_t x243 = INT64_MAX;
	volatile uint32_t t58 = 480765890U;

	t58 = (x241^(x242+(x243<=x244)));

	if (t58 != 62217317U) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x245 = 2342516U;
	uint16_t x246 = 1U;
	volatile int32_t x247 = -206852719;
	static int8_t x248 = 11;
	static volatile uint32_t t59 = 1111202U;

	t59 = (x245^(x246+(x247<=x248)));

	if (t59 != 2342518U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x249 = INT16_MAX;
	int16_t x250 = 3;
	int32_t x251 = 494214;
	uint16_t x252 = 718U;
	volatile int32_t t60 = -938452;

	t60 = (x249^(x250+(x251<=x252)));

	if (t60 != 32764) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x254 = INT16_MIN;
	volatile int32_t x255 = INT32_MAX;
	int8_t x256 = -12;
	volatile int32_t t61 = -5680;

	t61 = (x253^(x254+(x255<=x256)));

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x259 = -1;
	int8_t x260 = INT8_MIN;

	t62 = (x257^(x258+(x259<=x260)));

	if (t62 != -129) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x261 = -375;
	uint32_t x262 = UINT32_MAX;
	int64_t x263 = INT64_MIN;
	static volatile int16_t x264 = -217;
	volatile uint32_t t63 = 325382U;

	t63 = (x261^(x262+(x263<=x264)));

	if (t63 != 4294966921U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x265 = 1012430409LLU;
	uint32_t x266 = 501U;
	int64_t x267 = INT64_MIN;
	int8_t x268 = 4;
	volatile uint64_t t64 = 8278315915925985201LLU;

	t64 = (x265^(x266+(x267<=x268)));

	if (t64 != 1012430783LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x269 = 1LLU;
	uint16_t x270 = UINT16_MAX;
	int32_t x271 = INT32_MIN;
	volatile int32_t x272 = -1697449;
	uint64_t t65 = 1524368604654557LLU;

	t65 = (x269^(x270+(x271<=x272)));

	if (t65 != 65537LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x273 = 1U;
	int32_t x274 = 755171751;
	int16_t x275 = -3;
	int32_t x276 = 1;
	volatile int32_t t66 = 38;

	t66 = (x273^(x274+(x275<=x276)));

	if (t66 != 755171753) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x283 = -308;
	static uint8_t x284 = UINT8_MAX;
	uint32_t t67 = 324440U;

	t67 = (x281^(x282+(x283<=x284)));

	if (t67 != 2147491714U) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x285 = -9;
	int16_t x286 = INT16_MIN;
	volatile int32_t x287 = -45;
	uint64_t x288 = 114495605425463LLU;

	t68 = (x285^(x286+(x287<=x288)));

	if (t68 != 32759) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x289 = INT32_MIN;
	volatile uint32_t x292 = UINT32_MAX;
	static int32_t t69 = -1114;

	t69 = (x289^(x290+(x291<=x292)));

	if (t69 != -2147450881) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x293 = 31U;
	uint64_t x294 = UINT64_MAX;
	int8_t x296 = -1;
	uint64_t t70 = 8746LLU;

	t70 = (x293^(x294+(x295<=x296)));

	if (t70 != 31LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x297 = -1;
	int64_t x298 = INT64_MIN;
	volatile uint64_t x300 = 159550752LLU;
	int64_t t71 = INT64_MAX;

	t71 = (x297^(x298+(x299<=x300)));

	if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x302 = 383U;
	static volatile int16_t x303 = INT16_MIN;
	volatile int8_t x304 = INT8_MIN;

	t72 = (x301^(x302+(x303<=x304)));

	if (t72 != -512) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x305 = 72374195447045226LL;
	static uint8_t x306 = 8U;
	uint32_t x307 = 35U;
	static int16_t x308 = 9;

	t73 = (x305^(x306+(x307<=x308)));

	if (t73 != 72374195447045218LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x309 = 5371775511LL;
	int32_t x310 = INT32_MIN;
	int64_t x311 = -208LL;
	int8_t x312 = 1;
	volatile int64_t t74 = 741351570735LL;

	t74 = (x309^(x310+(x311<=x312)));

	if (t74 != -5365642730LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x314 = INT32_MIN;
	int8_t x315 = INT8_MIN;
	volatile int32_t x316 = INT32_MIN;
	static uint64_t t75 = 2LLU;

	t75 = (x313^(x314+(x315<=x316)));

	if (t75 != 2147483647LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x317 = UINT32_MAX;
	int32_t x318 = INT32_MIN;
	static int8_t x319 = -1;
	static uint32_t t76 = 29U;

	t76 = (x317^(x318+(x319<=x320)));

	if (t76 != 2147483646U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x321 = INT16_MIN;
	volatile int16_t x324 = INT16_MIN;
	static volatile uint64_t t77 = 3549052360LLU;

	t77 = (x321^(x322+(x323<=x324)));

	if (t77 != 18389080255364277732LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x325 = 1U;
	int32_t x326 = INT32_MAX;
	volatile uint32_t x327 = 4604374U;
	uint32_t t78 = 4439205U;

	t78 = (x325^(x326+(x327<=x328)));

	if (t78 != 2147483646U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x330 = INT8_MIN;
	int8_t x331 = -1;
	static int32_t t79 = 1;

	t79 = (x329^(x330+(x331<=x332)));

	if (t79 != -2147483522) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int64_t x333 = 1562858623287722490LL;
	volatile int8_t x334 = INT8_MAX;
	int8_t x335 = -1;
	int8_t x336 = INT8_MIN;
	static volatile int64_t t80 = -1LL;

	t80 = (x333^(x334+(x335<=x336)));

	if (t80 != 1562858623287722373LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x337 = 6081U;
	static int64_t x338 = -1LL;
	int8_t x339 = INT8_MAX;
	uint16_t x340 = 7861U;
	static int64_t t81 = -2135439972060LL;

	t81 = (x337^(x338+(x339<=x340)));

	if (t81 != 6081LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x342 = INT64_MIN;
	uint32_t x343 = 97786593U;

	t82 = (x341^(x342+(x343<=x344)));

	if (t82 != 9474443852960980139LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x345 = INT16_MAX;
	int64_t x347 = INT64_MIN;
	int32_t t83 = -60450476;

	t83 = (x345^(x346+(x347<=x348)));

	if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x349 = -1;
	int16_t x351 = -1;
	volatile int32_t t84 = 0;

	t84 = (x349^(x350+(x351<=x352)));

	if (t84 != 7289) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x353 = -1LL;
	uint64_t x354 = 49305085826LLU;
	uint64_t x355 = UINT64_MAX;
	int16_t x356 = -1;
	uint64_t t85 = 33LLU;

	t85 = (x353^(x354+(x355<=x356)));

	if (t85 != 18446744024404465788LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x357 = -1;
	uint8_t x358 = 123U;
	static int16_t x359 = INT16_MAX;
	volatile uint64_t x360 = UINT64_MAX;
	int32_t t86 = 54287685;

	t86 = (x357^(x358+(x359<=x360)));

	if (t86 != -125) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x361 = INT64_MIN;
	volatile int32_t x362 = INT32_MIN;
	volatile int32_t x363 = INT32_MIN;
	uint16_t x364 = UINT16_MAX;
	volatile int64_t t87 = 28630099629071LL;

	t87 = (x361^(x362+(x363<=x364)));

	if (t87 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x365 = INT8_MAX;
	static int8_t x366 = 0;
	int8_t x367 = -1;
	static volatile int32_t x368 = -1;
	int32_t t88 = -1911289;

	t88 = (x365^(x366+(x367<=x368)));

	if (t88 != 126) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x369 = -2;
	static int32_t x370 = INT32_MIN;
	uint16_t x371 = 0U;
	static int8_t x372 = -1;
	static volatile int32_t t89 = 47964435;

	t89 = (x369^(x370+(x371<=x372)));

	if (t89 != 2147483646) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x373 = -450;
	int16_t x374 = INT16_MIN;
	int32_t x375 = -1;
	int8_t x376 = INT8_MIN;
	int32_t t90 = 52372;

	t90 = (x373^(x374+(x375<=x376)));

	if (t90 != 32318) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x381 = UINT32_MAX;
	uint8_t x382 = 13U;
	int32_t x383 = -9;
	uint8_t x384 = UINT8_MAX;
	uint32_t t91 = 14244402U;

	t91 = (x381^(x382+(x383<=x384)));

	if (t91 != 4294967281U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x385 = -1;
	uint16_t x386 = 2661U;
	int16_t x387 = INT16_MIN;
	int8_t x388 = INT8_MIN;

	t92 = (x385^(x386+(x387<=x388)));

	if (t92 != -2663) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x390 = INT16_MAX;
	static int8_t x391 = -1;
	uint16_t x392 = UINT16_MAX;
	volatile int32_t t93 = 3583543;

	t93 = (x389^(x390+(x391<=x392)));

	if (t93 != 32768) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x393 = INT32_MAX;
	int32_t x395 = INT32_MIN;
	uint16_t x396 = UINT16_MAX;

	t94 = (x393^(x394+(x395<=x396)));

	if (t94 != -2) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x397 = 12626LL;
	volatile int16_t x398 = 0;
	volatile int64_t x399 = INT64_MAX;
	volatile uint32_t x400 = 10U;
	int64_t t95 = 5853920020852167LL;

	t95 = (x397^(x398+(x399<=x400)));

	if (t95 != 12626LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x401 = -1;
	uint16_t x402 = 31U;
	uint8_t x403 = 3U;
	int32_t x404 = INT32_MAX;
	int32_t t96 = 0;

	t96 = (x401^(x402+(x403<=x404)));

	if (t96 != -33) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x409 = -12614;
	static uint64_t x410 = 1019826LLU;
	uint8_t x411 = 3U;
	static int64_t x412 = -51386712303LL;
	uint64_t t97 = 1LLU;

	t97 = (x409^(x410+(x411<=x412)));

	if (t97 != 18446744073708519688LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x415 = INT16_MIN;
	static uint64_t x416 = 2082055542LLU;

	t98 = (x413^(x414+(x415<=x416)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x417 = 3;
	int16_t x418 = -1;
	int16_t x419 = INT16_MIN;
	int8_t x420 = -1;

	t99 = (x417^(x418+(x419<=x420)));

	if (t99 != 3) { NG(); } else { ; }
	
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

