#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x22 = 101U;
int64_t x28 = -1136436260LL;
volatile uint16_t x31 = 4735U;
volatile uint16_t x32 = 966U;
int32_t x36 = INT32_MIN;
volatile int64_t x43 = -1LL;
volatile int32_t t9 = -22;
static int16_t x52 = -825;
uint32_t x54 = UINT32_MAX;
int8_t x56 = -1;
uint8_t x58 = 10U;
static volatile uint64_t x60 = 1230276944959LLU;
int64_t x64 = INT64_MIN;
uint64_t x67 = 21LLU;
static int32_t x71 = INT32_MIN;
int8_t x75 = 1;
int32_t t17 = 28182;
static uint64_t x80 = UINT64_MAX;
int32_t x83 = INT32_MAX;
static int32_t x89 = INT32_MAX;
volatile int32_t t21 = 7;
volatile uint16_t x94 = UINT16_MAX;
int32_t t22 = 0;
uint8_t x104 = 15U;
int32_t x107 = -231;
uint8_t x110 = 1U;
volatile int16_t x111 = INT16_MIN;
uint64_t x115 = 288633896588LLU;
static uint8_t x117 = 0U;
uint16_t x120 = UINT16_MAX;
int64_t x122 = -1LL;
int32_t x123 = INT32_MAX;
volatile int32_t t29 = 113;
int8_t x127 = INT8_MIN;
int32_t t30 = 14;
uint32_t x132 = UINT32_MAX;
static int32_t x133 = 7;
int16_t x141 = INT16_MAX;
static int16_t x143 = -6;
int16_t x145 = INT16_MAX;
volatile int32_t t35 = -47415646;
int8_t x152 = INT8_MIN;
volatile int8_t x156 = INT8_MIN;
volatile int32_t t37 = 3055853;
int16_t x166 = INT16_MIN;
static int8_t x172 = INT8_MAX;
volatile uint64_t x187 = 868676449543775272LLU;
static int8_t x190 = INT8_MIN;
int8_t x198 = -1;
int16_t x206 = INT16_MAX;
int64_t x209 = INT64_MIN;
volatile uint16_t x216 = 5203U;
uint64_t x221 = 3788LLU;
static uint8_t x226 = 3U;
int32_t x230 = 39844;
static int64_t x231 = 2333278958693358570LL;
static int16_t x232 = -4356;
int32_t x234 = INT32_MAX;
uint32_t x236 = UINT32_MAX;
uint32_t x238 = UINT32_MAX;
volatile uint32_t x243 = UINT32_MAX;
volatile int32_t t58 = 830;
uint8_t x259 = 3U;
static volatile uint8_t x270 = UINT8_MAX;
volatile int16_t x275 = 1769;
static int64_t x277 = -424097353572LL;
static int32_t x290 = INT32_MIN;
uint8_t x293 = 7U;
static volatile int64_t x300 = INT64_MIN;
volatile int32_t t72 = -764132540;
int8_t x303 = 22;
uint8_t x305 = UINT8_MAX;
volatile int64_t x308 = INT64_MIN;
uint32_t x310 = 14U;
uint8_t x311 = 7U;
int16_t x312 = 26;
volatile int32_t t76 = -10661887;
static int8_t x326 = INT8_MIN;
int8_t x328 = 1;
volatile int32_t t79 = -2435;
volatile int32_t t80 = -11;
volatile int8_t x334 = INT8_MIN;
volatile int32_t t81 = -830504870;
int16_t x346 = INT16_MIN;
static volatile int16_t x347 = -26;
int32_t t85 = 327843;
int8_t x364 = INT8_MIN;
int32_t t88 = -302174054;
uint16_t x372 = 21U;
static int64_t x373 = INT64_MAX;
uint64_t x374 = 180106LLU;
volatile int8_t x375 = 0;
volatile int32_t t90 = -423;
volatile int8_t x381 = INT8_MIN;
volatile int8_t x384 = -4;
int32_t x389 = INT32_MAX;
static volatile uint64_t x397 = 1833414561024987652LLU;
int16_t x404 = INT16_MAX;
int16_t x407 = 30;
volatile int8_t x411 = -1;
volatile int32_t x412 = INT32_MIN;


void f0(void) {
	int32_t x1 = -1;
	int8_t x2 = -26;
	uint16_t x3 = UINT16_MAX;
	volatile uint32_t x4 = 6582U;
	int32_t t0 = 1;

	t0 = (x1<(x2<=(x3/x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int8_t x6 = INT8_MIN;
	int8_t x7 = INT8_MAX;
	volatile int64_t x8 = INT64_MIN;
	volatile int32_t t1 = 679406;

	t1 = (x5<(x6<=(x7/x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 1LLU;
	int8_t x10 = 15;
	int32_t x11 = INT32_MAX;
	int16_t x12 = -1;
	int32_t t2 = 28378371;

	t2 = (x9<(x10<=(x11/x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	uint64_t x14 = 736121472653LLU;
	int16_t x15 = INT16_MIN;
	volatile int8_t x16 = INT8_MAX;
	int32_t t3 = -19;

	t3 = (x13<(x14<=(x15/x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	static volatile int16_t x18 = 22;
	static int8_t x19 = 29;
	static uint8_t x20 = UINT8_MAX;
	volatile int32_t t4 = -4;

	t4 = (x17<(x18<=(x19/x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 3U;
	static volatile int32_t x23 = INT32_MAX;
	uint64_t x24 = UINT64_MAX;
	volatile int32_t t5 = 14192968;

	t5 = (x21<(x22<=(x23/x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = -35;
	static uint16_t x26 = 0U;
	int64_t x27 = -22570605871506698LL;
	volatile int32_t t6 = 2945;

	t6 = (x25<(x26<=(x27/x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	volatile uint64_t x30 = UINT64_MAX;
	volatile int32_t t7 = 209;

	t7 = (x29<(x30<=(x31/x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 2;
	int64_t x34 = INT64_MAX;
	static volatile int16_t x35 = 14;
	volatile int32_t t8 = 274308847;

	t8 = (x33<(x34<=(x35/x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = -1LL;
	uint16_t x42 = 146U;
	volatile int64_t x44 = INT64_MAX;

	t9 = (x41<(x42<=(x43/x44)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MIN;
	volatile int8_t x46 = -1;
	static uint8_t x47 = UINT8_MAX;
	int64_t x48 = -24773LL;
	volatile int32_t t10 = -42507;

	t10 = (x45<(x46<=(x47/x48)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = -1;
	uint8_t x50 = 0U;
	uint16_t x51 = 429U;
	volatile int32_t t11 = 10434562;

	t11 = (x49<(x50<=(x51/x52)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = 66;
	int16_t x55 = -1;
	int32_t t12 = 1026507312;

	t12 = (x53<(x54<=(x55/x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = INT32_MIN;
	int64_t x59 = -1LL;
	volatile int32_t t13 = 1663;

	t13 = (x57<(x58<=(x59/x60)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = 236U;
	int64_t x62 = INT64_MAX;
	uint64_t x63 = 271227677708193LLU;
	volatile int32_t t14 = 1441710;

	t14 = (x61<(x62<=(x63/x64)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MAX;
	int8_t x66 = INT8_MIN;
	int32_t x68 = INT32_MAX;
	int32_t t15 = 19643119;

	t15 = (x65<(x66<=(x67/x68)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x69 = 21914998278961LLU;
	static uint64_t x70 = UINT64_MAX;
	uint64_t x72 = 2087620485651163319LLU;
	volatile int32_t t16 = 23308203;

	t16 = (x69<(x70<=(x71/x72)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = 8287151LLU;
	int16_t x74 = INT16_MIN;
	uint32_t x76 = 54339U;

	t17 = (x73<(x74<=(x75/x76)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x77 = 0;
	volatile uint32_t x78 = 31661U;
	volatile int16_t x79 = -9544;
	int32_t t18 = -14;

	t18 = (x77<(x78<=(x79/x80)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = -2589;
	static int64_t x82 = -23471LL;
	uint8_t x84 = UINT8_MAX;
	int32_t t19 = -2;

	t19 = (x81<(x82<=(x83/x84)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x85 = INT16_MIN;
	static int32_t x86 = INT32_MIN;
	uint16_t x87 = 2106U;
	volatile int32_t x88 = -95513;
	int32_t t20 = 25;

	t20 = (x85<(x86<=(x87/x88)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x90 = -5;
	uint16_t x91 = UINT16_MAX;
	static int8_t x92 = -1;

	t21 = (x89<(x90<=(x91/x92)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x93 = UINT8_MAX;
	int8_t x95 = -1;
	int64_t x96 = INT64_MIN;

	t22 = (x93<(x94<=(x95/x96)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = -1LL;
	static int32_t x98 = -498111349;
	int64_t x99 = INT64_MIN;
	volatile uint32_t x100 = 57643U;
	static int32_t t23 = 0;

	t23 = (x97<(x98<=(x99/x100)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = 7;
	int32_t x102 = -1;
	static uint8_t x103 = UINT8_MAX;
	int32_t t24 = -126791;

	t24 = (x101<(x102<=(x103/x104)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x105 = -1;
	int32_t x106 = INT32_MIN;
	static volatile uint16_t x108 = UINT16_MAX;
	static volatile int32_t t25 = 3;

	t25 = (x105<(x106<=(x107/x108)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x109 = -1;
	int64_t x112 = -3945LL;
	volatile int32_t t26 = -80146;

	t26 = (x109<(x110<=(x111/x112)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x113 = 3395U;
	int8_t x114 = INT8_MAX;
	int32_t x116 = -1;
	int32_t t27 = -1057591900;

	t27 = (x113<(x114<=(x115/x116)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x118 = 73U;
	uint16_t x119 = 92U;
	volatile int32_t t28 = -7231;

	t28 = (x117<(x118<=(x119/x120)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = INT8_MIN;
	uint64_t x124 = 4507768LLU;

	t29 = (x121<(x122<=(x123/x124)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = 2387748;
	uint16_t x126 = UINT16_MAX;
	static uint16_t x128 = UINT16_MAX;

	t30 = (x125<(x126<=(x127/x128)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = 17;
	static int32_t x130 = -3;
	uint64_t x131 = 64188495LLU;
	volatile int32_t t31 = 779754;

	t31 = (x129<(x130<=(x131/x132)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x134 = -1374;
	int32_t x135 = INT32_MIN;
	uint32_t x136 = 27000556U;
	static int32_t t32 = -165027007;

	t32 = (x133<(x134<=(x135/x136)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x137 = -1;
	volatile uint8_t x138 = 0U;
	uint64_t x139 = 6281762474942528LLU;
	int8_t x140 = 1;
	int32_t t33 = 5408454;

	t33 = (x137<(x138<=(x139/x140)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x142 = 114U;
	int32_t x144 = INT32_MIN;
	volatile int32_t t34 = 1537904;

	t34 = (x141<(x142<=(x143/x144)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x146 = INT64_MIN;
	int8_t x147 = -1;
	int64_t x148 = 49915LL;

	t35 = (x145<(x146<=(x147/x148)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x149 = 178731531261637LLU;
	volatile int16_t x150 = INT16_MAX;
	uint64_t x151 = UINT64_MAX;
	int32_t t36 = 8132735;

	t36 = (x149<(x150<=(x151/x152)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x153 = -3;
	static int8_t x154 = 3;
	int16_t x155 = 21;

	t37 = (x153<(x154<=(x155/x156)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x157 = 371963888924562LLU;
	int16_t x158 = INT16_MAX;
	static int16_t x159 = -13;
	volatile uint32_t x160 = 3U;
	volatile int32_t t38 = -83213341;

	t38 = (x157<(x158<=(x159/x160)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x165 = -28;
	int64_t x167 = -266LL;
	static int64_t x168 = INT64_MIN;
	static volatile int32_t t39 = 19;

	t39 = (x165<(x166<=(x167/x168)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = -17LL;
	uint64_t x170 = 335233228772289427LLU;
	static int16_t x171 = INT16_MAX;
	static int32_t t40 = -8;

	t40 = (x169<(x170<=(x171/x172)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = 7186137692277LL;
	static int64_t x174 = -1LL;
	int64_t x175 = 51554371457223505LL;
	static int32_t x176 = -1;
	static volatile int32_t t41 = 0;

	t41 = (x173<(x174<=(x175/x176)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x177 = -2412;
	static volatile int16_t x178 = INT16_MIN;
	static int16_t x179 = -1;
	uint8_t x180 = 117U;
	static volatile int32_t t42 = -5422;

	t42 = (x177<(x178<=(x179/x180)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x181 = 1;
	int8_t x182 = -1;
	int8_t x183 = -1;
	volatile int64_t x184 = INT64_MIN;
	static volatile int32_t t43 = 53437768;

	t43 = (x181<(x182<=(x183/x184)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = INT16_MIN;
	int16_t x186 = -14253;
	uint16_t x188 = 8199U;
	int32_t t44 = 317854666;

	t44 = (x185<(x186<=(x187/x188)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x189 = -1;
	uint32_t x191 = 2U;
	int32_t x192 = INT32_MIN;
	volatile int32_t t45 = 442;

	t45 = (x189<(x190<=(x191/x192)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x193 = -1;
	int32_t x194 = -1;
	uint64_t x195 = UINT64_MAX;
	volatile int8_t x196 = INT8_MIN;
	int32_t t46 = -24172775;

	t46 = (x193<(x194<=(x195/x196)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x197 = UINT8_MAX;
	uint8_t x199 = UINT8_MAX;
	int16_t x200 = INT16_MAX;
	volatile int32_t t47 = -1586447;

	t47 = (x197<(x198<=(x199/x200)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = -368814;
	static int32_t x202 = INT32_MIN;
	uint32_t x203 = UINT32_MAX;
	int32_t x204 = INT32_MAX;
	static int32_t t48 = -3847292;

	t48 = (x201<(x202<=(x203/x204)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x205 = UINT32_MAX;
	int64_t x207 = -16LL;
	int16_t x208 = INT16_MIN;
	int32_t t49 = -12;

	t49 = (x205<(x206<=(x207/x208)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x210 = -1;
	uint32_t x211 = UINT32_MAX;
	uint32_t x212 = 8046214U;
	int32_t t50 = -1;

	t50 = (x209<(x210<=(x211/x212)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x213 = 2246;
	uint32_t x214 = UINT32_MAX;
	int32_t x215 = INT32_MIN;
	int32_t t51 = -513029721;

	t51 = (x213<(x214<=(x215/x216)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x217 = INT64_MIN;
	int8_t x218 = -1;
	int16_t x219 = -74;
	static volatile int32_t x220 = INT32_MIN;
	static int32_t t52 = -1;

	t52 = (x217<(x218<=(x219/x220)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x222 = -1LL;
	uint16_t x223 = UINT16_MAX;
	int16_t x224 = -165;
	volatile int32_t t53 = 25116;

	t53 = (x221<(x222<=(x223/x224)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x225 = -416;
	volatile int16_t x227 = INT16_MAX;
	int16_t x228 = -1;
	volatile int32_t t54 = 1;

	t54 = (x225<(x226<=(x227/x228)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x229 = -10;
	int32_t t55 = 784923;

	t55 = (x229<(x230<=(x231/x232)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x233 = 382946;
	uint32_t x235 = UINT32_MAX;
	volatile int32_t t56 = 192;

	t56 = (x233<(x234<=(x235/x236)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x237 = 143U;
	uint16_t x239 = 3121U;
	uint32_t x240 = UINT32_MAX;
	volatile int32_t t57 = 4149294;

	t57 = (x237<(x238<=(x239/x240)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x241 = UINT64_MAX;
	static uint8_t x242 = 4U;
	uint8_t x244 = UINT8_MAX;

	t58 = (x241<(x242<=(x243/x244)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x245 = 4U;
	int32_t x246 = INT32_MIN;
	uint32_t x247 = UINT32_MAX;
	uint8_t x248 = 118U;
	int32_t t59 = -52204151;

	t59 = (x245<(x246<=(x247/x248)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x249 = INT8_MIN;
	static int8_t x250 = -7;
	int64_t x251 = INT64_MIN;
	uint64_t x252 = UINT64_MAX;
	int32_t t60 = -1325;

	t60 = (x249<(x250<=(x251/x252)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x253 = -1;
	int64_t x254 = INT64_MAX;
	volatile uint8_t x255 = 0U;
	int64_t x256 = 53331507927047LL;
	volatile int32_t t61 = 0;

	t61 = (x253<(x254<=(x255/x256)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x257 = INT64_MIN;
	int8_t x258 = -1;
	int16_t x260 = -1;
	int32_t t62 = 77;

	t62 = (x257<(x258<=(x259/x260)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x261 = -1;
	uint64_t x262 = 5834LLU;
	int8_t x263 = INT8_MIN;
	uint64_t x264 = UINT64_MAX;
	int32_t t63 = -27;

	t63 = (x261<(x262<=(x263/x264)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x265 = INT16_MIN;
	int64_t x266 = INT64_MIN;
	uint16_t x267 = 0U;
	int64_t x268 = INT64_MAX;
	static volatile int32_t t64 = -364;

	t64 = (x265<(x266<=(x267/x268)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x269 = -1LL;
	int8_t x271 = -13;
	int16_t x272 = INT16_MAX;
	int32_t t65 = 7777802;

	t65 = (x269<(x270<=(x271/x272)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x273 = INT32_MAX;
	uint32_t x274 = UINT32_MAX;
	int8_t x276 = -29;
	int32_t t66 = 12;

	t66 = (x273<(x274<=(x275/x276)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x278 = -1LL;
	static int16_t x279 = -1;
	int64_t x280 = INT64_MAX;
	int32_t t67 = 2830;

	t67 = (x277<(x278<=(x279/x280)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x281 = 762672283LLU;
	int16_t x282 = -891;
	uint8_t x283 = UINT8_MAX;
	int16_t x284 = 1501;
	volatile int32_t t68 = 366;

	t68 = (x281<(x282<=(x283/x284)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x285 = UINT8_MAX;
	volatile uint16_t x286 = UINT16_MAX;
	uint8_t x287 = 63U;
	static int16_t x288 = -1;
	int32_t t69 = 1;

	t69 = (x285<(x286<=(x287/x288)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x289 = 706U;
	static int16_t x291 = INT16_MAX;
	static int64_t x292 = INT64_MAX;
	int32_t t70 = -530507;

	t70 = (x289<(x290<=(x291/x292)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x294 = 58440875950465LL;
	static int64_t x295 = INT64_MIN;
	int64_t x296 = INT64_MAX;
	volatile int32_t t71 = 796;

	t71 = (x293<(x294<=(x295/x296)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x297 = 2U;
	int32_t x298 = INT32_MIN;
	uint16_t x299 = 47U;

	t72 = (x297<(x298<=(x299/x300)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x301 = 39765969;
	uint8_t x302 = 1U;
	static int16_t x304 = -1;
	volatile int32_t t73 = 106;

	t73 = (x301<(x302<=(x303/x304)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x306 = INT16_MIN;
	uint32_t x307 = UINT32_MAX;
	int32_t t74 = -12371950;

	t74 = (x305<(x306<=(x307/x308)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x309 = 3719U;
	int32_t t75 = 79052;

	t75 = (x309<(x310<=(x311/x312)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x313 = INT32_MIN;
	volatile uint64_t x314 = UINT64_MAX;
	int16_t x315 = INT16_MIN;
	uint16_t x316 = 3633U;

	t76 = (x313<(x314<=(x315/x316)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x317 = -626562LL;
	uint64_t x318 = 895LLU;
	uint32_t x319 = 5766938U;
	static int16_t x320 = INT16_MIN;
	volatile int32_t t77 = -26833;

	t77 = (x317<(x318<=(x319/x320)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x321 = 13;
	uint64_t x322 = UINT64_MAX;
	int8_t x323 = INT8_MIN;
	volatile int64_t x324 = INT64_MIN;
	static volatile int32_t t78 = 663687;

	t78 = (x321<(x322<=(x323/x324)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x325 = -2;
	static int16_t x327 = -1;

	t79 = (x325<(x326<=(x327/x328)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x329 = -1;
	int64_t x330 = 92970LL;
	static uint16_t x331 = 24869U;
	static volatile uint8_t x332 = 1U;

	t80 = (x329<(x330<=(x331/x332)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x333 = 31U;
	int32_t x335 = INT32_MIN;
	static uint16_t x336 = UINT16_MAX;

	t81 = (x333<(x334<=(x335/x336)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x337 = 19546U;
	int64_t x338 = INT64_MIN;
	static uint64_t x339 = 93020LLU;
	static int8_t x340 = INT8_MIN;
	volatile int32_t t82 = -1637821;

	t82 = (x337<(x338<=(x339/x340)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x341 = INT8_MAX;
	volatile int64_t x342 = INT64_MIN;
	uint32_t x343 = 14609U;
	int32_t x344 = INT32_MAX;
	volatile int32_t t83 = 4282089;

	t83 = (x341<(x342<=(x343/x344)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x345 = -1;
	int32_t x348 = INT32_MIN;
	static volatile int32_t t84 = 10;

	t84 = (x345<(x346<=(x347/x348)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x349 = 406LLU;
	uint64_t x350 = 3539607096773454LLU;
	static int32_t x351 = INT32_MAX;
	uint32_t x352 = 2591U;

	t85 = (x349<(x350<=(x351/x352)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x353 = 9U;
	int16_t x354 = 1;
	static uint16_t x355 = 779U;
	static uint16_t x356 = 342U;
	int32_t t86 = -14599524;

	t86 = (x353<(x354<=(x355/x356)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x361 = INT16_MIN;
	volatile int8_t x362 = INT8_MIN;
	volatile int32_t x363 = INT32_MAX;
	int32_t t87 = 0;

	t87 = (x361<(x362<=(x363/x364)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x365 = INT32_MIN;
	static int32_t x366 = INT32_MIN;
	int8_t x367 = INT8_MIN;
	uint16_t x368 = 7U;

	t88 = (x365<(x366<=(x367/x368)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x369 = INT32_MIN;
	int32_t x370 = INT32_MIN;
	int32_t x371 = -1;
	volatile int32_t t89 = 1061321387;

	t89 = (x369<(x370<=(x371/x372)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x376 = INT8_MIN;

	t90 = (x373<(x374<=(x375/x376)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x377 = INT32_MIN;
	static uint8_t x378 = UINT8_MAX;
	int32_t x379 = -1;
	static volatile int64_t x380 = INT64_MAX;
	int32_t t91 = -2343;

	t91 = (x377<(x378<=(x379/x380)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x382 = 154318665;
	volatile uint16_t x383 = 4U;
	static int32_t t92 = 774818;

	t92 = (x381<(x382<=(x383/x384)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x385 = -1;
	static int64_t x386 = -277565244020LL;
	int32_t x387 = INT32_MIN;
	uint32_t x388 = 9649U;
	static int32_t t93 = 44941;

	t93 = (x385<(x386<=(x387/x388)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x390 = 772393LL;
	volatile int64_t x391 = -719LL;
	volatile uint64_t x392 = 651522500440LLU;
	volatile int32_t t94 = -53;

	t94 = (x389<(x390<=(x391/x392)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x393 = -1;
	uint16_t x394 = 43U;
	uint32_t x395 = 1684782676U;
	int64_t x396 = 10725086267LL;
	static int32_t t95 = 18655645;

	t95 = (x393<(x394<=(x395/x396)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x398 = 583U;
	int32_t x399 = -1;
	uint64_t x400 = 51072LLU;
	int32_t t96 = -78;

	t96 = (x397<(x398<=(x399/x400)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x401 = 29U;
	int32_t x402 = -6037815;
	uint16_t x403 = 396U;
	volatile int32_t t97 = 3;

	t97 = (x401<(x402<=(x403/x404)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x405 = UINT16_MAX;
	volatile int16_t x406 = 1;
	uint64_t x408 = UINT64_MAX;
	static volatile int32_t t98 = 1;

	t98 = (x405<(x406<=(x407/x408)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x409 = 11U;
	static int16_t x410 = 35;
	static int32_t t99 = 184;

	t99 = (x409<(x410<=(x411/x412)));

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

