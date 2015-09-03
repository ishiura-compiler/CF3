#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x7 = 13020U;
uint64_t x10 = UINT64_MAX;
int8_t x17 = 1;
int64_t x24 = -1LL;
int8_t x26 = 1;
uint32_t x32 = 197581600U;
int64_t x45 = INT64_MIN;
int32_t x50 = INT32_MIN;
int32_t x51 = 687776518;
int32_t x54 = INT32_MAX;
int8_t x60 = -7;
int64_t x64 = INT64_MIN;
int64_t t14 = -2072184662LL;
static int8_t x73 = INT8_MIN;
int64_t x92 = -1LL;
static volatile uint64_t x95 = 232923063506178525LLU;
volatile uint16_t x100 = UINT16_MAX;
int32_t x109 = -62;
uint32_t t25 = 1308451601U;
volatile int32_t x117 = -1;
static volatile int32_t t27 = 4922;
uint16_t x121 = UINT16_MAX;
int8_t x125 = INT8_MAX;
int8_t x127 = INT8_MIN;
int8_t x132 = INT8_MIN;
uint8_t x134 = 1U;
volatile uint64_t x135 = 54556LLU;
int32_t x137 = INT32_MIN;
int32_t x139 = -970112;
int64_t x143 = -1LL;
int8_t x144 = INT8_MIN;
static volatile int64_t t34 = -131212029402LL;
volatile int16_t x155 = INT16_MIN;
int16_t x157 = INT16_MIN;
int32_t x164 = INT32_MIN;
volatile int32_t t38 = 3;
volatile int32_t x167 = INT32_MIN;
volatile int64_t t39 = -867389689124532028LL;
uint16_t x170 = 35U;
int32_t x172 = 258743000;
uint8_t x177 = 7U;
int32_t x184 = -2122;
int32_t x189 = INT32_MIN;
uint32_t x192 = 4755818U;
static volatile uint32_t t45 = 19U;
uint16_t x193 = UINT16_MAX;
static int16_t x196 = INT16_MIN;
int32_t x199 = -1;
int32_t x204 = INT32_MIN;
int32_t t48 = 12979;
int64_t x207 = INT64_MIN;
volatile int8_t x208 = INT8_MAX;
int8_t x216 = -1;
int16_t x218 = -1;
int8_t x220 = 6;
static int32_t t52 = 90;
uint8_t x229 = UINT8_MAX;
int32_t x231 = INT32_MAX;
int8_t x233 = INT8_MIN;
int16_t x234 = 27;
int64_t x242 = 32852295LL;
uint32_t x245 = 1U;
volatile uint64_t x246 = UINT64_MAX;
int8_t x249 = INT8_MIN;
int32_t x251 = -890556737;
int8_t x255 = -1;
volatile int64_t t61 = -109682LL;
int64_t x271 = INT64_MAX;
int8_t x272 = INT8_MIN;
int64_t t64 = 1331108417893840LL;
uint64_t x274 = 40363367750887LLU;
volatile int32_t t65 = -507798;
int8_t x277 = -1;
volatile int16_t x281 = -1;
volatile int32_t t67 = -36644;
int16_t x286 = -1;
volatile int64_t x288 = 54321677475LL;
static volatile int64_t t68 = -43143799775167270LL;
int32_t x303 = INT32_MIN;
int32_t t70 = 6;
static int16_t x310 = INT16_MIN;
static int8_t x318 = -1;
uint16_t x323 = 2702U;
int8_t x325 = INT8_MIN;
volatile int32_t t76 = 13;
int8_t x338 = -1;
static int8_t x342 = INT8_MIN;
static uint8_t x350 = 48U;
int64_t x351 = -1205396181154086582LL;
int32_t t81 = -228;
int8_t x368 = 0;
uint16_t x375 = 17727U;
static uint64_t x379 = 54914LLU;
int32_t t86 = -518909583;
int32_t x383 = INT32_MAX;
int16_t x384 = INT16_MIN;
int16_t x391 = 1;
static uint64_t x398 = UINT64_MAX;
volatile uint32_t t89 = 171100742U;
volatile int32_t x407 = INT32_MIN;
static volatile int32_t x412 = 495;
int16_t x418 = -368;
volatile int8_t x421 = INT8_MAX;
uint64_t x431 = 119240037730LLU;
int64_t x435 = INT64_MAX;
uint8_t x444 = 9U;
volatile int16_t x449 = INT16_MIN;


void f0(void) {
	volatile int8_t x1 = INT8_MIN;
	int32_t x2 = INT32_MAX;
	int32_t x3 = INT32_MAX;
	int16_t x4 = -12;
	volatile int32_t t0 = -160008;

	t0 = (x1%((x2<x3)+x4));

	if (t0 != -8) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	uint8_t x6 = 11U;
	volatile int32_t x8 = -1366;
	volatile int32_t t1 = -791;

	t1 = (x5%((x6<x7)+x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	int32_t x11 = INT32_MIN;
	static volatile int64_t x12 = 199266405733266LL;
	volatile int64_t t2 = 58LL;

	t2 = (x9%((x10<x11)+x12));

	if (t2 != 2147483647LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 3401U;
	volatile uint16_t x14 = 112U;
	uint32_t x15 = 78U;
	int8_t x16 = -1;
	volatile uint32_t t3 = 25U;

	t3 = (x13%((x14<x15)+x16));

	if (t3 != 3401U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MAX;
	int8_t x19 = INT8_MAX;
	static uint8_t x20 = 123U;
	volatile int32_t t4 = -4;

	t4 = (x17%((x18<x19)+x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = 46958814334LL;
	uint32_t x22 = UINT32_MAX;
	int64_t x23 = INT64_MIN;
	int64_t t5 = -6065462LL;

	t5 = (x21%((x22<x23)+x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	static uint64_t x27 = 1402583224LLU;
	volatile uint64_t x28 = 1002251502794410LLU;
	volatile uint64_t t6 = 3003438524LLU;

	t6 = (x25%((x26<x27)+x28));

	if (t6 != 305164778417160LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	static uint8_t x30 = 24U;
	volatile uint16_t x31 = UINT16_MAX;
	volatile uint32_t t7 = 13531965U;

	t7 = (x29%((x30<x31)+x32));

	if (t7 != 127U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = -60429;
	int16_t x38 = INT16_MIN;
	int16_t x39 = -1;
	volatile uint16_t x40 = 3U;
	static int32_t t8 = -218;

	t8 = (x37%((x38<x39)+x40));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MAX;
	int32_t x42 = INT32_MAX;
	int16_t x43 = INT16_MIN;
	uint16_t x44 = 36U;
	volatile int32_t t9 = -80841;

	t9 = (x41%((x42<x43)+x44));

	if (t9 != 19) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x46 = UINT64_MAX;
	volatile int16_t x47 = 486;
	uint16_t x48 = UINT16_MAX;
	int64_t t10 = 153243033695681LL;

	t10 = (x45%((x46<x47)+x48));

	if (t10 != -32768LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x49 = INT8_MAX;
	int8_t x52 = 0;
	volatile int32_t t11 = -212062;

	t11 = (x49%((x50<x51)+x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = UINT64_MAX;
	static volatile uint16_t x55 = 2694U;
	int32_t x56 = 94;
	uint64_t t12 = 1LLU;

	t12 = (x53%((x54<x55)+x56));

	if (t12 != 71LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = INT32_MIN;
	int16_t x58 = -94;
	int64_t x59 = INT64_MAX;
	volatile int32_t t13 = 15404;

	t13 = (x57%((x58<x59)+x60));

	if (t13 != -2) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x61 = 8596U;
	int16_t x62 = INT16_MIN;
	int32_t x63 = INT32_MIN;

	t14 = (x61%((x62<x63)+x64));

	if (t14 != 8596LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = -1;
	uint64_t x66 = 12316258010064LLU;
	int64_t x67 = INT64_MAX;
	volatile uint32_t x68 = 7U;
	volatile uint32_t t15 = 0U;

	t15 = (x65%((x66<x67)+x68));

	if (t15 != 7U) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x69 = UINT32_MAX;
	static uint16_t x70 = UINT16_MAX;
	int64_t x71 = -766LL;
	uint8_t x72 = 14U;
	uint32_t t16 = 427479925U;

	t16 = (x69%((x70<x71)+x72));

	if (t16 != 3U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x74 = -1;
	int8_t x75 = INT8_MAX;
	static volatile int64_t x76 = -56952497480984780LL;
	int64_t t17 = 43LL;

	t17 = (x73%((x74<x75)+x76));

	if (t17 != -128LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = -1LL;
	uint64_t x78 = 490727240320439131LLU;
	uint64_t x79 = 8568857883LLU;
	int16_t x80 = INT16_MIN;
	int64_t t18 = -2918223LL;

	t18 = (x77%((x78<x79)+x80));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = -1;
	uint32_t x82 = 117U;
	int32_t x83 = INT32_MIN;
	static uint16_t x84 = 3U;
	int32_t t19 = 321072;

	t19 = (x81%((x82<x83)+x84));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x85 = 0;
	int32_t x86 = INT32_MIN;
	uint8_t x87 = 0U;
	static volatile int64_t x88 = -104400LL;
	int64_t t20 = -2795LL;

	t20 = (x85%((x86<x87)+x88));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x89 = UINT64_MAX;
	volatile int64_t x90 = 1299094358303976LL;
	volatile uint16_t x91 = 1U;
	static volatile uint64_t t21 = 7828311922354637LLU;

	t21 = (x89%((x90<x91)+x92));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x93 = -3;
	uint8_t x94 = 7U;
	uint8_t x96 = UINT8_MAX;
	volatile int32_t t22 = -38015928;

	t22 = (x93%((x94<x95)+x96));

	if (t22 != -3) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = -1609;
	static int32_t x98 = INT32_MAX;
	uint32_t x99 = 241U;
	int32_t t23 = -13344919;

	t23 = (x97%((x98<x99)+x100));

	if (t23 != -1609) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x101 = INT64_MIN;
	int64_t x102 = -6724266LL;
	int16_t x103 = -507;
	uint16_t x104 = 2U;
	int64_t t24 = 195502LL;

	t24 = (x101%((x102<x103)+x104));

	if (t24 != -2LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x110 = -1;
	static volatile int16_t x111 = INT16_MIN;
	uint32_t x112 = 10U;

	t25 = (x109%((x110<x111)+x112));

	if (t25 != 4U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = INT8_MIN;
	volatile int8_t x114 = -1;
	static uint16_t x115 = UINT16_MAX;
	uint8_t x116 = UINT8_MAX;
	volatile int32_t t26 = 30219;

	t26 = (x113%((x114<x115)+x116));

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x118 = 240151902;
	int64_t x119 = INT64_MIN;
	uint8_t x120 = 3U;

	t27 = (x117%((x118<x119)+x120));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x122 = 99U;
	static uint16_t x123 = 2U;
	static int32_t x124 = INT32_MIN;
	volatile int32_t t28 = -249632;

	t28 = (x121%((x122<x123)+x124));

	if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x126 = INT32_MIN;
	uint16_t x128 = 3609U;
	int32_t t29 = -1327;

	t29 = (x125%((x126<x127)+x128));

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = INT64_MAX;
	int32_t x130 = 395639515;
	int32_t x131 = -1;
	static volatile int64_t t30 = 29958107728256599LL;

	t30 = (x129%((x130<x131)+x132));

	if (t30 != 127LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = INT64_MAX;
	uint64_t x136 = 52664762LLU;
	uint64_t t31 = 6750731161517163240LLU;

	t31 = (x133%((x134<x135)+x136));

	if (t31 != 48323827LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x138 = 3479499U;
	int8_t x140 = 26;
	volatile int32_t t32 = 1;

	t32 = (x137%((x138<x139)+x140));

	if (t32 != -11) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = INT64_MIN;
	static int32_t x142 = 0;
	volatile int64_t t33 = 60LL;

	t33 = (x141%((x142<x143)+x144));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x145 = -1LL;
	int32_t x146 = INT32_MIN;
	int32_t x147 = INT32_MIN;
	int64_t x148 = -1LL;

	t34 = (x145%((x146<x147)+x148));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x149 = INT32_MAX;
	static uint8_t x150 = 32U;
	volatile uint64_t x151 = 215429861949527LLU;
	static volatile int64_t x152 = INT64_MIN;
	volatile int64_t t35 = 29447989086723395LL;

	t35 = (x149%((x150<x151)+x152));

	if (t35 != 2147483647LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x153 = -3;
	int64_t x154 = INT64_MIN;
	static uint8_t x156 = 11U;
	int32_t t36 = -1234;

	t36 = (x153%((x154<x155)+x156));

	if (t36 != -3) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x158 = 28;
	int8_t x159 = 0;
	int32_t x160 = -7818;
	static int32_t t37 = 11501;

	t37 = (x157%((x158<x159)+x160));

	if (t37 != -1496) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x161 = INT16_MAX;
	static int64_t x162 = INT64_MIN;
	int32_t x163 = INT32_MIN;

	t38 = (x161%((x162<x163)+x164));

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x165 = 1136148820U;
	uint32_t x166 = 1750U;
	int64_t x168 = -344LL;

	t39 = (x165%((x166<x167)+x168));

	if (t39 != 79LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x169 = 15U;
	static int64_t x171 = INT64_MIN;
	volatile int32_t t40 = 114;

	t40 = (x169%((x170<x171)+x172));

	if (t40 != 15) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x173 = 61;
	int32_t x174 = -1;
	int64_t x175 = INT64_MIN;
	int64_t x176 = INT64_MIN;
	static int64_t t41 = 111885LL;

	t41 = (x173%((x174<x175)+x176));

	if (t41 != 61LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x178 = INT32_MIN;
	uint32_t x179 = 0U;
	static int8_t x180 = INT8_MAX;
	int32_t t42 = -1;

	t42 = (x177%((x178<x179)+x180));

	if (t42 != 7) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = INT16_MIN;
	static uint32_t x182 = UINT32_MAX;
	uint64_t x183 = UINT64_MAX;
	volatile int32_t t43 = 3665;

	t43 = (x181%((x182<x183)+x184));

	if (t43 != -953) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x185 = 2026LL;
	volatile uint8_t x186 = UINT8_MAX;
	int8_t x187 = -8;
	uint32_t x188 = 1739325354U;
	int64_t t44 = -336661LL;

	t44 = (x185%((x186<x187)+x188));

	if (t44 != 2026LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint16_t x190 = 326U;
	static int8_t x191 = 43;

	t45 = (x189%((x190<x191)+x192));

	if (t45 != 2609730U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x194 = INT64_MIN;
	uint8_t x195 = 17U;
	int32_t t46 = 179;

	t46 = (x193%((x194<x195)+x196));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x197 = -142564929;
	int16_t x198 = 34;
	volatile int64_t x200 = INT64_MIN;
	int64_t t47 = 4749691546LL;

	t47 = (x197%((x198<x199)+x200));

	if (t47 != -142564929LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = -1;
	int64_t x202 = -7LL;
	int32_t x203 = INT32_MAX;

	t48 = (x201%((x202<x203)+x204));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x205 = UINT32_MAX;
	volatile int16_t x206 = -1;
	uint32_t t49 = 362803U;

	t49 = (x205%((x206<x207)+x208));

	if (t49 != 15U) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x209 = 27U;
	uint8_t x210 = 49U;
	int8_t x211 = INT8_MIN;
	static int16_t x212 = -1;
	int32_t t50 = -1798;

	t50 = (x209%((x210<x211)+x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = -1;
	int64_t x214 = -1LL;
	int32_t x215 = -776;
	int32_t t51 = -15;

	t51 = (x213%((x214<x215)+x216));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x217 = 4U;
	int8_t x219 = INT8_MIN;

	t52 = (x217%((x218<x219)+x220));

	if (t52 != 4) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x221 = -1;
	int8_t x222 = INT8_MIN;
	volatile uint8_t x223 = 1U;
	uint8_t x224 = 4U;
	volatile int32_t t53 = 125954856;

	t53 = (x221%((x222<x223)+x224));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x225 = 42902;
	static volatile int64_t x226 = -409116077LL;
	static int8_t x227 = INT8_MIN;
	static volatile uint32_t x228 = 5705124U;
	uint32_t t54 = 1069477349U;

	t54 = (x225%((x226<x227)+x228));

	if (t54 != 42902U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x230 = INT16_MAX;
	uint8_t x232 = UINT8_MAX;
	volatile int32_t t55 = -19921301;

	t55 = (x229%((x230<x231)+x232));

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x235 = -1;
	int32_t x236 = INT32_MAX;
	volatile int32_t t56 = 59731;

	t56 = (x233%((x234<x235)+x236));

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x237 = UINT16_MAX;
	static uint64_t x238 = 761255957943201506LLU;
	static int64_t x239 = -1LL;
	int64_t x240 = 8616476319902656LL;
	int64_t t57 = -467963LL;

	t57 = (x237%((x238<x239)+x240));

	if (t57 != 65535LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x241 = -1;
	static int8_t x243 = 3;
	volatile uint16_t x244 = UINT16_MAX;
	volatile int32_t t58 = 141237;

	t58 = (x241%((x242<x243)+x244));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x247 = -37;
	static uint64_t x248 = 1625410LLU;
	uint64_t t59 = 40246LLU;

	t59 = (x245%((x246<x247)+x248));

	if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x250 = INT64_MAX;
	int64_t x252 = INT64_MIN;
	volatile int64_t t60 = 2207282281375729LL;

	t60 = (x249%((x250<x251)+x252));

	if (t60 != -128LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x253 = -1173639991382LL;
	int64_t x254 = 0LL;
	volatile int16_t x256 = -1;

	t61 = (x253%((x254<x255)+x256));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x261 = -1;
	int16_t x262 = 3523;
	int64_t x263 = -6641183966535909LL;
	int8_t x264 = -1;
	static int32_t t62 = -1552;

	t62 = (x261%((x262<x263)+x264));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x265 = INT16_MAX;
	int32_t x266 = INT32_MAX;
	static int64_t x267 = INT64_MIN;
	volatile uint8_t x268 = UINT8_MAX;
	volatile int32_t t63 = -206020;

	t63 = (x265%((x266<x267)+x268));

	if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x269 = INT64_MIN;
	int64_t x270 = INT64_MIN;

	t64 = (x269%((x270<x271)+x272));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x273 = INT16_MIN;
	int32_t x275 = 879;
	uint8_t x276 = UINT8_MAX;

	t65 = (x273%((x274<x275)+x276));

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x278 = UINT16_MAX;
	volatile int32_t x279 = -1;
	uint64_t x280 = 1LLU;
	uint64_t t66 = 5171511105954LLU;

	t66 = (x277%((x278<x279)+x280));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x282 = 37;
	static volatile uint16_t x283 = 25U;
	volatile int16_t x284 = -1;

	t67 = (x281%((x282<x283)+x284));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x285 = 0;
	int8_t x287 = INT8_MIN;

	t68 = (x285%((x286<x287)+x288));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x293 = -7;
	volatile int64_t x294 = 338LL;
	int8_t x295 = 5;
	int16_t x296 = 1;
	volatile int32_t t69 = -470498;

	t69 = (x293%((x294<x295)+x296));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x301 = INT32_MIN;
	uint16_t x302 = 6434U;
	int16_t x304 = -1;

	t70 = (x301%((x302<x303)+x304));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x305 = UINT32_MAX;
	volatile int64_t x306 = INT64_MAX;
	int16_t x307 = INT16_MIN;
	int64_t x308 = INT64_MIN;
	volatile int64_t t71 = -34695194169020391LL;

	t71 = (x305%((x306<x307)+x308));

	if (t71 != 4294967295LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x309 = INT32_MAX;
	int8_t x311 = 12;
	uint64_t x312 = 1903936344702579917LLU;
	volatile uint64_t t72 = 1228704301623LLU;

	t72 = (x309%((x310<x311)+x312));

	if (t72 != 2147483647LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x317 = 994U;
	int8_t x319 = -1;
	int16_t x320 = INT16_MIN;
	static int32_t t73 = 1;

	t73 = (x317%((x318<x319)+x320));

	if (t73 != 994) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x321 = 56375U;
	volatile int16_t x322 = INT16_MAX;
	static uint64_t x324 = 47705499369859LLU;
	volatile uint64_t t74 = 355045564576212LLU;

	t74 = (x321%((x322<x323)+x324));

	if (t74 != 56375LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x326 = -2;
	static int32_t x327 = INT32_MIN;
	int32_t x328 = INT32_MIN;
	volatile int32_t t75 = -293394120;

	t75 = (x325%((x326<x327)+x328));

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x329 = 127050;
	int8_t x330 = INT8_MAX;
	static uint16_t x331 = 5U;
	int8_t x332 = -23;

	t76 = (x329%((x330<x331)+x332));

	if (t76 != 21) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x337 = -1;
	static int16_t x339 = INT16_MIN;
	int32_t x340 = INT32_MAX;
	int32_t t77 = 850271714;

	t77 = (x337%((x338<x339)+x340));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x341 = -1;
	static int64_t x343 = 6024276504LL;
	static int16_t x344 = -6907;
	static int32_t t78 = 45156487;

	t78 = (x341%((x342<x343)+x344));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x349 = 74U;
	static uint32_t x352 = 1765653U;
	static volatile uint32_t t79 = 213927U;

	t79 = (x349%((x350<x351)+x352));

	if (t79 != 74U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x353 = UINT8_MAX;
	int32_t x354 = INT32_MAX;
	uint64_t x355 = 648715635661243LLU;
	int64_t x356 = 407184946675229981LL;
	int64_t t80 = -32535473LL;

	t80 = (x353%((x354<x355)+x356));

	if (t80 != 255LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x357 = INT8_MAX;
	int64_t x358 = 0LL;
	volatile int32_t x359 = 80;
	int16_t x360 = 10776;

	t81 = (x357%((x358<x359)+x360));

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x361 = 25U;
	int32_t x362 = -938830699;
	static uint8_t x363 = 11U;
	int8_t x364 = INT8_MIN;
	volatile int32_t t82 = -966388;

	t82 = (x361%((x362<x363)+x364));

	if (t82 != 25) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x365 = INT16_MIN;
	static int16_t x366 = -9518;
	volatile int16_t x367 = -1;
	volatile int32_t t83 = 435;

	t83 = (x365%((x366<x367)+x368));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x369 = 17227302433093296LLU;
	int16_t x370 = INT16_MIN;
	uint64_t x371 = UINT64_MAX;
	int16_t x372 = 61;
	volatile uint64_t t84 = 201LLU;

	t84 = (x369%((x370<x371)+x372));

	if (t84 != 6LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x373 = 3U;
	int16_t x374 = -1;
	int32_t x376 = 1;
	int32_t t85 = 3816924;

	t85 = (x373%((x374<x375)+x376));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x377 = -1;
	volatile int32_t x378 = INT32_MIN;
	volatile int32_t x380 = INT32_MAX;

	t86 = (x377%((x378<x379)+x380));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x381 = -1;
	int8_t x382 = -1;
	volatile int32_t t87 = 224093272;

	t87 = (x381%((x382<x383)+x384));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x389 = 1LLU;
	int8_t x390 = -2;
	static uint16_t x392 = 12U;
	uint64_t t88 = 183298427591349LLU;

	t88 = (x389%((x390<x391)+x392));

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x397 = UINT32_MAX;
	static int8_t x399 = -1;
	int16_t x400 = -1;

	t89 = (x397%((x398<x399)+x400));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x405 = 909;
	volatile uint32_t x406 = 1486558021U;
	static int16_t x408 = -39;
	volatile int32_t t90 = 1046876976;

	t90 = (x405%((x406<x407)+x408));

	if (t90 != 35) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x409 = -1LL;
	uint16_t x410 = 27902U;
	int16_t x411 = INT16_MAX;
	volatile int64_t t91 = -3317LL;

	t91 = (x409%((x410<x411)+x412));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x413 = INT8_MIN;
	uint64_t x414 = UINT64_MAX;
	volatile int64_t x415 = INT64_MIN;
	int64_t x416 = 455247930929097813LL;
	int64_t t92 = -958201478330LL;

	t92 = (x413%((x414<x415)+x416));

	if (t92 != -128LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x417 = 9;
	static int8_t x419 = -1;
	int16_t x420 = 4;
	static int32_t t93 = -983;

	t93 = (x417%((x418<x419)+x420));

	if (t93 != 4) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x422 = 357;
	volatile int8_t x423 = 2;
	uint8_t x424 = UINT8_MAX;
	int32_t t94 = -10898808;

	t94 = (x421%((x422<x423)+x424));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x429 = INT64_MIN;
	int8_t x430 = -25;
	volatile uint64_t x432 = 8884998LLU;
	uint64_t t95 = 1494720780309LLU;

	t95 = (x429%((x430<x431)+x432));

	if (t95 != 3099518LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x433 = 7U;
	volatile int16_t x434 = -1;
	uint64_t x436 = 52365273377261858LLU;
	volatile uint64_t t96 = 3400498LLU;

	t96 = (x433%((x434<x435)+x436));

	if (t96 != 7LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x437 = -1;
	uint16_t x438 = 3U;
	uint16_t x439 = 9U;
	int8_t x440 = 12;
	volatile int32_t t97 = -1;

	t97 = (x437%((x438<x439)+x440));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x441 = 225;
	int8_t x442 = -3;
	int16_t x443 = -1;
	static volatile int32_t t98 = -3042070;

	t98 = (x441%((x442<x443)+x444));

	if (t98 != 5) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x450 = 1U;
	int16_t x451 = INT16_MAX;
	volatile int16_t x452 = INT16_MIN;
	int32_t t99 = 7721;

	t99 = (x449%((x450<x451)+x452));

	if (t99 != -1) { NG(); } else { ; }
	
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

