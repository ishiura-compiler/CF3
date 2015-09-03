#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MIN;
int64_t t0 = INT64_MIN;
int32_t x11 = INT32_MAX;
int8_t x12 = INT8_MIN;
static volatile int32_t x13 = -1;
static int32_t x14 = 224654056;
int32_t t3 = 7;
int64_t x21 = INT64_MAX;
int8_t x22 = INT8_MIN;
uint64_t x26 = 1486965674LLU;
int8_t x31 = INT8_MIN;
volatile int32_t t8 = 105023;
uint8_t x39 = 107U;
volatile int8_t x46 = 1;
volatile int16_t x48 = -1;
uint8_t x49 = 1U;
int8_t x53 = INT8_MIN;
static uint32_t x56 = 3U;
volatile int32_t t14 = -209783;
volatile uint64_t t17 = 1497LLU;
int64_t t19 = 288123LL;
static uint64_t x86 = UINT64_MAX;
volatile int32_t t21 = -445980;
int16_t x89 = INT16_MAX;
uint16_t x90 = 8227U;
volatile int16_t x93 = -1;
int32_t t23 = -15;
uint32_t x108 = 171U;
uint16_t x113 = 1579U;
static uint8_t x115 = 26U;
volatile int16_t x116 = INT16_MIN;
volatile int32_t t27 = 833928726;
int16_t x127 = -229;
volatile int32_t x143 = INT32_MAX;
uint32_t x144 = 33741529U;
volatile int32_t t34 = -84493658;
int8_t x147 = INT8_MIN;
uint8_t x159 = UINT8_MAX;
volatile uint32_t x169 = 5127897U;
static volatile uint16_t x171 = UINT16_MAX;
int8_t x181 = INT8_MAX;
static int8_t x182 = INT8_MIN;
static int8_t x185 = INT8_MIN;
static int64_t x187 = 1098335856262119407LL;
int8_t x189 = -18;
static int8_t x192 = INT8_MIN;
uint8_t x204 = 1U;
volatile int64_t t48 = INT64_MIN;
int32_t x211 = -1;
volatile int32_t t49 = -12348;
volatile int64_t t52 = INT64_MIN;
volatile int32_t t54 = -1971;
int8_t x238 = INT8_MAX;
int8_t x244 = -13;
uint32_t t58 = 256U;
uint32_t x249 = 15948U;
static int8_t x253 = INT8_MIN;
uint16_t x258 = 2U;
int64_t t61 = INT64_MAX;
int64_t x264 = -7850592LL;
uint64_t x274 = 14051142334LLU;
volatile int16_t x282 = -1;
volatile int64_t t67 = INT64_MIN;
static volatile int16_t x288 = 1;
int32_t x290 = -1;
int64_t x291 = -129563LL;
volatile int64_t x292 = INT64_MIN;
int32_t t69 = 14840;
int8_t x297 = INT8_MIN;
int32_t x298 = 0;
int32_t t71 = 4307;
uint64_t x301 = UINT64_MAX;
volatile int32_t x308 = 443938432;
static int16_t x309 = 163;
static volatile int16_t x312 = INT16_MIN;
int16_t x324 = INT16_MIN;
volatile uint16_t x326 = 45U;
int16_t x329 = INT16_MIN;
int8_t x335 = INT8_MIN;
static int8_t x336 = INT8_MIN;
volatile int32_t t80 = -66587;
volatile int8_t x338 = INT8_MIN;
static int64_t x339 = -1LL;
volatile int32_t t81 = 3928;
volatile int8_t x352 = INT8_MIN;
volatile int8_t x353 = INT8_MIN;
static volatile uint32_t x354 = 744785U;
static int16_t x357 = -553;
int8_t x359 = -51;
static volatile int16_t x370 = -1;
static volatile uint32_t x372 = UINT32_MAX;
int32_t x373 = -1;
int32_t x376 = INT32_MAX;
int32_t t90 = 966473801;
int32_t x378 = INT32_MIN;
volatile int64_t x388 = -163111488724285LL;
uint8_t x411 = 6U;


void f0(void) {
	static int64_t x1 = INT64_MIN;
	int64_t x2 = INT64_MAX;
	int64_t x4 = 11147119222300LL;

	t0 = (x1|(x2<=(x3/x4)));

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	int32_t x6 = INT32_MAX;
	int8_t x7 = 24;
	int32_t x8 = INT32_MAX;
	static int32_t t1 = -36;

	t1 = (x5|(x6<=(x7/x8)));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	int32_t x10 = 6;
	int64_t t2 = INT64_MAX;

	t2 = (x9|(x10<=(x11/x12)));

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x15 = UINT16_MAX;
	int32_t x16 = -1;

	t3 = (x13|(x14<=(x15/x16)));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 41169421LLU;
	int64_t x18 = INT64_MIN;
	volatile uint32_t x19 = 168680726U;
	static volatile int16_t x20 = INT16_MIN;
	volatile uint64_t t4 = 2309271993343018LLU;

	t4 = (x17|(x18<=(x19/x20)));

	if (t4 != 41169421LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x23 = INT32_MAX;
	volatile int32_t x24 = -1;
	static volatile int64_t t5 = INT64_MAX;

	t5 = (x21|(x22<=(x23/x24)));

	if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 29U;
	int16_t x27 = -4;
	static int8_t x28 = INT8_MAX;
	int32_t t6 = 3005;

	t6 = (x25|(x26<=(x27/x28)));

	if (t6 != 29) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 3U;
	volatile int16_t x30 = INT16_MAX;
	int8_t x32 = INT8_MIN;
	int32_t t7 = -169500;

	t7 = (x29|(x30<=(x31/x32)));

	if (t7 != 3) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	volatile uint8_t x34 = 51U;
	volatile uint16_t x35 = 5U;
	volatile int32_t x36 = -8477;

	t8 = (x33|(x34<=(x35/x36)));

	if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x37 = -1LL;
	int64_t x38 = INT64_MIN;
	int16_t x40 = INT16_MIN;
	volatile int64_t t9 = -5589836LL;

	t9 = (x37|(x38<=(x39/x40)));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = -334662205;
	static int8_t x42 = -1;
	int8_t x43 = INT8_MIN;
	int16_t x44 = 1;
	volatile int32_t t10 = -2184;

	t10 = (x41|(x42<=(x43/x44)));

	if (t10 != -334662205) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 16;
	int32_t x47 = -15163;
	volatile int32_t t11 = 3619;

	t11 = (x45|(x46<=(x47/x48)));

	if (t11 != 17) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = INT64_MIN;
	uint8_t x51 = 1U;
	static int32_t x52 = INT32_MIN;
	volatile int32_t t12 = -86;

	t12 = (x49|(x50<=(x51/x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = 468;
	int64_t x55 = -8004587161725549LL;
	int32_t t13 = 108532149;

	t13 = (x53|(x54<=(x55/x56)));

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	int16_t x58 = -1;
	uint8_t x59 = UINT8_MAX;
	static int8_t x60 = 48;

	t14 = (x57|(x58<=(x59/x60)));

	if (t14 != -2147483647) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 3U;
	int16_t x62 = -3;
	int8_t x63 = INT8_MAX;
	volatile int32_t x64 = INT32_MIN;
	int32_t t15 = -1;

	t15 = (x61|(x62<=(x63/x64)));

	if (t15 != 3) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	int8_t x66 = -1;
	static int16_t x67 = INT16_MIN;
	static int64_t x68 = INT64_MAX;
	int32_t t16 = -1;

	t16 = (x65|(x66<=(x67/x68)));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x69 = 7405LLU;
	int8_t x70 = INT8_MAX;
	int16_t x71 = INT16_MIN;
	int64_t x72 = -1156009LL;

	t17 = (x69|(x70<=(x71/x72)));

	if (t17 != 7405LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 1932014551U;
	uint8_t x74 = UINT8_MAX;
	int16_t x75 = 16;
	static int8_t x76 = INT8_MIN;
	uint32_t t18 = 6784U;

	t18 = (x73|(x74<=(x75/x76)));

	if (t18 != 1932014551U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	int32_t x78 = INT32_MIN;
	static volatile int8_t x79 = INT8_MAX;
	uint16_t x80 = UINT16_MAX;

	t19 = (x77|(x78<=(x79/x80)));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = -37;
	uint32_t x82 = 600130667U;
	volatile uint8_t x83 = 31U;
	static int32_t x84 = -25300;
	volatile int32_t t20 = 2487380;

	t20 = (x81|(x82<=(x83/x84)));

	if (t20 != -37) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -1;
	volatile uint32_t x87 = UINT32_MAX;
	int64_t x88 = INT64_MIN;

	t21 = (x85|(x86<=(x87/x88)));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x91 = UINT8_MAX;
	int8_t x92 = INT8_MIN;
	volatile int32_t t22 = 26;

	t22 = (x89|(x90<=(x91/x92)));

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x94 = UINT32_MAX;
	uint64_t x95 = 138243743883195723LLU;
	uint16_t x96 = 147U;

	t23 = (x93|(x94<=(x95/x96)));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = 1LL;
	int32_t x98 = -1;
	uint32_t x99 = UINT32_MAX;
	uint32_t x100 = 2308463U;
	int64_t t24 = 27234122522LL;

	t24 = (x97|(x98<=(x99/x100)));

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -1;
	static int32_t x102 = INT32_MIN;
	static uint8_t x103 = 6U;
	static int64_t x104 = -1LL;
	volatile int32_t t25 = -6689584;

	t25 = (x101|(x102<=(x103/x104)));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -1LL;
	volatile int16_t x106 = INT16_MAX;
	static int64_t x107 = INT64_MIN;
	volatile int64_t t26 = -113026317324LL;

	t26 = (x105|(x106<=(x107/x108)));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x114 = 2U;

	t27 = (x113|(x114<=(x115/x116)));

	if (t27 != 1579) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x117 = 107U;
	int64_t x118 = -147197350LL;
	int16_t x119 = INT16_MIN;
	static int32_t x120 = INT32_MAX;
	volatile int32_t t28 = -613776838;

	t28 = (x117|(x118<=(x119/x120)));

	if (t28 != 107) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x121 = -1LL;
	int8_t x122 = INT8_MIN;
	static uint64_t x123 = UINT64_MAX;
	int64_t x124 = 6009186551835LL;
	int64_t t29 = -12341044930618LL;

	t29 = (x121|(x122<=(x123/x124)));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = INT32_MIN;
	uint64_t x126 = UINT64_MAX;
	uint8_t x128 = UINT8_MAX;
	volatile int32_t t30 = INT32_MIN;

	t30 = (x125|(x126<=(x127/x128)));

	if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x129 = 749U;
	int16_t x130 = 6;
	int8_t x131 = -1;
	static uint8_t x132 = 14U;
	static uint32_t t31 = 29872U;

	t31 = (x129|(x130<=(x131/x132)));

	if (t31 != 749U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x133 = 16669U;
	static uint32_t x134 = UINT32_MAX;
	static uint32_t x135 = 862221U;
	volatile uint8_t x136 = UINT8_MAX;
	int32_t t32 = 4329962;

	t32 = (x133|(x134<=(x135/x136)));

	if (t32 != 16669) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x137 = 112;
	int64_t x138 = 1245906485497LL;
	int32_t x139 = 4912;
	int16_t x140 = 243;
	int32_t t33 = -31507653;

	t33 = (x137|(x138<=(x139/x140)));

	if (t33 != 112) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x141 = -495598;
	int8_t x142 = -1;

	t34 = (x141|(x142<=(x143/x144)));

	if (t34 != -495598) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x145 = -583;
	int64_t x146 = -116LL;
	int32_t x148 = INT32_MIN;
	int32_t t35 = 73;

	t35 = (x145|(x146<=(x147/x148)));

	if (t35 != -583) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x149 = 12U;
	int32_t x150 = INT32_MIN;
	uint16_t x151 = 464U;
	static uint16_t x152 = 345U;
	int32_t t36 = 24;

	t36 = (x149|(x150<=(x151/x152)));

	if (t36 != 13) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x153 = INT64_MIN;
	static uint8_t x154 = 9U;
	static uint64_t x155 = UINT64_MAX;
	int8_t x156 = INT8_MIN;
	volatile int64_t t37 = INT64_MIN;

	t37 = (x153|(x154<=(x155/x156)));

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x157 = 0;
	static int64_t x158 = INT64_MIN;
	int16_t x160 = INT16_MIN;
	static volatile int32_t t38 = 0;

	t38 = (x157|(x158<=(x159/x160)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x165 = -1;
	int32_t x166 = INT32_MIN;
	int16_t x167 = INT16_MIN;
	int8_t x168 = -15;
	int32_t t39 = 390;

	t39 = (x165|(x166<=(x167/x168)));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x170 = -1;
	uint32_t x172 = UINT32_MAX;
	static volatile uint32_t t40 = 479U;

	t40 = (x169|(x170<=(x171/x172)));

	if (t40 != 5127897U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x177 = UINT8_MAX;
	uint16_t x178 = 108U;
	int8_t x179 = INT8_MAX;
	static int32_t x180 = -1;
	int32_t t41 = 6911;

	t41 = (x177|(x178<=(x179/x180)));

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x183 = 149U;
	uint64_t x184 = UINT64_MAX;
	int32_t t42 = 0;

	t42 = (x181|(x182<=(x183/x184)));

	if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x186 = 908978215;
	int16_t x188 = -12794;
	volatile int32_t t43 = 4385132;

	t43 = (x185|(x186<=(x187/x188)));

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x190 = INT32_MIN;
	static uint16_t x191 = UINT16_MAX;
	volatile int32_t t44 = -366;

	t44 = (x189|(x190<=(x191/x192)));

	if (t44 != -17) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x193 = INT16_MIN;
	int32_t x194 = INT32_MIN;
	uint16_t x195 = 4649U;
	volatile uint64_t x196 = UINT64_MAX;
	volatile int32_t t45 = 0;

	t45 = (x193|(x194<=(x195/x196)));

	if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x197 = UINT8_MAX;
	static volatile int8_t x198 = -1;
	int32_t x199 = INT32_MAX;
	int64_t x200 = INT64_MIN;
	volatile int32_t t46 = 5331981;

	t46 = (x197|(x198<=(x199/x200)));

	if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x201 = -3;
	static int8_t x202 = 0;
	uint8_t x203 = 0U;
	static volatile int32_t t47 = 7;

	t47 = (x201|(x202<=(x203/x204)));

	if (t47 != -3) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x205 = INT64_MIN;
	int32_t x206 = INT32_MAX;
	int32_t x207 = 13844467;
	int16_t x208 = INT16_MIN;

	t48 = (x205|(x206<=(x207/x208)));

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x209 = INT8_MIN;
	volatile int32_t x210 = -610;
	int16_t x212 = 8895;

	t49 = (x209|(x210<=(x211/x212)));

	if (t49 != -127) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x213 = UINT8_MAX;
	static int16_t x214 = INT16_MAX;
	static int32_t x215 = INT32_MIN;
	uint16_t x216 = 154U;
	volatile int32_t t50 = 9498456;

	t50 = (x213|(x214<=(x215/x216)));

	if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x217 = -1;
	int64_t x218 = INT64_MAX;
	uint8_t x219 = 61U;
	static int8_t x220 = -1;
	volatile int32_t t51 = 722523888;

	t51 = (x217|(x218<=(x219/x220)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x221 = INT64_MIN;
	int8_t x222 = -1;
	uint64_t x223 = 5701495522LLU;
	static uint8_t x224 = UINT8_MAX;

	t52 = (x221|(x222<=(x223/x224)));

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x225 = INT32_MIN;
	static volatile uint32_t x226 = 939422U;
	int32_t x227 = INT32_MAX;
	int16_t x228 = INT16_MAX;
	static int32_t t53 = INT32_MIN;

	t53 = (x225|(x226<=(x227/x228)));

	if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x229 = 2U;
	int16_t x230 = 3;
	int8_t x231 = INT8_MIN;
	int8_t x232 = INT8_MIN;

	t54 = (x229|(x230<=(x231/x232)));

	if (t54 != 2) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x233 = 1321U;
	uint64_t x234 = 4082091138322213LLU;
	uint8_t x235 = 6U;
	static volatile int8_t x236 = INT8_MIN;
	static uint32_t t55 = 3390812U;

	t55 = (x233|(x234<=(x235/x236)));

	if (t55 != 1321U) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x237 = 43U;
	static volatile uint8_t x239 = 107U;
	int32_t x240 = INT32_MIN;
	static volatile int32_t t56 = -12458;

	t56 = (x237|(x238<=(x239/x240)));

	if (t56 != 43) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x241 = -1;
	int8_t x242 = 21;
	int32_t x243 = -78892536;
	static volatile int32_t t57 = -64369;

	t57 = (x241|(x242<=(x243/x244)));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x245 = 26U;
	volatile int8_t x246 = INT8_MIN;
	int32_t x247 = -1;
	static uint8_t x248 = UINT8_MAX;

	t58 = (x245|(x246<=(x247/x248)));

	if (t58 != 27U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x250 = 0U;
	static volatile int16_t x251 = INT16_MAX;
	volatile int32_t x252 = 208331;
	volatile uint32_t t59 = 840234922U;

	t59 = (x249|(x250<=(x251/x252)));

	if (t59 != 15949U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x254 = 259U;
	uint16_t x255 = 208U;
	int8_t x256 = INT8_MAX;
	volatile int32_t t60 = -2208;

	t60 = (x253|(x254<=(x255/x256)));

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x257 = INT64_MAX;
	int64_t x259 = INT64_MAX;
	volatile int16_t x260 = INT16_MIN;

	t61 = (x257|(x258<=(x259/x260)));

	if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x261 = UINT8_MAX;
	int64_t x262 = -1LL;
	int16_t x263 = -1;
	int32_t t62 = 126135;

	t62 = (x261|(x262<=(x263/x264)));

	if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x265 = 171079U;
	int16_t x266 = -1;
	uint16_t x267 = 410U;
	int16_t x268 = -15932;
	uint32_t t63 = 150472625U;

	t63 = (x265|(x266<=(x267/x268)));

	if (t63 != 171079U) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x269 = -5;
	int8_t x270 = INT8_MIN;
	static int32_t x271 = INT32_MAX;
	int32_t x272 = -1;
	volatile int32_t t64 = -1;

	t64 = (x269|(x270<=(x271/x272)));

	if (t64 != -5) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x273 = 6606304LLU;
	int8_t x275 = -1;
	int32_t x276 = INT32_MAX;
	static volatile uint64_t t65 = 15607884522685257LLU;

	t65 = (x273|(x274<=(x275/x276)));

	if (t65 != 6606304LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x277 = 116U;
	int8_t x278 = INT8_MIN;
	static volatile uint64_t x279 = 12083636906546208LLU;
	uint32_t x280 = 2619983U;
	volatile int32_t t66 = 53123;

	t66 = (x277|(x278<=(x279/x280)));

	if (t66 != 116) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x281 = INT64_MIN;
	volatile int8_t x283 = INT8_MIN;
	volatile uint16_t x284 = 25U;

	t67 = (x281|(x282<=(x283/x284)));

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x285 = 3466U;
	int8_t x286 = -1;
	int64_t x287 = -6LL;
	uint32_t t68 = 4096U;

	t68 = (x285|(x286<=(x287/x288)));

	if (t68 != 3466U) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x289 = 327U;

	t69 = (x289|(x290<=(x291/x292)));

	if (t69 != 327) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x293 = INT8_MIN;
	uint64_t x294 = 291LLU;
	static uint64_t x295 = 4112355170981285030LLU;
	static volatile uint32_t x296 = 956336379U;
	int32_t t70 = -25837;

	t70 = (x293|(x294<=(x295/x296)));

	if (t70 != -127) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x299 = 899U;
	int8_t x300 = -1;

	t71 = (x297|(x298<=(x299/x300)));

	if (t71 != -127) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x302 = -1;
	static int32_t x303 = -81;
	int32_t x304 = INT32_MIN;
	uint64_t t72 = UINT64_MAX;

	t72 = (x301|(x302<=(x303/x304)));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x305 = INT64_MIN;
	static uint64_t x306 = 14254LLU;
	int16_t x307 = -1;
	volatile int64_t t73 = INT64_MIN;

	t73 = (x305|(x306<=(x307/x308)));

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x310 = 2;
	static int32_t x311 = INT32_MAX;
	static int32_t t74 = -1;

	t74 = (x309|(x310<=(x311/x312)));

	if (t74 != 163) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x313 = INT32_MAX;
	uint16_t x314 = 3119U;
	volatile int64_t x315 = -1LL;
	int32_t x316 = -25112;
	static volatile int32_t t75 = INT32_MAX;

	t75 = (x313|(x314<=(x315/x316)));

	if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x317 = -195494631396694LL;
	volatile int32_t x318 = INT32_MIN;
	uint16_t x319 = 596U;
	int32_t x320 = INT32_MIN;
	volatile int64_t t76 = -15751LL;

	t76 = (x317|(x318<=(x319/x320)));

	if (t76 != -195494631396693LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x321 = -1;
	int32_t x322 = -60;
	static volatile uint64_t x323 = 310039LLU;
	int32_t t77 = 206;

	t77 = (x321|(x322<=(x323/x324)));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x325 = INT64_MIN;
	int16_t x327 = INT16_MIN;
	uint32_t x328 = UINT32_MAX;
	int64_t t78 = INT64_MIN;

	t78 = (x325|(x326<=(x327/x328)));

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x330 = 5LLU;
	int32_t x331 = INT32_MAX;
	int16_t x332 = INT16_MIN;
	int32_t t79 = 1;

	t79 = (x329|(x330<=(x331/x332)));

	if (t79 != -32767) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x333 = -1;
	static uint64_t x334 = UINT64_MAX;

	t80 = (x333|(x334<=(x335/x336)));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x337 = INT16_MAX;
	static int16_t x340 = 132;

	t81 = (x337|(x338<=(x339/x340)));

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x341 = INT32_MIN;
	volatile int16_t x342 = -1;
	uint16_t x343 = 0U;
	static int8_t x344 = INT8_MAX;
	volatile int32_t t82 = 484251856;

	t82 = (x341|(x342<=(x343/x344)));

	if (t82 != -2147483647) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x345 = INT32_MIN;
	int16_t x346 = -1;
	int32_t x347 = INT32_MAX;
	int16_t x348 = INT16_MIN;
	int32_t t83 = INT32_MIN;

	t83 = (x345|(x346<=(x347/x348)));

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x349 = UINT64_MAX;
	static int16_t x350 = INT16_MAX;
	static int64_t x351 = INT64_MIN;
	static volatile uint64_t t84 = UINT64_MAX;

	t84 = (x349|(x350<=(x351/x352)));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x355 = INT16_MAX;
	int64_t x356 = INT64_MIN;
	int32_t t85 = 27705963;

	t85 = (x353|(x354<=(x355/x356)));

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x358 = INT32_MIN;
	static uint8_t x360 = UINT8_MAX;
	volatile int32_t t86 = 503;

	t86 = (x357|(x358<=(x359/x360)));

	if (t86 != -553) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x361 = 3U;
	int8_t x362 = -53;
	int64_t x363 = INT64_MAX;
	static int16_t x364 = -896;
	static volatile uint32_t t87 = 16U;

	t87 = (x361|(x362<=(x363/x364)));

	if (t87 != 3U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x365 = -1LL;
	uint64_t x366 = 1615520190LLU;
	int16_t x367 = INT16_MAX;
	volatile int16_t x368 = -1;
	static int64_t t88 = 277941918307875LL;

	t88 = (x365|(x366<=(x367/x368)));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x369 = -1LL;
	int64_t x371 = INT64_MIN;
	int64_t t89 = -274413081133902LL;

	t89 = (x369|(x370<=(x371/x372)));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x374 = UINT32_MAX;
	static uint64_t x375 = UINT64_MAX;

	t90 = (x373|(x374<=(x375/x376)));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x377 = 1U;
	int16_t x379 = INT16_MIN;
	volatile uint16_t x380 = 13U;
	volatile int32_t t91 = 80572;

	t91 = (x377|(x378<=(x379/x380)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x381 = INT8_MIN;
	uint32_t x382 = UINT32_MAX;
	volatile int64_t x383 = INT64_MAX;
	volatile uint8_t x384 = 1U;
	volatile int32_t t92 = 521;

	t92 = (x381|(x382<=(x383/x384)));

	if (t92 != -127) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x385 = INT64_MIN;
	int16_t x386 = INT16_MIN;
	int32_t x387 = -2072707;
	int64_t t93 = 0LL;

	t93 = (x385|(x386<=(x387/x388)));

	if (t93 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x389 = -1;
	uint32_t x390 = 11U;
	static int32_t x391 = -4;
	int64_t x392 = -1LL;
	int32_t t94 = -770802;

	t94 = (x389|(x390<=(x391/x392)));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x393 = UINT8_MAX;
	uint32_t x394 = UINT32_MAX;
	uint32_t x395 = 254310661U;
	volatile int8_t x396 = INT8_MIN;
	volatile int32_t t95 = -1824;

	t95 = (x393|(x394<=(x395/x396)));

	if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x397 = 5848867LL;
	static int16_t x398 = 683;
	static int16_t x399 = INT16_MAX;
	int64_t x400 = -24729174319060180LL;
	int64_t t96 = -28LL;

	t96 = (x397|(x398<=(x399/x400)));

	if (t96 != 5848867LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x401 = 24U;
	volatile uint8_t x402 = 70U;
	int32_t x403 = INT32_MIN;
	volatile uint16_t x404 = UINT16_MAX;
	int32_t t97 = -1;

	t97 = (x401|(x402<=(x403/x404)));

	if (t97 != 24) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x405 = 381U;
	int32_t x406 = INT32_MIN;
	int16_t x407 = INT16_MAX;
	uint16_t x408 = UINT16_MAX;
	volatile int32_t t98 = -1946726;

	t98 = (x405|(x406<=(x407/x408)));

	if (t98 != 381) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x409 = 24636LLU;
	int64_t x410 = -1LL;
	static uint32_t x412 = 420905U;
	uint64_t t99 = 629781LLU;

	t99 = (x409|(x410<=(x411/x412)));

	if (t99 != 24637LLU) { NG(); } else { ; }
	
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

