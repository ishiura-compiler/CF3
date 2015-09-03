#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t1 = 124LLU;
uint16_t x16 = UINT16_MAX;
int64_t t3 = 0LL;
int16_t x18 = -1;
volatile int32_t t4 = -2;
uint8_t x25 = 1U;
int64_t x27 = -1LL;
volatile int16_t x29 = -1;
volatile int64_t t7 = -607282926093LL;
int32_t x40 = -1;
volatile uint64_t t8 = 7LLU;
static uint64_t x41 = 55LLU;
static int32_t x47 = 3926450;
static uint64_t x48 = 4229LLU;
volatile uint64_t t10 = 0LLU;
int8_t x56 = -3;
static int16_t x61 = INT16_MIN;
static int32_t x66 = INT32_MAX;
volatile int16_t x73 = -4177;
volatile int8_t x84 = -3;
uint16_t x87 = UINT16_MAX;
int32_t t20 = 2092549;
static int64_t t22 = -8380411592824LL;
int8_t x97 = INT8_MAX;
int16_t x104 = 349;
int64_t t25 = -39LL;
uint64_t x115 = UINT64_MAX;
int64_t x117 = -179702588LL;
int32_t x120 = INT32_MAX;
int32_t x122 = -1;
int8_t x129 = -1;
int8_t x131 = INT8_MAX;
static int32_t x134 = INT32_MIN;
static uint64_t x138 = 1027LLU;
static uint32_t x139 = UINT32_MAX;
volatile int64_t x141 = INT64_MIN;
int16_t x144 = INT16_MIN;
int64_t x146 = INT64_MAX;
static int16_t x156 = 29;
int16_t x167 = INT16_MIN;
volatile uint64_t t39 = 5908889LLU;
uint64_t x170 = 983536LLU;
volatile uint64_t x174 = UINT64_MAX;
volatile int64_t x178 = 351859190948095LL;
int32_t x179 = INT32_MAX;
volatile int64_t t42 = 36361985454LL;
int64_t x196 = INT64_MIN;
volatile int32_t x199 = INT32_MIN;
volatile int16_t x200 = -7366;
uint8_t x218 = 47U;
int64_t t50 = -526069965LL;
volatile uint64_t t51 = 8475581095079022535LLU;
static int64_t x231 = -256578619LL;
int64_t x246 = INT64_MAX;
int8_t x247 = -1;
int64_t x251 = -1LL;
uint8_t x256 = UINT8_MAX;
static volatile int16_t x259 = -1;
uint8_t x260 = UINT8_MAX;
static int64_t x268 = -1LL;
static volatile uint8_t x269 = 7U;
int32_t x273 = INT32_MIN;
static int64_t x274 = 207LL;
volatile int8_t x276 = -1;
uint8_t x293 = UINT8_MAX;
volatile uint16_t x294 = 2303U;
int8_t x304 = -1;
volatile int64_t t70 = 3587134193205303LL;
static int32_t x305 = INT32_MIN;
static volatile uint64_t x311 = 7785519803LLU;
static int64_t x312 = -1LL;
int32_t x315 = INT32_MAX;
volatile int64_t x316 = 1LL;
int16_t x318 = 47;
uint32_t x320 = UINT32_MAX;
volatile uint16_t x321 = 389U;
int64_t x329 = -3444279569468166LL;
uint16_t x332 = UINT16_MAX;
int32_t x333 = -1;
int16_t x335 = INT16_MIN;
static uint64_t t79 = 20118873LLU;
uint8_t x349 = UINT8_MAX;
volatile uint32_t x350 = UINT32_MAX;
static int64_t x364 = INT64_MIN;
static volatile int32_t x367 = 55;
int32_t x370 = INT32_MIN;
uint8_t x377 = 2U;
int16_t x383 = INT16_MIN;
volatile int32_t x388 = -1;
volatile int64_t t91 = -384534LL;
static uint16_t x397 = 15U;
uint16_t x402 = UINT16_MAX;
int8_t x406 = 1;
uint64_t x408 = UINT64_MAX;
int64_t t96 = -340546370074119LL;
int64_t x419 = -41LL;
int16_t x420 = INT16_MIN;
volatile uint64_t t98 = 654612029LLU;


void f0(void) {
	int64_t x1 = INT64_MAX;
	volatile uint32_t x2 = UINT32_MAX;
	int16_t x3 = 2;
	uint32_t x4 = UINT32_MAX;
	static volatile int64_t t0 = 31LL;

	t0 = (x1/((x2%x3)|x4));

	if (t0 != 2147483648LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	uint64_t x6 = 20LLU;
	uint64_t x7 = 1574797569LLU;
	int32_t x8 = INT32_MIN;

	t1 = (x5/((x6%x7)|x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	static int64_t x10 = 42LL;
	volatile uint32_t x11 = UINT32_MAX;
	static uint16_t x12 = UINT16_MAX;
	volatile int64_t t2 = -430883224248LL;

	t2 = (x9/((x10%x11)|x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 30U;
	int8_t x14 = INT8_MIN;
	static volatile int64_t x15 = INT64_MIN;

	t3 = (x13/((x14%x15)|x16));

	if (t3 != -30LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MIN;
	int8_t x19 = INT8_MIN;
	int8_t x20 = -6;

	t4 = (x17/((x18%x19)|x20));

	if (t4 != 128) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	uint64_t x22 = 211232892LLU;
	int32_t x23 = INT32_MIN;
	int32_t x24 = -949;
	static volatile uint64_t t5 = 9531LLU;

	t5 = (x21/((x22%x23)|x24));

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x26 = INT64_MIN;
	volatile int32_t x28 = 2747;
	int64_t t6 = -42726335389LL;

	t6 = (x25/((x26%x27)|x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = -11;
	int64_t x31 = INT64_MIN;
	static uint16_t x32 = 2U;

	t7 = (x29/((x30%x31)|x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x37 = 987809892659958144LLU;
	int64_t x38 = INT64_MIN;
	int32_t x39 = INT32_MAX;

	t8 = (x37/((x38%x39)|x40));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x42 = -1LL;
	static int16_t x43 = INT16_MAX;
	int32_t x44 = 15;
	uint64_t t9 = 6991508192944102594LLU;

	t9 = (x41/((x42%x43)|x44));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x45 = 13431736LLU;
	volatile int8_t x46 = INT8_MIN;

	t10 = (x45/((x46%x47)|x48));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = -1LL;
	int8_t x50 = -1;
	uint16_t x51 = 2U;
	int8_t x52 = 7;
	volatile int64_t t11 = 6786961567497623LL;

	t11 = (x49/((x50%x51)|x52));

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint32_t x53 = UINT32_MAX;
	int16_t x54 = INT16_MIN;
	int16_t x55 = -246;
	static uint32_t t12 = 844323773U;

	t12 = (x53/((x54%x55)|x56));

	if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = -1;
	uint32_t x58 = 8U;
	int64_t x59 = 1014202199LL;
	volatile uint64_t x60 = UINT64_MAX;
	uint64_t t13 = 5521LLU;

	t13 = (x57/((x58%x59)|x60));

	if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x62 = 15U;
	uint32_t x63 = UINT32_MAX;
	int16_t x64 = INT16_MAX;
	static uint32_t t14 = 3908014U;

	t14 = (x61/((x62%x63)|x64));

	if (t14 != 131075U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = -1;
	uint16_t x67 = 7U;
	static uint16_t x68 = 5535U;
	static int32_t t15 = 1722375;

	t15 = (x65/((x66%x67)|x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MIN;
	volatile int32_t x70 = 1;
	int16_t x71 = -1;
	int8_t x72 = INT8_MIN;
	volatile int32_t t16 = -1;

	t16 = (x69/((x70%x71)|x72));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x74 = INT8_MIN;
	int32_t x75 = INT32_MAX;
	uint64_t x76 = 3653079LLU;
	uint64_t t17 = 498387698903LLU;

	t17 = (x73/((x74%x75)|x76));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = -14;
	volatile uint8_t x78 = 1U;
	int32_t x79 = INT32_MIN;
	int64_t x80 = INT64_MIN;
	volatile int64_t t18 = -31564104286873LL;

	t18 = (x77/((x78%x79)|x80));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x81 = -1;
	int8_t x82 = INT8_MIN;
	uint8_t x83 = 2U;
	int32_t t19 = -43361121;

	t19 = (x81/((x82%x83)|x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = INT8_MIN;
	uint16_t x86 = 2U;
	static uint8_t x88 = UINT8_MAX;

	t20 = (x85/((x86%x87)|x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = -1;
	volatile int8_t x90 = INT8_MIN;
	volatile uint64_t x91 = 2849LLU;
	int16_t x92 = INT16_MIN;
	volatile uint64_t t21 = 3863LLU;

	t21 = (x89/((x90%x91)|x92));

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x93 = 989;
	volatile int16_t x94 = INT16_MAX;
	static int64_t x95 = INT64_MIN;
	volatile int32_t x96 = -98480997;

	t22 = (x93/((x94%x95)|x96));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x98 = 458122LLU;
	int16_t x99 = -1;
	int16_t x100 = 704;
	volatile uint64_t t23 = 406629909578493314LLU;

	t23 = (x97/((x98%x99)|x100));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = -1LL;
	uint64_t x102 = 1972981635787723LLU;
	static int32_t x103 = INT32_MIN;
	uint64_t t24 = 18492973139LLU;

	t24 = (x101/((x102%x103)|x104));

	if (t24 != 9349LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = INT8_MAX;
	static int64_t x110 = -1LL;
	int64_t x111 = INT64_MAX;
	volatile int16_t x112 = -1;

	t25 = (x109/((x110%x111)|x112));

	if (t25 != -127LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x113 = UINT8_MAX;
	static int8_t x114 = INT8_MIN;
	volatile int8_t x116 = INT8_MIN;
	uint64_t t26 = 109393LLU;

	t26 = (x113/((x114%x115)|x116));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x118 = 1;
	int8_t x119 = -12;
	static volatile int64_t t27 = 1053672852219514812LL;

	t27 = (x117/((x118%x119)|x120));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = 0;
	uint64_t x123 = 5LLU;
	uint8_t x124 = UINT8_MAX;
	uint64_t t28 = 5LLU;

	t28 = (x121/((x122%x123)|x124));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x125 = INT8_MAX;
	uint8_t x126 = 2U;
	int16_t x127 = -1;
	uint16_t x128 = UINT16_MAX;
	int32_t t29 = -2733;

	t29 = (x125/((x126%x127)|x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x130 = 194129;
	int8_t x132 = 1;
	int32_t t30 = 97;

	t30 = (x129/((x130%x131)|x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x133 = INT8_MAX;
	uint16_t x135 = 32U;
	int16_t x136 = INT16_MAX;
	volatile int32_t t31 = 525;

	t31 = (x133/((x134%x135)|x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x137 = -1;
	uint64_t x140 = UINT64_MAX;
	uint64_t t32 = 95LLU;

	t32 = (x137/((x138%x139)|x140));

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x142 = UINT64_MAX;
	int8_t x143 = INT8_MAX;
	volatile uint64_t t33 = 32LLU;

	t33 = (x141/((x142%x143)|x144));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x145 = 1U;
	int8_t x147 = -1;
	static int32_t x148 = 102244;
	int64_t t34 = 172LL;

	t34 = (x145/((x146%x147)|x148));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x149 = INT8_MIN;
	static volatile int64_t x150 = INT64_MIN;
	volatile int64_t x151 = INT64_MIN;
	static uint16_t x152 = 4U;
	int64_t t35 = -1496900251822LL;

	t35 = (x149/((x150%x151)|x152));

	if (t35 != -32LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x153 = INT8_MIN;
	static int16_t x154 = INT16_MIN;
	int8_t x155 = 2;
	volatile int32_t t36 = -1039088;

	t36 = (x153/((x154%x155)|x156));

	if (t36 != -4) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x157 = INT8_MIN;
	int16_t x158 = INT16_MIN;
	uint64_t x159 = 9710472590LLU;
	uint8_t x160 = UINT8_MAX;
	static uint64_t t37 = 71LLU;

	t37 = (x157/((x158%x159)|x160));

	if (t37 != 2495652171LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x161 = 3;
	int8_t x162 = INT8_MIN;
	int8_t x163 = INT8_MIN;
	volatile int16_t x164 = INT16_MIN;
	int32_t t38 = 52602482;

	t38 = (x161/((x162%x163)|x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x165 = 779055580LLU;
	static uint8_t x166 = UINT8_MAX;
	uint32_t x168 = UINT32_MAX;

	t39 = (x165/((x166%x167)|x168));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x169 = -1;
	int8_t x171 = INT8_MIN;
	int8_t x172 = INT8_MIN;
	uint64_t t40 = 898571441LLU;

	t40 = (x169/((x170%x171)|x172));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x173 = INT16_MIN;
	static int64_t x175 = -1LL;
	int16_t x176 = INT16_MIN;
	volatile uint64_t t41 = 0LLU;

	t41 = (x173/((x174%x175)|x176));

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x177 = -11;
	volatile uint32_t x180 = 569U;

	t42 = (x177/((x178%x179)|x180));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x185 = INT8_MIN;
	uint16_t x186 = 8275U;
	int16_t x187 = INT16_MIN;
	int32_t x188 = INT32_MIN;
	int32_t t43 = 15937;

	t43 = (x185/((x186%x187)|x188));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x189 = 2747846LLU;
	int8_t x190 = 13;
	static uint32_t x191 = UINT32_MAX;
	int64_t x192 = INT64_MIN;
	uint64_t t44 = 3097LLU;

	t44 = (x189/((x190%x191)|x192));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x193 = INT16_MIN;
	int8_t x194 = -13;
	uint32_t x195 = 1018767547U;
	volatile int64_t t45 = -78908610LL;

	t45 = (x193/((x194%x195)|x196));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x197 = -1;
	int32_t x198 = -1;
	volatile int32_t t46 = -203;

	t46 = (x197/((x198%x199)|x200));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x201 = INT64_MAX;
	static uint64_t x202 = 8LLU;
	uint64_t x203 = 60961LLU;
	volatile uint64_t x204 = 30213064LLU;
	uint64_t t47 = 4402391LLU;

	t47 = (x201/((x202%x203)|x204));

	if (t47 != 305277612255LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x205 = 1622938402870LLU;
	volatile int8_t x206 = INT8_MAX;
	uint16_t x207 = 1U;
	static volatile int32_t x208 = INT32_MAX;
	volatile uint64_t t48 = 473538582LLU;

	t48 = (x205/((x206%x207)|x208));

	if (t48 != 755LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x217 = INT8_MIN;
	uint32_t x219 = UINT32_MAX;
	static int16_t x220 = INT16_MIN;
	uint32_t t49 = 1U;

	t49 = (x217/((x218%x219)|x220));

	if (t49 != 1U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x221 = INT64_MAX;
	int64_t x222 = INT64_MIN;
	static int64_t x223 = INT64_MAX;
	int64_t x224 = INT64_MIN;

	t50 = (x221/((x222%x223)|x224));

	if (t50 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x225 = INT8_MAX;
	uint64_t x226 = UINT64_MAX;
	volatile uint8_t x227 = 1U;
	int64_t x228 = INT64_MIN;

	t51 = (x225/((x226%x227)|x228));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x229 = 2LL;
	uint32_t x230 = 869158685U;
	uint64_t x232 = 122LLU;
	uint64_t t52 = 2039LLU;

	t52 = (x229/((x230%x231)|x232));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x233 = -1891032074387LL;
	int8_t x234 = -1;
	static int32_t x235 = INT32_MIN;
	int64_t x236 = INT64_MIN;
	static volatile int64_t t53 = -612966020857LL;

	t53 = (x233/((x234%x235)|x236));

	if (t53 != 1891032074387LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x237 = 11517LL;
	uint8_t x238 = 13U;
	static int32_t x239 = INT32_MAX;
	int8_t x240 = 1;
	int64_t t54 = 1LL;

	t54 = (x237/((x238%x239)|x240));

	if (t54 != 885LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x241 = INT32_MIN;
	uint64_t x242 = 1680548834022LLU;
	int8_t x243 = INT8_MIN;
	volatile uint8_t x244 = 14U;
	uint64_t t55 = 57075752LLU;

	t55 = (x241/((x242%x243)|x244));

	if (t55 != 10976618LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x245 = 1243;
	volatile uint64_t x248 = 5147163LLU;
	volatile uint64_t t56 = 2387328LLU;

	t56 = (x245/((x246%x247)|x248));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x249 = INT16_MIN;
	uint32_t x250 = 240U;
	int8_t x252 = -1;
	volatile int64_t t57 = -2173208631178681172LL;

	t57 = (x249/((x250%x251)|x252));

	if (t57 != 32768LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x253 = INT8_MIN;
	static int8_t x254 = INT8_MIN;
	int32_t x255 = 21;
	int32_t t58 = -2152;

	t58 = (x253/((x254%x255)|x256));

	if (t58 != 128) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x257 = 5U;
	int64_t x258 = INT64_MAX;
	int64_t t59 = -735LL;

	t59 = (x257/((x258%x259)|x260));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x261 = 650;
	int8_t x262 = 3;
	static uint64_t x263 = 1902953146LLU;
	int64_t x264 = -22LL;
	volatile uint64_t t60 = 69638LLU;

	t60 = (x261/((x262%x263)|x264));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x265 = 1506724515U;
	volatile int32_t x266 = -1;
	volatile uint8_t x267 = 112U;
	volatile int64_t t61 = 13274301230LL;

	t61 = (x265/((x266%x267)|x268));

	if (t61 != -1506724515LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x270 = INT16_MIN;
	volatile int16_t x271 = -1;
	uint16_t x272 = 1560U;
	int32_t t62 = 1;

	t62 = (x269/((x270%x271)|x272));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x275 = 466976478LL;
	volatile int64_t t63 = 12294229LL;

	t63 = (x273/((x274%x275)|x276));

	if (t63 != 2147483648LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x277 = -11586848LL;
	uint8_t x278 = UINT8_MAX;
	uint8_t x279 = 14U;
	int16_t x280 = INT16_MAX;
	volatile int64_t t64 = -2200076LL;

	t64 = (x277/((x278%x279)|x280));

	if (t64 != -353LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x281 = -119560755876LL;
	int64_t x282 = INT64_MAX;
	volatile int64_t x283 = -118LL;
	uint16_t x284 = 2U;
	int64_t t65 = 4140218557063LL;

	t65 = (x281/((x282%x283)|x284));

	if (t65 != -3856798576LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x285 = -1;
	int8_t x286 = INT8_MAX;
	int32_t x287 = -1;
	uint32_t x288 = 3066711U;
	static volatile uint32_t t66 = 1010302744U;

	t66 = (x285/((x286%x287)|x288));

	if (t66 != 1400U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x289 = 460;
	int32_t x290 = 25;
	int16_t x291 = INT16_MAX;
	int16_t x292 = -4496;
	volatile int32_t t67 = 1441;

	t67 = (x289/((x290%x291)|x292));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x295 = 6300U;
	volatile int32_t x296 = -148;
	volatile int32_t t68 = 87394627;

	t68 = (x293/((x294%x295)|x296));

	if (t68 != -255) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x297 = -1;
	uint32_t x298 = 73U;
	uint64_t x299 = UINT64_MAX;
	static int32_t x300 = INT32_MIN;
	volatile uint64_t t69 = 1LLU;

	t69 = (x297/((x298%x299)|x300));

	if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x301 = INT32_MAX;
	volatile int64_t x302 = INT64_MAX;
	int16_t x303 = 38;

	t70 = (x301/((x302%x303)|x304));

	if (t70 != -2147483647LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x306 = 32U;
	uint32_t x307 = 1521333U;
	volatile int64_t x308 = INT64_MIN;
	int64_t t71 = 8932592181291887LL;

	t71 = (x305/((x306%x307)|x308));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x309 = 1787;
	int8_t x310 = -1;
	volatile uint64_t t72 = 10661484435LLU;

	t72 = (x309/((x310%x311)|x312));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x313 = 17318U;
	static int64_t x314 = -124LL;
	int64_t t73 = -9536LL;

	t73 = (x313/((x314%x315)|x316));

	if (t73 != -140LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x317 = 64U;
	int8_t x319 = -1;
	static volatile uint32_t t74 = 13U;

	t74 = (x317/((x318%x319)|x320));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x322 = -44LL;
	uint16_t x323 = 24U;
	int32_t x324 = -1;
	int64_t t75 = 5571168707559680LL;

	t75 = (x321/((x322%x323)|x324));

	if (t75 != -389LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x325 = INT64_MIN;
	uint8_t x326 = 3U;
	int32_t x327 = INT32_MAX;
	int8_t x328 = INT8_MIN;
	static volatile int64_t t76 = -2260616631643184742LL;

	t76 = (x325/((x326%x327)|x328));

	if (t76 != 73786976294838206LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x330 = -1LL;
	uint32_t x331 = 637185U;
	static int64_t t77 = 1802692LL;

	t77 = (x329/((x330%x331)|x332));

	if (t77 != 3444279569468166LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x334 = INT16_MAX;
	uint16_t x336 = 30810U;
	volatile int32_t t78 = 16905521;

	t78 = (x333/((x334%x335)|x336));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x337 = -1;
	int64_t x338 = INT64_MIN;
	int64_t x339 = 48420LL;
	volatile uint64_t x340 = 21490429354975LLU;

	t79 = (x337/((x338%x339)|x340));

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x341 = UINT16_MAX;
	int64_t x342 = INT64_MIN;
	int8_t x343 = INT8_MIN;
	static int64_t x344 = INT64_MIN;
	int64_t t80 = 1LL;

	t80 = (x341/((x342%x343)|x344));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x351 = -1;
	uint16_t x352 = 4576U;
	volatile uint32_t t81 = 207916U;

	t81 = (x349/((x350%x351)|x352));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x353 = INT16_MAX;
	volatile int32_t x354 = -1;
	uint8_t x355 = UINT8_MAX;
	int8_t x356 = INT8_MIN;
	int32_t t82 = -1222286;

	t82 = (x353/((x354%x355)|x356));

	if (t82 != -32767) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x361 = -1;
	static uint8_t x362 = UINT8_MAX;
	uint32_t x363 = 93723051U;
	static int64_t t83 = 388LL;

	t83 = (x361/((x362%x363)|x364));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x365 = 19641424LL;
	uint32_t x366 = 249532U;
	int16_t x368 = 1;
	volatile int64_t t84 = -142820LL;

	t84 = (x365/((x366%x367)|x368));

	if (t84 != 370592LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x369 = UINT64_MAX;
	uint16_t x371 = 25U;
	static uint64_t x372 = 59902837584LLU;
	uint64_t t85 = 48283998112LLU;

	t85 = (x369/((x370%x371)|x372));

	if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x373 = 0;
	volatile int64_t x374 = -33069016417LL;
	uint32_t x375 = UINT32_MAX;
	volatile int32_t x376 = -5;
	int64_t t86 = -2818559LL;

	t86 = (x373/((x374%x375)|x376));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x378 = 94U;
	static uint16_t x379 = 43U;
	int32_t x380 = -5019;
	int32_t t87 = -28291913;

	t87 = (x377/((x378%x379)|x380));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x381 = INT16_MIN;
	int64_t x382 = INT64_MIN;
	volatile int16_t x384 = INT16_MAX;
	int64_t t88 = -3534162LL;

	t88 = (x381/((x382%x383)|x384));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x385 = 2U;
	static uint16_t x386 = 388U;
	int16_t x387 = -14;
	static int32_t t89 = 1;

	t89 = (x385/((x386%x387)|x388));

	if (t89 != -2) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x389 = -1;
	int16_t x390 = -1;
	static volatile int8_t x391 = INT8_MIN;
	int8_t x392 = 2;
	int32_t t90 = 456756;

	t90 = (x389/((x390%x391)|x392));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x393 = -1;
	static int16_t x394 = -1;
	uint16_t x395 = 924U;
	static int64_t x396 = INT64_MIN;

	t91 = (x393/((x394%x395)|x396));

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x398 = 11U;
	int16_t x399 = INT16_MAX;
	uint64_t x400 = 2788815722LLU;
	uint64_t t92 = 239482778113287258LLU;

	t92 = (x397/((x398%x399)|x400));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x401 = 57735U;
	int8_t x403 = INT8_MAX;
	volatile int64_t x404 = -91128449280730LL;
	volatile int64_t t93 = -253047069LL;

	t93 = (x401/((x402%x403)|x404));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x405 = 2030;
	static int16_t x407 = 1;
	static uint64_t t94 = 3667380338596892210LLU;

	t94 = (x405/((x406%x407)|x408));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x409 = 30;
	uint8_t x410 = UINT8_MAX;
	int8_t x411 = INT8_MIN;
	int16_t x412 = INT16_MIN;
	int32_t t95 = -85221;

	t95 = (x409/((x410%x411)|x412));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x413 = 214945506LL;
	uint16_t x414 = 6963U;
	int64_t x415 = -1LL;
	uint8_t x416 = UINT8_MAX;

	t96 = (x413/((x414%x415)|x416));

	if (t96 != 842923LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x417 = INT16_MIN;
	int16_t x418 = 122;
	volatile int64_t t97 = -25542113859355267LL;

	t97 = (x417/((x418%x419)|x420));

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x421 = 2U;
	static volatile uint64_t x422 = 7620291153752394643LLU;
	static uint16_t x423 = 30742U;
	uint8_t x424 = 6U;

	t98 = (x421/((x422%x423)|x424));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x425 = -12;
	static uint16_t x426 = 6629U;
	int8_t x427 = -1;
	uint8_t x428 = 3U;
	int32_t t99 = 2477037;

	t99 = (x425/((x426%x427)|x428));

	if (t99 != -4) { NG(); } else { ; }
	
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

