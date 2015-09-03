#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x10 = UINT8_MAX;
uint64_t x12 = UINT64_MAX;
volatile int32_t x17 = INT32_MIN;
int32_t t3 = -111606;
uint8_t x22 = UINT8_MAX;
volatile int8_t x25 = INT8_MIN;
uint16_t x31 = 23370U;
uint16_t x42 = 2790U;
int16_t x49 = -1;
int64_t x51 = INT64_MIN;
volatile int32_t t11 = 104394046;
static int64_t x64 = -2903365872242LL;
int32_t t13 = -1;
volatile int64_t x72 = 7436206904LL;
uint64_t x78 = 54475346891428869LLU;
int8_t x84 = INT8_MIN;
static int8_t x88 = INT8_MAX;
int8_t x89 = INT8_MIN;
int32_t x93 = -1;
int8_t x95 = -1;
volatile int32_t t21 = 1070810900;
uint16_t x101 = 12171U;
uint16_t x102 = 10U;
static int32_t t23 = 4781;
uint64_t x109 = 294072LLU;
static int8_t x117 = INT8_MIN;
int8_t x122 = INT8_MIN;
volatile int32_t t27 = -7444846;
volatile uint64_t x126 = UINT64_MAX;
uint64_t x127 = UINT64_MAX;
volatile int32_t t29 = -224697;
int16_t x133 = INT16_MIN;
volatile int32_t x134 = -1;
volatile int32_t t33 = -19379446;
volatile int32_t x149 = INT32_MAX;
int32_t x150 = INT32_MIN;
static volatile int8_t x152 = INT8_MIN;
volatile int32_t t34 = -5;
volatile int32_t x154 = INT32_MAX;
static int32_t t35 = 1;
uint64_t x158 = 469843589434LLU;
uint32_t x159 = UINT32_MAX;
uint16_t x172 = 30651U;
int8_t x177 = INT8_MIN;
static int16_t x180 = INT16_MIN;
uint64_t x187 = 1LLU;
int64_t x188 = INT64_MIN;
volatile int32_t x191 = INT32_MIN;
int32_t t42 = 34;
uint64_t x201 = UINT64_MAX;
int32_t t44 = -249015231;
static uint64_t x211 = 601304200271LLU;
uint32_t x216 = 1525092747U;
static int32_t t48 = 4;
static int64_t x226 = INT64_MIN;
static uint64_t x232 = 3397140383987497LLU;
volatile int16_t x242 = INT16_MAX;
int8_t x243 = INT8_MAX;
volatile int16_t x244 = INT16_MAX;
uint16_t x257 = 2U;
volatile int32_t t57 = 12334620;
volatile int32_t t58 = 1;
int32_t x266 = 1431563;
int8_t x276 = -1;
volatile int32_t t61 = -15522738;
int8_t x288 = INT8_MIN;
int32_t t63 = -199522;
int64_t x296 = 4602020372386LL;
volatile uint64_t x298 = 492036606LLU;
int8_t x299 = INT8_MIN;
int32_t t67 = 273;
int64_t x305 = INT64_MIN;
volatile int64_t x309 = INT64_MAX;
static int8_t x311 = 0;
volatile int8_t x322 = -1;
int8_t x326 = -1;
uint16_t x328 = 122U;
volatile uint8_t x329 = 100U;
static uint16_t x330 = UINT16_MAX;
int32_t t72 = 14;
uint8_t x337 = 17U;
static int16_t x340 = INT16_MAX;
int16_t x345 = INT16_MIN;
int8_t x348 = -23;
volatile int16_t x349 = INT16_MIN;
volatile int32_t x353 = -1;
static int32_t x365 = -1;
uint16_t x366 = UINT16_MAX;
static uint32_t x371 = 513709066U;
int32_t x379 = -1;
volatile int32_t t84 = 91692;
static volatile int64_t x383 = INT64_MIN;
int8_t x387 = INT8_MAX;
volatile int32_t t86 = -46842262;
int32_t x396 = -88;
uint8_t x399 = 8U;
int16_t x401 = -1745;
int16_t x403 = INT16_MAX;
int8_t x414 = INT8_MAX;
volatile int32_t t93 = -1790989;
int32_t x421 = INT32_MIN;
static uint64_t x423 = UINT64_MAX;
int8_t x430 = -55;
uint64_t x433 = 3665454678970LLU;
int64_t x435 = -1LL;
volatile int32_t t99 = 12721;


void f0(void) {
	static int16_t x5 = -1009;
	int16_t x6 = INT16_MIN;
	uint32_t x7 = UINT32_MAX;
	int16_t x8 = -1;
	volatile int32_t t0 = 13580358;

	t0 = (x5<(x6<=(x7-x8)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int32_t x9 = 0;
	static int64_t x11 = INT64_MAX;
	static int32_t t1 = 466;

	t1 = (x9<(x10<=(x11-x12)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = 2184LL;
	int16_t x14 = -7;
	int64_t x15 = 908325740LL;
	int64_t x16 = -1LL;
	volatile int32_t t2 = -29;

	t2 = (x13<(x14<=(x15-x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x18 = UINT64_MAX;
	volatile int8_t x19 = -1;
	volatile int8_t x20 = -61;

	t3 = (x17<(x18<=(x19-x20)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x21 = 151;
	uint8_t x23 = 0U;
	static uint8_t x24 = 35U;
	volatile int32_t t4 = 1;

	t4 = (x21<(x22<=(x23-x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x26 = -1LL;
	int8_t x27 = 12;
	uint16_t x28 = UINT16_MAX;
	int32_t t5 = -2444184;

	t5 = (x25<(x26<=(x27-x28)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = 0U;
	int8_t x30 = -19;
	static int32_t x32 = 1;
	volatile int32_t t6 = 65926;

	t6 = (x29<(x30<=(x31-x32)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x33 = UINT8_MAX;
	uint16_t x34 = 4128U;
	static uint64_t x35 = 7549LLU;
	uint64_t x36 = UINT64_MAX;
	static volatile int32_t t7 = -93546194;

	t7 = (x33<(x34<=(x35-x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = 10U;
	int16_t x38 = INT16_MAX;
	int16_t x39 = INT16_MAX;
	int8_t x40 = -1;
	volatile int32_t t8 = 2586;

	t8 = (x37<(x38<=(x39-x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MIN;
	static uint32_t x43 = UINT32_MAX;
	uint16_t x44 = 120U;
	int32_t t9 = 2493;

	t9 = (x41<(x42<=(x43-x44)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x45 = INT16_MIN;
	volatile int32_t x46 = 27155747;
	uint8_t x47 = 14U;
	int8_t x48 = 13;
	int32_t t10 = 1;

	t10 = (x45<(x46<=(x47-x48)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x50 = 0;
	int64_t x52 = -1LL;

	t11 = (x49<(x50<=(x51-x52)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = -806151105920883LL;
	volatile int64_t x58 = 0LL;
	uint16_t x59 = 243U;
	static int8_t x60 = INT8_MIN;
	volatile int32_t t12 = 0;

	t12 = (x57<(x58<=(x59-x60)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x61 = -1LL;
	int16_t x62 = 2;
	int32_t x63 = -64811140;

	t13 = (x61<(x62<=(x63-x64)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x65 = UINT64_MAX;
	static uint16_t x66 = 0U;
	int16_t x67 = INT16_MIN;
	static volatile int32_t x68 = INT32_MIN;
	volatile int32_t t14 = 1967;

	t14 = (x65<(x66<=(x67-x68)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x69 = 1;
	static int64_t x70 = 34739LL;
	int8_t x71 = INT8_MIN;
	volatile int32_t t15 = -3740776;

	t15 = (x69<(x70<=(x71-x72)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x73 = 1;
	uint16_t x74 = 22166U;
	int64_t x75 = -1LL;
	int64_t x76 = 75LL;
	int32_t t16 = 11604;

	t16 = (x73<(x74<=(x75-x76)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x77 = -1;
	static volatile int32_t x79 = INT32_MIN;
	static int8_t x80 = INT8_MIN;
	int32_t t17 = -25;

	t17 = (x77<(x78<=(x79-x80)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x81 = 0U;
	uint16_t x82 = 28631U;
	static volatile int32_t x83 = -3;
	volatile int32_t t18 = 22778667;

	t18 = (x81<(x82<=(x83-x84)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = 4;
	static volatile uint64_t x86 = UINT64_MAX;
	int64_t x87 = -27LL;
	int32_t t19 = -59782590;

	t19 = (x85<(x86<=(x87-x88)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x90 = 4526373914LL;
	int8_t x91 = INT8_MAX;
	int16_t x92 = INT16_MIN;
	volatile int32_t t20 = 7;

	t20 = (x89<(x90<=(x91-x92)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x94 = INT64_MIN;
	int16_t x96 = -1;

	t21 = (x93<(x94<=(x95-x96)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x103 = 2U;
	uint16_t x104 = UINT16_MAX;
	static volatile int32_t t22 = -16298430;

	t22 = (x101<(x102<=(x103-x104)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x105 = -12;
	volatile int8_t x106 = -6;
	int16_t x107 = INT16_MIN;
	int32_t x108 = 83142;

	t23 = (x105<(x106<=(x107-x108)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x110 = INT16_MIN;
	int32_t x111 = -207879199;
	volatile int8_t x112 = 1;
	volatile int32_t t24 = 0;

	t24 = (x109<(x110<=(x111-x112)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x113 = 771LL;
	int32_t x114 = INT32_MAX;
	int8_t x115 = INT8_MIN;
	int16_t x116 = -1;
	volatile int32_t t25 = -463302805;

	t25 = (x113<(x114<=(x115-x116)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x118 = UINT16_MAX;
	int8_t x119 = INT8_MIN;
	int16_t x120 = -1;
	static volatile int32_t t26 = -59912;

	t26 = (x117<(x118<=(x119-x120)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x121 = INT8_MAX;
	uint64_t x123 = UINT64_MAX;
	int16_t x124 = 17;

	t27 = (x121<(x122<=(x123-x124)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x125 = 1159189924LLU;
	int64_t x128 = INT64_MIN;
	static volatile int32_t t28 = 1798;

	t28 = (x125<(x126<=(x127-x128)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x129 = -1;
	volatile int32_t x130 = 6363;
	int16_t x131 = -1;
	static int8_t x132 = INT8_MIN;

	t29 = (x129<(x130<=(x131-x132)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x135 = -485628457;
	uint16_t x136 = 7U;
	int32_t t30 = -3;

	t30 = (x133<(x134<=(x135-x136)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x137 = INT16_MIN;
	int32_t x138 = INT32_MAX;
	uint8_t x139 = 52U;
	static uint64_t x140 = 62096138001314656LLU;
	volatile int32_t t31 = -2765160;

	t31 = (x137<(x138<=(x139-x140)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x141 = 116U;
	static uint32_t x142 = 423997U;
	volatile int32_t x143 = -16017167;
	int8_t x144 = 26;
	int32_t t32 = 0;

	t32 = (x141<(x142<=(x143-x144)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = 47;
	int64_t x146 = INT64_MIN;
	volatile uint16_t x147 = 2317U;
	volatile int16_t x148 = -1;

	t33 = (x145<(x146<=(x147-x148)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x151 = 1691615LLU;

	t34 = (x149<(x150<=(x151-x152)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x153 = INT32_MIN;
	int8_t x155 = INT8_MAX;
	int8_t x156 = -15;

	t35 = (x153<(x154<=(x155-x156)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x157 = INT16_MIN;
	volatile int32_t x160 = INT32_MIN;
	static volatile int32_t t36 = 7822788;

	t36 = (x157<(x158<=(x159-x160)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x165 = 13575LLU;
	int32_t x166 = INT32_MIN;
	uint16_t x167 = 3014U;
	static volatile int8_t x168 = INT8_MAX;
	int32_t t37 = 11;

	t37 = (x165<(x166<=(x167-x168)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x169 = 48U;
	int8_t x170 = -4;
	static uint64_t x171 = UINT64_MAX;
	int32_t t38 = -174248827;

	t38 = (x169<(x170<=(x171-x172)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x178 = 3;
	int8_t x179 = -1;
	volatile int32_t t39 = -351126;

	t39 = (x177<(x178<=(x179-x180)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x185 = INT64_MAX;
	static uint64_t x186 = 4213104743615858LLU;
	volatile int32_t t40 = 55292288;

	t40 = (x185<(x186<=(x187-x188)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x189 = INT16_MIN;
	static int8_t x190 = INT8_MIN;
	volatile uint32_t x192 = UINT32_MAX;
	int32_t t41 = 151273;

	t41 = (x189<(x190<=(x191-x192)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x193 = INT8_MIN;
	int64_t x194 = INT64_MIN;
	int8_t x195 = INT8_MAX;
	uint16_t x196 = 1942U;

	t42 = (x193<(x194<=(x195-x196)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint8_t x197 = 1U;
	int32_t x198 = 5822492;
	static int8_t x199 = -1;
	uint8_t x200 = UINT8_MAX;
	int32_t t43 = -1;

	t43 = (x197<(x198<=(x199-x200)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x202 = 3U;
	uint64_t x203 = 2299LLU;
	static int16_t x204 = -249;

	t44 = (x201<(x202<=(x203-x204)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x205 = 105U;
	static volatile uint64_t x206 = UINT64_MAX;
	static int64_t x207 = INT64_MIN;
	static uint64_t x208 = UINT64_MAX;
	volatile int32_t t45 = 1;

	t45 = (x205<(x206<=(x207-x208)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x209 = INT64_MIN;
	uint8_t x210 = 10U;
	uint16_t x212 = 14401U;
	volatile int32_t t46 = -5524333;

	t46 = (x209<(x210<=(x211-x212)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x213 = INT16_MIN;
	static uint16_t x214 = 95U;
	volatile int32_t x215 = -562;
	volatile int32_t t47 = -653497;

	t47 = (x213<(x214<=(x215-x216)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x217 = UINT64_MAX;
	int32_t x218 = INT32_MAX;
	int32_t x219 = INT32_MAX;
	uint32_t x220 = UINT32_MAX;

	t48 = (x217<(x218<=(x219-x220)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x221 = INT8_MIN;
	int16_t x222 = INT16_MIN;
	int64_t x223 = INT64_MIN;
	int8_t x224 = INT8_MIN;
	volatile int32_t t49 = 247136;

	t49 = (x221<(x222<=(x223-x224)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x225 = -1;
	uint8_t x227 = 1U;
	static int8_t x228 = -19;
	int32_t t50 = -288325924;

	t50 = (x225<(x226<=(x227-x228)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x229 = INT8_MAX;
	uint32_t x230 = 16631605U;
	int8_t x231 = 4;
	volatile int32_t t51 = 186;

	t51 = (x229<(x230<=(x231-x232)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x233 = INT64_MIN;
	int8_t x234 = 1;
	uint32_t x235 = 1U;
	static uint64_t x236 = 2821LLU;
	int32_t t52 = 17143940;

	t52 = (x233<(x234<=(x235-x236)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x237 = INT64_MIN;
	int8_t x238 = -2;
	uint32_t x239 = 889655U;
	volatile uint32_t x240 = UINT32_MAX;
	int32_t t53 = 458;

	t53 = (x237<(x238<=(x239-x240)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x241 = -9;
	volatile int32_t t54 = 7588;

	t54 = (x241<(x242<=(x243-x244)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x249 = INT64_MAX;
	volatile int64_t x250 = -1LL;
	static int16_t x251 = INT16_MIN;
	int64_t x252 = -1LL;
	volatile int32_t t55 = -10;

	t55 = (x249<(x250<=(x251-x252)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x253 = UINT16_MAX;
	static uint8_t x254 = UINT8_MAX;
	int16_t x255 = 104;
	int8_t x256 = INT8_MIN;
	static int32_t t56 = 488;

	t56 = (x253<(x254<=(x255-x256)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x258 = 401019186850320496LL;
	int32_t x259 = 0;
	int8_t x260 = INT8_MIN;

	t57 = (x257<(x258<=(x259-x260)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x261 = UINT32_MAX;
	volatile uint64_t x262 = 5744436396527044LLU;
	volatile int8_t x263 = INT8_MIN;
	uint8_t x264 = UINT8_MAX;

	t58 = (x261<(x262<=(x263-x264)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x265 = 31;
	static int8_t x267 = INT8_MIN;
	int64_t x268 = INT64_MIN;
	static volatile int32_t t59 = 142935;

	t59 = (x265<(x266<=(x267-x268)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x269 = UINT64_MAX;
	static int16_t x270 = -3;
	uint32_t x271 = UINT32_MAX;
	static volatile uint8_t x272 = 79U;
	int32_t t60 = 14266393;

	t60 = (x269<(x270<=(x271-x272)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x273 = -1;
	volatile int64_t x274 = INT64_MAX;
	int8_t x275 = -11;

	t61 = (x273<(x274<=(x275-x276)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x277 = INT16_MIN;
	int16_t x278 = INT16_MIN;
	int64_t x279 = INT64_MAX;
	int16_t x280 = INT16_MAX;
	int32_t t62 = 58189;

	t62 = (x277<(x278<=(x279-x280)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x285 = 1U;
	uint64_t x286 = 3LLU;
	int16_t x287 = INT16_MIN;

	t63 = (x285<(x286<=(x287-x288)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x289 = INT64_MAX;
	volatile int32_t x290 = INT32_MIN;
	int8_t x291 = INT8_MAX;
	volatile uint8_t x292 = 3U;
	static int32_t t64 = 1;

	t64 = (x289<(x290<=(x291-x292)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x293 = INT16_MAX;
	uint32_t x294 = 21U;
	volatile int64_t x295 = 71LL;
	int32_t t65 = 9;

	t65 = (x293<(x294<=(x295-x296)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x297 = 82014890421LL;
	static int8_t x300 = INT8_MIN;
	volatile int32_t t66 = -56217;

	t66 = (x297<(x298<=(x299-x300)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x301 = -1;
	volatile int8_t x302 = -3;
	static int64_t x303 = -15307806879LL;
	uint32_t x304 = 646U;

	t67 = (x301<(x302<=(x303-x304)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x306 = UINT8_MAX;
	int32_t x307 = -1659150;
	uint16_t x308 = 4045U;
	volatile int32_t t68 = 13651;

	t68 = (x305<(x306<=(x307-x308)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x310 = INT8_MAX;
	uint64_t x312 = 887718310739789605LLU;
	volatile int32_t t69 = 3862;

	t69 = (x309<(x310<=(x311-x312)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x321 = 7U;
	int16_t x323 = INT16_MIN;
	int8_t x324 = -8;
	volatile int32_t t70 = 3;

	t70 = (x321<(x322<=(x323-x324)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x325 = INT16_MAX;
	int32_t x327 = INT32_MAX;
	static int32_t t71 = 88873;

	t71 = (x325<(x326<=(x327-x328)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x331 = INT32_MIN;
	uint64_t x332 = UINT64_MAX;

	t72 = (x329<(x330<=(x331-x332)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x333 = -1783233131LL;
	uint64_t x334 = 159822LLU;
	uint8_t x335 = UINT8_MAX;
	int32_t x336 = -1;
	int32_t t73 = -2147938;

	t73 = (x333<(x334<=(x335-x336)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x338 = 11407122;
	volatile uint64_t x339 = UINT64_MAX;
	volatile int32_t t74 = -2336134;

	t74 = (x337<(x338<=(x339-x340)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x341 = 382612671514332164LLU;
	int32_t x342 = INT32_MAX;
	static uint16_t x343 = 3490U;
	volatile uint8_t x344 = 1U;
	int32_t t75 = 3500;

	t75 = (x341<(x342<=(x343-x344)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x346 = -50953;
	static volatile uint16_t x347 = UINT16_MAX;
	volatile int32_t t76 = 118749853;

	t76 = (x345<(x346<=(x347-x348)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x350 = 863855274U;
	uint16_t x351 = UINT16_MAX;
	int16_t x352 = INT16_MIN;
	volatile int32_t t77 = 5;

	t77 = (x349<(x350<=(x351-x352)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x354 = 27179;
	static int32_t x355 = -38340397;
	volatile uint32_t x356 = 2873821U;
	int32_t t78 = -2675158;

	t78 = (x353<(x354<=(x355-x356)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x357 = INT32_MAX;
	int8_t x358 = INT8_MIN;
	volatile uint32_t x359 = 299913266U;
	int32_t x360 = INT32_MAX;
	int32_t t79 = 97;

	t79 = (x357<(x358<=(x359-x360)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x361 = 106440455U;
	volatile uint16_t x362 = UINT16_MAX;
	int16_t x363 = INT16_MIN;
	volatile int64_t x364 = 3307083049LL;
	int32_t t80 = -566;

	t80 = (x361<(x362<=(x363-x364)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x367 = INT8_MIN;
	static volatile int32_t x368 = INT32_MIN;
	volatile int32_t t81 = 8521;

	t81 = (x365<(x366<=(x367-x368)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x369 = INT32_MAX;
	int16_t x370 = INT16_MIN;
	int8_t x372 = -23;
	static volatile int32_t t82 = 4083;

	t82 = (x369<(x370<=(x371-x372)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x373 = INT32_MIN;
	int8_t x374 = INT8_MIN;
	uint16_t x375 = UINT16_MAX;
	uint64_t x376 = 5965288617751LLU;
	volatile int32_t t83 = -216995;

	t83 = (x373<(x374<=(x375-x376)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x377 = INT8_MIN;
	static volatile int16_t x378 = INT16_MIN;
	volatile int64_t x380 = INT64_MIN;

	t84 = (x377<(x378<=(x379-x380)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x381 = UINT8_MAX;
	int64_t x382 = INT64_MIN;
	static int32_t x384 = INT32_MIN;
	static volatile int32_t t85 = 459683528;

	t85 = (x381<(x382<=(x383-x384)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x385 = 1;
	int16_t x386 = -134;
	static uint8_t x388 = 0U;

	t86 = (x385<(x386<=(x387-x388)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x389 = -1;
	static int32_t x390 = INT32_MAX;
	volatile int64_t x391 = INT64_MIN;
	int8_t x392 = INT8_MIN;
	int32_t t87 = -1921183;

	t87 = (x389<(x390<=(x391-x392)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x393 = INT16_MIN;
	volatile int32_t x394 = INT32_MAX;
	static int8_t x395 = INT8_MIN;
	int32_t t88 = -24733680;

	t88 = (x393<(x394<=(x395-x396)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x397 = 22599007U;
	int64_t x398 = INT64_MIN;
	static int16_t x400 = 452;
	volatile int32_t t89 = -2516;

	t89 = (x397<(x398<=(x399-x400)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x402 = -1;
	int8_t x404 = 37;
	volatile int32_t t90 = -6668357;

	t90 = (x401<(x402<=(x403-x404)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x405 = INT64_MAX;
	int64_t x406 = 44700136920LL;
	uint16_t x407 = 30U;
	static uint8_t x408 = 3U;
	static int32_t t91 = 64713891;

	t91 = (x405<(x406<=(x407-x408)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x409 = 6795366398076281LL;
	uint32_t x410 = UINT32_MAX;
	int32_t x411 = -1;
	uint64_t x412 = 495659LLU;
	static int32_t t92 = 510133920;

	t92 = (x409<(x410<=(x411-x412)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x413 = 8279;
	uint16_t x415 = UINT16_MAX;
	int8_t x416 = 0;

	t93 = (x413<(x414<=(x415-x416)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x417 = INT64_MAX;
	static int32_t x418 = INT32_MAX;
	int32_t x419 = -1;
	static volatile uint16_t x420 = UINT16_MAX;
	int32_t t94 = 126590717;

	t94 = (x417<(x418<=(x419-x420)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x422 = 59512662LL;
	int16_t x424 = INT16_MAX;
	volatile int32_t t95 = -400;

	t95 = (x421<(x422<=(x423-x424)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x425 = INT16_MIN;
	int16_t x426 = -1;
	int8_t x427 = -1;
	int16_t x428 = INT16_MAX;
	volatile int32_t t96 = -32397050;

	t96 = (x425<(x426<=(x427-x428)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x429 = -39;
	static uint8_t x431 = 1U;
	int8_t x432 = INT8_MAX;
	volatile int32_t t97 = 5850;

	t97 = (x429<(x430<=(x431-x432)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x434 = INT32_MAX;
	int8_t x436 = 2;
	static int32_t t98 = 15569;

	t98 = (x433<(x434<=(x435-x436)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x437 = INT64_MIN;
	static int8_t x438 = INT8_MIN;
	volatile int32_t x439 = INT32_MIN;
	int16_t x440 = INT16_MIN;

	t99 = (x437<(x438<=(x439-x440)));

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

