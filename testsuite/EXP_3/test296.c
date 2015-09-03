#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x5 = 1386U;
volatile int32_t x6 = INT32_MIN;
static uint8_t x11 = 4U;
static uint8_t x12 = 0U;
int32_t t2 = 149030;
volatile int8_t x17 = 0;
static int8_t x18 = INT8_MAX;
uint32_t x19 = 1101U;
volatile int8_t x23 = -1;
int16_t x26 = 9110;
uint16_t x27 = UINT16_MAX;
int16_t x31 = INT16_MIN;
int32_t t8 = -2017430;
uint32_t x51 = 334237596U;
static volatile int32_t t12 = 184;
static int16_t x53 = -5034;
uint32_t x56 = 5812U;
static volatile uint64_t x60 = 20726526238LLU;
volatile int32_t t14 = -1789751;
volatile int16_t x64 = INT16_MIN;
int32_t x70 = INT32_MIN;
static uint32_t x71 = UINT32_MAX;
int8_t x72 = -2;
volatile int8_t x83 = INT8_MAX;
int32_t t20 = 2725865;
static int8_t x88 = INT8_MIN;
int16_t x94 = INT16_MIN;
static volatile int32_t x98 = INT32_MIN;
volatile int32_t x102 = 184063;
uint8_t x107 = 122U;
int8_t x110 = -1;
int8_t x111 = -1;
int64_t x112 = INT64_MAX;
static volatile int32_t t27 = 165;
volatile int32_t t29 = -1302812;
uint64_t x128 = 1122701894686125LLU;
int32_t t32 = -350;
uint16_t x139 = 1U;
int32_t t33 = 1577356;
int16_t x144 = INT16_MAX;
volatile int32_t t34 = -721652;
int8_t x145 = INT8_MIN;
static volatile int32_t x150 = INT32_MIN;
int8_t x157 = 25;
int8_t x158 = INT8_MIN;
uint32_t x162 = 59923U;
volatile int32_t t40 = 439903790;
int16_t x170 = INT16_MIN;
static uint64_t x176 = 108406477525695371LLU;
static volatile int32_t x177 = 57516812;
int32_t t44 = 51;
int8_t x185 = INT8_MAX;
static uint16_t x199 = UINT16_MAX;
int32_t x201 = -2;
volatile uint64_t x203 = 3306045LLU;
static int64_t x204 = INT64_MIN;
int16_t x208 = INT16_MIN;
int32_t x211 = INT32_MIN;
volatile int16_t x214 = INT16_MIN;
volatile int8_t x215 = INT8_MIN;
static uint32_t x216 = UINT32_MAX;
static int32_t t51 = -1;
int8_t x219 = -4;
static int32_t x221 = INT32_MIN;
uint8_t x225 = 1U;
static int32_t t54 = 52264;
int32_t t56 = 10;
int16_t x252 = 3686;
int64_t x255 = -606980767259108697LL;
int32_t t60 = -2441402;
int16_t x257 = -220;
uint64_t x259 = 1514196563556LLU;
int32_t x272 = -1;
volatile uint64_t x275 = 3602084430584749LLU;
int32_t x286 = -1;
static volatile uint16_t x295 = UINT16_MAX;
int64_t x301 = 157243551004LL;
int8_t x303 = 33;
volatile int16_t x306 = -1;
int16_t x312 = 1;
static int16_t x325 = INT16_MIN;
int8_t x328 = 1;
int16_t x329 = 1;
int8_t x330 = 2;
static int16_t x333 = INT16_MIN;
int16_t x335 = 14325;
volatile int16_t x351 = 1;
static int32_t t79 = 2;
uint32_t x354 = 20U;
uint32_t x355 = 2004U;
int16_t x356 = INT16_MAX;
volatile int32_t t80 = -116118149;
volatile uint64_t x362 = UINT64_MAX;
uint8_t x364 = UINT8_MAX;
int64_t x367 = -1LL;
volatile int32_t x378 = INT32_MAX;
int64_t x380 = INT64_MIN;
volatile int32_t t85 = 10874207;
static int32_t x397 = INT32_MIN;
int8_t x412 = INT8_MIN;
static int16_t x414 = -13801;
volatile int32_t t93 = 6;
static int8_t x419 = -11;
volatile uint32_t x431 = 3U;
int32_t x440 = -459;


void f0(void) {
	static uint8_t x1 = 2U;
	int8_t x2 = 26;
	int64_t x3 = INT64_MIN;
	static int8_t x4 = INT8_MIN;
	volatile int32_t t0 = 120;

	t0 = ((x1<=x2)<=(x3-x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x7 = INT64_MAX;
	int16_t x8 = INT16_MAX;
	volatile int32_t t1 = -322987078;

	t1 = ((x5<=x6)<=(x7-x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	volatile uint16_t x10 = UINT16_MAX;

	t2 = ((x9<=x10)<=(x11-x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = INT32_MAX;
	int8_t x14 = 1;
	int8_t x15 = INT8_MIN;
	int16_t x16 = -6;
	static int32_t t3 = -30;

	t3 = ((x13<=x14)<=(x15-x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x20 = 216877664LLU;
	volatile int32_t t4 = 204158422;

	t4 = ((x17<=x18)<=(x19-x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = 21465897557882375LLU;
	volatile uint8_t x22 = 93U;
	int16_t x24 = -2;
	int32_t t5 = -82;

	t5 = ((x21<=x22)<=(x23-x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x25 = 11U;
	uint64_t x28 = 30367366297LLU;
	volatile int32_t t6 = -30548;

	t6 = ((x25<=x26)<=(x27-x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -2433639LL;
	static int8_t x30 = INT8_MIN;
	static volatile int8_t x32 = INT8_MIN;
	int32_t t7 = -626927147;

	t7 = ((x29<=x30)<=(x31-x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 58;
	int8_t x34 = INT8_MAX;
	static uint64_t x35 = 56958LLU;
	int8_t x36 = -12;

	t8 = ((x33<=x34)<=(x35-x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 2696490566LLU;
	volatile int32_t x38 = INT32_MIN;
	static int64_t x39 = -1LL;
	uint32_t x40 = 28U;
	int32_t t9 = -1217;

	t9 = ((x37<=x38)<=(x39-x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = INT16_MIN;
	int16_t x42 = INT16_MIN;
	int16_t x43 = -1;
	int16_t x44 = INT16_MIN;
	volatile int32_t t10 = -260444430;

	t10 = ((x41<=x42)<=(x43-x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = -1287389331750209585LL;
	uint16_t x46 = UINT16_MAX;
	uint8_t x47 = UINT8_MAX;
	uint16_t x48 = 9U;
	int32_t t11 = -306120;

	t11 = ((x45<=x46)<=(x47-x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	static uint16_t x50 = 8641U;
	volatile int32_t x52 = INT32_MIN;

	t12 = ((x49<=x50)<=(x51-x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x54 = INT16_MAX;
	int32_t x55 = -1;
	int32_t t13 = -152980376;

	t13 = ((x53<=x54)<=(x55-x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint32_t x57 = 1634U;
	static uint32_t x58 = 0U;
	int32_t x59 = -1;

	t14 = ((x57<=x58)<=(x59-x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	int16_t x62 = INT16_MIN;
	uint16_t x63 = UINT16_MAX;
	volatile int32_t t15 = -14019440;

	t15 = ((x61<=x62)<=(x63-x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int32_t x65 = -1;
	int64_t x66 = -1LL;
	volatile int64_t x67 = 6881LL;
	static int32_t x68 = -1;
	static int32_t t16 = -514988;

	t16 = ((x65<=x66)<=(x67-x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = INT8_MAX;
	static volatile int32_t t17 = 87691;

	t17 = ((x69<=x70)<=(x71-x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = UINT32_MAX;
	int32_t x74 = -1;
	int16_t x75 = INT16_MAX;
	uint16_t x76 = 770U;
	volatile int32_t t18 = -2;

	t18 = ((x73<=x74)<=(x75-x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x77 = 151439489467543LLU;
	int64_t x78 = INT64_MIN;
	uint32_t x79 = 1583U;
	int32_t x80 = -1;
	volatile int32_t t19 = -949;

	t19 = ((x77<=x78)<=(x79-x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -50;
	int16_t x82 = INT16_MIN;
	int32_t x84 = -1;

	t20 = ((x81<=x82)<=(x83-x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x85 = 58U;
	static int64_t x86 = INT64_MIN;
	static int32_t x87 = -101350;
	static volatile int32_t t21 = 76112;

	t21 = ((x85<=x86)<=(x87-x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MAX;
	int16_t x90 = INT16_MIN;
	uint8_t x91 = UINT8_MAX;
	uint16_t x92 = 27152U;
	int32_t t22 = 1;

	t22 = ((x89<=x90)<=(x91-x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = INT16_MAX;
	uint64_t x95 = 110820911270044459LLU;
	static int8_t x96 = INT8_MIN;
	static int32_t t23 = 50812;

	t23 = ((x93<=x94)<=(x95-x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = UINT16_MAX;
	static int16_t x99 = INT16_MAX;
	int32_t x100 = -3799121;
	static volatile int32_t t24 = 49;

	t24 = ((x97<=x98)<=(x99-x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -2;
	volatile int8_t x103 = 10;
	uint16_t x104 = 23832U;
	static volatile int32_t t25 = 44012850;

	t25 = ((x101<=x102)<=(x103-x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	int8_t x106 = -28;
	int16_t x108 = -10829;
	volatile int32_t t26 = 0;

	t26 = ((x105<=x106)<=(x107-x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;

	t27 = ((x109<=x110)<=(x111-x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = UINT32_MAX;
	static int64_t x114 = INT64_MIN;
	int16_t x115 = INT16_MIN;
	static int32_t x116 = INT32_MIN;
	volatile int32_t t28 = -3;

	t28 = ((x113<=x114)<=(x115-x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MAX;
	int16_t x118 = INT16_MIN;
	int8_t x119 = INT8_MAX;
	int8_t x120 = INT8_MIN;

	t29 = ((x117<=x118)<=(x119-x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 0U;
	int64_t x122 = INT64_MAX;
	uint32_t x123 = 11538U;
	volatile uint8_t x124 = 5U;
	volatile int32_t t30 = 3458291;

	t30 = ((x121<=x122)<=(x123-x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = 5524334;
	volatile int64_t x126 = INT64_MAX;
	static uint64_t x127 = 94833LLU;
	int32_t t31 = 226;

	t31 = ((x125<=x126)<=(x127-x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x129 = UINT64_MAX;
	int32_t x130 = -4847;
	static int8_t x131 = 0;
	uint64_t x132 = UINT64_MAX;

	t32 = ((x129<=x130)<=(x131-x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x137 = 5908474411594LLU;
	int16_t x138 = -1;
	static uint8_t x140 = 122U;

	t33 = ((x137<=x138)<=(x139-x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = INT16_MAX;
	volatile uint32_t x142 = UINT32_MAX;
	uint16_t x143 = 1U;

	t34 = ((x141<=x142)<=(x143-x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x146 = INT8_MAX;
	int16_t x147 = -1;
	uint8_t x148 = UINT8_MAX;
	static int32_t t35 = 12152681;

	t35 = ((x145<=x146)<=(x147-x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x149 = 6925152879LLU;
	uint8_t x151 = 5U;
	int8_t x152 = 1;
	int32_t t36 = 314282508;

	t36 = ((x149<=x150)<=(x151-x152));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = INT32_MAX;
	int64_t x154 = INT64_MAX;
	volatile uint8_t x155 = 89U;
	uint64_t x156 = 4042LLU;
	volatile int32_t t37 = -7;

	t37 = ((x153<=x154)<=(x155-x156));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x159 = INT8_MIN;
	uint16_t x160 = 11U;
	volatile int32_t t38 = -53;

	t38 = ((x157<=x158)<=(x159-x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x161 = 16698402489126617LL;
	static int16_t x163 = INT16_MIN;
	int8_t x164 = INT8_MIN;
	int32_t t39 = 10675515;

	t39 = ((x161<=x162)<=(x163-x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x165 = INT16_MIN;
	uint32_t x166 = 1U;
	int64_t x167 = -1LL;
	int32_t x168 = INT32_MAX;

	t40 = ((x165<=x166)<=(x167-x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = INT16_MIN;
	uint64_t x171 = 603940LLU;
	int8_t x172 = 0;
	int32_t t41 = 19042;

	t41 = ((x169<=x170)<=(x171-x172));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = -1;
	int8_t x174 = -1;
	int16_t x175 = INT16_MIN;
	volatile int32_t t42 = 10123359;

	t42 = ((x173<=x174)<=(x175-x176));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x178 = 60U;
	volatile uint64_t x179 = 3374LLU;
	int8_t x180 = INT8_MAX;
	static volatile int32_t t43 = -4;

	t43 = ((x177<=x178)<=(x179-x180));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = INT32_MIN;
	uint64_t x182 = 419LLU;
	volatile uint32_t x183 = UINT32_MAX;
	int8_t x184 = INT8_MIN;

	t44 = ((x181<=x182)<=(x183-x184));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x186 = INT16_MIN;
	static volatile uint32_t x187 = 9176157U;
	volatile int16_t x188 = -1;
	static int32_t t45 = 4;

	t45 = ((x185<=x186)<=(x187-x188));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x193 = 24U;
	volatile uint64_t x194 = UINT64_MAX;
	static int8_t x195 = -1;
	volatile int16_t x196 = INT16_MIN;
	volatile int32_t t46 = -25614;

	t46 = ((x193<=x194)<=(x195-x196));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x197 = INT64_MIN;
	volatile int64_t x198 = INT64_MIN;
	uint64_t x200 = UINT64_MAX;
	volatile int32_t t47 = 230480533;

	t47 = ((x197<=x198)<=(x199-x200));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x202 = 1U;
	int32_t t48 = -2044390;

	t48 = ((x201<=x202)<=(x203-x204));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = INT8_MIN;
	volatile int64_t x206 = 816263LL;
	uint16_t x207 = 101U;
	static volatile int32_t t49 = 224;

	t49 = ((x205<=x206)<=(x207-x208));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = 1630;
	int64_t x210 = -1LL;
	uint32_t x212 = 0U;
	int32_t t50 = 1;

	t50 = ((x209<=x210)<=(x211-x212));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x213 = 98333847U;

	t51 = ((x213<=x214)<=(x215-x216));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x217 = 567307002031041254LL;
	uint32_t x218 = 27044U;
	uint16_t x220 = 14U;
	int32_t t52 = -62;

	t52 = ((x217<=x218)<=(x219-x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x222 = 1200189U;
	uint16_t x223 = 151U;
	int8_t x224 = INT8_MIN;
	static volatile int32_t t53 = 16;

	t53 = ((x221<=x222)<=(x223-x224));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x226 = -10LL;
	static uint8_t x227 = 39U;
	static int16_t x228 = 72;

	t54 = ((x225<=x226)<=(x227-x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x229 = 35;
	uint64_t x230 = UINT64_MAX;
	volatile int32_t x231 = INT32_MIN;
	int16_t x232 = INT16_MIN;
	volatile int32_t t55 = 15683136;

	t55 = ((x229<=x230)<=(x231-x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x237 = -3308;
	uint8_t x238 = 10U;
	int32_t x239 = INT32_MIN;
	int64_t x240 = INT64_MIN;

	t56 = ((x237<=x238)<=(x239-x240));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x241 = INT16_MIN;
	static uint8_t x242 = UINT8_MAX;
	volatile int64_t x243 = 10576431472087LL;
	uint8_t x244 = UINT8_MAX;
	int32_t t57 = 193;

	t57 = ((x241<=x242)<=(x243-x244));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x245 = 2939288692LLU;
	uint8_t x246 = 65U;
	int32_t x247 = INT32_MIN;
	volatile int16_t x248 = INT16_MIN;
	static volatile int32_t t58 = 26823;

	t58 = ((x245<=x246)<=(x247-x248));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x249 = INT32_MAX;
	int16_t x250 = INT16_MIN;
	int32_t x251 = INT32_MAX;
	volatile int32_t t59 = 0;

	t59 = ((x249<=x250)<=(x251-x252));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x253 = -5356806104LL;
	static uint32_t x254 = 375896208U;
	int16_t x256 = INT16_MIN;

	t60 = ((x253<=x254)<=(x255-x256));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x258 = 115U;
	volatile int64_t x260 = -1539LL;
	int32_t t61 = -13924;

	t61 = ((x257<=x258)<=(x259-x260));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x265 = -1LL;
	int32_t x266 = -49398;
	int8_t x267 = -1;
	uint64_t x268 = UINT64_MAX;
	volatile int32_t t62 = 4080656;

	t62 = ((x265<=x266)<=(x267-x268));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x269 = 1U;
	volatile uint16_t x270 = 381U;
	int32_t x271 = -1;
	static int32_t t63 = -1364982;

	t63 = ((x269<=x270)<=(x271-x272));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x273 = INT64_MIN;
	uint16_t x274 = UINT16_MAX;
	static uint64_t x276 = 774746984114935160LLU;
	static int32_t t64 = -1059577907;

	t64 = ((x273<=x274)<=(x275-x276));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x277 = 7578828LLU;
	int8_t x278 = -1;
	volatile uint64_t x279 = 15038891758147LLU;
	static int32_t x280 = INT32_MAX;
	static int32_t t65 = 4478;

	t65 = ((x277<=x278)<=(x279-x280));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x281 = -1;
	uint16_t x282 = 1079U;
	int64_t x283 = -1LL;
	static int16_t x284 = INT16_MIN;
	volatile int32_t t66 = -7;

	t66 = ((x281<=x282)<=(x283-x284));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x285 = -1LL;
	volatile int64_t x287 = 3LL;
	int32_t x288 = -4709;
	static volatile int32_t t67 = -438473562;

	t67 = ((x285<=x286)<=(x287-x288));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x289 = INT8_MIN;
	uint16_t x290 = UINT16_MAX;
	volatile int16_t x291 = -1;
	static int8_t x292 = 1;
	volatile int32_t t68 = -28485;

	t68 = ((x289<=x290)<=(x291-x292));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x293 = -1;
	int32_t x294 = -116711009;
	int8_t x296 = 1;
	volatile int32_t t69 = 65;

	t69 = ((x293<=x294)<=(x295-x296));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x302 = INT64_MIN;
	int16_t x304 = INT16_MAX;
	volatile int32_t t70 = 91396286;

	t70 = ((x301<=x302)<=(x303-x304));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x305 = -1;
	int16_t x307 = INT16_MIN;
	int8_t x308 = -1;
	volatile int32_t t71 = 63;

	t71 = ((x305<=x306)<=(x307-x308));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x309 = INT64_MIN;
	volatile int16_t x310 = -8169;
	static int64_t x311 = -1LL;
	static int32_t t72 = -1692517;

	t72 = ((x309<=x310)<=(x311-x312));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x326 = INT8_MIN;
	int8_t x327 = 1;
	static volatile int32_t t73 = 920885192;

	t73 = ((x325<=x326)<=(x327-x328));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x331 = -1LL;
	volatile uint16_t x332 = 3377U;
	int32_t t74 = 3997126;

	t74 = ((x329<=x330)<=(x331-x332));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x334 = INT16_MAX;
	int8_t x336 = 1;
	volatile int32_t t75 = -1;

	t75 = ((x333<=x334)<=(x335-x336));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x337 = 1;
	static uint16_t x338 = 56U;
	uint64_t x339 = 546303580573LLU;
	static volatile int8_t x340 = -3;
	volatile int32_t t76 = -890;

	t76 = ((x337<=x338)<=(x339-x340));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x341 = -1;
	volatile int16_t x342 = INT16_MIN;
	volatile int32_t x343 = -3748443;
	uint64_t x344 = 282220918853LLU;
	int32_t t77 = -118422151;

	t77 = ((x341<=x342)<=(x343-x344));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x345 = INT8_MIN;
	uint64_t x346 = 107450020796LLU;
	static uint32_t x347 = 1579712796U;
	uint32_t x348 = 10U;
	volatile int32_t t78 = 828889284;

	t78 = ((x345<=x346)<=(x347-x348));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x349 = 1645634092742707821LLU;
	volatile int8_t x350 = 50;
	static volatile int8_t x352 = INT8_MIN;

	t79 = ((x349<=x350)<=(x351-x352));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x353 = 38;

	t80 = ((x353<=x354)<=(x355-x356));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x357 = -1LL;
	static uint64_t x358 = 350661416425520LLU;
	int16_t x359 = INT16_MAX;
	uint32_t x360 = UINT32_MAX;
	static int32_t t81 = -10;

	t81 = ((x357<=x358)<=(x359-x360));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x361 = 1;
	static volatile int32_t x363 = INT32_MAX;
	int32_t t82 = -14769384;

	t82 = ((x361<=x362)<=(x363-x364));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x365 = 13752U;
	uint16_t x366 = 4U;
	static int32_t x368 = 1;
	volatile int32_t t83 = -1317686;

	t83 = ((x365<=x366)<=(x367-x368));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x373 = INT64_MIN;
	uint32_t x374 = 20U;
	static uint8_t x375 = 51U;
	int32_t x376 = -159198;
	volatile int32_t t84 = 199;

	t84 = ((x373<=x374)<=(x375-x376));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x377 = INT16_MIN;
	int8_t x379 = INT8_MIN;

	t85 = ((x377<=x378)<=(x379-x380));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x381 = -1LL;
	uint64_t x382 = 4930606634670853LLU;
	volatile int8_t x383 = -1;
	uint64_t x384 = UINT64_MAX;
	volatile int32_t t86 = 987;

	t86 = ((x381<=x382)<=(x383-x384));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x385 = 168040891U;
	uint8_t x386 = 41U;
	uint64_t x387 = 11LLU;
	uint64_t x388 = 142412323445274LLU;
	static volatile int32_t t87 = -1891;

	t87 = ((x385<=x386)<=(x387-x388));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x393 = INT16_MIN;
	int8_t x394 = 0;
	int16_t x395 = INT16_MIN;
	static uint8_t x396 = UINT8_MAX;
	int32_t t88 = 3143762;

	t88 = ((x393<=x394)<=(x395-x396));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x398 = INT8_MIN;
	int16_t x399 = -1;
	int8_t x400 = -4;
	static volatile int32_t t89 = 605;

	t89 = ((x397<=x398)<=(x399-x400));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x401 = 25;
	uint32_t x402 = UINT32_MAX;
	int64_t x403 = INT64_MIN;
	int8_t x404 = INT8_MIN;
	volatile int32_t t90 = -1777998;

	t90 = ((x401<=x402)<=(x403-x404));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x405 = -1;
	static uint64_t x406 = 2275207LLU;
	int8_t x407 = 2;
	static uint64_t x408 = 62LLU;
	static int32_t t91 = 17;

	t91 = ((x405<=x406)<=(x407-x408));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x409 = 3669685070937323899LL;
	static int64_t x410 = 27999386LL;
	volatile uint32_t x411 = 5850386U;
	volatile int32_t t92 = -1144;

	t92 = ((x409<=x410)<=(x411-x412));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x413 = 108U;
	uint64_t x415 = UINT64_MAX;
	volatile int16_t x416 = -1152;

	t93 = ((x413<=x414)<=(x415-x416));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x417 = INT8_MIN;
	uint16_t x418 = 3U;
	static uint16_t x420 = 127U;
	volatile int32_t t94 = 2716;

	t94 = ((x417<=x418)<=(x419-x420));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x421 = INT64_MAX;
	int32_t x422 = -1697871;
	static int8_t x423 = 7;
	uint16_t x424 = 14743U;
	volatile int32_t t95 = -184165;

	t95 = ((x421<=x422)<=(x423-x424));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x425 = -1LL;
	int8_t x426 = INT8_MIN;
	static volatile uint64_t x427 = UINT64_MAX;
	volatile int8_t x428 = -1;
	int32_t t96 = 325676130;

	t96 = ((x425<=x426)<=(x427-x428));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x429 = -1;
	uint8_t x430 = UINT8_MAX;
	static uint32_t x432 = 86459U;
	int32_t t97 = 1;

	t97 = ((x429<=x430)<=(x431-x432));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x433 = 84536LLU;
	static volatile uint64_t x434 = UINT64_MAX;
	volatile int8_t x435 = INT8_MIN;
	int16_t x436 = -1;
	int32_t t98 = -5;

	t98 = ((x433<=x434)<=(x435-x436));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x437 = INT64_MIN;
	uint32_t x438 = 1164174318U;
	static volatile int16_t x439 = -1;
	static int32_t t99 = 6897645;

	t99 = ((x437<=x438)<=(x439-x440));

	if (t99 != 1) { NG(); } else { ; }
	
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

