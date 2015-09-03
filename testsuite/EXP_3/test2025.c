#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = 2292U;
int32_t t1 = 7;
volatile int8_t x9 = INT8_MIN;
static int32_t x19 = -6384;
int32_t x22 = -1;
static int16_t x23 = INT16_MAX;
static volatile int32_t t7 = 15799274;
static volatile uint64_t x36 = 211057LLU;
static int32_t t8 = 151;
int16_t x39 = 5;
int16_t x42 = INT16_MIN;
uint16_t x43 = UINT16_MAX;
volatile int16_t x60 = -1;
int32_t x65 = INT32_MAX;
int64_t x79 = INT64_MAX;
uint16_t x80 = UINT16_MAX;
int32_t t19 = 4691293;
static uint8_t x86 = UINT8_MAX;
volatile int64_t x88 = 17920815526245362LL;
volatile int32_t t21 = 12804319;
volatile int64_t x93 = -1LL;
volatile int32_t x95 = INT32_MAX;
uint8_t x98 = 0U;
int32_t x99 = INT32_MIN;
int32_t t25 = -21243685;
static volatile int32_t t26 = 1545997;
volatile int8_t x125 = INT8_MIN;
uint16_t x131 = 1438U;
int8_t x132 = INT8_MIN;
volatile int32_t t32 = 537178;
volatile int32_t x136 = 207;
int16_t x138 = INT16_MIN;
int8_t x139 = INT8_MIN;
static int16_t x140 = INT16_MAX;
int16_t x144 = INT16_MIN;
volatile int16_t x160 = 738;
uint32_t x161 = 36137U;
int64_t x164 = INT64_MIN;
uint16_t x167 = 2888U;
uint8_t x169 = UINT8_MAX;
int32_t x175 = -1;
volatile int32_t t43 = 0;
volatile int8_t x177 = -1;
static int16_t x182 = 920;
int8_t x190 = INT8_MAX;
int8_t x192 = -1;
static int32_t x205 = INT32_MIN;
static uint8_t x208 = UINT8_MAX;
static int32_t t51 = 1;
static uint16_t x210 = UINT16_MAX;
int32_t x211 = -209105540;
int32_t x214 = INT32_MIN;
int16_t x217 = INT16_MIN;
uint8_t x220 = UINT8_MAX;
int32_t t54 = 1661026;
volatile int32_t t55 = -1;
int32_t t56 = -1778;
uint16_t x231 = 3811U;
int16_t x237 = 4;
uint64_t x240 = UINT64_MAX;
int32_t t60 = 2;
static int32_t x254 = INT32_MIN;
int32_t x262 = -483;
uint16_t x268 = 627U;
int8_t x279 = INT8_MAX;
int8_t x283 = INT8_MAX;
int32_t x284 = INT32_MAX;
int32_t x285 = INT32_MIN;
static uint8_t x302 = 13U;
int16_t x306 = 22;
int64_t x308 = -1LL;
uint64_t x319 = UINT64_MAX;
volatile uint32_t x320 = 68U;
int64_t x321 = -1LL;
int32_t x323 = INT32_MIN;
uint64_t x328 = 2473372843LLU;
int32_t t84 = 1;
static int8_t x341 = -1;
volatile uint16_t x343 = 6233U;
int64_t x348 = 263LL;
int64_t x354 = -1LL;
volatile int64_t x356 = INT64_MAX;
volatile uint64_t x361 = 119138062306LLU;
int16_t x363 = 1;
uint8_t x369 = 108U;
volatile uint8_t x370 = 1U;
int16_t x375 = INT16_MIN;
static int32_t t94 = -3591;
static volatile int64_t x381 = 13733138527640LL;
static volatile uint16_t x384 = UINT16_MAX;
uint32_t x386 = 7759313U;
volatile int32_t t97 = 13844862;


void f0(void) {
	uint32_t x1 = 13508216U;
	int8_t x2 = 20;
	volatile uint8_t x3 = 2U;
	int64_t x4 = -1LL;
	volatile int32_t t0 = 3916;

	t0 = ((x1^x2)<=(x3|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x6 = 13;
	volatile int64_t x7 = INT64_MIN;
	uint8_t x8 = 12U;

	t1 = ((x5^x6)<=(x7|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = -1LL;
	int64_t x11 = 185LL;
	int32_t x12 = 0;
	int32_t t2 = -125021;

	t2 = ((x9^x10)<=(x11|x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x13 = -1;
	int32_t x14 = -225;
	static int16_t x15 = -6366;
	static int16_t x16 = -1838;
	int32_t t3 = 155346;

	t3 = ((x13^x14)<=(x15|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	static int16_t x18 = -1;
	int64_t x20 = 3780438657365738245LL;
	volatile int32_t t4 = 15202072;

	t4 = ((x17^x18)<=(x19|x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	int64_t x24 = -5068LL;
	int32_t t5 = -425245;

	t5 = ((x21^x22)<=(x23|x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	int64_t x26 = -1LL;
	int8_t x27 = -20;
	uint32_t x28 = UINT32_MAX;
	volatile int32_t t6 = 0;

	t6 = ((x25^x26)<=(x27|x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = INT64_MAX;
	int32_t x30 = -1;
	int64_t x31 = 1LL;
	volatile uint64_t x32 = UINT64_MAX;

	t7 = ((x29^x30)<=(x31|x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -44962;
	int16_t x34 = INT16_MAX;
	static uint64_t x35 = UINT64_MAX;

	t8 = ((x33^x34)<=(x35|x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 11U;
	static uint64_t x38 = UINT64_MAX;
	uint32_t x40 = 111628755U;
	volatile int32_t t9 = 62331;

	t9 = ((x37^x38)<=(x39|x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 87U;
	uint16_t x44 = 2U;
	static int32_t t10 = -133;

	t10 = ((x41^x42)<=(x43|x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 0LLU;
	int32_t x46 = -1;
	volatile uint32_t x47 = 53U;
	static volatile uint16_t x48 = 5815U;
	volatile int32_t t11 = -845176135;

	t11 = ((x45^x46)<=(x47|x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = -1;
	static volatile int16_t x50 = INT16_MAX;
	int16_t x51 = INT16_MAX;
	int16_t x52 = INT16_MAX;
	int32_t t12 = 1;

	t12 = ((x49^x50)<=(x51|x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = 11;
	static int8_t x54 = INT8_MIN;
	int8_t x55 = INT8_MIN;
	uint8_t x56 = UINT8_MAX;
	volatile int32_t t13 = -4;

	t13 = ((x53^x54)<=(x55|x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 1298U;
	volatile int16_t x58 = INT16_MAX;
	uint8_t x59 = 2U;
	static int32_t t14 = 12;

	t14 = ((x57^x58)<=(x59|x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	int32_t x62 = INT32_MIN;
	int16_t x63 = -26;
	uint64_t x64 = UINT64_MAX;
	int32_t t15 = -1;

	t15 = ((x61^x62)<=(x63|x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = 6LL;
	int8_t x67 = INT8_MAX;
	int8_t x68 = INT8_MAX;
	volatile int32_t t16 = -12000440;

	t16 = ((x65^x66)<=(x67|x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 686U;
	int32_t x70 = 21264;
	uint64_t x71 = UINT64_MAX;
	int32_t x72 = -119371;
	static int32_t t17 = 29529;

	t17 = ((x69^x70)<=(x71|x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = INT16_MIN;
	uint8_t x74 = UINT8_MAX;
	static uint8_t x75 = 4U;
	int64_t x76 = -1LL;
	volatile int32_t t18 = -13322897;

	t18 = ((x73^x74)<=(x75|x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x77 = 250761827233634LLU;
	static volatile int64_t x78 = INT64_MIN;

	t19 = ((x77^x78)<=(x79|x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x81 = UINT16_MAX;
	uint64_t x82 = 220LLU;
	int64_t x83 = INT64_MIN;
	int64_t x84 = 27117851216LL;
	int32_t t20 = 6;

	t20 = ((x81^x82)<=(x83|x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = 17;
	int32_t x87 = 44175;

	t21 = ((x85^x86)<=(x87|x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MAX;
	static int32_t x90 = -1;
	uint32_t x91 = UINT32_MAX;
	uint16_t x92 = UINT16_MAX;
	int32_t t22 = 259916539;

	t22 = ((x89^x90)<=(x91|x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x94 = UINT64_MAX;
	static int8_t x96 = -1;
	volatile int32_t t23 = 1438230;

	t23 = ((x93^x94)<=(x95|x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	static int16_t x100 = -329;
	volatile int32_t t24 = 91960;

	t24 = ((x97^x98)<=(x99|x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 0U;
	static int64_t x102 = 154944202456239LL;
	static uint8_t x103 = 17U;
	int8_t x104 = INT8_MAX;

	t25 = ((x101^x102)<=(x103|x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 278443943U;
	uint32_t x106 = UINT32_MAX;
	int16_t x107 = 58;
	int32_t x108 = INT32_MIN;

	t26 = ((x105^x106)<=(x107|x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = UINT32_MAX;
	int64_t x110 = -1LL;
	static int8_t x111 = INT8_MIN;
	uint32_t x112 = 76U;
	volatile int32_t t27 = 193;

	t27 = ((x109^x110)<=(x111|x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = UINT32_MAX;
	int8_t x114 = 5;
	int32_t x115 = INT32_MAX;
	volatile int32_t x116 = INT32_MIN;
	static volatile int32_t t28 = 2;

	t28 = ((x113^x114)<=(x115|x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 12259721LLU;
	volatile int16_t x118 = INT16_MIN;
	int8_t x119 = INT8_MAX;
	int32_t x120 = 18;
	int32_t t29 = 2593488;

	t29 = ((x117^x118)<=(x119|x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -1LL;
	static uint8_t x122 = UINT8_MAX;
	static volatile int16_t x123 = -1;
	int8_t x124 = -11;
	int32_t t30 = 3567;

	t30 = ((x121^x122)<=(x123|x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x126 = INT16_MIN;
	uint16_t x127 = 8065U;
	int32_t x128 = INT32_MIN;
	volatile int32_t t31 = -186949219;

	t31 = ((x125^x126)<=(x127|x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x129 = 2705539079369058LLU;
	static int32_t x130 = INT32_MIN;

	t32 = ((x129^x130)<=(x131|x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 465392968446LLU;
	uint32_t x134 = UINT32_MAX;
	int16_t x135 = INT16_MIN;
	static volatile int32_t t33 = 510;

	t33 = ((x133^x134)<=(x135|x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = UINT64_MAX;
	static volatile int32_t t34 = 49029;

	t34 = ((x137^x138)<=(x139|x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 0U;
	int64_t x142 = 132383338392509536LL;
	int32_t x143 = -1;
	volatile int32_t t35 = -2349089;

	t35 = ((x141^x142)<=(x143|x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 55947187LLU;
	int8_t x146 = -1;
	int32_t x147 = -1;
	static uint32_t x148 = 1988565659U;
	int32_t t36 = 6312;

	t36 = ((x145^x146)<=(x147|x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -1;
	int32_t x150 = INT32_MIN;
	int64_t x151 = 1815391338LL;
	volatile uint64_t x152 = 61569237LLU;
	volatile int32_t t37 = -5797960;

	t37 = ((x149^x150)<=(x151|x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MAX;
	int32_t x154 = INT32_MAX;
	volatile int64_t x155 = INT64_MIN;
	uint16_t x156 = UINT16_MAX;
	volatile int32_t t38 = -5851301;

	t38 = ((x153^x154)<=(x155|x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = UINT64_MAX;
	int8_t x158 = INT8_MIN;
	int64_t x159 = 184325059183577322LL;
	int32_t t39 = 6;

	t39 = ((x157^x158)<=(x159|x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x162 = 51345302U;
	uint8_t x163 = 37U;
	static int32_t t40 = 59025;

	t40 = ((x161^x162)<=(x163|x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x165 = INT32_MAX;
	int32_t x166 = -1891;
	int64_t x168 = -6121961988LL;
	volatile int32_t t41 = -1944907;

	t41 = ((x165^x166)<=(x167|x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x170 = INT8_MAX;
	static volatile int16_t x171 = 78;
	int16_t x172 = 44;
	int32_t t42 = 431;

	t42 = ((x169^x170)<=(x171|x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 47U;
	volatile int16_t x174 = INT16_MIN;
	static volatile int32_t x176 = -1;

	t43 = ((x173^x174)<=(x175|x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x178 = INT8_MIN;
	static int32_t x179 = INT32_MAX;
	volatile int32_t x180 = INT32_MIN;
	volatile int32_t t44 = 519575938;

	t44 = ((x177^x178)<=(x179|x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = -1;
	uint64_t x183 = 12LLU;
	static int64_t x184 = INT64_MIN;
	volatile int32_t t45 = 1;

	t45 = ((x181^x182)<=(x183|x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x185 = 0;
	uint32_t x186 = UINT32_MAX;
	int16_t x187 = -1;
	int64_t x188 = 1818991080013622219LL;
	static volatile int32_t t46 = 487887721;

	t46 = ((x185^x186)<=(x187|x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x189 = UINT32_MAX;
	int16_t x191 = INT16_MIN;
	int32_t t47 = 19271637;

	t47 = ((x189^x190)<=(x191|x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MAX;
	static uint16_t x194 = 0U;
	int16_t x195 = INT16_MIN;
	volatile int64_t x196 = -5894228850497985LL;
	int32_t t48 = 585244;

	t48 = ((x193^x194)<=(x195|x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -928;
	int64_t x198 = 140704670LL;
	int8_t x199 = INT8_MIN;
	volatile int16_t x200 = INT16_MIN;
	static volatile int32_t t49 = 415347;

	t49 = ((x197^x198)<=(x199|x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	volatile uint32_t x202 = 1U;
	static uint16_t x203 = UINT16_MAX;
	int64_t x204 = -1LL;
	volatile int32_t t50 = 14;

	t50 = ((x201^x202)<=(x203|x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint8_t x206 = UINT8_MAX;
	int16_t x207 = INT16_MIN;

	t51 = ((x205^x206)<=(x207|x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	int64_t x212 = INT64_MIN;
	volatile int32_t t52 = 54356852;

	t52 = ((x209^x210)<=(x211|x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = -1;
	uint8_t x215 = 1U;
	int64_t x216 = INT64_MAX;
	int32_t t53 = 85961973;

	t53 = ((x213^x214)<=(x215|x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x218 = UINT64_MAX;
	volatile uint16_t x219 = 1929U;

	t54 = ((x217^x218)<=(x219|x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint16_t x221 = 74U;
	static int16_t x222 = -7;
	volatile uint8_t x223 = 0U;
	volatile int8_t x224 = INT8_MIN;

	t55 = ((x221^x222)<=(x223|x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = UINT64_MAX;
	int8_t x226 = INT8_MAX;
	int8_t x227 = INT8_MAX;
	uint64_t x228 = 306406756LLU;

	t56 = ((x225^x226)<=(x227|x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = 36;
	static uint16_t x230 = UINT16_MAX;
	uint16_t x232 = 134U;
	volatile int32_t t57 = 96;

	t57 = ((x229^x230)<=(x231|x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = 329U;
	int32_t x234 = -11;
	static int32_t x235 = INT32_MIN;
	uint32_t x236 = 14750U;
	int32_t t58 = -12;

	t58 = ((x233^x234)<=(x235|x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x238 = INT16_MIN;
	int32_t x239 = -106;
	static int32_t t59 = -79;

	t59 = ((x237^x238)<=(x239|x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MAX;
	volatile int64_t x242 = INT64_MAX;
	int16_t x243 = INT16_MIN;
	static uint8_t x244 = 11U;

	t60 = ((x241^x242)<=(x243|x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 6U;
	static volatile int16_t x246 = 0;
	int16_t x247 = INT16_MAX;
	volatile int16_t x248 = INT16_MIN;
	volatile int32_t t61 = 9232296;

	t61 = ((x245^x246)<=(x247|x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 51U;
	int64_t x250 = INT64_MIN;
	static int32_t x251 = 3;
	uint32_t x252 = 2954U;
	int32_t t62 = 65;

	t62 = ((x249^x250)<=(x251|x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -12;
	uint64_t x255 = 73018308LLU;
	int32_t x256 = -107649;
	volatile int32_t t63 = 98900176;

	t63 = ((x253^x254)<=(x255|x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x257 = 5U;
	uint16_t x258 = 7145U;
	int8_t x259 = -3;
	static uint16_t x260 = 12U;
	int32_t t64 = -1;

	t64 = ((x257^x258)<=(x259|x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x261 = 1;
	volatile int32_t x263 = -1677281;
	volatile int16_t x264 = INT16_MAX;
	int32_t t65 = 3543752;

	t65 = ((x261^x262)<=(x263|x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = 5U;
	int8_t x266 = -1;
	volatile int16_t x267 = -82;
	volatile int32_t t66 = 76284;

	t66 = ((x265^x266)<=(x267|x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = UINT64_MAX;
	volatile uint64_t x270 = UINT64_MAX;
	int16_t x271 = INT16_MAX;
	volatile uint8_t x272 = 0U;
	int32_t t67 = 44;

	t67 = ((x269^x270)<=(x271|x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x273 = 92U;
	volatile int32_t x274 = INT32_MAX;
	int16_t x275 = 3;
	uint32_t x276 = 89483U;
	int32_t t68 = -20485983;

	t68 = ((x273^x274)<=(x275|x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = UINT64_MAX;
	int32_t x278 = INT32_MAX;
	int8_t x280 = INT8_MAX;
	static volatile int32_t t69 = -9736342;

	t69 = ((x277^x278)<=(x279|x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x281 = INT16_MIN;
	int8_t x282 = INT8_MIN;
	volatile int32_t t70 = 149;

	t70 = ((x281^x282)<=(x283|x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x286 = INT8_MAX;
	int8_t x287 = INT8_MIN;
	int64_t x288 = -1LL;
	volatile int32_t t71 = 4615;

	t71 = ((x285^x286)<=(x287|x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = 9995;
	int32_t x290 = -831666519;
	uint64_t x291 = 462378350LLU;
	int32_t x292 = 6514;
	static volatile int32_t t72 = 671682;

	t72 = ((x289^x290)<=(x291|x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MIN;
	int64_t x294 = -1LL;
	uint64_t x295 = UINT64_MAX;
	uint8_t x296 = UINT8_MAX;
	volatile int32_t t73 = -38;

	t73 = ((x293^x294)<=(x295|x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 0U;
	int64_t x298 = INT64_MIN;
	int32_t x299 = -1;
	volatile int16_t x300 = INT16_MIN;
	volatile int32_t t74 = 7;

	t74 = ((x297^x298)<=(x299|x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x301 = INT32_MIN;
	int32_t x303 = -237849743;
	static uint16_t x304 = UINT16_MAX;
	volatile int32_t t75 = 913;

	t75 = ((x301^x302)<=(x303|x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = 60191;
	uint8_t x307 = 2U;
	volatile int32_t t76 = 0;

	t76 = ((x305^x306)<=(x307|x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = 3;
	int64_t x310 = INT64_MIN;
	uint64_t x311 = 37284268630860562LLU;
	static int64_t x312 = INT64_MIN;
	volatile int32_t t77 = 38451843;

	t77 = ((x309^x310)<=(x311|x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	int16_t x314 = INT16_MIN;
	uint16_t x315 = 479U;
	int64_t x316 = INT64_MIN;
	static int32_t t78 = 581801794;

	t78 = ((x313^x314)<=(x315|x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = -563;
	uint64_t x318 = 257175753LLU;
	int32_t t79 = -13141;

	t79 = ((x317^x318)<=(x319|x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x322 = INT16_MIN;
	int16_t x324 = INT16_MIN;
	volatile int32_t t80 = -25561759;

	t80 = ((x321^x322)<=(x323|x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MIN;
	int8_t x326 = -1;
	static int16_t x327 = -489;
	int32_t t81 = 1;

	t81 = ((x325^x326)<=(x327|x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x329 = INT32_MAX;
	int8_t x330 = INT8_MIN;
	static uint32_t x331 = 913681811U;
	volatile uint16_t x332 = UINT16_MAX;
	static volatile int32_t t82 = 1199336;

	t82 = ((x329^x330)<=(x331|x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 43U;
	uint64_t x334 = UINT64_MAX;
	uint16_t x335 = 414U;
	uint64_t x336 = 3558033207LLU;
	volatile int32_t t83 = 116;

	t83 = ((x333^x334)<=(x335|x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x337 = 2U;
	static int32_t x338 = INT32_MIN;
	volatile int64_t x339 = INT64_MIN;
	static int8_t x340 = -16;

	t84 = ((x337^x338)<=(x339|x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x342 = -1;
	uint64_t x344 = UINT64_MAX;
	volatile int32_t t85 = 29048;

	t85 = ((x341^x342)<=(x343|x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MIN;
	static int32_t x346 = INT32_MIN;
	int64_t x347 = 6LL;
	static volatile int32_t t86 = -151070;

	t86 = ((x345^x346)<=(x347|x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x349 = 16140LL;
	volatile int64_t x350 = -106813320094138221LL;
	uint16_t x351 = UINT16_MAX;
	int64_t x352 = INT64_MIN;
	volatile int32_t t87 = 8;

	t87 = ((x349^x350)<=(x351|x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x353 = 271U;
	volatile int64_t x355 = 240094LL;
	int32_t t88 = 126450474;

	t88 = ((x353^x354)<=(x355|x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	int8_t x358 = -1;
	uint16_t x359 = 1U;
	volatile int16_t x360 = -1;
	volatile int32_t t89 = -23869;

	t89 = ((x357^x358)<=(x359|x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x362 = INT8_MIN;
	uint32_t x364 = 206824U;
	volatile int32_t t90 = 19803;

	t90 = ((x361^x362)<=(x363|x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = 0U;
	int64_t x366 = 1038652LL;
	int8_t x367 = INT8_MIN;
	int16_t x368 = 1;
	int32_t t91 = 474;

	t91 = ((x365^x366)<=(x367|x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x371 = INT16_MAX;
	int64_t x372 = -1LL;
	volatile int32_t t92 = 290603338;

	t92 = ((x369^x370)<=(x371|x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = -1;
	int16_t x374 = -1626;
	int8_t x376 = INT8_MAX;
	volatile int32_t t93 = -377;

	t93 = ((x373^x374)<=(x375|x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x377 = INT32_MIN;
	int32_t x378 = INT32_MAX;
	static int64_t x379 = -1LL;
	int16_t x380 = -1;

	t94 = ((x377^x378)<=(x379|x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x382 = 40U;
	int8_t x383 = -1;
	int32_t t95 = -729880;

	t95 = ((x381^x382)<=(x383|x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MAX;
	int16_t x387 = -1;
	uint8_t x388 = UINT8_MAX;
	volatile int32_t t96 = 3350292;

	t96 = ((x385^x386)<=(x387|x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MAX;
	volatile int32_t x390 = 4068;
	static int8_t x391 = 2;
	uint64_t x392 = 561096561012LLU;

	t97 = ((x389^x390)<=(x391|x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x393 = INT64_MAX;
	static int64_t x394 = 7301828013238437LL;
	static int64_t x395 = INT64_MAX;
	volatile int32_t x396 = -895995;
	volatile int32_t t98 = 12408;

	t98 = ((x393^x394)<=(x395|x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = -4;
	int8_t x398 = 1;
	int32_t x399 = INT32_MIN;
	uint8_t x400 = 0U;
	int32_t t99 = -365563527;

	t99 = ((x397^x398)<=(x399|x400));

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

