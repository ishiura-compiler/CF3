#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 15LLU;
int16_t x4 = 162;
int64_t x24 = 38LL;
volatile int64_t t4 = -3662526762415LL;
int32_t x39 = INT32_MAX;
uint32_t x40 = UINT32_MAX;
int32_t x42 = INT32_MAX;
int32_t x47 = INT32_MIN;
int8_t x59 = -1;
uint16_t x63 = UINT16_MAX;
static uint32_t x64 = 240284U;
int32_t x80 = -1;
uint64_t x81 = UINT64_MAX;
volatile uint64_t t16 = 4269338765LLU;
uint32_t x85 = UINT32_MAX;
volatile uint32_t t17 = 126358U;
int16_t x98 = -1;
volatile int64_t t18 = -3690102155858945872LL;
volatile uint32_t t20 = 3837758U;
uint8_t x111 = 11U;
int8_t x113 = -1;
int8_t x117 = INT8_MIN;
volatile int64_t x123 = -1LL;
int64_t x125 = 1538078512LL;
volatile int64_t t25 = -656955LL;
int64_t x136 = 7305LL;
int8_t x138 = INT8_MIN;
static uint16_t x142 = UINT16_MAX;
uint32_t x145 = UINT32_MAX;
int16_t x157 = 0;
uint8_t x159 = 33U;
uint32_t t33 = 115385914U;
int32_t x165 = -11323;
uint16_t x179 = UINT16_MAX;
uint32_t x186 = 3738041U;
static uint32_t x191 = UINT32_MAX;
int16_t x193 = INT16_MIN;
int32_t x199 = -1;
int8_t x200 = INT8_MIN;
int16_t x205 = 35;
int8_t x212 = INT8_MAX;
int16_t x213 = INT16_MIN;
volatile int32_t t44 = -23784;
static int32_t t45 = -480;
int64_t x225 = -1LL;
int8_t x232 = 1;
int64_t x241 = INT64_MAX;
int32_t x257 = 2;
uint8_t x260 = UINT8_MAX;
int32_t x306 = INT32_MIN;
int8_t x309 = 1;
uint16_t x318 = 20873U;
int64_t t66 = 502980670620745777LL;
int64_t x321 = INT64_MAX;
uint32_t x325 = 1U;
int8_t x326 = INT8_MIN;
int32_t x332 = INT32_MAX;
volatile uint64_t t69 = 4120250322587LLU;
int64_t x341 = -1LL;
static int32_t x342 = -185531493;
uint64_t x354 = UINT64_MAX;
uint32_t x355 = UINT32_MAX;
uint32_t x360 = 26520396U;
volatile int64_t t76 = -228099663840753204LL;
int8_t x364 = INT8_MAX;
int64_t x373 = INT64_MIN;
int64_t x376 = INT64_MIN;
int32_t x377 = INT32_MAX;
int64_t x384 = -52468016666LL;
static uint64_t t82 = 386581929564LLU;
static uint16_t x387 = 18283U;
int8_t x397 = INT8_MIN;
volatile int16_t x400 = 82;
int64_t x402 = 507860769404631405LL;
int8_t x409 = -16;
uint32_t x410 = UINT32_MAX;
static volatile int32_t t89 = 1;
static int64_t x421 = INT64_MIN;
volatile uint64_t t90 = 28965558064LLU;
uint64_t x430 = UINT64_MAX;
uint64_t t91 = 5984154LLU;
int32_t x440 = INT32_MIN;
int64_t x441 = INT64_MAX;
int16_t x444 = -1;
int8_t x445 = INT8_MAX;
int64_t t94 = 124271632867664154LL;
uint8_t x456 = 5U;
int8_t x458 = -1;
int32_t x465 = -8282149;
volatile uint64_t x467 = 5LLU;
volatile int16_t x468 = INT16_MIN;


void f0(void) {
	int16_t x2 = INT16_MIN;
	uint32_t x3 = 450221371U;
	static uint64_t t0 = 63626LLU;

	t0 = ((x1/x2)%(x3+x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x9 = 82U;
	static volatile int32_t x10 = -1;
	int64_t x11 = 47797124790493LL;
	int16_t x12 = -1;
	volatile int64_t t1 = -221218979415368770LL;

	t1 = ((x9/x10)%(x11+x12));

	if (t1 != -82LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = UINT32_MAX;
	uint64_t x14 = UINT64_MAX;
	int16_t x15 = -1;
	int64_t x16 = 1787118874242820LL;
	uint64_t t2 = 221287677576LLU;

	t2 = ((x13/x14)%(x15+x16));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = 4U;
	static volatile int64_t x18 = INT64_MAX;
	static int8_t x19 = 1;
	int16_t x20 = -43;
	volatile int64_t t3 = -1144993596733841690LL;

	t3 = ((x17/x18)%(x19+x20));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = 89781201205638LL;
	static int8_t x22 = -1;
	static int16_t x23 = -1;

	t4 = ((x21/x22)%(x23+x24));

	if (t4 != -27LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x25 = 142;
	volatile uint16_t x26 = 4807U;
	static uint32_t x27 = 0U;
	int64_t x28 = -1LL;
	int64_t t5 = -5741235LL;

	t5 = ((x25/x26)%(x27+x28));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 10761U;
	int8_t x30 = -1;
	static volatile int64_t x31 = -1LL;
	int8_t x32 = INT8_MIN;
	volatile int64_t t6 = -5587652920LL;

	t6 = ((x29/x30)%(x31+x32));

	if (t6 != -54LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MIN;
	int64_t x34 = INT64_MIN;
	int8_t x35 = INT8_MIN;
	int16_t x36 = INT16_MIN;
	int64_t t7 = -228768432131LL;

	t7 = ((x33/x34)%(x35+x36));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MAX;
	volatile int16_t x38 = -1;
	uint32_t t8 = 93U;

	t8 = ((x37/x38)%(x39+x40));

	if (t8 != 2147483523U) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x41 = 18;
	volatile int8_t x43 = INT8_MAX;
	static uint64_t x44 = 3718879091929621LLU;
	uint64_t t9 = 852LLU;

	t9 = ((x41/x42)%(x43+x44));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = 49963984661LL;
	uint32_t x46 = 29333U;
	int64_t x48 = INT64_MAX;
	int64_t t10 = 438697116023LL;

	t10 = ((x45/x46)%(x47+x48));

	if (t10 != 1703337LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x57 = 144587963672319LL;
	volatile uint64_t x58 = UINT64_MAX;
	static int32_t x60 = -862;
	volatile uint64_t t11 = 34555833987464835LLU;

	t11 = ((x57/x58)%(x59+x60));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = 58;
	volatile int64_t x62 = INT64_MIN;
	volatile int64_t t12 = -399211537LL;

	t12 = ((x61/x62)%(x63+x64));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x69 = INT8_MIN;
	int8_t x70 = INT8_MIN;
	int8_t x71 = INT8_MIN;
	uint16_t x72 = UINT16_MAX;
	static volatile int32_t t13 = -10;

	t13 = ((x69/x70)%(x71+x72));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x73 = UINT32_MAX;
	static int16_t x74 = 3571;
	int32_t x75 = INT32_MIN;
	int32_t x76 = 236533;
	uint32_t t14 = 165U;

	t14 = ((x73/x74)%(x75+x76));

	if (t14 != 1202735U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x77 = -16;
	int32_t x78 = -1;
	int32_t x79 = INT32_MAX;
	int32_t t15 = -6;

	t15 = ((x77/x78)%(x79+x80));

	if (t15 != 16) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint64_t x82 = 248290755489LLU;
	uint64_t x83 = 25222402188LLU;
	uint64_t x84 = 1903739571LLU;

	t16 = ((x81/x82)%(x83+x84));

	if (t16 != 74294929LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x86 = INT8_MIN;
	volatile uint32_t x87 = UINT32_MAX;
	int16_t x88 = -1;

	t17 = ((x85/x86)%(x87+x88));

	if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x97 = 0U;
	uint16_t x99 = UINT16_MAX;
	static int64_t x100 = -8289914159845393LL;

	t18 = ((x97/x98)%(x99+x100));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x101 = 80U;
	static int64_t x102 = -1LL;
	int8_t x103 = -1;
	int16_t x104 = -5;
	volatile int64_t t19 = 367916814LL;

	t19 = ((x101/x102)%(x103+x104));

	if (t19 != -2LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x105 = UINT32_MAX;
	static uint32_t x106 = 3U;
	int32_t x107 = 19914;
	int16_t x108 = INT16_MIN;

	t20 = ((x105/x106)%(x107+x108));

	if (t20 != 1431655765U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x109 = 21759U;
	volatile int8_t x110 = INT8_MAX;
	int8_t x112 = INT8_MIN;
	volatile int32_t t21 = 1813;

	t21 = ((x109/x110)%(x111+x112));

	if (t21 != 54) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x114 = 1639266364U;
	static int16_t x115 = INT16_MAX;
	int8_t x116 = -1;
	volatile uint32_t t22 = 281021U;

	t22 = ((x113/x114)%(x115+x116));

	if (t22 != 2U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x118 = -29;
	int16_t x119 = -1;
	uint32_t x120 = UINT32_MAX;
	uint32_t t23 = 8397842U;

	t23 = ((x117/x118)%(x119+x120));

	if (t23 != 4U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x121 = INT64_MIN;
	uint8_t x122 = 8U;
	volatile int32_t x124 = INT32_MAX;
	volatile int64_t t24 = 232598235LL;

	t24 = ((x121/x122)%(x123+x124));

	if (t24 != -1073741824LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x126 = 5;
	static volatile int64_t x127 = 49007LL;
	int32_t x128 = 7590287;

	t25 = ((x125/x126)%(x127+x128));

	if (t25 != 2043942LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x133 = 921927030712355617LLU;
	static int8_t x134 = INT8_MAX;
	int32_t x135 = INT32_MAX;
	volatile uint64_t t26 = 2801181246LLU;

	t26 = ((x133/x134)%(x135+x136));

	if (t26 != 1213753708LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x137 = INT64_MIN;
	static volatile uint64_t x139 = 4LLU;
	uint16_t x140 = UINT16_MAX;
	uint64_t t27 = 27412915357LLU;

	t27 = ((x137/x138)%(x139+x140));

	if (t27 != 58627LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x141 = -1;
	uint8_t x143 = UINT8_MAX;
	int8_t x144 = -2;
	volatile int32_t t28 = 188808787;

	t28 = ((x141/x142)%(x143+x144));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x146 = INT8_MAX;
	int32_t x147 = 1;
	uint64_t x148 = 2207650831250928204LLU;
	uint64_t t29 = 110783915234167709LLU;

	t29 = ((x145/x146)%(x147+x148));

	if (t29 != 33818640LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x149 = 1625U;
	static volatile int16_t x150 = 15440;
	int32_t x151 = INT32_MIN;
	static int16_t x152 = INT16_MAX;
	volatile uint32_t t30 = 6U;

	t30 = ((x149/x150)%(x151+x152));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x153 = INT32_MIN;
	int16_t x154 = 1563;
	int64_t x155 = -1LL;
	volatile int8_t x156 = INT8_MIN;
	int64_t t31 = 354LL;

	t31 = ((x153/x154)%(x155+x156));

	if (t31 != -99LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x158 = -1;
	uint8_t x160 = 2U;
	volatile int32_t t32 = 4019902;

	t32 = ((x157/x158)%(x159+x160));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x161 = 5;
	int32_t x162 = INT32_MIN;
	uint32_t x163 = 17343U;
	static int32_t x164 = INT32_MAX;

	t33 = ((x161/x162)%(x163+x164));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x166 = UINT32_MAX;
	uint16_t x167 = 349U;
	uint32_t x168 = 1644185U;
	static uint32_t t34 = 441823194U;

	t34 = ((x165/x166)%(x167+x168));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x177 = 64515;
	static volatile int64_t x178 = -1LL;
	uint32_t x180 = UINT32_MAX;
	volatile int64_t t35 = -121188624370293LL;

	t35 = ((x177/x178)%(x179+x180));

	if (t35 != -64515LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x181 = UINT16_MAX;
	volatile int16_t x182 = -2548;
	static volatile int16_t x183 = 694;
	volatile uint16_t x184 = UINT16_MAX;
	volatile int32_t t36 = -4;

	t36 = ((x181/x182)%(x183+x184));

	if (t36 != -25) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x185 = 12542U;
	int32_t x187 = INT32_MIN;
	uint32_t x188 = UINT32_MAX;
	volatile uint32_t t37 = 0U;

	t37 = ((x185/x186)%(x187+x188));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x189 = 4U;
	uint64_t x190 = UINT64_MAX;
	uint16_t x192 = UINT16_MAX;
	volatile uint64_t t38 = 4251825LLU;

	t38 = ((x189/x190)%(x191+x192));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x194 = 1015;
	int16_t x195 = -234;
	uint32_t x196 = 1U;
	uint32_t t39 = 139886U;

	t39 = ((x193/x194)%(x195+x196));

	if (t39 != 201U) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x197 = INT32_MIN;
	uint8_t x198 = 43U;
	int32_t t40 = 358;

	t40 = ((x197/x198)%(x199+x200));

	if (t40 != -33) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x201 = 7348;
	static int8_t x202 = -1;
	static int16_t x203 = -1;
	int16_t x204 = -1;
	static int32_t t41 = -5669613;

	t41 = ((x201/x202)%(x203+x204));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x206 = 1U;
	static int8_t x207 = -44;
	int32_t x208 = -1;
	int32_t t42 = 34975439;

	t42 = ((x205/x206)%(x207+x208));

	if (t42 != 35) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x209 = INT8_MAX;
	uint64_t x210 = 5260734600LLU;
	uint32_t x211 = 12999571U;
	volatile uint64_t t43 = 994689664LLU;

	t43 = ((x209/x210)%(x211+x212));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x214 = INT8_MAX;
	static int8_t x215 = 49;
	static uint16_t x216 = 6436U;

	t44 = ((x213/x214)%(x215+x216));

	if (t44 != -258) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x217 = UINT16_MAX;
	int8_t x218 = -28;
	uint16_t x219 = 14463U;
	int8_t x220 = -3;

	t45 = ((x217/x218)%(x219+x220));

	if (t45 != -2340) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x221 = -141709825;
	uint32_t x222 = 38924U;
	uint64_t x223 = UINT64_MAX;
	int16_t x224 = -1;
	volatile uint64_t t46 = 61417308941170383LLU;

	t46 = ((x221/x222)%(x223+x224));

	if (t46 != 106701LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x226 = 5LLU;
	uint16_t x227 = 107U;
	static int16_t x228 = -1;
	static uint64_t t47 = 104454118675011LLU;

	t47 = ((x225/x226)%(x227+x228));

	if (t47 != 77LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x229 = INT8_MIN;
	static int8_t x230 = -1;
	int64_t x231 = INT64_MIN;
	int64_t t48 = -127027959734LL;

	t48 = ((x229/x230)%(x231+x232));

	if (t48 != 128LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x233 = -1;
	uint16_t x234 = 337U;
	int32_t x235 = -3;
	static volatile uint64_t x236 = 35392167LLU;
	volatile uint64_t t49 = 8592533462543408LLU;

	t49 = ((x233/x234)%(x235+x236));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x237 = INT32_MIN;
	static uint8_t x238 = 30U;
	static volatile int32_t x239 = INT32_MIN;
	int8_t x240 = 0;
	volatile int32_t t50 = 0;

	t50 = ((x237/x238)%(x239+x240));

	if (t50 != -71582788) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x242 = -632235383;
	uint32_t x243 = 0U;
	int8_t x244 = INT8_MIN;
	volatile int64_t t51 = 5714LL;

	t51 = ((x241/x242)%(x243+x244));

	if (t51 != -1703608226LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x249 = 1U;
	static volatile int16_t x250 = INT16_MIN;
	int8_t x251 = 0;
	static int16_t x252 = INT16_MAX;
	int32_t t52 = 7084;

	t52 = ((x249/x250)%(x251+x252));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x253 = -20;
	static uint16_t x254 = 16772U;
	uint16_t x255 = 1U;
	uint16_t x256 = 1012U;
	int32_t t53 = 1056589156;

	t53 = ((x253/x254)%(x255+x256));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x258 = 6U;
	int64_t x259 = -1LL;
	int64_t t54 = 175120677LL;

	t54 = ((x257/x258)%(x259+x260));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x261 = UINT8_MAX;
	static int32_t x262 = -1;
	int8_t x263 = INT8_MAX;
	int16_t x264 = 9119;
	volatile int32_t t55 = 235161;

	t55 = ((x261/x262)%(x263+x264));

	if (t55 != -255) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x265 = UINT64_MAX;
	volatile int32_t x266 = -1;
	volatile uint16_t x267 = UINT16_MAX;
	static int32_t x268 = -42;
	volatile uint64_t t56 = 370416915811258478LLU;

	t56 = ((x265/x266)%(x267+x268));

	if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x269 = 14345LLU;
	static int32_t x270 = 162;
	uint16_t x271 = 64U;
	uint64_t x272 = UINT64_MAX;
	uint64_t t57 = 58039854LLU;

	t57 = ((x269/x270)%(x271+x272));

	if (t57 != 25LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x273 = UINT16_MAX;
	int16_t x274 = INT16_MAX;
	int16_t x275 = 14;
	int8_t x276 = INT8_MAX;
	int32_t t58 = -680129710;

	t58 = ((x273/x274)%(x275+x276));

	if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x277 = 0U;
	static uint64_t x278 = 3027544LLU;
	uint64_t x279 = UINT64_MAX;
	static uint32_t x280 = 19543U;
	volatile uint64_t t59 = 362140220870922LLU;

	t59 = ((x277/x278)%(x279+x280));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x293 = INT8_MIN;
	volatile uint8_t x294 = UINT8_MAX;
	int32_t x295 = INT32_MIN;
	int64_t x296 = 492691707679658LL;
	int64_t t60 = 833LL;

	t60 = ((x293/x294)%(x295+x296));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x297 = 101846500921LLU;
	volatile int8_t x298 = INT8_MIN;
	static volatile uint32_t x299 = UINT32_MAX;
	uint64_t x300 = 222LLU;
	volatile uint64_t t61 = 7160947831467582326LLU;

	t61 = ((x297/x298)%(x299+x300));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x301 = INT32_MIN;
	int32_t x302 = 342;
	static uint64_t x303 = 3794052192LLU;
	int64_t x304 = 703010LL;
	volatile uint64_t t62 = 1LLU;

	t62 = ((x301/x302)%(x303+x304));

	if (t62 != 2578177035LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x305 = UINT16_MAX;
	int32_t x307 = -1;
	uint16_t x308 = UINT16_MAX;
	volatile int32_t t63 = -974;

	t63 = ((x305/x306)%(x307+x308));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x310 = INT16_MAX;
	volatile int32_t x311 = -1;
	int16_t x312 = INT16_MIN;
	int32_t t64 = -125;

	t64 = ((x309/x310)%(x311+x312));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x313 = -1;
	int8_t x314 = INT8_MAX;
	uint32_t x315 = 119U;
	uint16_t x316 = 166U;
	uint32_t t65 = 95U;

	t65 = ((x313/x314)%(x315+x316));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x317 = 136239021066LL;
	int8_t x319 = -1;
	int8_t x320 = 49;

	t66 = ((x317/x318)%(x319+x320));

	if (t66 != 5LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x322 = 243U;
	int16_t x323 = -1;
	int16_t x324 = 0;
	int64_t t67 = -31LL;

	t67 = ((x321/x322)%(x323+x324));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x327 = INT16_MIN;
	volatile uint16_t x328 = 63U;
	static uint32_t t68 = 59972U;

	t68 = ((x325/x326)%(x327+x328));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x329 = 893;
	int32_t x330 = 149923;
	volatile uint64_t x331 = UINT64_MAX;

	t69 = ((x329/x330)%(x331+x332));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x333 = -1;
	static int8_t x334 = INT8_MIN;
	static uint32_t x335 = 1358464129U;
	int8_t x336 = INT8_MIN;
	uint32_t t70 = 947438U;

	t70 = ((x333/x334)%(x335+x336));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x337 = 3200U;
	int64_t x338 = -894415484LL;
	static int8_t x339 = 34;
	int32_t x340 = INT32_MIN;
	volatile int64_t t71 = -22309823759816643LL;

	t71 = ((x337/x338)%(x339+x340));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x343 = 24U;
	static int64_t x344 = 15471630167483551LL;
	int64_t t72 = 14558LL;

	t72 = ((x341/x342)%(x343+x344));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x345 = INT64_MAX;
	static uint8_t x346 = 8U;
	int32_t x347 = 1051801387;
	uint32_t x348 = UINT32_MAX;
	volatile int64_t t73 = -1837LL;

	t73 = ((x345/x346)%(x347+x348));

	if (t73 != 672095679LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x349 = INT8_MIN;
	uint32_t x350 = 1529465127U;
	static int16_t x351 = -8727;
	uint32_t x352 = UINT32_MAX;
	static volatile uint32_t t74 = 4836U;

	t74 = ((x349/x350)%(x351+x352));

	if (t74 != 2U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x353 = 47LLU;
	static uint64_t x356 = 11731880886002LLU;
	static volatile uint64_t t75 = 95636138LLU;

	t75 = ((x353/x354)%(x355+x356));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x357 = INT64_MAX;
	int8_t x358 = INT8_MIN;
	volatile int16_t x359 = INT16_MIN;

	t76 = ((x357/x358)%(x359+x360));

	if (t76 != -25707975LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x361 = 23969978355568LLU;
	int32_t x362 = INT32_MIN;
	static uint16_t x363 = 5999U;
	static volatile uint64_t t77 = 2297423079240980686LLU;

	t77 = ((x361/x362)%(x363+x364));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x365 = 6;
	uint32_t x366 = 553410101U;
	uint8_t x367 = 53U;
	int8_t x368 = INT8_MIN;
	uint32_t t78 = 96U;

	t78 = ((x365/x366)%(x367+x368));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x369 = -309;
	int32_t x370 = 334300;
	uint16_t x371 = 27393U;
	int16_t x372 = -7;
	int32_t t79 = -2406;

	t79 = ((x369/x370)%(x371+x372));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x374 = INT16_MIN;
	static uint8_t x375 = 33U;
	int64_t t80 = -71LL;

	t80 = ((x373/x374)%(x375+x376));

	if (t80 != 281474976710656LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x378 = UINT8_MAX;
	uint32_t x379 = 33226144U;
	uint32_t x380 = UINT32_MAX;
	uint32_t t81 = 29256U;

	t81 = ((x377/x378)%(x379+x380));

	if (t81 != 8421504U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x381 = 3456258U;
	uint32_t x382 = UINT32_MAX;
	static uint64_t x383 = 788272534907LLU;

	t82 = ((x381/x382)%(x383+x384));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x385 = 275U;
	int64_t x386 = INT64_MIN;
	volatile uint16_t x388 = 1U;
	int64_t t83 = -6LL;

	t83 = ((x385/x386)%(x387+x388));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x389 = 3U;
	int32_t x390 = -43;
	int8_t x391 = INT8_MAX;
	uint32_t x392 = 5U;
	uint32_t t84 = 133422U;

	t84 = ((x389/x390)%(x391+x392));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x393 = 460U;
	uint32_t x394 = 128U;
	int16_t x395 = INT16_MAX;
	volatile int16_t x396 = INT16_MIN;
	volatile uint32_t t85 = 61102U;

	t85 = ((x393/x394)%(x395+x396));

	if (t85 != 3U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x398 = -12699149392804336LL;
	int64_t x399 = INT64_MIN;
	volatile int64_t t86 = 26323655147LL;

	t86 = ((x397/x398)%(x399+x400));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x401 = -1;
	uint16_t x403 = 17504U;
	volatile int8_t x404 = -6;
	int64_t t87 = -504LL;

	t87 = ((x401/x402)%(x403+x404));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x411 = -6;
	uint64_t x412 = 20799LLU;
	volatile uint64_t t88 = 12285057LLU;

	t88 = ((x409/x410)%(x411+x412));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x417 = 2U;
	volatile uint16_t x418 = 1937U;
	int16_t x419 = INT16_MIN;
	int8_t x420 = INT8_MAX;

	t89 = ((x417/x418)%(x419+x420));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x422 = INT64_MIN;
	static uint64_t x423 = UINT64_MAX;
	static int32_t x424 = INT32_MAX;

	t90 = ((x421/x422)%(x423+x424));

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x429 = 905;
	int64_t x431 = INT64_MIN;
	static uint8_t x432 = 83U;

	t91 = ((x429/x430)%(x431+x432));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x437 = INT64_MIN;
	volatile int8_t x438 = INT8_MIN;
	static uint32_t x439 = UINT32_MAX;
	volatile int64_t t92 = 3441LL;

	t92 = ((x437/x438)%(x439+x440));

	if (t92 != 33554432LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x442 = -237;
	int8_t x443 = INT8_MAX;
	static int64_t t93 = -1126478299226LL;

	t93 = ((x441/x442)%(x443+x444));

	if (t93 != -29LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x446 = INT64_MIN;
	uint16_t x447 = UINT16_MAX;
	uint8_t x448 = 6U;

	t94 = ((x445/x446)%(x447+x448));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x449 = INT64_MAX;
	int16_t x450 = 6;
	int16_t x451 = -993;
	int16_t x452 = -474;
	static volatile int64_t t95 = 3141865865295881473LL;

	t95 = ((x449/x450)%(x451+x452));

	if (t95 != 670LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x453 = UINT16_MAX;
	int8_t x454 = -1;
	static int8_t x455 = INT8_MAX;
	int32_t t96 = 6422762;

	t96 = ((x453/x454)%(x455+x456));

	if (t96 != -63) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x457 = -1LL;
	static int16_t x459 = 393;
	uint8_t x460 = 1U;
	volatile int64_t t97 = -1064LL;

	t97 = ((x457/x458)%(x459+x460));

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x466 = -1;
	uint64_t t98 = 72LLU;

	t98 = ((x465/x466)%(x467+x468));

	if (t98 != 8282149LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x469 = -10997LL;
	volatile int64_t x470 = -1LL;
	uint32_t x471 = UINT32_MAX;
	static int16_t x472 = INT16_MIN;
	volatile int64_t t99 = -16706277LL;

	t99 = ((x469/x470)%(x471+x472));

	if (t99 != 10997LL) { NG(); } else { ; }
	
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

