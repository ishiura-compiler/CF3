#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = -1;
volatile int8_t x11 = INT8_MAX;
volatile uint16_t x12 = 6U;
int32_t t1 = -1682494;
volatile int8_t x15 = INT8_MIN;
int8_t x25 = INT8_MAX;
volatile uint64_t t4 = 8674709359104926LLU;
static uint64_t x29 = 2484LLU;
volatile uint64_t t5 = 7102117094LLU;
volatile int32_t t6 = -589367;
volatile uint32_t t7 = 609U;
static volatile int32_t x50 = -183;
static volatile uint64_t x57 = 544551060153704171LLU;
uint32_t x61 = UINT32_MAX;
volatile uint64_t t12 = 16663070607175093LLU;
int16_t x71 = 2;
static int64_t t13 = -619403233822455LL;
uint32_t x76 = 34046U;
static int16_t x84 = INT16_MIN;
volatile int64_t t16 = -7674497651LL;
volatile uint64_t x88 = 3825LLU;
int32_t x89 = INT32_MIN;
volatile int32_t x93 = INT32_MAX;
static int8_t x94 = INT8_MIN;
volatile int8_t x104 = INT8_MIN;
static volatile uint32_t t23 = 5858U;
int32_t x121 = INT32_MIN;
int16_t x122 = -1;
int8_t x125 = INT8_MIN;
static int32_t x129 = INT32_MIN;
int8_t x133 = INT8_MIN;
int8_t x160 = INT8_MIN;
volatile int16_t x162 = -11347;
int8_t x180 = INT8_MIN;
uint32_t x186 = UINT32_MAX;
static int32_t x187 = 2;
volatile int16_t x188 = 0;
uint64_t x189 = 224LLU;
volatile uint64_t x192 = 12481103670LLU;
uint32_t t40 = 908U;
uint16_t x205 = UINT16_MAX;
volatile int16_t x206 = 1724;
int8_t x207 = -1;
uint32_t x211 = 99331U;
static volatile int8_t x212 = -11;
static volatile uint32_t x216 = 3908785U;
volatile uint64_t x220 = UINT64_MAX;
uint32_t t45 = 2541423U;
int64_t x232 = -80965603LL;
uint64_t x249 = 115724086534280069LLU;
uint64_t x256 = 8224067187577834LLU;
static volatile int16_t x261 = -1;
int64_t t51 = 8719209788585LL;
int64_t x268 = -55732004LL;
uint32_t x269 = 6267494U;
static uint16_t x272 = 61U;
int16_t x287 = INT16_MIN;
uint32_t t54 = 533355885U;
static int16_t x295 = -1;
int8_t x296 = -1;
volatile uint8_t x309 = 29U;
int8_t x310 = INT8_MIN;
uint64_t t59 = 127038389823023170LLU;
uint32_t x348 = 619650U;
int64_t x366 = INT64_MAX;
int16_t x373 = -1;
uint32_t x376 = 437772U;
uint64_t x380 = 18301280062605LLU;
int8_t x381 = INT8_MIN;
static volatile uint64_t x384 = 216LLU;
volatile uint16_t x387 = 16U;
int16_t x389 = -1;
int8_t x395 = 58;
static int32_t t71 = 0;
volatile int16_t x400 = -1;
int32_t x405 = -596692631;
static uint32_t x406 = 9158339U;
uint64_t x413 = UINT64_MAX;
uint8_t x419 = UINT8_MAX;
volatile int16_t x421 = INT16_MIN;
volatile int8_t x429 = -35;
static volatile int32_t t79 = -752897459;
volatile int64_t t80 = 35258505581683477LL;
static int32_t x438 = -1;
static uint32_t x447 = 71U;
volatile uint64_t x448 = 78977350966LLU;
static volatile uint64_t t83 = 28540LLU;
volatile uint64_t t86 = 747792843LLU;
int16_t x464 = 3;
int16_t x470 = 44;
volatile uint32_t t88 = 2U;
uint32_t x480 = 1U;
uint32_t t91 = 6137U;
int16_t x491 = 215;
uint64_t x497 = UINT64_MAX;
uint8_t x498 = UINT8_MAX;
int16_t x499 = INT16_MAX;
uint32_t x512 = 200613U;
volatile int64_t x515 = -2LL;
int64_t t95 = 5103700833912097LL;
volatile uint16_t x519 = 0U;
volatile int32_t t96 = 14879;
volatile int64_t x527 = 0LL;
int32_t x536 = 1352643;


void f0(void) {
	int32_t x5 = INT32_MIN;
	static uint32_t x7 = UINT32_MAX;
	int16_t x8 = INT16_MAX;
	uint32_t t0 = 312098280U;

	t0 = ((x5&x6)*(x7*x8));

	if (t0 != 2147483648U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = 22;
	int8_t x10 = 1;

	t1 = ((x9&x10)*(x11*x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MAX;
	volatile int16_t x14 = 379;
	volatile uint16_t x16 = 0U;
	int32_t t2 = 858047351;

	t2 = ((x13&x14)*(x15*x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MIN;
	static int64_t x18 = 2142815269144LL;
	uint64_t x19 = 200915359987847LLU;
	int32_t x20 = INT32_MIN;
	uint64_t t3 = 700616LLU;

	t3 = ((x17&x18)*(x19*x20));

	if (t3 != 15449317046717775872LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x26 = UINT32_MAX;
	int16_t x27 = INT16_MAX;
	volatile uint64_t x28 = 348LLU;

	t4 = ((x25&x26)*(x27*x28));

	if (t4 != 1448170332LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x30 = -411231;
	volatile uint64_t x31 = 51LLU;
	int32_t x32 = INT32_MIN;

	t5 = ((x29&x30)*(x31*x32));

	if (t5 != 18446474212324409344LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = INT8_MAX;
	int16_t x34 = INT16_MIN;
	volatile uint16_t x35 = UINT16_MAX;
	static int16_t x36 = INT16_MIN;

	t6 = ((x33&x34)*(x35*x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x37 = INT16_MIN;
	int32_t x38 = INT32_MAX;
	static uint32_t x39 = 104U;
	volatile int32_t x40 = -5;

	t7 = ((x37&x38)*(x39*x40));

	if (t7 != 17039360U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x41 = INT8_MIN;
	volatile int8_t x42 = INT8_MIN;
	uint32_t x43 = UINT32_MAX;
	int64_t x44 = -1LL;
	volatile int64_t t8 = -426252571LL;

	t8 = ((x41&x42)*(x43*x44));

	if (t8 != 549755813760LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = -1;
	uint32_t x51 = UINT32_MAX;
	uint32_t x52 = 17746595U;
	static uint32_t t9 = 11278U;

	t9 = ((x49&x50)*(x51*x52));

	if (t9 != 3247626885U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x53 = -11;
	volatile uint64_t x54 = UINT64_MAX;
	uint64_t x55 = UINT64_MAX;
	int64_t x56 = INT64_MIN;
	volatile uint64_t t10 = 79042106967LLU;

	t10 = ((x53&x54)*(x55*x56));

	if (t10 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x58 = INT8_MIN;
	uint8_t x59 = 25U;
	uint16_t x60 = 7122U;
	uint64_t t11 = 1LLU;

	t11 = ((x57&x58)*(x59*x60));

	if (t11 != 1229408949605301504LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x62 = INT64_MAX;
	int8_t x63 = INT8_MAX;
	volatile uint64_t x64 = 199104341512558605LLU;

	t12 = ((x61&x62)*(x63*x64));

	if (t12 != 3461331652029714829LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x69 = INT16_MIN;
	uint32_t x70 = 2U;
	int64_t x72 = -88LL;

	t13 = ((x69&x70)*(x71*x72));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x73 = UINT64_MAX;
	int8_t x74 = 2;
	uint8_t x75 = 77U;
	uint64_t t14 = 14257762515LLU;

	t14 = ((x73&x74)*(x75*x76));

	if (t14 != 5243084LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x77 = 20283011067LLU;
	static int32_t x78 = -1;
	volatile int16_t x79 = INT16_MAX;
	static uint32_t x80 = UINT32_MAX;
	uint64_t t15 = 271631634198LLU;

	t15 = ((x77&x78)*(x79*x80));

	if (t15 != 13327228288909225979LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x81 = INT8_MIN;
	int64_t x82 = -1LL;
	volatile int64_t x83 = -294LL;

	t16 = ((x81&x82)*(x83*x84));

	if (t16 != -1233125376LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x85 = INT16_MIN;
	uint64_t x86 = UINT64_MAX;
	int64_t x87 = INT64_MAX;
	volatile uint64_t t17 = 3629710220LLU;

	t17 = ((x85&x86)*(x87*x88));

	if (t17 != 125337600LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x90 = 41U;
	volatile uint32_t x91 = UINT32_MAX;
	volatile int32_t x92 = -1;
	uint32_t t18 = 10U;

	t18 = ((x89&x90)*(x91*x92));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x95 = 9589;
	volatile uint64_t x96 = 466553061819LLU;
	volatile uint64_t t19 = 365394266288LLU;

	t19 = ((x93&x94)*(x95*x96));

	if (t19 != 3583414505624257664LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x97 = -1;
	volatile uint64_t x98 = UINT64_MAX;
	volatile int64_t x99 = -78LL;
	int16_t x100 = 24;
	uint64_t t20 = 94033735402568LLU;

	t20 = ((x97&x98)*(x99*x100));

	if (t20 != 1872LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x101 = INT64_MIN;
	uint8_t x102 = UINT8_MAX;
	volatile int16_t x103 = -1;
	volatile int64_t t21 = 3741378690971410LL;

	t21 = ((x101&x102)*(x103*x104));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x105 = 3484U;
	uint8_t x106 = 13U;
	int16_t x107 = -1;
	volatile int8_t x108 = -1;
	int32_t t22 = 37069;

	t22 = ((x105&x106)*(x107*x108));

	if (t22 != 12) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x109 = -3615779;
	uint32_t x110 = 4U;
	uint32_t x111 = 44245736U;
	int16_t x112 = INT16_MIN;

	t23 = ((x109&x110)*(x111*x112));

	if (t23 != 3123707904U) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x117 = INT16_MIN;
	int8_t x118 = -1;
	uint32_t x119 = 21401U;
	int32_t x120 = 71389;
	volatile uint32_t t24 = 99300U;

	t24 = ((x117&x118)*(x119*x120));

	if (t24 != 3614801920U) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x123 = 0U;
	int32_t x124 = INT32_MIN;
	int32_t t25 = 14267605;

	t25 = ((x121&x122)*(x123*x124));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x126 = 596U;
	int8_t x127 = INT8_MAX;
	int8_t x128 = -1;
	volatile int32_t t26 = -64726644;

	t26 = ((x125&x126)*(x127*x128));

	if (t26 != -65024) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x130 = 24LLU;
	uint16_t x131 = 16U;
	volatile int64_t x132 = -1LL;
	volatile uint64_t t27 = 1LLU;

	t27 = ((x129&x130)*(x131*x132));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x134 = INT16_MIN;
	int8_t x135 = INT8_MIN;
	uint16_t x136 = 0U;
	static volatile int32_t t28 = 1906609;

	t28 = ((x133&x134)*(x135*x136));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x149 = -451687837LL;
	int32_t x150 = -9631155;
	int8_t x151 = -1;
	uint8_t x152 = 0U;
	static volatile int64_t t29 = 5828LL;

	t29 = ((x149&x150)*(x151*x152));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x153 = INT32_MIN;
	static volatile int64_t x154 = -16069148LL;
	static int64_t x155 = -133711LL;
	int16_t x156 = -1;
	int64_t t30 = -1404021923444LL;

	t30 = ((x153&x154)*(x155*x156));

	if (t30 != -287142186057728LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x157 = INT64_MAX;
	static int64_t x158 = INT64_MIN;
	int16_t x159 = INT16_MIN;
	int64_t t31 = -934484396179453LL;

	t31 = ((x157&x158)*(x159*x160));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x161 = UINT32_MAX;
	static int16_t x163 = -1;
	uint16_t x164 = UINT16_MAX;
	volatile uint32_t t32 = 760958U;

	t32 = ((x161&x162)*(x163*x164));

	if (t32 != 743625645U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x169 = -1;
	volatile int8_t x170 = 6;
	static int8_t x171 = 0;
	uint64_t x172 = 17983272450LLU;
	uint64_t t33 = 10LLU;

	t33 = ((x169&x170)*(x171*x172));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x177 = 13U;
	int8_t x178 = INT8_MAX;
	int16_t x179 = -1;
	static int32_t t34 = 78705;

	t34 = ((x177&x178)*(x179*x180));

	if (t34 != 1664) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x181 = -1;
	uint8_t x182 = 11U;
	volatile int8_t x183 = -22;
	int8_t x184 = INT8_MAX;
	static int32_t t35 = 814;

	t35 = ((x181&x182)*(x183*x184));

	if (t35 != -30734) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x185 = 22525400329LLU;
	static uint64_t t36 = 5135LLU;

	t36 = ((x185&x186)*(x187*x188));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x190 = INT32_MIN;
	int16_t x191 = INT16_MIN;
	uint64_t t37 = 7947073566150716774LLU;

	t37 = ((x189&x190)*(x191*x192));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x193 = 0;
	int16_t x194 = -1;
	static int8_t x195 = INT8_MAX;
	volatile uint16_t x196 = 220U;
	int32_t t38 = -1;

	t38 = ((x193&x194)*(x195*x196));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x197 = 8U;
	int64_t x198 = -1LL;
	static int8_t x199 = 0;
	static int16_t x200 = -1;
	static int64_t t39 = 14336066LL;

	t39 = ((x197&x198)*(x199*x200));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x201 = UINT32_MAX;
	int16_t x202 = INT16_MAX;
	int16_t x203 = -1;
	int8_t x204 = INT8_MAX;

	t40 = ((x201&x202)*(x203*x204));

	if (t40 != 4290805887U) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x208 = -1LL;
	volatile int64_t t41 = 50296803LL;

	t41 = ((x205&x206)*(x207*x208));

	if (t41 != 1724LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x209 = -1;
	uint32_t x210 = 70U;
	volatile uint32_t t42 = 15621432U;

	t42 = ((x209&x210)*(x211*x212));

	if (t42 != 4218482426U) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x213 = -7;
	uint16_t x214 = 19541U;
	int8_t x215 = -1;
	volatile uint32_t t43 = 38U;

	t43 = ((x213&x214)*(x215*x216));

	if (t43 != 943478783U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x217 = UINT32_MAX;
	uint32_t x218 = 241311U;
	uint16_t x219 = 1U;
	uint64_t t44 = 477328298974231LLU;

	t44 = ((x217&x218)*(x219*x220));

	if (t44 != 18446744073709310305LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x221 = 89U;
	static int32_t x222 = INT32_MAX;
	uint8_t x223 = 18U;
	uint32_t x224 = UINT32_MAX;

	t45 = ((x221&x222)*(x223*x224));

	if (t45 != 4294965694U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x229 = INT16_MIN;
	volatile int16_t x230 = -86;
	int8_t x231 = INT8_MIN;
	int64_t t46 = -55662756LL;

	t46 = ((x229&x230)*(x231*x232));

	if (t46 != -339594352525312LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x233 = -1;
	uint8_t x234 = 4U;
	int32_t x235 = 4;
	static int8_t x236 = INT8_MIN;
	volatile int32_t t47 = -1;

	t47 = ((x233&x234)*(x235*x236));

	if (t47 != -2048) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x250 = INT64_MIN;
	volatile uint8_t x251 = 0U;
	volatile int8_t x252 = 0;
	static uint64_t t48 = 10557813708855LLU;

	t48 = ((x249&x250)*(x251*x252));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x253 = 13LLU;
	static int32_t x254 = INT32_MIN;
	static uint8_t x255 = UINT8_MAX;
	uint64_t t49 = 520375LLU;

	t49 = ((x253&x254)*(x255*x256));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x257 = 0;
	int64_t x258 = -121440068408180LL;
	uint64_t x259 = UINT64_MAX;
	int16_t x260 = 3;
	uint64_t t50 = 7550586028270LLU;

	t50 = ((x257&x258)*(x259*x260));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x262 = 42274LL;
	static int32_t x263 = 0;
	int8_t x264 = INT8_MAX;

	t51 = ((x261&x262)*(x263*x264));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x265 = -1;
	int16_t x266 = INT16_MIN;
	volatile int16_t x267 = INT16_MIN;
	volatile int64_t t52 = 1307402223LL;

	t52 = ((x265&x266)*(x267*x268));

	if (t52 != -59841783630135296LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x270 = -25202LL;
	int8_t x271 = -1;
	volatile int64_t t53 = 66266090097289LL;

	t53 = ((x269&x270)*(x271*x272));

	if (t53 != -381780334LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x285 = 6U;
	int8_t x286 = 0;
	uint32_t x288 = UINT32_MAX;

	t54 = ((x285&x286)*(x287*x288));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x293 = 7LL;
	int64_t x294 = -209LL;
	int64_t t55 = 1467465078335118135LL;

	t55 = ((x293&x294)*(x295*x296));

	if (t55 != 7LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x301 = INT16_MAX;
	int8_t x302 = 9;
	int16_t x303 = INT16_MIN;
	int8_t x304 = 0;
	volatile int32_t t56 = -45835;

	t56 = ((x301&x302)*(x303*x304));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x311 = UINT8_MAX;
	static volatile uint64_t x312 = 49LLU;
	uint64_t t57 = 62316566LLU;

	t57 = ((x309&x310)*(x311*x312));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x321 = -234240792488LL;
	int16_t x322 = INT16_MIN;
	uint64_t x323 = 12636275LLU;
	int8_t x324 = INT8_MAX;
	volatile uint64_t t58 = 196397LLU;

	t58 = ((x321&x322)*(x323*x324));

	if (t58 != 11470363071224283136LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x325 = INT8_MIN;
	int16_t x326 = INT16_MIN;
	volatile uint64_t x327 = 14569508567LLU;
	int8_t x328 = -3;

	t59 = ((x325&x326)*(x327*x328));

	if (t59 != 1432240970170368LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x341 = 0;
	int16_t x342 = -1;
	uint32_t x343 = 16392U;
	static int16_t x344 = -2485;
	volatile uint32_t t60 = 2069510527U;

	t60 = ((x341&x342)*(x343*x344));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x345 = UINT64_MAX;
	volatile uint16_t x346 = 22U;
	int8_t x347 = INT8_MAX;
	volatile uint64_t t61 = 4725LLU;

	t61 = ((x345&x346)*(x347*x348));

	if (t61 != 1731302100LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x353 = -12;
	uint32_t x354 = 67734U;
	uint8_t x355 = 1U;
	int8_t x356 = INT8_MAX;
	volatile uint32_t t62 = 113218U;

	t62 = ((x353&x354)*(x355*x356));

	if (t62 != 8601964U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x361 = UINT64_MAX;
	int32_t x362 = INT32_MIN;
	static int64_t x363 = 11491102LL;
	static volatile uint32_t x364 = 1259U;
	volatile uint64_t t63 = 2073004638LLU;

	t63 = ((x361&x362)*(x363*x364));

	if (t63 != 5825203511511482368LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x365 = -1686883646LL;
	static uint64_t x367 = 1534561358429LLU;
	volatile uint16_t x368 = 539U;
	volatile uint64_t t64 = 353446428336LLU;

	t64 = ((x365&x366)*(x367*x368));

	if (t64 != 14390047188194106590LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x369 = INT16_MIN;
	static volatile uint16_t x370 = 2997U;
	volatile uint16_t x371 = 89U;
	int16_t x372 = INT16_MAX;
	static int32_t t65 = 14;

	t65 = ((x369&x370)*(x371*x372));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x374 = INT32_MIN;
	volatile int32_t x375 = INT32_MAX;
	uint32_t t66 = 772307146U;

	t66 = ((x373&x374)*(x375*x376));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x377 = 11778U;
	int16_t x378 = INT16_MIN;
	volatile uint16_t x379 = 9U;
	volatile uint64_t t67 = 987544LLU;

	t67 = ((x377&x378)*(x379*x380));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x382 = 84431837LLU;
	static volatile int64_t x383 = -1LL;
	volatile uint64_t t68 = 292056LLU;

	t68 = ((x381&x382)*(x383*x384));

	if (t68 != 18446744055472294912LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x385 = 0U;
	int8_t x386 = -3;
	uint16_t x388 = 7U;
	int32_t t69 = -179654656;

	t69 = ((x385&x386)*(x387*x388));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x390 = 6548681U;
	int16_t x391 = 4713;
	uint16_t x392 = 1970U;
	static volatile uint32_t t70 = 111290278U;

	t70 = ((x389&x390)*(x391*x392));

	if (t70 != 2392057234U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x393 = UINT8_MAX;
	static int16_t x394 = INT16_MAX;
	int16_t x396 = 1317;

	t71 = ((x393&x394)*(x395*x396));

	if (t71 != 19478430) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x397 = INT16_MIN;
	volatile uint16_t x398 = 31473U;
	uint32_t x399 = UINT32_MAX;
	volatile uint32_t t72 = 52692U;

	t72 = ((x397&x398)*(x399*x400));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x401 = -1;
	int64_t x402 = 1693894852348LL;
	int16_t x403 = -79;
	uint8_t x404 = 1U;
	static int64_t t73 = 2751521413LL;

	t73 = ((x401&x402)*(x403*x404));

	if (t73 != -133817693335492LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x407 = 46LLU;
	uint8_t x408 = 9U;
	volatile uint64_t t74 = 12LLU;

	t74 = ((x405&x406)*(x407*x408));

	if (t74 != 303565086LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x409 = 110U;
	static volatile int8_t x410 = 3;
	volatile int8_t x411 = INT8_MAX;
	uint16_t x412 = 7483U;
	volatile int32_t t75 = 339;

	t75 = ((x409&x410)*(x411*x412));

	if (t75 != 1900682) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x414 = -1172;
	volatile int32_t x415 = -1;
	int64_t x416 = INT64_MAX;
	volatile uint64_t t76 = 712042LLU;

	t76 = ((x413&x414)*(x415*x416));

	if (t76 != 18446744073709550444LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x417 = 629;
	uint16_t x418 = UINT16_MAX;
	volatile int16_t x420 = -1;
	int32_t t77 = 127488943;

	t77 = ((x417&x418)*(x419*x420));

	if (t77 != -160395) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x422 = 2;
	int8_t x423 = INT8_MIN;
	int64_t x424 = -1LL;
	int64_t t78 = -5809012756LL;

	t78 = ((x421&x422)*(x423*x424));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x430 = -23;
	int8_t x431 = INT8_MIN;
	volatile int16_t x432 = INT16_MIN;

	t79 = ((x429&x430)*(x431*x432));

	if (t79 != -230686720) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x433 = 54;
	volatile int8_t x434 = INT8_MAX;
	int64_t x435 = INT64_MAX;
	volatile uint32_t x436 = 0U;

	t80 = ((x433&x434)*(x435*x436));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x437 = 4U;
	int16_t x439 = INT16_MAX;
	uint16_t x440 = 7768U;
	static volatile int32_t t81 = 126928881;

	t81 = ((x437&x438)*(x439*x440));

	if (t81 != 1018136224) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x441 = UINT64_MAX;
	uint8_t x442 = 38U;
	uint32_t x443 = UINT32_MAX;
	volatile uint8_t x444 = 75U;
	volatile uint64_t t82 = 1670790LLU;

	t82 = ((x441&x442)*(x443*x444));

	if (t82 != 163208754398LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x445 = -1;
	volatile int8_t x446 = -1;

	t83 = ((x445&x446)*(x447*x448));

	if (t83 != 18446738466317633030LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x449 = INT32_MIN;
	volatile int64_t x450 = 7553286571LL;
	volatile int8_t x451 = 0;
	uint16_t x452 = UINT16_MAX;
	static volatile int64_t t84 = 134733905409531473LL;

	t84 = ((x449&x450)*(x451*x452));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x453 = -1;
	int64_t x454 = -1LL;
	int32_t x455 = -1;
	int64_t x456 = 28365289547212LL;
	volatile int64_t t85 = -91703LL;

	t85 = ((x453&x454)*(x455*x456));

	if (t85 != 28365289547212LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x457 = 1108473LLU;
	int8_t x458 = INT8_MIN;
	int64_t x459 = -1LL;
	int32_t x460 = -1;

	t86 = ((x457&x458)*(x459*x460));

	if (t86 != 1108352LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x461 = 41637629LLU;
	int64_t x462 = INT64_MIN;
	uint64_t x463 = UINT64_MAX;
	uint64_t t87 = 962259039591258142LLU;

	t87 = ((x461&x462)*(x463*x464));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint16_t x469 = 742U;
	volatile uint16_t x471 = 4700U;
	volatile uint32_t x472 = UINT32_MAX;

	t88 = ((x469&x470)*(x471*x472));

	if (t88 != 4294798096U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x473 = -1;
	volatile uint64_t x474 = 73LLU;
	static uint8_t x475 = 2U;
	static int32_t x476 = -526;
	volatile uint64_t t89 = 10094LLU;

	t89 = ((x473&x474)*(x475*x476));

	if (t89 != 18446744073709474820LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x477 = INT16_MIN;
	volatile uint32_t x478 = UINT32_MAX;
	uint8_t x479 = UINT8_MAX;
	static uint32_t t90 = 1279U;

	t90 = ((x477&x478)*(x479*x480));

	if (t90 != 4286611456U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x481 = INT32_MIN;
	volatile int32_t x482 = -116874577;
	uint32_t x483 = 101409633U;
	volatile int8_t x484 = -14;

	t91 = ((x481&x482)*(x483*x484));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x489 = UINT16_MAX;
	volatile uint16_t x490 = 3U;
	static volatile uint8_t x492 = 0U;
	int32_t t92 = -251;

	t92 = ((x489&x490)*(x491*x492));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x500 = 226U;
	uint64_t t93 = 789148139LLU;

	t93 = ((x497&x498)*(x499*x500));

	if (t93 != 1888362210LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x509 = 19767902163LLU;
	volatile uint32_t x510 = UINT32_MAX;
	int16_t x511 = INT16_MIN;
	static volatile uint64_t t94 = 371496570LLU;

	t94 = ((x509&x510)*(x511*x512));

	if (t94 != 5218115820940460032LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x513 = INT8_MAX;
	volatile int16_t x514 = INT16_MIN;
	volatile int8_t x516 = INT8_MIN;

	t95 = ((x513&x514)*(x515*x516));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x517 = 30U;
	volatile int16_t x518 = INT16_MAX;
	static int8_t x520 = -1;

	t96 = ((x517&x518)*(x519*x520));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x525 = -50;
	int16_t x526 = INT16_MIN;
	int8_t x528 = 0;
	volatile int64_t t97 = 109LL;

	t97 = ((x525&x526)*(x527*x528));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x529 = -1;
	uint8_t x530 = 0U;
	int32_t x531 = -25;
	int8_t x532 = -1;
	volatile int32_t t98 = -84936;

	t98 = ((x529&x530)*(x531*x532));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x533 = 1U;
	static uint32_t x534 = UINT32_MAX;
	int8_t x535 = INT8_MIN;
	uint32_t t99 = 303367837U;

	t99 = ((x533&x534)*(x535*x536));

	if (t99 != 4121828992U) { NG(); } else { ; }
	
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

