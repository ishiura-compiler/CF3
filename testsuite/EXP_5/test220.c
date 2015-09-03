#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 9518LLU;
static int64_t x12 = INT64_MIN;
static int8_t x22 = INT8_MIN;
int32_t x37 = -23;
volatile int16_t x38 = INT16_MIN;
volatile int32_t t7 = -4307;
int16_t x48 = INT16_MIN;
volatile uint64_t t8 = 7346LLU;
uint64_t x61 = 48686232659LLU;
static uint64_t t12 = 287926276401LLU;
uint16_t x67 = UINT16_MAX;
int8_t x73 = INT8_MAX;
uint64_t x81 = 1996739947813177LLU;
int16_t x82 = 6955;
static int8_t x87 = -21;
int64_t t20 = -916202693LL;
volatile int32_t x105 = INT32_MAX;
static uint64_t t24 = 44411419323977815LLU;
volatile uint8_t x121 = 25U;
volatile int32_t x123 = -1;
uint64_t x124 = UINT64_MAX;
static int8_t x125 = INT8_MIN;
int64_t x129 = INT64_MAX;
uint32_t x131 = UINT32_MAX;
int32_t x137 = 21832314;
static int16_t x151 = INT16_MAX;
uint64_t t30 = 1607159154604LLU;
static volatile int32_t x158 = -11298;
volatile int32_t t32 = -243878572;
static uint32_t t34 = UINT32_MAX;
static int16_t x174 = -6;
uint16_t x178 = 3U;
volatile int16_t x179 = -1855;
static int32_t x190 = -1;
uint64_t t41 = 70888639LLU;
int16_t x205 = INT16_MIN;
int32_t x216 = -214458498;
uint8_t x221 = 36U;
int64_t x225 = -53923659620LL;
uint8_t x235 = 3U;
int64_t t49 = INT64_MAX;
int64_t x241 = 1LL;
volatile int16_t x242 = INT16_MIN;
uint16_t x247 = 7U;
int64_t x249 = -2033537672319741752LL;
int32_t x252 = INT32_MIN;
volatile uint8_t x254 = 0U;
static uint64_t t54 = 85344LLU;
volatile int16_t x263 = INT16_MIN;
int64_t x271 = INT64_MIN;
uint16_t x272 = UINT16_MAX;
int32_t x286 = INT32_MAX;
volatile int32_t t61 = -906781;
int32_t x290 = -3;
uint16_t x291 = UINT16_MAX;
static uint64_t x295 = 9128717822LLU;
int32_t x306 = 0;
volatile int64_t x307 = INT64_MAX;
volatile int64_t x308 = INT64_MIN;
int64_t x311 = 434000023LL;
uint8_t x312 = UINT8_MAX;
int32_t x320 = -1;
int8_t x324 = INT8_MAX;
volatile int32_t t69 = -269365490;
int32_t x325 = -1;
int8_t x326 = -1;
volatile int32_t x330 = -74;
volatile int16_t x331 = INT16_MIN;
volatile int32_t x333 = -116044;
static int8_t x335 = INT8_MIN;
uint32_t x339 = 120163839U;
int16_t x345 = -1787;
int8_t x350 = -1;
int32_t x352 = INT32_MIN;
int64_t x353 = -1LL;
int16_t x354 = 2617;
static int8_t x367 = INT8_MAX;
volatile int64_t x379 = INT64_MAX;
static int8_t x397 = INT8_MIN;
volatile int8_t x398 = INT8_MAX;
int64_t t87 = 359437345054075594LL;
volatile int16_t x421 = INT16_MIN;
int8_t x423 = 28;
uint16_t x427 = UINT16_MAX;
uint8_t x428 = UINT8_MAX;
uint64_t t91 = 1883847097839LLU;
uint64_t x433 = 434890046379149520LLU;
volatile uint8_t x434 = 4U;
volatile int64_t x440 = INT64_MIN;
volatile uint16_t x441 = UINT16_MAX;
int64_t x448 = INT64_MIN;
volatile uint64_t t95 = 910514206LLU;
int16_t x462 = INT16_MIN;
volatile uint16_t x466 = 165U;
uint32_t x468 = 157251946U;


void f0(void) {
	int16_t x1 = INT16_MIN;
	uint64_t x2 = UINT64_MAX;
	uint8_t x3 = 27U;
	int16_t x4 = INT16_MIN;

	t0 = (x1|((x2-x3)/x4));

	if (t0 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	int8_t x6 = 12;
	uint32_t x7 = 376923U;
	volatile uint16_t x8 = UINT16_MAX;
	volatile uint32_t t1 = UINT32_MAX;

	t1 = (x5|((x6-x7)/x8));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 2235U;
	volatile uint8_t x10 = 33U;
	static volatile int16_t x11 = INT16_MIN;
	volatile int64_t t2 = 767281LL;

	t2 = (x9|((x10-x11)/x12));

	if (t2 != 2235LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x17 = 84151LLU;
	int16_t x18 = -242;
	uint32_t x19 = UINT32_MAX;
	int32_t x20 = 14;
	uint64_t t3 = 3112LLU;

	t3 = (x17|((x18-x19)/x20));

	if (t3 != 306801847LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x21 = INT16_MIN;
	uint64_t x23 = 3839697290279212LLU;
	volatile int32_t x24 = -1;
	static uint64_t t4 = 124LLU;

	t4 = (x21|((x22-x23)/x24));

	if (t4 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = INT32_MIN;
	static int8_t x26 = INT8_MAX;
	uint16_t x27 = 191U;
	int64_t x28 = -1LL;
	int64_t t5 = -19480672567849797LL;

	t5 = (x25|((x26-x27)/x28));

	if (t5 != -2147483584LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x39 = 193;
	volatile int16_t x40 = -1;
	static volatile int32_t t6 = 726653;

	t6 = (x37|((x38-x39)/x40));

	if (t6 != -23) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x41 = INT32_MIN;
	volatile int8_t x42 = 2;
	int16_t x43 = INT16_MAX;
	volatile int8_t x44 = INT8_MIN;

	t7 = (x41|((x42-x43)/x44));

	if (t7 != -2147483393) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x45 = 1U;
	int16_t x46 = INT16_MIN;
	uint64_t x47 = 129333LLU;

	t8 = (x45|((x46-x47)/x48));

	if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = INT8_MAX;
	int16_t x50 = 0;
	uint32_t x51 = 1017U;
	static int16_t x52 = INT16_MIN;
	uint32_t t9 = 413431U;

	t9 = (x49|((x50-x51)/x52));

	if (t9 != 127U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x53 = INT32_MIN;
	volatile uint16_t x54 = UINT16_MAX;
	int8_t x55 = INT8_MIN;
	static int16_t x56 = -1;
	volatile int32_t t10 = -1;

	t10 = (x53|((x54-x55)/x56));

	if (t10 != -65663) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = INT8_MIN;
	uint64_t x58 = UINT64_MAX;
	static volatile int32_t x59 = -1;
	int16_t x60 = -1;
	volatile uint64_t t11 = 194402092LLU;

	t11 = (x57|((x58-x59)/x60));

	if (t11 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x62 = 857U;
	static int32_t x63 = 493;
	volatile int16_t x64 = INT16_MIN;

	t12 = (x61|((x62-x63)/x64));

	if (t12 != 48686232659LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = INT16_MIN;
	int32_t x66 = INT32_MAX;
	int64_t x68 = -1LL;
	static int64_t t13 = 11965076422LL;

	t13 = (x65|((x66-x67)/x68));

	if (t13 != -32768LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x69 = -1;
	static int16_t x70 = 9;
	int64_t x71 = -980657842150659LL;
	uint8_t x72 = UINT8_MAX;
	volatile int64_t t14 = -470090872511395LL;

	t14 = (x69|((x70-x71)/x72));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x74 = INT64_MAX;
	uint64_t x75 = 1646132723485447883LLU;
	uint16_t x76 = 328U;
	uint64_t t15 = 2LLU;

	t15 = (x73|((x74-x75)/x76));

	if (t15 != 23101339370028543LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x77 = 5U;
	static int8_t x78 = INT8_MAX;
	static int16_t x79 = INT16_MAX;
	uint8_t x80 = 49U;
	volatile int32_t t16 = 59;

	t16 = (x77|((x78-x79)/x80));

	if (t16 != -665) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x83 = UINT8_MAX;
	int32_t x84 = INT32_MAX;
	volatile uint64_t t17 = 3248812956592LLU;

	t17 = (x81|((x82-x83)/x84));

	if (t17 != 1996739947813177LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x85 = 4633676187707854LLU;
	volatile int32_t x86 = -1646333;
	int16_t x88 = INT16_MIN;
	uint64_t t18 = 251LLU;

	t18 = (x85|((x86-x87)/x88));

	if (t18 != 4633676187707902LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = -1;
	int16_t x90 = -1;
	uint8_t x91 = UINT8_MAX;
	int32_t x92 = INT32_MIN;
	int32_t t19 = -12;

	t19 = (x89|((x90-x91)/x92));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = INT32_MAX;
	int8_t x94 = -1;
	int16_t x95 = -1;
	int64_t x96 = INT64_MIN;

	t20 = (x93|((x94-x95)/x96));

	if (t20 != 2147483647LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x97 = 8873266008LL;
	static int16_t x98 = INT16_MIN;
	int8_t x99 = INT8_MIN;
	uint16_t x100 = UINT16_MAX;
	volatile int64_t t21 = -1690995611LL;

	t21 = (x97|((x98-x99)/x100));

	if (t21 != 8873266008LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x101 = UINT32_MAX;
	volatile uint64_t x102 = UINT64_MAX;
	static volatile int32_t x103 = INT32_MAX;
	int32_t x104 = INT32_MAX;
	uint64_t t22 = 488028912121819LLU;

	t22 = (x101|((x102-x103)/x104));

	if (t22 != 12884901887LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x106 = -1LL;
	int32_t x107 = INT32_MIN;
	volatile int8_t x108 = INT8_MIN;
	volatile int64_t t23 = -5913248563904LL;

	t23 = (x105|((x106-x107)/x108));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x117 = INT64_MIN;
	int64_t x118 = 82659401882LL;
	static int16_t x119 = -9;
	static uint64_t x120 = 13664212551LLU;

	t24 = (x117|((x118-x119)/x120));

	if (t24 != 9223372036854775814LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x122 = INT16_MIN;
	volatile uint64_t t25 = 110819LLU;

	t25 = (x121|((x122-x123)/x124));

	if (t25 != 25LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x126 = UINT32_MAX;
	static int16_t x127 = INT16_MAX;
	int64_t x128 = INT64_MIN;
	int64_t t26 = -8743100871LL;

	t26 = (x125|((x126-x127)/x128));

	if (t26 != -128LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x130 = 140319;
	int64_t x132 = INT64_MAX;
	volatile int64_t t27 = INT64_MAX;

	t27 = (x129|((x130-x131)/x132));

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x133 = 0U;
	int32_t x134 = INT32_MIN;
	int32_t x135 = -21441271;
	int32_t x136 = INT32_MAX;
	int32_t t28 = 10;

	t28 = (x133|((x134-x135)/x136));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x138 = 97U;
	volatile uint64_t x139 = 96173578LLU;
	static int32_t x140 = -1;
	volatile uint64_t t29 = 1178593826419173802LLU;

	t29 = (x137|((x138-x139)/x140));

	if (t29 != 21832314LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x149 = -39;
	uint64_t x150 = 255684LLU;
	uint8_t x152 = UINT8_MAX;

	t30 = (x149|((x150-x151)/x152));

	if (t30 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x153 = 15;
	int32_t x154 = 3825914;
	static volatile uint32_t x155 = UINT32_MAX;
	volatile uint32_t x156 = 499274U;
	volatile uint32_t t31 = 46255U;

	t31 = (x153|((x154-x155)/x156));

	if (t31 != 15U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x157 = -1;
	static volatile uint16_t x159 = 64U;
	int16_t x160 = INT16_MAX;

	t32 = (x157|((x158-x159)/x160));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x161 = UINT32_MAX;
	static int64_t x162 = -229711606651134LL;
	static int64_t x163 = INT64_MIN;
	int8_t x164 = INT8_MIN;
	volatile int64_t t33 = 1LL;

	t33 = (x161|((x162-x163)/x164));

	if (t33 != -72055798741598209LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x169 = -1;
	int16_t x170 = 1;
	uint32_t x171 = 59014099U;
	volatile uint16_t x172 = UINT16_MAX;

	t34 = (x169|((x170-x171)/x172));

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x173 = INT64_MAX;
	volatile int64_t x175 = INT64_MIN;
	volatile int8_t x176 = -1;
	volatile int64_t t35 = 162866616567590LL;

	t35 = (x173|((x174-x175)/x176));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x177 = -2LL;
	static volatile int8_t x180 = INT8_MAX;
	volatile int64_t t36 = -34837305LL;

	t36 = (x177|((x178-x179)/x180));

	if (t36 != -2LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x181 = 614093284532LLU;
	volatile int8_t x182 = -22;
	static int16_t x183 = INT16_MIN;
	int32_t x184 = -668470333;
	volatile uint64_t t37 = 7077842304621LLU;

	t37 = (x181|((x182-x183)/x184));

	if (t37 != 614093284532LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x185 = INT64_MIN;
	volatile int16_t x186 = INT16_MIN;
	volatile int32_t x187 = -1;
	volatile int8_t x188 = -1;
	volatile int64_t t38 = -205793705067924584LL;

	t38 = (x185|((x186-x187)/x188));

	if (t38 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x189 = 88382;
	volatile int8_t x191 = INT8_MIN;
	uint8_t x192 = UINT8_MAX;
	static volatile int32_t t39 = 26150990;

	t39 = (x189|((x190-x191)/x192));

	if (t39 != 88382) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x193 = 1647527653LL;
	static int32_t x194 = INT32_MAX;
	volatile int32_t x195 = 66;
	volatile int32_t x196 = 258254;
	volatile int64_t t40 = 0LL;

	t40 = (x193|((x194-x195)/x196));

	if (t40 != 1647535871LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x197 = 646924106061336748LLU;
	uint16_t x198 = 14U;
	int8_t x199 = -1;
	uint64_t x200 = UINT64_MAX;

	t41 = (x197|((x198-x199)/x200));

	if (t41 != 646924106061336748LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x206 = 8517U;
	uint64_t x207 = 89668642078LLU;
	uint32_t x208 = 424770U;
	volatile uint64_t t42 = 1377726568802321LLU;

	t42 = (x205|((x206-x207)/x208));

	if (t42 != 18446744073709529550LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x209 = INT32_MIN;
	static int16_t x210 = INT16_MAX;
	int16_t x211 = INT16_MIN;
	int64_t x212 = -1LL;
	volatile int64_t t43 = 42059666112370LL;

	t43 = (x209|((x210-x211)/x212));

	if (t43 != -65535LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x213 = UINT64_MAX;
	volatile uint32_t x214 = UINT32_MAX;
	static int16_t x215 = INT16_MIN;
	static uint64_t t44 = UINT64_MAX;

	t44 = (x213|((x214-x215)/x216));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x217 = 11812060U;
	int64_t x218 = -4476668233269301LL;
	uint16_t x219 = UINT16_MAX;
	int64_t x220 = 14LL;
	volatile int64_t t45 = 1770145723888130117LL;

	t45 = (x217|((x218-x219)/x220));

	if (t45 != -319762014568450LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x222 = -1;
	int8_t x223 = -1;
	uint8_t x224 = UINT8_MAX;
	volatile int32_t t46 = 1;

	t46 = (x221|((x222-x223)/x224));

	if (t46 != 36) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x226 = 1;
	static int16_t x227 = INT16_MIN;
	int8_t x228 = INT8_MAX;
	volatile int64_t t47 = 3429253LL;

	t47 = (x225|((x226-x227)/x228));

	if (t47 != -53923659362LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x229 = 2U;
	uint64_t x230 = 314LLU;
	int8_t x231 = INT8_MIN;
	static uint8_t x232 = UINT8_MAX;
	volatile uint64_t t48 = 16624842074793388LLU;

	t48 = (x229|((x230-x231)/x232));

	if (t48 != 3LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x233 = INT64_MAX;
	volatile int16_t x234 = INT16_MIN;
	int64_t x236 = 827451LL;

	t49 = (x233|((x234-x235)/x236));

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x237 = 32476470807LL;
	volatile uint16_t x238 = 13555U;
	volatile uint32_t x239 = 0U;
	int16_t x240 = INT16_MIN;
	int64_t t50 = -1725879501320LL;

	t50 = (x237|((x238-x239)/x240));

	if (t50 != 32476470807LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x243 = -1;
	int32_t x244 = INT32_MAX;
	volatile int64_t t51 = -23715771806613LL;

	t51 = (x241|((x242-x243)/x244));

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x245 = UINT64_MAX;
	uint32_t x246 = 1030883873U;
	static int16_t x248 = INT16_MAX;
	static volatile uint64_t t52 = UINT64_MAX;

	t52 = (x245|((x246-x247)/x248));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x250 = UINT32_MAX;
	int32_t x251 = INT32_MIN;
	volatile int64_t t53 = 318869643076251LL;

	t53 = (x249|((x250-x251)/x252));

	if (t53 != -2033537672319741752LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x253 = 2;
	int32_t x255 = -1;
	uint64_t x256 = UINT64_MAX;

	t54 = (x253|((x254-x255)/x256));

	if (t54 != 2LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x257 = INT16_MIN;
	int8_t x258 = INT8_MIN;
	int16_t x259 = INT16_MIN;
	uint64_t x260 = 264765371005995409LLU;
	uint64_t t55 = 60441638630LLU;

	t55 = (x257|((x258-x259)/x260));

	if (t55 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x261 = 748716226U;
	uint64_t x262 = 1073543825401LLU;
	uint16_t x264 = 120U;
	uint64_t t56 = 75LLU;

	t56 = (x261|((x262-x263)/x264));

	if (t56 != 9625709026LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x269 = 0;
	static int16_t x270 = INT16_MIN;
	volatile int64_t t57 = -1036072502155735670LL;

	t57 = (x269|((x270-x271)/x272));

	if (t57 != 140739635871744LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x273 = 20U;
	int32_t x274 = 34651;
	int8_t x275 = -1;
	int16_t x276 = INT16_MIN;
	int32_t t58 = 27616;

	t58 = (x273|((x274-x275)/x276));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x277 = UINT8_MAX;
	uint16_t x278 = 0U;
	int64_t x279 = INT64_MAX;
	volatile uint32_t x280 = 50846051U;
	int64_t t59 = -35992773209965475LL;

	t59 = (x277|((x278-x279)/x280));

	if (t59 != -181398001409LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x281 = -1LL;
	static uint64_t x282 = UINT64_MAX;
	int32_t x283 = INT32_MIN;
	static uint32_t x284 = UINT32_MAX;
	volatile uint64_t t60 = UINT64_MAX;

	t60 = (x281|((x282-x283)/x284));

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x285 = 0;
	static uint16_t x287 = 0U;
	uint16_t x288 = 84U;

	t61 = (x285|((x286-x287)/x288));

	if (t61 != 25565281) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x289 = -1;
	volatile int64_t x292 = INT64_MIN;
	static volatile int64_t t62 = -143788005197LL;

	t62 = (x289|((x290-x291)/x292));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x293 = INT16_MIN;
	int32_t x294 = INT32_MIN;
	uint64_t x296 = 219275003058205LLU;
	uint64_t t63 = 284659843211LLU;

	t63 = (x293|((x294-x295)/x296));

	if (t63 != 18446744073709537438LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x297 = -44734463274172LL;
	volatile int8_t x298 = 2;
	uint32_t x299 = UINT32_MAX;
	uint32_t x300 = UINT32_MAX;
	int64_t t64 = 287927LL;

	t64 = (x297|((x298-x299)/x300));

	if (t64 != -44734463274172LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x305 = -2167LL;
	static volatile int64_t t65 = -7591297LL;

	t65 = (x305|((x306-x307)/x308));

	if (t65 != -2167LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x309 = -12;
	volatile uint16_t x310 = 226U;
	volatile int64_t t66 = -32827819006LL;

	t66 = (x309|((x310-x311)/x312));

	if (t66 != -3LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x313 = INT8_MAX;
	int8_t x314 = INT8_MIN;
	int64_t x315 = 1175941042442602795LL;
	int16_t x316 = -14;
	volatile int64_t t67 = -1212LL;

	t67 = (x313|((x314-x315)/x316));

	if (t67 != 83995788745900287LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x317 = -7;
	static volatile uint64_t x318 = 98LLU;
	uint16_t x319 = 19U;
	uint64_t t68 = 749496LLU;

	t68 = (x317|((x318-x319)/x320));

	if (t68 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x321 = 16U;
	int8_t x322 = 0;
	int16_t x323 = INT16_MAX;

	t69 = (x321|((x322-x323)/x324));

	if (t69 != -258) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x327 = INT16_MIN;
	static int32_t x328 = -1;
	static int32_t t70 = 18;

	t70 = (x325|((x326-x327)/x328));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x329 = UINT8_MAX;
	int64_t x332 = INT64_MIN;
	int64_t t71 = 280015641242504049LL;

	t71 = (x329|((x330-x331)/x332));

	if (t71 != 255LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x334 = INT16_MAX;
	int16_t x336 = -2;
	volatile int32_t t72 = 41;

	t72 = (x333|((x334-x335)/x336));

	if (t72 != -16395) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x337 = INT8_MAX;
	volatile uint64_t x338 = 450LLU;
	int32_t x340 = -32129994;
	volatile uint64_t t73 = 115732853LLU;

	t73 = (x337|((x338-x339)/x340));

	if (t73 != 127LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x341 = 0U;
	int32_t x342 = -1;
	int32_t x343 = INT32_MAX;
	uint32_t x344 = 31804539U;
	uint32_t t74 = 11U;

	t74 = (x341|((x342-x343)/x344));

	if (t74 != 67U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x346 = 1604661589315LLU;
	static uint64_t x347 = UINT64_MAX;
	int16_t x348 = INT16_MIN;
	volatile uint64_t t75 = 84591LLU;

	t75 = (x345|((x346-x347)/x348));

	if (t75 != 18446744073709549829LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x349 = UINT64_MAX;
	uint32_t x351 = 34728U;
	uint64_t t76 = UINT64_MAX;

	t76 = (x349|((x350-x351)/x352));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x355 = 9758U;
	int32_t x356 = INT32_MIN;
	volatile int64_t t77 = 0LL;

	t77 = (x353|((x354-x355)/x356));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x357 = 44609843U;
	uint16_t x358 = 0U;
	int64_t x359 = 238944LL;
	int16_t x360 = 28;
	int64_t t78 = -12LL;

	t78 = (x357|((x358-x359)/x360));

	if (t78 != -69LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x361 = 100U;
	uint32_t x362 = 1050310824U;
	static int32_t x363 = INT32_MIN;
	uint64_t x364 = 15126195LLU;
	volatile uint64_t t79 = 59084862211675LLU;

	t79 = (x361|((x362-x363)/x364));

	if (t79 != 247LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x365 = UINT16_MAX;
	int8_t x366 = INT8_MAX;
	uint64_t x368 = 28334469LLU;
	volatile uint64_t t80 = 927LLU;

	t80 = (x365|((x366-x367)/x368));

	if (t80 != 65535LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x369 = INT32_MIN;
	int8_t x370 = -20;
	int64_t x371 = 5807281674LL;
	int64_t x372 = INT64_MIN;
	volatile int64_t t81 = 51096170614501LL;

	t81 = (x369|((x370-x371)/x372));

	if (t81 != -2147483648LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x377 = 504869LLU;
	uint16_t x378 = UINT16_MAX;
	volatile uint64_t x380 = 7363389980208629343LLU;
	volatile uint64_t t82 = 279887985868115LLU;

	t82 = (x377|((x378-x379)/x380));

	if (t82 != 504869LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x381 = INT64_MIN;
	int16_t x382 = INT16_MIN;
	int64_t x383 = INT64_MIN;
	uint64_t x384 = UINT64_MAX;
	uint64_t t83 = 1662612673137644LLU;

	t83 = (x381|((x382-x383)/x384));

	if (t83 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x389 = -1;
	int8_t x390 = -1;
	int8_t x391 = -5;
	int64_t x392 = INT64_MIN;
	volatile int64_t t84 = -605814249448311LL;

	t84 = (x389|((x390-x391)/x392));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x399 = INT16_MIN;
	int16_t x400 = -14;
	volatile int32_t t85 = -1;

	t85 = (x397|((x398-x399)/x400));

	if (t85 != -45) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x401 = 1U;
	static volatile int32_t x402 = -1771;
	uint8_t x403 = 109U;
	int64_t x404 = 50508709LL;
	int64_t t86 = 868774LL;

	t86 = (x401|((x402-x403)/x404));

	if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x405 = -19974;
	static int64_t x406 = -1LL;
	volatile uint16_t x407 = UINT16_MAX;
	uint16_t x408 = 100U;

	t87 = (x405|((x406-x407)/x408));

	if (t87 != -517LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x409 = INT8_MIN;
	int16_t x410 = -2959;
	static uint64_t x411 = 940LLU;
	int8_t x412 = -1;
	static volatile uint64_t t88 = 9LLU;

	t88 = (x409|((x410-x411)/x412));

	if (t88 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x422 = 412951438U;
	static int32_t x424 = INT32_MAX;
	uint32_t t89 = 1987324599U;

	t89 = (x421|((x422-x423)/x424));

	if (t89 != 4294934528U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x425 = INT8_MIN;
	int8_t x426 = INT8_MIN;
	int32_t t90 = 3049663;

	t90 = (x425|((x426-x427)/x428));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x429 = INT8_MAX;
	int8_t x430 = 0;
	uint32_t x431 = UINT32_MAX;
	uint64_t x432 = 62LLU;

	t91 = (x429|((x430-x431)/x432));

	if (t91 != 127LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x435 = -250992126LL;
	uint64_t x436 = UINT64_MAX;
	volatile uint64_t t92 = 44873LLU;

	t92 = (x433|((x434-x435)/x436));

	if (t92 != 434890046379149520LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x437 = 21;
	uint64_t x438 = UINT64_MAX;
	uint32_t x439 = 10006663U;
	uint64_t t93 = 446316LLU;

	t93 = (x437|((x438-x439)/x440));

	if (t93 != 21LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x442 = 208427147995557LLU;
	int8_t x443 = INT8_MIN;
	int32_t x444 = 3;
	volatile uint64_t t94 = 1889835890488232LLU;

	t94 = (x441|((x442-x443)/x444));

	if (t94 != 69475716038655LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x445 = INT32_MIN;
	uint64_t x446 = 79480504LLU;
	int32_t x447 = 26815930;

	t95 = (x445|((x446-x447)/x448));

	if (t95 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x449 = INT64_MAX;
	static int16_t x450 = -1;
	volatile int8_t x451 = 1;
	volatile uint16_t x452 = 2U;
	volatile int64_t t96 = -24196207615247293LL;

	t96 = (x449|((x450-x451)/x452));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x457 = UINT16_MAX;
	static int8_t x458 = INT8_MAX;
	uint64_t x459 = 283LLU;
	volatile int16_t x460 = 374;
	volatile uint64_t t97 = 3335LLU;

	t97 = (x457|((x458-x459)/x460));

	if (t97 != 49322845116891135LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x461 = INT8_MIN;
	int32_t x463 = -87;
	volatile int64_t x464 = 27068229779361149LL;
	volatile int64_t t98 = 33859994148LL;

	t98 = (x461|((x462-x463)/x464));

	if (t98 != -128LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x465 = -264;
	static uint8_t x467 = 1U;
	volatile uint32_t t99 = 18834U;

	t99 = (x465|((x466-x467)/x468));

	if (t99 != 4294967032U) { NG(); } else { ; }
	
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

