#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = -1LL;
static int32_t t0 = 93538;
static uint8_t x7 = UINT8_MAX;
int16_t x8 = -1;
int32_t t2 = 5245108;
int8_t x14 = -11;
uint16_t x15 = 70U;
volatile int32_t t3 = 255701;
static int8_t x17 = -1;
int8_t x27 = INT8_MAX;
volatile uint64_t x33 = 0LLU;
static int64_t x34 = INT64_MIN;
volatile uint8_t x40 = 56U;
static int8_t x49 = -1;
static volatile int32_t t9 = -239;
uint64_t x61 = UINT64_MAX;
volatile int32_t x64 = -1;
static int16_t x66 = INT16_MIN;
uint8_t x67 = 5U;
int32_t t12 = 916;
uint32_t x81 = UINT32_MAX;
static int32_t x83 = -12;
uint16_t x96 = 27255U;
int32_t x97 = INT32_MIN;
static uint64_t x99 = UINT64_MAX;
static volatile int32_t t18 = -9385;
int16_t x101 = 17;
uint8_t x104 = UINT8_MAX;
uint64_t x111 = 289LLU;
int16_t x115 = -1;
volatile int32_t x119 = INT32_MIN;
volatile int16_t x120 = 0;
int32_t t23 = 1779;
int64_t x121 = -1LL;
int32_t t26 = 825;
int8_t x139 = INT8_MAX;
static volatile int32_t t29 = 718355;
int16_t x148 = 2;
int16_t x158 = 113;
volatile int32_t t32 = -342947521;
int32_t x174 = 7;
int32_t t35 = 95275;
uint16_t x178 = 5454U;
static int16_t x186 = INT16_MIN;
int32_t t37 = 0;
static volatile uint32_t x189 = 359981030U;
int8_t x210 = -3;
volatile int32_t x212 = INT32_MIN;
static int8_t x213 = 6;
static int32_t t42 = 0;
int64_t x221 = INT64_MAX;
int16_t x225 = INT16_MIN;
static int16_t x228 = INT16_MIN;
static int16_t x236 = INT16_MIN;
static volatile int32_t t47 = -5992;
int64_t x244 = -1031497351624LL;
uint8_t x252 = 12U;
int64_t x253 = INT64_MIN;
static int64_t x269 = INT64_MIN;
int32_t t54 = -181;
volatile uint64_t x287 = UINT64_MAX;
volatile int32_t t56 = -1712317;
int8_t x313 = -1;
int64_t x322 = INT64_MAX;
int64_t x324 = -21478LL;
volatile int32_t x362 = 15324784;
int16_t x375 = INT16_MIN;
int8_t x385 = INT8_MIN;
int32_t x388 = INT32_MIN;
int32_t t68 = 0;
static volatile uint8_t x389 = 49U;
uint8_t x391 = 0U;
uint8_t x398 = 36U;
static uint32_t x403 = UINT32_MAX;
uint16_t x407 = 83U;
uint32_t x408 = 1026357308U;
static int16_t x417 = INT16_MIN;
int32_t x421 = INT32_MIN;
int8_t x422 = -21;
volatile int32_t x434 = INT32_MIN;
int8_t x436 = INT8_MAX;
uint32_t x444 = 139928459U;
uint16_t x445 = 24U;
uint32_t x452 = 431U;
volatile uint64_t x455 = 5873891301LLU;
static int16_t x461 = -13;
uint32_t x462 = 1465U;
int16_t x468 = 10172;
static int32_t x476 = INT32_MIN;
uint64_t x479 = UINT64_MAX;
volatile uint8_t x489 = 18U;
int32_t t88 = 23356;
volatile int32_t x496 = INT32_MIN;
int64_t x497 = -1LL;
static volatile uint32_t x500 = UINT32_MAX;
volatile int32_t t91 = 948217283;
static int64_t x508 = 747596981014219515LL;
volatile int32_t t93 = -56976;
static uint32_t x523 = 1902642U;
uint8_t x524 = UINT8_MAX;
uint64_t x525 = 1LLU;
int16_t x536 = INT16_MIN;
uint16_t x537 = 8937U;
int8_t x538 = -1;
volatile int32_t t98 = 3693885;


void f0(void) {
	static volatile int64_t x1 = -8266325LL;
	int32_t x2 = INT32_MAX;
	int64_t x4 = INT64_MAX;

	t0 = (x1==(x2+(x3*x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int8_t x6 = -1;
	volatile int32_t t1 = 22;

	t1 = (x5==(x6+(x7*x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 5U;
	volatile uint16_t x10 = 3444U;
	static int8_t x11 = 1;
	static uint8_t x12 = UINT8_MAX;

	t2 = (x9==(x10+(x11*x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x13 = UINT8_MAX;
	static volatile int16_t x16 = INT16_MAX;

	t3 = (x13==(x14+(x15*x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = INT16_MIN;
	int8_t x19 = 0;
	int64_t x20 = -1LL;
	int32_t t4 = 0;

	t4 = (x17==(x18+(x19*x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	uint64_t x22 = UINT64_MAX;
	int32_t x23 = INT32_MAX;
	volatile int64_t x24 = 2874LL;
	int32_t t5 = -104;

	t5 = (x21==(x22+(x23*x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	volatile uint32_t x26 = 10756809U;
	volatile int16_t x28 = INT16_MIN;
	int32_t t6 = 1539;

	t6 = (x25==(x26+(x27*x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x35 = INT16_MIN;
	int16_t x36 = INT16_MIN;
	int32_t t7 = -27639;

	t7 = (x33==(x34+(x35*x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x37 = 6433U;
	int8_t x38 = INT8_MIN;
	uint64_t x39 = 157LLU;
	static int32_t t8 = 11769203;

	t8 = (x37==(x38+(x39*x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x50 = 8819;
	uint32_t x51 = 439U;
	static int8_t x52 = INT8_MIN;

	t9 = (x49==(x50+(x51*x52)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x53 = 2852U;
	int8_t x54 = INT8_MIN;
	uint16_t x55 = 1U;
	int16_t x56 = INT16_MIN;
	static int32_t t10 = -178;

	t10 = (x53==(x54+(x55*x56)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x62 = 846U;
	uint16_t x63 = UINT16_MAX;
	volatile int32_t t11 = -6;

	t11 = (x61==(x62+(x63*x64)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x65 = 13789U;
	uint64_t x68 = 934164571631661LLU;

	t12 = (x65==(x66+(x67*x68)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x77 = UINT32_MAX;
	int64_t x78 = INT64_MIN;
	uint32_t x79 = 334U;
	int16_t x80 = INT16_MAX;
	volatile int32_t t13 = 3045;

	t13 = (x77==(x78+(x79*x80)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x82 = INT16_MIN;
	int64_t x84 = -35081288765968633LL;
	int32_t t14 = 6786;

	t14 = (x81==(x82+(x83*x84)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x85 = 99967896227391903LLU;
	uint16_t x86 = 3497U;
	static int16_t x87 = INT16_MIN;
	uint64_t x88 = UINT64_MAX;
	volatile int32_t t15 = -1375;

	t15 = (x85==(x86+(x87*x88)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x89 = 1;
	static uint64_t x90 = UINT64_MAX;
	int8_t x91 = 1;
	int16_t x92 = -1;
	int32_t t16 = -273;

	t16 = (x89==(x90+(x91*x92)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x93 = UINT32_MAX;
	int32_t x94 = -1;
	uint16_t x95 = 25013U;
	int32_t t17 = -33003910;

	t17 = (x93==(x94+(x95*x96)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x98 = UINT16_MAX;
	uint64_t x100 = 1LLU;

	t18 = (x97==(x98+(x99*x100)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x102 = 123665799LLU;
	volatile int8_t x103 = INT8_MIN;
	int32_t t19 = -133619659;

	t19 = (x101==(x102+(x103*x104)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x105 = 23691165394LLU;
	uint32_t x106 = 5646U;
	int64_t x107 = -1LL;
	int64_t x108 = INT64_MAX;
	int32_t t20 = -64161;

	t20 = (x105==(x106+(x107*x108)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x109 = 15074466;
	int32_t x110 = 108867153;
	int32_t x112 = INT32_MAX;
	int32_t t21 = 28;

	t21 = (x109==(x110+(x111*x112)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x113 = INT8_MIN;
	uint8_t x114 = 9U;
	static int32_t x116 = -515923858;
	volatile int32_t t22 = 2676353;

	t22 = (x113==(x114+(x115*x116)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x117 = -17176222632LL;
	uint16_t x118 = UINT16_MAX;

	t23 = (x117==(x118+(x119*x120)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x122 = -1;
	uint64_t x123 = 697824LLU;
	static int64_t x124 = INT64_MIN;
	int32_t t24 = 15442;

	t24 = (x121==(x122+(x123*x124)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x125 = INT8_MIN;
	volatile int32_t x126 = INT32_MIN;
	static uint32_t x127 = UINT32_MAX;
	int8_t x128 = INT8_MAX;
	int32_t t25 = -1;

	t25 = (x125==(x126+(x127*x128)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x129 = INT8_MIN;
	int64_t x130 = -4041237459191099LL;
	uint16_t x131 = UINT16_MAX;
	volatile int32_t x132 = -1;

	t26 = (x129==(x130+(x131*x132)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x133 = UINT32_MAX;
	volatile int32_t x134 = 10170589;
	int64_t x135 = INT64_MAX;
	int8_t x136 = -1;
	static int32_t t27 = 1199873;

	t27 = (x133==(x134+(x135*x136)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x137 = INT64_MAX;
	uint64_t x138 = UINT64_MAX;
	int8_t x140 = 3;
	static int32_t t28 = -86520;

	t28 = (x137==(x138+(x139*x140)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x141 = 30073U;
	int64_t x142 = INT64_MAX;
	static volatile int16_t x143 = INT16_MAX;
	int8_t x144 = -1;

	t29 = (x141==(x142+(x143*x144)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x145 = 13LL;
	volatile int32_t x146 = -1;
	int16_t x147 = -1;
	volatile int32_t t30 = -7200625;

	t30 = (x145==(x146+(x147*x148)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x153 = UINT32_MAX;
	uint16_t x154 = UINT16_MAX;
	int32_t x155 = INT32_MAX;
	int8_t x156 = -1;
	static int32_t t31 = -372495;

	t31 = (x153==(x154+(x155*x156)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x157 = INT64_MIN;
	volatile uint64_t x159 = UINT64_MAX;
	int32_t x160 = INT32_MIN;

	t32 = (x157==(x158+(x159*x160)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x161 = 620093633569647LL;
	int8_t x162 = INT8_MIN;
	uint32_t x163 = 128675502U;
	int32_t x164 = INT32_MAX;
	int32_t t33 = -7464391;

	t33 = (x161==(x162+(x163*x164)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x165 = 45986399097859189LLU;
	int32_t x166 = INT32_MAX;
	static uint32_t x167 = 29573U;
	volatile int8_t x168 = -1;
	int32_t t34 = -54;

	t34 = (x165==(x166+(x167*x168)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x173 = -1;
	int8_t x175 = 6;
	int32_t x176 = 29148090;

	t35 = (x173==(x174+(x175*x176)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x177 = INT32_MIN;
	volatile int8_t x179 = INT8_MAX;
	static int16_t x180 = INT16_MAX;
	volatile int32_t t36 = -6603;

	t36 = (x177==(x178+(x179*x180)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x185 = 32U;
	volatile int64_t x187 = -1LL;
	uint32_t x188 = UINT32_MAX;

	t37 = (x185==(x186+(x187*x188)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x190 = -43;
	int16_t x191 = INT16_MIN;
	uint64_t x192 = 66247223016LLU;
	int32_t t38 = 24322;

	t38 = (x189==(x190+(x191*x192)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x201 = 127U;
	volatile int64_t x202 = -1LL;
	static int32_t x203 = 42;
	uint32_t x204 = 244U;
	volatile int32_t t39 = -244528206;

	t39 = (x201==(x202+(x203*x204)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x209 = -1LL;
	uint64_t x211 = UINT64_MAX;
	int32_t t40 = 67;

	t40 = (x209==(x210+(x211*x212)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x214 = UINT16_MAX;
	uint64_t x215 = 685927902574LLU;
	int64_t x216 = INT64_MIN;
	volatile int32_t t41 = 174;

	t41 = (x213==(x214+(x215*x216)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x217 = 1899U;
	static uint32_t x218 = 100U;
	static uint64_t x219 = 32903515025LLU;
	int32_t x220 = 11026;

	t42 = (x217==(x218+(x219*x220)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x222 = -2987;
	volatile int32_t x223 = 503;
	uint32_t x224 = UINT32_MAX;
	static volatile int32_t t43 = 637;

	t43 = (x221==(x222+(x223*x224)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x226 = -194;
	uint64_t x227 = 7614067147LLU;
	int32_t t44 = 147782;

	t44 = (x225==(x226+(x227*x228)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x229 = -1LL;
	uint64_t x230 = 311652742328004LLU;
	uint64_t x231 = 0LLU;
	uint64_t x232 = UINT64_MAX;
	int32_t t45 = 28;

	t45 = (x229==(x230+(x231*x232)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x233 = 68U;
	uint8_t x234 = 24U;
	static int64_t x235 = -1LL;
	volatile int32_t t46 = 256006;

	t46 = (x233==(x234+(x235*x236)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x237 = INT8_MIN;
	static volatile int64_t x238 = INT64_MIN;
	uint64_t x239 = 8861609181637104021LLU;
	uint32_t x240 = UINT32_MAX;

	t47 = (x237==(x238+(x239*x240)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x241 = -11;
	int64_t x242 = -39041209635755LL;
	volatile int16_t x243 = INT16_MIN;
	static int32_t t48 = 1072;

	t48 = (x241==(x242+(x243*x244)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x245 = INT8_MIN;
	int32_t x246 = 0;
	int64_t x247 = 438142002551LL;
	uint32_t x248 = 211560U;
	static int32_t t49 = -726833;

	t49 = (x245==(x246+(x247*x248)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x249 = -1;
	uint32_t x250 = 6U;
	volatile uint8_t x251 = 4U;
	int32_t t50 = 14904192;

	t50 = (x249==(x250+(x251*x252)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x254 = INT16_MIN;
	static int16_t x255 = -1;
	volatile int64_t x256 = -1418787129652LL;
	volatile int32_t t51 = -24;

	t51 = (x253==(x254+(x255*x256)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x265 = 433136295;
	int16_t x266 = -10;
	static int8_t x267 = INT8_MAX;
	uint8_t x268 = UINT8_MAX;
	int32_t t52 = -1;

	t52 = (x265==(x266+(x267*x268)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x270 = UINT16_MAX;
	int8_t x271 = INT8_MIN;
	static int16_t x272 = INT16_MAX;
	int32_t t53 = -1017;

	t53 = (x269==(x270+(x271*x272)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x273 = UINT16_MAX;
	static uint32_t x274 = 1467737U;
	static int8_t x275 = -1;
	int8_t x276 = INT8_MAX;

	t54 = (x273==(x274+(x275*x276)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x285 = -41;
	uint32_t x286 = 79884428U;
	uint16_t x288 = 5884U;
	static volatile int32_t t55 = -136088528;

	t55 = (x285==(x286+(x287*x288)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x301 = INT64_MAX;
	uint16_t x302 = UINT16_MAX;
	volatile uint32_t x303 = 7251U;
	static uint16_t x304 = 0U;

	t56 = (x301==(x302+(x303*x304)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x309 = INT8_MIN;
	static uint8_t x310 = 43U;
	static uint64_t x311 = UINT64_MAX;
	int64_t x312 = -1LL;
	int32_t t57 = -24;

	t57 = (x309==(x310+(x311*x312)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x314 = -1;
	int64_t x315 = -1LL;
	uint16_t x316 = 26218U;
	int32_t t58 = -3;

	t58 = (x313==(x314+(x315*x316)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x321 = 25898059679238LLU;
	uint8_t x323 = 0U;
	static volatile int32_t t59 = 321823;

	t59 = (x321==(x322+(x323*x324)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x325 = INT64_MIN;
	int32_t x326 = INT32_MIN;
	volatile int16_t x327 = INT16_MAX;
	int64_t x328 = -10811750907LL;
	volatile int32_t t60 = -27847;

	t60 = (x325==(x326+(x327*x328)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x329 = -1;
	int16_t x330 = -1;
	int64_t x331 = -1LL;
	int8_t x332 = -1;
	volatile int32_t t61 = -43730;

	t61 = (x329==(x330+(x331*x332)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x341 = -1;
	int8_t x342 = INT8_MIN;
	uint16_t x343 = 15818U;
	int8_t x344 = -1;
	int32_t t62 = 2123501;

	t62 = (x341==(x342+(x343*x344)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x349 = 8U;
	int64_t x350 = 586566659LL;
	uint16_t x351 = UINT16_MAX;
	static int16_t x352 = INT16_MIN;
	volatile int32_t t63 = 1869;

	t63 = (x349==(x350+(x351*x352)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x353 = INT8_MIN;
	int32_t x354 = -1;
	static uint16_t x355 = 5945U;
	static volatile int8_t x356 = -1;
	volatile int32_t t64 = 3;

	t64 = (x353==(x354+(x355*x356)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x361 = INT8_MAX;
	uint8_t x363 = 63U;
	uint8_t x364 = UINT8_MAX;
	volatile int32_t t65 = 1062136809;

	t65 = (x361==(x362+(x363*x364)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x373 = -6;
	int32_t x374 = -1;
	int8_t x376 = INT8_MIN;
	volatile int32_t t66 = 1;

	t66 = (x373==(x374+(x375*x376)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x381 = -1;
	int8_t x382 = -4;
	int16_t x383 = 220;
	static uint32_t x384 = UINT32_MAX;
	volatile int32_t t67 = 1070981013;

	t67 = (x381==(x382+(x383*x384)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x386 = 376185493U;
	uint32_t x387 = UINT32_MAX;

	t68 = (x385==(x386+(x387*x388)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x390 = 13377;
	volatile int8_t x392 = -1;
	int32_t t69 = 1;

	t69 = (x389==(x390+(x391*x392)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x393 = INT8_MIN;
	int32_t x394 = -1;
	volatile uint64_t x395 = 2523LLU;
	uint16_t x396 = UINT16_MAX;
	int32_t t70 = 390;

	t70 = (x393==(x394+(x395*x396)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x397 = 5U;
	int16_t x399 = -1;
	int8_t x400 = 1;
	int32_t t71 = -1040474;

	t71 = (x397==(x398+(x399*x400)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x401 = INT32_MIN;
	static uint64_t x402 = 817904181734LLU;
	int32_t x404 = INT32_MIN;
	int32_t t72 = 0;

	t72 = (x401==(x402+(x403*x404)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x405 = 11;
	int32_t x406 = -1;
	int32_t t73 = 291;

	t73 = (x405==(x406+(x407*x408)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x409 = INT32_MIN;
	volatile int32_t x410 = INT32_MIN;
	int32_t x411 = -4784099;
	int64_t x412 = 183070185078LL;
	volatile int32_t t74 = -1488217;

	t74 = (x409==(x410+(x411*x412)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x418 = 0;
	uint32_t x419 = 977005779U;
	int64_t x420 = -1LL;
	int32_t t75 = 5989;

	t75 = (x417==(x418+(x419*x420)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x423 = 4611;
	int32_t x424 = -1;
	volatile int32_t t76 = -1;

	t76 = (x421==(x422+(x423*x424)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x433 = 18;
	uint32_t x435 = 3454U;
	volatile int32_t t77 = -64161;

	t77 = (x433==(x434+(x435*x436)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x441 = 38143586649409LLU;
	uint16_t x442 = UINT16_MAX;
	static volatile uint8_t x443 = 18U;
	volatile int32_t t78 = 20205728;

	t78 = (x441==(x442+(x443*x444)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x446 = INT16_MAX;
	volatile uint64_t x447 = 9222256LLU;
	uint32_t x448 = 354U;
	int32_t t79 = 8656;

	t79 = (x445==(x446+(x447*x448)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x449 = 2464U;
	static volatile int32_t x450 = 3550;
	volatile int32_t x451 = INT32_MIN;
	volatile int32_t t80 = 2968718;

	t80 = (x449==(x450+(x451*x452)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x453 = INT32_MAX;
	uint8_t x454 = UINT8_MAX;
	int32_t x456 = INT32_MIN;
	volatile int32_t t81 = 103;

	t81 = (x453==(x454+(x455*x456)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x457 = 2U;
	int16_t x458 = 3;
	static uint64_t x459 = 102960LLU;
	uint64_t x460 = 170LLU;
	static int32_t t82 = -654701;

	t82 = (x457==(x458+(x459*x460)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x463 = 1792501U;
	static int16_t x464 = -1;
	volatile int32_t t83 = 92710;

	t83 = (x461==(x462+(x463*x464)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x465 = 3047655U;
	int32_t x466 = 107;
	volatile uint32_t x467 = 380U;
	static int32_t t84 = -14417;

	t84 = (x465==(x466+(x467*x468)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x473 = INT32_MIN;
	uint64_t x474 = UINT64_MAX;
	volatile uint8_t x475 = 0U;
	volatile int32_t t85 = -4;

	t85 = (x473==(x474+(x475*x476)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x477 = UINT32_MAX;
	uint64_t x478 = UINT64_MAX;
	volatile int64_t x480 = INT64_MAX;
	static volatile int32_t t86 = -24013435;

	t86 = (x477==(x478+(x479*x480)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x481 = 7U;
	static int32_t x482 = INT32_MIN;
	static uint64_t x483 = 13591595701919630LLU;
	uint64_t x484 = 982382542966LLU;
	volatile int32_t t87 = 14153389;

	t87 = (x481==(x482+(x483*x484)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x490 = UINT32_MAX;
	uint64_t x491 = 2948248LLU;
	static int64_t x492 = -1LL;

	t88 = (x489==(x490+(x491*x492)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x493 = 86005560LLU;
	volatile int64_t x494 = 130LL;
	uint64_t x495 = 22250788461016LLU;
	int32_t t89 = 3294308;

	t89 = (x493==(x494+(x495*x496)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x498 = -1LL;
	static int8_t x499 = INT8_MIN;
	int32_t t90 = -273;

	t90 = (x497==(x498+(x499*x500)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x501 = -1;
	int16_t x502 = 2;
	volatile uint64_t x503 = UINT64_MAX;
	int64_t x504 = INT64_MIN;

	t91 = (x501==(x502+(x503*x504)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x505 = INT32_MAX;
	uint16_t x506 = 16150U;
	volatile uint16_t x507 = 4U;
	int32_t t92 = 9002048;

	t92 = (x505==(x506+(x507*x508)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x513 = -1LL;
	int8_t x514 = 27;
	uint32_t x515 = UINT32_MAX;
	int32_t x516 = INT32_MIN;

	t93 = (x513==(x514+(x515*x516)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x521 = INT32_MAX;
	uint64_t x522 = 80LLU;
	volatile int32_t t94 = 113485;

	t94 = (x521==(x522+(x523*x524)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x526 = -1;
	volatile int8_t x527 = -1;
	static int8_t x528 = INT8_MIN;
	volatile int32_t t95 = -3;

	t95 = (x525==(x526+(x527*x528)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x529 = 367225U;
	static volatile uint8_t x530 = UINT8_MAX;
	int16_t x531 = 18;
	static int16_t x532 = INT16_MIN;
	static volatile int32_t t96 = 550026;

	t96 = (x529==(x530+(x531*x532)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x533 = INT16_MIN;
	volatile uint32_t x534 = UINT32_MAX;
	static volatile int8_t x535 = INT8_MIN;
	int32_t t97 = 521335469;

	t97 = (x533==(x534+(x535*x536)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x539 = UINT8_MAX;
	uint64_t x540 = 17401987992923LLU;

	t98 = (x537==(x538+(x539*x540)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x545 = -1;
	uint64_t x546 = UINT64_MAX;
	int64_t x547 = -1LL;
	volatile uint16_t x548 = 1U;
	int32_t t99 = 0;

	t99 = (x545==(x546+(x547*x548)));

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

