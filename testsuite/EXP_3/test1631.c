#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x3 = UINT16_MAX;
int32_t t0 = -17;
static uint64_t x5 = 2010928668738969123LLU;
int32_t x16 = 8451;
int8_t x23 = INT8_MIN;
static uint8_t x30 = UINT8_MAX;
uint8_t x33 = 55U;
int64_t x43 = 258LL;
volatile uint32_t x48 = 460787284U;
volatile int16_t x56 = INT16_MIN;
static int64_t x58 = INT64_MAX;
int16_t x64 = INT16_MAX;
uint64_t x66 = 1402395743572LLU;
int64_t x67 = 3143052121028903066LL;
uint64_t x69 = 732377850204LLU;
int8_t x71 = -1;
int8_t x75 = INT8_MIN;
volatile uint64_t x77 = 10571402536742LLU;
volatile int16_t x89 = INT16_MAX;
int32_t t22 = -4587;
int16_t x99 = INT16_MIN;
int64_t x100 = -339671055702927896LL;
static int8_t x101 = -1;
volatile int32_t t25 = -62607365;
int32_t x111 = 14091;
int8_t x112 = 2;
static volatile int64_t x115 = 23072494392254LL;
int8_t x116 = -1;
int16_t x118 = INT16_MIN;
volatile uint64_t x122 = 679206LLU;
int16_t x124 = 3837;
uint64_t x125 = 551861828946514LLU;
static uint8_t x127 = UINT8_MAX;
volatile int32_t x129 = INT32_MAX;
volatile int32_t x136 = INT32_MIN;
uint8_t x141 = UINT8_MAX;
static uint8_t x146 = 72U;
static int16_t x152 = 48;
int8_t x154 = INT8_MAX;
static uint8_t x157 = 13U;
int32_t t39 = 0;
int8_t x177 = -1;
int64_t x178 = 127LL;
volatile int32_t x179 = INT32_MIN;
int8_t x185 = INT8_MIN;
uint8_t x188 = UINT8_MAX;
static volatile uint8_t x189 = 59U;
static int64_t x201 = -1LL;
static int16_t x202 = -1;
int32_t t50 = -33172;
static uint16_t x208 = 0U;
int32_t t51 = 744688135;
int64_t x209 = -7936773147638LL;
volatile uint32_t x211 = 13863U;
int64_t x212 = INT64_MIN;
static int32_t x216 = -258145242;
int32_t t53 = -45170589;
volatile int32_t t54 = 403696;
int64_t x222 = 10091902645LL;
static uint16_t x239 = 8980U;
volatile uint64_t x241 = 206871896093953768LLU;
int32_t x242 = -1215613;
int16_t x244 = INT16_MIN;
int64_t x245 = -1LL;
int8_t x247 = 0;
static volatile int32_t t62 = -1;
int8_t x258 = -8;
int32_t x260 = INT32_MIN;
static int8_t x261 = 0;
int32_t t65 = -7247361;
int32_t x272 = -33465;
static volatile int16_t x274 = INT16_MIN;
int32_t t69 = 1;
int16_t x282 = 481;
volatile int8_t x283 = INT8_MIN;
static int32_t x285 = -1;
static int16_t x293 = INT16_MAX;
static int16_t x304 = -1;
int64_t x305 = 43LL;
volatile uint32_t x313 = 55384U;
int64_t x316 = -1LL;
int8_t x318 = 0;
int32_t t80 = -169999740;
volatile uint64_t x328 = 10532LLU;
uint8_t x333 = UINT8_MAX;
uint16_t x335 = 1075U;
int32_t t86 = 94878886;
static int8_t x351 = -1;
int32_t t87 = 54872432;
int32_t x354 = INT32_MAX;
uint32_t x359 = UINT32_MAX;
uint16_t x362 = 169U;
volatile int32_t x363 = INT32_MIN;
int64_t x365 = -1LL;
int32_t t91 = -57155022;
static int8_t x381 = INT8_MAX;
volatile int16_t x383 = INT16_MIN;
int16_t x385 = -1;
static int32_t t96 = 783;
static uint16_t x397 = 27031U;
uint32_t x398 = 163305U;


void f0(void) {
	int32_t x1 = INT32_MAX;
	int64_t x2 = INT64_MIN;
	int64_t x4 = INT64_MAX;

	t0 = ((x1<x2)<<(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = 19;
	int8_t x7 = -1;
	int16_t x8 = -1;
	int32_t t1 = -227446882;

	t1 = ((x5<x6)<<(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint64_t x9 = UINT64_MAX;
	static uint32_t x10 = 143U;
	int32_t x11 = -414;
	int8_t x12 = 1;
	volatile int32_t t2 = -65;

	t2 = ((x9<x10)<<(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	uint16_t x14 = UINT16_MAX;
	int16_t x15 = -1;
	volatile int32_t t3 = 427;

	t3 = ((x13<x14)<<(x15<=x16));

	if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1;
	volatile int16_t x18 = INT16_MAX;
	uint64_t x19 = 55428LLU;
	uint16_t x20 = 19U;
	volatile int32_t t4 = 25369516;

	t4 = ((x17<x18)<<(x19<=x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = 0U;
	uint64_t x22 = UINT64_MAX;
	volatile uint64_t x24 = 13LLU;
	int32_t t5 = 98;

	t5 = ((x21<x22)<<(x23<=x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = INT32_MIN;
	uint8_t x26 = UINT8_MAX;
	int16_t x27 = -3;
	int8_t x28 = -1;
	static volatile int32_t t6 = -9;

	t6 = ((x25<x26)<<(x27<=x28));

	if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 177815;
	uint8_t x31 = UINT8_MAX;
	int64_t x32 = -1LL;
	volatile int32_t t7 = 8;

	t7 = ((x29<x30)<<(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = -1;
	uint32_t x35 = 2U;
	static int16_t x36 = INT16_MAX;
	int32_t t8 = 17;

	t8 = ((x33<x34)<<(x35<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = -1;
	volatile int64_t x38 = INT64_MIN;
	uint64_t x39 = 16506730LLU;
	int8_t x40 = -1;
	int32_t t9 = 451;

	t9 = ((x37<x38)<<(x39<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = UINT64_MAX;
	volatile int16_t x42 = INT16_MAX;
	int64_t x44 = INT64_MIN;
	int32_t t10 = 10;

	t10 = ((x41<x42)<<(x43<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = -31;
	int8_t x46 = 1;
	int64_t x47 = INT64_MAX;
	int32_t t11 = -60555;

	t11 = ((x45<x46)<<(x47<=x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x49 = UINT16_MAX;
	static int64_t x50 = -1LL;
	uint64_t x51 = UINT64_MAX;
	volatile int16_t x52 = -1;
	volatile int32_t t12 = 26473;

	t12 = ((x49<x50)<<(x51<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	uint16_t x54 = 79U;
	static int8_t x55 = INT8_MIN;
	volatile int32_t t13 = 7833;

	t13 = ((x53<x54)<<(x55<=x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 52U;
	static uint8_t x59 = 1U;
	int64_t x60 = INT64_MAX;
	volatile int32_t t14 = 3652;

	t14 = ((x57<x58)<<(x59<=x60));

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 382833054393206LLU;
	static int32_t x62 = 1055702;
	int8_t x63 = -1;
	volatile int32_t t15 = -17;

	t15 = ((x61<x62)<<(x63<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MAX;
	uint16_t x68 = 4182U;
	int32_t t16 = 33;

	t16 = ((x65<x66)<<(x67<=x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = 15582244;
	uint16_t x72 = 3985U;
	static int32_t t17 = -1606;

	t17 = ((x69<x70)<<(x71<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = 1;
	static uint8_t x74 = UINT8_MAX;
	uint64_t x76 = 372859436685LLU;
	int32_t t18 = 4674840;

	t18 = ((x73<x74)<<(x75<=x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x78 = INT64_MIN;
	volatile int16_t x79 = -118;
	volatile uint32_t x80 = 167276245U;
	volatile int32_t t19 = -87766;

	t19 = ((x77<x78)<<(x79<=x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = 4;
	int8_t x82 = 25;
	static int32_t x83 = 515;
	int64_t x84 = -1LL;
	volatile int32_t t20 = 7;

	t20 = ((x81<x82)<<(x83<=x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x85 = UINT8_MAX;
	static int16_t x86 = INT16_MIN;
	int8_t x87 = INT8_MAX;
	volatile int8_t x88 = -1;
	int32_t t21 = 8076022;

	t21 = ((x85<x86)<<(x87<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x90 = 395523461LL;
	int8_t x91 = INT8_MAX;
	uint8_t x92 = 2U;

	t22 = ((x89<x90)<<(x91<=x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = 349;
	int32_t x94 = 326390341;
	uint16_t x95 = UINT16_MAX;
	int32_t x96 = -50903;
	static int32_t t23 = -1650684;

	t23 = ((x93<x94)<<(x95<=x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = UINT64_MAX;
	int16_t x98 = INT16_MIN;
	static int32_t t24 = -75;

	t24 = ((x97<x98)<<(x99<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x102 = 13U;
	static int32_t x103 = INT32_MAX;
	int16_t x104 = INT16_MAX;

	t25 = ((x101<x102)<<(x103<=x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -385002134663LL;
	static int32_t x106 = INT32_MIN;
	int32_t x107 = 38357;
	volatile int32_t x108 = -1;
	int32_t t26 = -16;

	t26 = ((x105<x106)<<(x107<=x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x109 = -1LL;
	uint64_t x110 = 692613855624494LLU;
	int32_t t27 = -30909;

	t27 = ((x109<x110)<<(x111<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -1;
	static int16_t x114 = -1;
	static int32_t t28 = -202688;

	t28 = ((x113<x114)<<(x115<=x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	uint32_t x119 = 1U;
	static uint8_t x120 = 6U;
	int32_t t29 = 82;

	t29 = ((x117<x118)<<(x119<=x120));

	if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint32_t x121 = 4U;
	uint8_t x123 = UINT8_MAX;
	int32_t t30 = -15663;

	t30 = ((x121<x122)<<(x123<=x124));

	if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x126 = UINT32_MAX;
	int16_t x128 = INT16_MAX;
	volatile int32_t t31 = -71105;

	t31 = ((x125<x126)<<(x127<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x130 = INT16_MIN;
	uint32_t x131 = 1092415U;
	int16_t x132 = INT16_MIN;
	int32_t t32 = 1973;

	t32 = ((x129<x130)<<(x131<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x133 = -13289LL;
	static volatile uint16_t x134 = UINT16_MAX;
	int32_t x135 = -12;
	volatile int32_t t33 = 3778814;

	t33 = ((x133<x134)<<(x135<=x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -6856655LL;
	int64_t x138 = -1LL;
	static volatile uint8_t x139 = 0U;
	int8_t x140 = INT8_MIN;
	static int32_t t34 = -1;

	t34 = ((x137<x138)<<(x139<=x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x142 = -1LL;
	int8_t x143 = INT8_MIN;
	int32_t x144 = INT32_MAX;
	int32_t t35 = 2414792;

	t35 = ((x141<x142)<<(x143<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -1;
	int64_t x147 = -976786LL;
	volatile int64_t x148 = 48LL;
	int32_t t36 = 79;

	t36 = ((x145<x146)<<(x147<=x148));

	if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 66U;
	uint64_t x150 = 49161262034007044LLU;
	int64_t x151 = INT64_MAX;
	static volatile int32_t t37 = -20;

	t37 = ((x149<x150)<<(x151<=x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = INT32_MAX;
	volatile uint16_t x155 = 1407U;
	int64_t x156 = 1671637LL;
	volatile int32_t t38 = -952597460;

	t38 = ((x153<x154)<<(x155<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x158 = INT32_MIN;
	volatile int16_t x159 = 4060;
	uint16_t x160 = UINT16_MAX;

	t39 = ((x157<x158)<<(x159<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 19U;
	int8_t x162 = -56;
	int64_t x163 = INT64_MIN;
	static volatile uint32_t x164 = UINT32_MAX;
	volatile int32_t t40 = 2;

	t40 = ((x161<x162)<<(x163<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x165 = 3U;
	uint16_t x166 = 44U;
	volatile int64_t x167 = INT64_MIN;
	static uint8_t x168 = 1U;
	volatile int32_t t41 = 340608;

	t41 = ((x165<x166)<<(x167<=x168));

	if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -7183271LL;
	volatile uint64_t x170 = 15463596205734794LLU;
	int32_t x171 = INT32_MAX;
	int64_t x172 = -1LL;
	static int32_t t42 = 361068917;

	t42 = ((x169<x170)<<(x171<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x173 = UINT8_MAX;
	int16_t x174 = -16;
	volatile int8_t x175 = 4;
	int8_t x176 = INT8_MIN;
	int32_t t43 = -1952;

	t43 = ((x173<x174)<<(x175<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x180 = -1;
	int32_t t44 = 57460156;

	t44 = ((x177<x178)<<(x179<=x180));

	if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x181 = 0U;
	int32_t x182 = 118122824;
	uint8_t x183 = 5U;
	uint16_t x184 = 1457U;
	int32_t t45 = -31;

	t45 = ((x181<x182)<<(x183<=x184));

	if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x186 = 72235;
	uint8_t x187 = UINT8_MAX;
	volatile int32_t t46 = -1669;

	t46 = ((x185<x186)<<(x187<=x188));

	if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x190 = INT64_MAX;
	volatile uint8_t x191 = UINT8_MAX;
	uint64_t x192 = 847912021254415LLU;
	int32_t t47 = -753006;

	t47 = ((x189<x190)<<(x191<=x192));

	if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -1;
	static uint8_t x194 = 7U;
	int16_t x195 = -120;
	uint8_t x196 = UINT8_MAX;
	int32_t t48 = -63784675;

	t48 = ((x193<x194)<<(x195<=x196));

	if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -4978995115LL;
	int32_t x198 = INT32_MIN;
	int32_t x199 = INT32_MIN;
	static volatile uint8_t x200 = 10U;
	volatile int32_t t49 = 1;

	t49 = ((x197<x198)<<(x199<=x200));

	if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x203 = -22;
	static int16_t x204 = -1221;

	t50 = ((x201<x202)<<(x203<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = UINT16_MAX;
	int64_t x206 = 2138LL;
	volatile int32_t x207 = -1;

	t51 = ((x205<x206)<<(x207<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x210 = 97256353LLU;
	volatile int32_t t52 = 50062;

	t52 = ((x209<x210)<<(x211<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x213 = INT8_MIN;
	int64_t x214 = 5054607096151LL;
	int16_t x215 = 0;

	t53 = ((x213<x214)<<(x215<=x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x217 = -31444LL;
	int8_t x218 = 7;
	int16_t x219 = INT16_MAX;
	int64_t x220 = -1LL;

	t54 = ((x217<x218)<<(x219<=x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x221 = 3154267;
	volatile int64_t x223 = -1LL;
	uint8_t x224 = 111U;
	static int32_t t55 = 1;

	t55 = ((x221<x222)<<(x223<=x224));

	if (t55 != 2) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = 14U;
	uint64_t x226 = 1363181114069988LLU;
	uint8_t x227 = UINT8_MAX;
	int8_t x228 = -1;
	int32_t t56 = 836;

	t56 = ((x225<x226)<<(x227<=x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = 0;
	uint32_t x230 = 2U;
	static volatile int8_t x231 = INT8_MIN;
	volatile int16_t x232 = INT16_MAX;
	volatile int32_t t57 = -1234;

	t57 = ((x229<x230)<<(x231<=x232));

	if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = UINT64_MAX;
	int32_t x234 = -144215105;
	int16_t x235 = -13365;
	uint16_t x236 = UINT16_MAX;
	volatile int32_t t58 = 197308;

	t58 = ((x233<x234)<<(x235<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = -8;
	int64_t x238 = INT64_MAX;
	static int64_t x240 = -1LL;
	int32_t t59 = -96332;

	t59 = ((x237<x238)<<(x239<=x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x243 = -1;
	static volatile int32_t t60 = 105;

	t60 = ((x241<x242)<<(x243<=x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x246 = 214594415;
	uint64_t x248 = UINT64_MAX;
	volatile int32_t t61 = 3048;

	t61 = ((x245<x246)<<(x247<=x248));

	if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 0U;
	static int8_t x250 = 50;
	int32_t x251 = -1;
	uint32_t x252 = UINT32_MAX;

	t62 = ((x249<x250)<<(x251<=x252));

	if (t62 != 2) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x253 = 6797LLU;
	int8_t x254 = INT8_MIN;
	volatile int32_t x255 = -4343645;
	int8_t x256 = 1;
	static volatile int32_t t63 = 1342;

	t63 = ((x253<x254)<<(x255<=x256));

	if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MAX;
	static int64_t x259 = -1LL;
	int32_t t64 = 686266331;

	t64 = ((x257<x258)<<(x259<=x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x262 = INT8_MAX;
	int8_t x263 = -1;
	int8_t x264 = 2;

	t65 = ((x261<x262)<<(x263<=x264));

	if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x265 = 0U;
	volatile int8_t x266 = -2;
	int32_t x267 = INT32_MIN;
	int8_t x268 = INT8_MIN;
	volatile int32_t t66 = -7177;

	t66 = ((x265<x266)<<(x267<=x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	int8_t x270 = -1;
	int64_t x271 = -1LL;
	volatile int32_t t67 = -22;

	t67 = ((x269<x270)<<(x271<=x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MIN;
	int32_t x275 = 730169783;
	volatile uint32_t x276 = 121U;
	volatile int32_t t68 = -101;

	t68 = ((x273<x274)<<(x275<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = -109;
	static int64_t x278 = INT64_MIN;
	uint8_t x279 = UINT8_MAX;
	volatile int16_t x280 = INT16_MIN;

	t69 = ((x277<x278)<<(x279<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	int32_t x284 = INT32_MIN;
	volatile int32_t t70 = 84081658;

	t70 = ((x281<x282)<<(x283<=x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x286 = INT8_MIN;
	volatile int16_t x287 = 6;
	int8_t x288 = INT8_MAX;
	static int32_t t71 = -85525;

	t71 = ((x285<x286)<<(x287<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x289 = INT16_MAX;
	int16_t x290 = INT16_MAX;
	static uint64_t x291 = 122823794470974224LLU;
	static int64_t x292 = INT64_MIN;
	volatile int32_t t72 = -39;

	t72 = ((x289<x290)<<(x291<=x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x294 = -1;
	static uint16_t x295 = 3U;
	volatile uint8_t x296 = 12U;
	volatile int32_t t73 = 15;

	t73 = ((x293<x294)<<(x295<=x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = 11327;
	static int64_t x298 = -1LL;
	static int64_t x299 = INT64_MIN;
	int64_t x300 = INT64_MIN;
	volatile int32_t t74 = -84223922;

	t74 = ((x297<x298)<<(x299<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = 33;
	int8_t x302 = INT8_MIN;
	int64_t x303 = INT64_MAX;
	volatile int32_t t75 = -510921;

	t75 = ((x301<x302)<<(x303<=x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x306 = 14;
	int32_t x307 = 6792302;
	uint64_t x308 = 5099093065003250LLU;
	int32_t t76 = -3714;

	t76 = ((x305<x306)<<(x307<=x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x309 = -2755523;
	int64_t x310 = INT64_MAX;
	volatile uint32_t x311 = UINT32_MAX;
	static int32_t x312 = INT32_MAX;
	volatile int32_t t77 = -274373901;

	t77 = ((x309<x310)<<(x311<=x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x314 = INT64_MIN;
	int16_t x315 = INT16_MIN;
	static int32_t t78 = -94840945;

	t78 = ((x313<x314)<<(x315<=x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = 83;
	static uint32_t x319 = 348817618U;
	uint32_t x320 = UINT32_MAX;
	volatile int32_t t79 = 7668404;

	t79 = ((x317<x318)<<(x319<=x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x321 = -1LL;
	int32_t x322 = INT32_MIN;
	int64_t x323 = -1LL;
	int16_t x324 = INT16_MIN;

	t80 = ((x321<x322)<<(x323<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = UINT8_MAX;
	int32_t x326 = 31512920;
	int8_t x327 = -1;
	int32_t t81 = 146;

	t81 = ((x325<x326)<<(x327<=x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = 85LL;
	int8_t x330 = INT8_MAX;
	int8_t x331 = INT8_MIN;
	volatile int8_t x332 = 2;
	volatile int32_t t82 = -7312;

	t82 = ((x329<x330)<<(x331<=x332));

	if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x334 = 6;
	int8_t x336 = INT8_MIN;
	static volatile int32_t t83 = -7635;

	t83 = ((x333<x334)<<(x335<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = 21U;
	int16_t x338 = -1;
	uint8_t x339 = UINT8_MAX;
	uint16_t x340 = UINT16_MAX;
	volatile int32_t t84 = -25055112;

	t84 = ((x337<x338)<<(x339<=x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x341 = UINT64_MAX;
	volatile int32_t x342 = INT32_MAX;
	int64_t x343 = INT64_MAX;
	volatile int32_t x344 = INT32_MAX;
	int32_t t85 = 35;

	t85 = ((x341<x342)<<(x343<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = UINT16_MAX;
	uint8_t x346 = 0U;
	static volatile uint32_t x347 = 798313U;
	int32_t x348 = 3;

	t86 = ((x345<x346)<<(x347<=x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = 7;
	int32_t x350 = -323;
	static int64_t x352 = -334242LL;

	t87 = ((x349<x350)<<(x351<=x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x353 = 3565388;
	uint16_t x355 = UINT16_MAX;
	uint16_t x356 = 6U;
	int32_t t88 = 0;

	t88 = ((x353<x354)<<(x355<=x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = 519598828560LL;
	int64_t x358 = INT64_MAX;
	static int16_t x360 = INT16_MIN;
	int32_t t89 = 173;

	t89 = ((x357<x358)<<(x359<=x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x361 = 6067U;
	static uint8_t x364 = 16U;
	int32_t t90 = -13080568;

	t90 = ((x361<x362)<<(x363<=x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x366 = INT16_MIN;
	volatile int8_t x367 = INT8_MIN;
	int16_t x368 = -57;

	t91 = ((x365<x366)<<(x367<=x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x369 = 65553591248LLU;
	int64_t x370 = 15825046LL;
	uint8_t x371 = UINT8_MAX;
	volatile uint64_t x372 = 1296LLU;
	int32_t t92 = -107117;

	t92 = ((x369<x370)<<(x371<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = 118;
	int64_t x374 = INT64_MIN;
	volatile int8_t x375 = 0;
	int32_t x376 = INT32_MAX;
	int32_t t93 = -32359243;

	t93 = ((x373<x374)<<(x375<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = -1;
	int8_t x378 = 3;
	int64_t x379 = INT64_MAX;
	static uint32_t x380 = 1197016U;
	int32_t t94 = 3;

	t94 = ((x377<x378)<<(x379<=x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x382 = 3321U;
	int8_t x384 = 1;
	volatile int32_t t95 = 73308396;

	t95 = ((x381<x382)<<(x383<=x384));

	if (t95 != 2) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x386 = 595858LL;
	int16_t x387 = INT16_MIN;
	uint64_t x388 = 14591355LLU;

	t96 = ((x385<x386)<<(x387<=x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -1;
	uint16_t x390 = UINT16_MAX;
	static volatile uint64_t x391 = 31LLU;
	uint16_t x392 = UINT16_MAX;
	volatile int32_t t97 = 2026102;

	t97 = ((x389<x390)<<(x391<=x392));

	if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = -1LL;
	static volatile uint32_t x394 = 371U;
	static int32_t x395 = INT32_MIN;
	uint16_t x396 = 328U;
	int32_t t98 = 839230446;

	t98 = ((x393<x394)<<(x395<=x396));

	if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x399 = INT8_MIN;
	static int16_t x400 = 38;
	volatile int32_t t99 = -44;

	t99 = ((x397<x398)<<(x399<=x400));

	if (t99 != 2) { NG(); } else { ; }
	
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

