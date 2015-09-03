#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = -1;
int32_t t2 = 21359;
static int32_t x17 = INT32_MIN;
int16_t x22 = 0;
static int32_t x27 = -1;
uint16_t x32 = 143U;
int32_t t7 = -3425684;
int8_t x34 = 1;
int32_t t8 = -5;
static int32_t x37 = -1;
uint64_t x48 = UINT64_MAX;
static int64_t x50 = INT64_MIN;
int32_t t13 = -16;
int32_t x57 = -1;
int32_t x59 = -927733439;
int16_t x60 = 9;
volatile int32_t t15 = -14;
int64_t x68 = 980674367979032432LL;
static volatile int8_t x70 = INT8_MIN;
int64_t x73 = 184881LL;
static int32_t t18 = -58674189;
uint64_t x77 = UINT64_MAX;
int32_t t19 = -264795060;
volatile int16_t x88 = 1814;
int64_t x98 = INT64_MIN;
int32_t x100 = INT32_MIN;
uint8_t x107 = 26U;
uint8_t x109 = UINT8_MAX;
static int16_t x113 = INT16_MAX;
uint64_t x117 = 0LLU;
uint16_t x119 = UINT16_MAX;
int16_t x130 = -1;
volatile int16_t x134 = INT16_MAX;
int64_t x136 = INT64_MIN;
volatile int16_t x141 = 151;
uint32_t x144 = 494662U;
static uint16_t x147 = 24098U;
static uint32_t x151 = 7709116U;
int64_t x153 = INT64_MAX;
int32_t x155 = -40121477;
uint64_t x160 = 2784969862495LLU;
int32_t x161 = INT32_MIN;
volatile int32_t t40 = 1215682;
static int32_t x177 = INT32_MIN;
static int32_t x178 = INT32_MAX;
volatile int32_t t41 = 1085;
static volatile int8_t x181 = INT8_MIN;
int32_t x186 = -16304;
int8_t x195 = -1;
int64_t x198 = INT64_MIN;
int16_t x205 = -1;
volatile int64_t x218 = INT64_MAX;
volatile int32_t x220 = INT32_MAX;
int64_t x227 = INT64_MIN;
volatile int32_t t54 = -17356724;
int32_t x240 = 282;
volatile int32_t t56 = -1423724;
int32_t x241 = INT32_MIN;
volatile int8_t x245 = INT8_MIN;
int32_t x255 = INT32_MIN;
int32_t x270 = INT32_MIN;
volatile int32_t t64 = 237;
int16_t x273 = -1;
uint32_t x276 = 344958078U;
volatile int32_t t65 = -63;
int32_t x280 = INT32_MAX;
volatile uint32_t x282 = 55U;
int32_t t67 = -3783313;
static uint16_t x285 = UINT16_MAX;
int16_t x289 = -12;
static volatile int8_t x292 = INT8_MIN;
volatile int32_t t70 = -3901830;
uint16_t x305 = 0U;
volatile int32_t t73 = -1;
int64_t x312 = INT64_MIN;
uint16_t x314 = UINT16_MAX;
static int16_t x316 = -1;
volatile uint16_t x324 = UINT16_MAX;
static int32_t x326 = 792558;
volatile int16_t x327 = -422;
static uint32_t x329 = 19U;
int64_t x331 = INT64_MAX;
static volatile int32_t t79 = -27949970;
int32_t x344 = -1;
volatile int32_t x348 = -65043565;
uint32_t x355 = UINT32_MAX;
volatile int32_t x361 = INT32_MIN;
uint32_t x364 = 26374123U;
static int16_t x365 = -46;
volatile int8_t x367 = 0;
static uint16_t x368 = 2U;
int32_t x370 = INT32_MIN;
int64_t x375 = INT64_MIN;
int64_t x378 = -1LL;
static int16_t x385 = INT16_MAX;
int64_t x386 = 13723678528LL;
int16_t x387 = INT16_MAX;
volatile uint32_t x391 = 204497U;
int32_t x394 = INT32_MIN;
static int8_t x395 = 0;
uint64_t x396 = 1LLU;
static uint32_t x400 = UINT32_MAX;
volatile int32_t t96 = 8588;
static uint8_t x414 = 6U;
volatile int32_t t97 = -142425177;
static int32_t x424 = INT32_MIN;


void f0(void) {
	volatile uint32_t x1 = UINT32_MAX;
	int32_t x2 = 1;
	uint64_t x3 = 120508LLU;
	int32_t x4 = INT32_MAX;
	volatile int32_t t0 = -4;

	t0 = ((x1&x2)<(x3/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x5 = INT16_MIN;
	int8_t x6 = 2;
	int64_t x8 = -1LL;
	volatile int32_t t1 = -429;

	t1 = ((x5&x6)<(x7/x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int8_t x10 = INT8_MIN;
	int8_t x11 = INT8_MIN;
	volatile int32_t x12 = INT32_MIN;

	t2 = ((x9&x10)<(x11/x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	static volatile int32_t x14 = INT32_MIN;
	uint32_t x15 = 36752U;
	int32_t x16 = -1;
	int32_t t3 = 70;

	t3 = ((x13&x14)<(x15/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = -1;
	uint8_t x19 = UINT8_MAX;
	int8_t x20 = -1;
	int32_t t4 = -110;

	t4 = ((x17&x18)<(x19/x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = 12939LLU;
	volatile int32_t x23 = INT32_MAX;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = 153;

	t5 = ((x21&x22)<(x23/x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	uint32_t x26 = 431674U;
	static uint32_t x28 = 6102296U;
	int32_t t6 = -1405773;

	t6 = ((x25&x26)<(x27/x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = INT16_MIN;
	uint16_t x30 = UINT16_MAX;
	uint64_t x31 = 16334LLU;

	t7 = ((x29&x30)<(x31/x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x33 = 495063881295753LLU;
	int16_t x35 = -42;
	int16_t x36 = INT16_MIN;

	t8 = ((x33&x34)<(x35/x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x38 = 4167732838281340683LL;
	int8_t x39 = -1;
	int32_t x40 = -1;
	int32_t t9 = 96;

	t9 = ((x37&x38)<(x39/x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x41 = -1;
	int8_t x42 = INT8_MIN;
	int8_t x43 = 1;
	static int32_t x44 = -1;
	static int32_t t10 = -13538;

	t10 = ((x41&x42)<(x43/x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 1668994210U;
	int32_t x46 = 716;
	static int32_t x47 = 2034555;
	static volatile int32_t t11 = -36310223;

	t11 = ((x45&x46)<(x47/x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	static volatile uint64_t x51 = 5369380204558074LLU;
	int16_t x52 = INT16_MAX;
	int32_t t12 = 348842133;

	t12 = ((x49&x50)<(x51/x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 81U;
	uint32_t x54 = 239933616U;
	int64_t x55 = INT64_MAX;
	volatile int64_t x56 = -1LL;

	t13 = ((x53&x54)<(x55/x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x58 = 41027244U;
	int32_t t14 = -1;

	t14 = ((x57&x58)<(x59/x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	int64_t x62 = 26660260751808LL;
	int32_t x63 = -92;
	static uint64_t x64 = 3194426850748811414LLU;

	t15 = ((x61&x62)<(x63/x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = INT8_MIN;
	uint64_t x66 = UINT64_MAX;
	uint16_t x67 = 2378U;
	volatile int32_t t16 = -219378;

	t16 = ((x65&x66)<(x67/x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = -1;
	int32_t x71 = INT32_MIN;
	int16_t x72 = INT16_MAX;
	int32_t t17 = -344;

	t17 = ((x69&x70)<(x71/x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = -72;
	static uint16_t x75 = UINT16_MAX;
	int8_t x76 = INT8_MIN;

	t18 = ((x73&x74)<(x75/x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x78 = -2059371904LL;
	int64_t x79 = INT64_MAX;
	int8_t x80 = INT8_MAX;

	t19 = ((x77&x78)<(x79/x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x81 = 10581449U;
	int32_t x82 = -238537;
	int32_t x83 = INT32_MIN;
	uint32_t x84 = UINT32_MAX;
	static int32_t t20 = -3023;

	t20 = ((x81&x82)<(x83/x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	int32_t x86 = INT32_MIN;
	uint16_t x87 = 2U;
	static int32_t t21 = -220567088;

	t21 = ((x85&x86)<(x87/x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = INT8_MAX;
	static int16_t x94 = INT16_MAX;
	static volatile int64_t x95 = -421LL;
	static int8_t x96 = INT8_MIN;
	int32_t t22 = 1572;

	t22 = ((x93&x94)<(x95/x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x97 = -1;
	int64_t x99 = INT64_MAX;
	int32_t t23 = -293630946;

	t23 = ((x97&x98)<(x99/x100));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = INT8_MAX;
	int64_t x102 = 3357781LL;
	uint64_t x103 = UINT64_MAX;
	int64_t x104 = INT64_MAX;
	static int32_t t24 = -870892;

	t24 = ((x101&x102)<(x103/x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x105 = INT8_MIN;
	int16_t x106 = 6;
	static uint16_t x108 = 1564U;
	int32_t t25 = -69640;

	t25 = ((x105&x106)<(x107/x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x110 = -1;
	volatile int16_t x111 = 1;
	int64_t x112 = -27LL;
	volatile int32_t t26 = -346;

	t26 = ((x109&x110)<(x111/x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x114 = 4491;
	int8_t x115 = -14;
	static int64_t x116 = INT64_MIN;
	int32_t t27 = -1;

	t27 = ((x113&x114)<(x115/x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint32_t x118 = UINT32_MAX;
	int8_t x120 = -1;
	static int32_t t28 = 5183;

	t28 = ((x117&x118)<(x119/x120));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = INT64_MIN;
	static int64_t x131 = -1LL;
	int16_t x132 = INT16_MAX;
	int32_t t29 = 49126767;

	t29 = ((x129&x130)<(x131/x132));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x133 = INT32_MIN;
	int64_t x135 = INT64_MAX;
	int32_t t30 = -2;

	t30 = ((x133&x134)<(x135/x136));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x137 = INT32_MIN;
	uint32_t x138 = 986205829U;
	int8_t x139 = INT8_MIN;
	int32_t x140 = 20963168;
	volatile int32_t t31 = -78836316;

	t31 = ((x137&x138)<(x139/x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x142 = INT32_MIN;
	uint16_t x143 = UINT16_MAX;
	static int32_t t32 = -2958;

	t32 = ((x141&x142)<(x143/x144));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x145 = INT8_MAX;
	int16_t x146 = INT16_MIN;
	volatile int32_t x148 = INT32_MAX;
	static volatile int32_t t33 = 53292459;

	t33 = ((x145&x146)<(x147/x148));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x149 = INT32_MIN;
	static uint8_t x150 = UINT8_MAX;
	int8_t x152 = INT8_MIN;
	static int32_t t34 = -3180;

	t34 = ((x149&x150)<(x151/x152));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x154 = 12;
	volatile int8_t x156 = INT8_MIN;
	int32_t t35 = -1;

	t35 = ((x153&x154)<(x155/x156));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x157 = INT8_MIN;
	uint16_t x158 = 3U;
	int64_t x159 = -1LL;
	volatile int32_t t36 = 24886;

	t36 = ((x157&x158)<(x159/x160));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x162 = UINT32_MAX;
	int64_t x163 = INT64_MIN;
	int64_t x164 = INT64_MIN;
	volatile int32_t t37 = -2837;

	t37 = ((x161&x162)<(x163/x164));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x165 = INT64_MIN;
	volatile int16_t x166 = INT16_MIN;
	uint16_t x167 = 55U;
	volatile int64_t x168 = INT64_MAX;
	int32_t t38 = 14;

	t38 = ((x165&x166)<(x167/x168));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x169 = INT16_MIN;
	static uint8_t x170 = UINT8_MAX;
	volatile int32_t x171 = -1;
	int32_t x172 = -1;
	int32_t t39 = 3;

	t39 = ((x169&x170)<(x171/x172));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x173 = INT64_MIN;
	uint64_t x174 = UINT64_MAX;
	uint32_t x175 = 22769U;
	int32_t x176 = -490751;

	t40 = ((x173&x174)<(x175/x176));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x179 = INT16_MIN;
	int64_t x180 = INT64_MIN;

	t41 = ((x177&x178)<(x179/x180));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x182 = INT16_MAX;
	uint64_t x183 = UINT64_MAX;
	int16_t x184 = INT16_MIN;
	volatile int32_t t42 = -748074;

	t42 = ((x181&x182)<(x183/x184));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x185 = 30U;
	static int16_t x187 = INT16_MAX;
	uint64_t x188 = UINT64_MAX;
	int32_t t43 = 94442;

	t43 = ((x185&x186)<(x187/x188));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x189 = 4078137264LLU;
	int64_t x190 = 9817LL;
	volatile uint64_t x191 = UINT64_MAX;
	int32_t x192 = 39921875;
	static volatile int32_t t44 = -8;

	t44 = ((x189&x190)<(x191/x192));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x193 = UINT32_MAX;
	volatile int16_t x194 = INT16_MAX;
	int8_t x196 = -1;
	volatile int32_t t45 = -445568480;

	t45 = ((x193&x194)<(x195/x196));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x197 = UINT16_MAX;
	static volatile int64_t x199 = INT64_MIN;
	int16_t x200 = INT16_MIN;
	static volatile int32_t t46 = 5;

	t46 = ((x197&x198)<(x199/x200));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x201 = 2133636520993437LLU;
	int64_t x202 = 7373275LL;
	uint32_t x203 = UINT32_MAX;
	uint8_t x204 = 2U;
	static int32_t t47 = -129420;

	t47 = ((x201&x202)<(x203/x204));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x206 = UINT64_MAX;
	uint32_t x207 = 1U;
	volatile int8_t x208 = INT8_MIN;
	volatile int32_t t48 = -157;

	t48 = ((x205&x206)<(x207/x208));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x209 = 0;
	static uint32_t x210 = UINT32_MAX;
	static int32_t x211 = INT32_MAX;
	int8_t x212 = INT8_MIN;
	volatile int32_t t49 = 71527;

	t49 = ((x209&x210)<(x211/x212));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x213 = 94U;
	int8_t x214 = -1;
	uint16_t x215 = UINT16_MAX;
	static uint16_t x216 = UINT16_MAX;
	int32_t t50 = -31773659;

	t50 = ((x213&x214)<(x215/x216));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x217 = -8;
	uint32_t x219 = UINT32_MAX;
	int32_t t51 = 1;

	t51 = ((x217&x218)<(x219/x220));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x221 = INT8_MIN;
	static uint32_t x222 = UINT32_MAX;
	uint32_t x223 = UINT32_MAX;
	static volatile int16_t x224 = INT16_MAX;
	volatile int32_t t52 = -7232;

	t52 = ((x221&x222)<(x223/x224));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x225 = 476350506390331020LL;
	int16_t x226 = INT16_MIN;
	static uint16_t x228 = UINT16_MAX;
	int32_t t53 = -7235278;

	t53 = ((x225&x226)<(x227/x228));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x229 = INT64_MIN;
	uint64_t x230 = 33417231027765184LLU;
	volatile int64_t x231 = INT64_MIN;
	static uint8_t x232 = UINT8_MAX;

	t54 = ((x229&x230)<(x231/x232));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x233 = INT8_MIN;
	int32_t x234 = 14;
	volatile int64_t x235 = INT64_MIN;
	int32_t x236 = 240458;
	int32_t t55 = 28964;

	t55 = ((x233&x234)<(x235/x236));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x237 = INT64_MIN;
	uint16_t x238 = 15774U;
	int8_t x239 = -2;

	t56 = ((x237&x238)<(x239/x240));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x242 = 12004463LL;
	int32_t x243 = 1078;
	int16_t x244 = -1;
	int32_t t57 = -124404650;

	t57 = ((x241&x242)<(x243/x244));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x246 = INT16_MIN;
	static volatile int16_t x247 = 6320;
	int8_t x248 = INT8_MAX;
	static volatile int32_t t58 = 283;

	t58 = ((x245&x246)<(x247/x248));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x249 = INT64_MIN;
	volatile int16_t x250 = INT16_MAX;
	int32_t x251 = -1;
	int64_t x252 = 73740119281564828LL;
	static int32_t t59 = -119267;

	t59 = ((x249&x250)<(x251/x252));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x253 = 1407616U;
	volatile int8_t x254 = INT8_MIN;
	int16_t x256 = -908;
	volatile int32_t t60 = 1657254;

	t60 = ((x253&x254)<(x255/x256));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x257 = -570;
	int8_t x258 = INT8_MIN;
	static volatile uint32_t x259 = 9486693U;
	static int8_t x260 = INT8_MAX;
	int32_t t61 = 491;

	t61 = ((x257&x258)<(x259/x260));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x261 = -158162483;
	volatile int16_t x262 = INT16_MIN;
	int64_t x263 = -1LL;
	int8_t x264 = INT8_MAX;
	volatile int32_t t62 = 49835;

	t62 = ((x261&x262)<(x263/x264));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x265 = -1;
	int64_t x266 = INT64_MIN;
	int8_t x267 = INT8_MIN;
	int16_t x268 = -1;
	int32_t t63 = -1577625;

	t63 = ((x265&x266)<(x267/x268));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x269 = -1;
	static uint16_t x271 = 60U;
	uint64_t x272 = 1179LLU;

	t64 = ((x269&x270)<(x271/x272));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x274 = INT32_MAX;
	int8_t x275 = -5;

	t65 = ((x273&x274)<(x275/x276));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x277 = INT8_MAX;
	int8_t x278 = INT8_MIN;
	int16_t x279 = -5;
	static int32_t t66 = -503693;

	t66 = ((x277&x278)<(x279/x280));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x281 = INT8_MIN;
	static int16_t x283 = INT16_MAX;
	int8_t x284 = 1;

	t67 = ((x281&x282)<(x283/x284));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x286 = INT8_MAX;
	static int64_t x287 = INT64_MIN;
	volatile int32_t x288 = INT32_MAX;
	static int32_t t68 = 42;

	t68 = ((x285&x286)<(x287/x288));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x290 = 35LLU;
	static volatile uint8_t x291 = 0U;
	int32_t t69 = 835;

	t69 = ((x289&x290)<(x291/x292));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x293 = 1436U;
	int16_t x294 = INT16_MAX;
	int8_t x295 = INT8_MIN;
	volatile int32_t x296 = 380157;

	t70 = ((x293&x294)<(x295/x296));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x297 = 106173728U;
	uint8_t x298 = 2U;
	int64_t x299 = INT64_MIN;
	int64_t x300 = INT64_MIN;
	volatile int32_t t71 = 181223227;

	t71 = ((x297&x298)<(x299/x300));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x301 = INT32_MIN;
	int8_t x302 = 1;
	int32_t x303 = -1;
	int64_t x304 = INT64_MIN;
	volatile int32_t t72 = -129426;

	t72 = ((x301&x302)<(x303/x304));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x306 = INT16_MIN;
	uint64_t x307 = 540115102423478LLU;
	static int16_t x308 = INT16_MIN;

	t73 = ((x305&x306)<(x307/x308));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x309 = INT32_MAX;
	uint32_t x310 = UINT32_MAX;
	static int32_t x311 = -1;
	int32_t t74 = 247270;

	t74 = ((x309&x310)<(x311/x312));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x313 = -86621550;
	static volatile int8_t x315 = 1;
	int32_t t75 = -89;

	t75 = ((x313&x314)<(x315/x316));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x317 = -135;
	int64_t x318 = -1018847772LL;
	int8_t x319 = INT8_MIN;
	int32_t x320 = -1;
	static volatile int32_t t76 = -2689;

	t76 = ((x317&x318)<(x319/x320));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x321 = -12;
	static uint32_t x322 = UINT32_MAX;
	int64_t x323 = INT64_MIN;
	volatile int32_t t77 = -9;

	t77 = ((x321&x322)<(x323/x324));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x325 = INT32_MIN;
	uint16_t x328 = 6U;
	volatile int32_t t78 = 12;

	t78 = ((x325&x326)<(x327/x328));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x330 = -9;
	uint32_t x332 = 653479665U;

	t79 = ((x329&x330)<(x331/x332));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x333 = 17817U;
	volatile int8_t x334 = INT8_MIN;
	uint8_t x335 = 56U;
	uint32_t x336 = 866899U;
	volatile int32_t t80 = 103947;

	t80 = ((x333&x334)<(x335/x336));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x341 = 11U;
	uint16_t x342 = 2260U;
	int16_t x343 = 6575;
	volatile int32_t t81 = -1462190;

	t81 = ((x341&x342)<(x343/x344));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x345 = 2760;
	static uint8_t x346 = 14U;
	volatile uint32_t x347 = 487567U;
	volatile int32_t t82 = -16757549;

	t82 = ((x345&x346)<(x347/x348));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x349 = 5U;
	static int16_t x350 = INT16_MIN;
	uint8_t x351 = 106U;
	int32_t x352 = -1;
	int32_t t83 = -730450418;

	t83 = ((x349&x350)<(x351/x352));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x353 = -666;
	int64_t x354 = INT64_MIN;
	int32_t x356 = INT32_MAX;
	volatile int32_t t84 = -211664054;

	t84 = ((x353&x354)<(x355/x356));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x362 = 1545U;
	int8_t x363 = -1;
	static volatile int32_t t85 = 452050073;

	t85 = ((x361&x362)<(x363/x364));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x366 = UINT16_MAX;
	int32_t t86 = -5767976;

	t86 = ((x365&x366)<(x367/x368));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x369 = -1;
	int8_t x371 = INT8_MAX;
	volatile int32_t x372 = INT32_MIN;
	int32_t t87 = -127;

	t87 = ((x369&x370)<(x371/x372));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x373 = -1;
	static int8_t x374 = INT8_MIN;
	int64_t x376 = 2672463239LL;
	int32_t t88 = 3;

	t88 = ((x373&x374)<(x375/x376));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x377 = 13;
	int32_t x379 = INT32_MIN;
	static volatile uint16_t x380 = 4028U;
	int32_t t89 = -1;

	t89 = ((x377&x378)<(x379/x380));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x388 = 358812LL;
	static volatile int32_t t90 = 2336;

	t90 = ((x385&x386)<(x387/x388));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x389 = -1;
	static uint32_t x390 = 14858775U;
	static int16_t x392 = -1;
	volatile int32_t t91 = 890428;

	t91 = ((x389&x390)<(x391/x392));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x393 = 333947708U;
	volatile int32_t t92 = -483228;

	t92 = ((x393&x394)<(x395/x396));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x397 = INT16_MIN;
	volatile uint32_t x398 = UINT32_MAX;
	static int8_t x399 = -1;
	volatile int32_t t93 = 1;

	t93 = ((x397&x398)<(x399/x400));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x401 = 1615;
	volatile int32_t x402 = 7590;
	int64_t x403 = INT64_MIN;
	uint8_t x404 = 5U;
	int32_t t94 = -1;

	t94 = ((x401&x402)<(x403/x404));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x405 = INT16_MIN;
	static int64_t x406 = 62193LL;
	int32_t x407 = 726260;
	int64_t x408 = -27LL;
	static volatile int32_t t95 = 9;

	t95 = ((x405&x406)<(x407/x408));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x409 = 6947576U;
	volatile int32_t x410 = INT32_MIN;
	int8_t x411 = -1;
	volatile int32_t x412 = INT32_MAX;

	t96 = ((x409&x410)<(x411/x412));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x413 = 0;
	int64_t x415 = -1LL;
	int16_t x416 = INT16_MIN;

	t97 = ((x413&x414)<(x415/x416));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x417 = -998583794091780LL;
	volatile int64_t x418 = INT64_MAX;
	int32_t x419 = INT32_MIN;
	int32_t x420 = INT32_MIN;
	int32_t t98 = -50439;

	t98 = ((x417&x418)<(x419/x420));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x421 = 42291;
	static volatile int64_t x422 = INT64_MIN;
	int16_t x423 = -1;
	int32_t t99 = -841805579;

	t99 = ((x421&x422)<(x423/x424));

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

