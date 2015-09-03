#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x11 = INT64_MIN;
volatile int32_t t3 = 335516;
static int16_t x18 = -7789;
int32_t x20 = 26703;
volatile int32_t x24 = -1;
volatile int32_t t5 = -7356;
volatile int16_t x27 = -1;
int32_t t7 = 186884447;
uint8_t x35 = 0U;
volatile uint8_t x38 = 13U;
uint8_t x47 = UINT8_MAX;
uint8_t x50 = 116U;
int32_t x54 = -15;
int16_t x55 = -12;
volatile int32_t t14 = 766;
uint8_t x63 = 22U;
int32_t t15 = -3508;
uint16_t x68 = 976U;
int32_t t17 = 1490;
int64_t x75 = INT64_MAX;
int8_t x82 = -1;
static int16_t x84 = 467;
volatile int32_t t20 = 111;
volatile int64_t x100 = INT64_MAX;
int16_t x102 = -1;
uint64_t x103 = UINT64_MAX;
uint8_t x104 = UINT8_MAX;
volatile uint64_t x107 = UINT64_MAX;
uint64_t x122 = 146309657134532968LLU;
uint64_t x128 = 15259LLU;
uint64_t x129 = 144876995740104413LLU;
static uint64_t x134 = 225518165263546657LLU;
static int16_t x139 = -840;
uint64_t x153 = 42991383628043LLU;
volatile int32_t t37 = -939099;
volatile uint16_t x161 = 1292U;
int32_t x162 = INT32_MAX;
int32_t t39 = 14293479;
int64_t x169 = INT64_MIN;
volatile int32_t t41 = 0;
volatile int8_t x177 = INT8_MIN;
volatile int32_t t46 = 110;
int64_t x196 = 68640373014451LL;
int32_t t47 = -59;
volatile int16_t x199 = -1;
volatile int32_t t48 = 200584319;
uint16_t x201 = UINT16_MAX;
volatile int32_t x204 = 92;
int16_t x205 = INT16_MIN;
volatile uint16_t x208 = UINT16_MAX;
uint64_t x218 = 58LLU;
int8_t x219 = INT8_MIN;
int64_t x221 = INT64_MIN;
int64_t x223 = INT64_MIN;
int16_t x225 = INT16_MAX;
int64_t x230 = INT64_MAX;
volatile int8_t x238 = INT8_MAX;
volatile int32_t t58 = 2256;
static int16_t x243 = INT16_MIN;
static int32_t t59 = -932215;
volatile int8_t x246 = 3;
int16_t x253 = -1;
volatile uint64_t x254 = 715205LLU;
int8_t x262 = INT8_MIN;
int64_t x263 = 1742174LL;
int64_t x265 = INT64_MIN;
int8_t x266 = INT8_MIN;
int64_t x271 = 388524666LL;
int32_t x279 = -1;
static uint16_t x286 = 12050U;
uint8_t x292 = 3U;
uint16_t x293 = 4U;
static volatile int32_t x296 = -1;
volatile int32_t t73 = 497944;
uint16_t x302 = UINT16_MAX;
int16_t x303 = INT16_MIN;
static int32_t x306 = INT32_MIN;
static uint16_t x307 = 63U;
static volatile int32_t t76 = -128927;
uint32_t x315 = 3U;
int16_t x320 = INT16_MIN;
uint16_t x340 = 287U;
int8_t x348 = -1;
int32_t t84 = 261608;
volatile int32_t t85 = -8;
volatile int64_t x357 = INT64_MAX;
int8_t x361 = 3;
uint32_t x368 = 3008946U;
volatile int8_t x379 = INT8_MIN;
int16_t x389 = INT16_MIN;
int32_t x390 = -1;
uint32_t x392 = UINT32_MAX;
int64_t x395 = INT64_MIN;
volatile uint16_t x397 = UINT16_MAX;
uint64_t x400 = 2686882LLU;
uint32_t x402 = 143860U;
volatile int64_t x406 = INT64_MIN;
int32_t x411 = 2;
int32_t t99 = -2209783;


void f0(void) {
	int32_t x1 = 6;
	int64_t x2 = INT64_MAX;
	uint16_t x3 = 32177U;
	volatile int64_t x4 = 31957070LL;
	int32_t t0 = 755;

	t0 = (x1<(x2<(x3/x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = -1;
	volatile int16_t x6 = 3;
	static volatile int16_t x7 = INT16_MIN;
	uint32_t x8 = UINT32_MAX;
	volatile int32_t t1 = -89;

	t1 = (x5<(x6<(x7/x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 728052408074273LLU;
	int32_t x10 = INT32_MIN;
	static int16_t x12 = INT16_MAX;
	volatile int32_t t2 = -33241;

	t2 = (x9<(x10<(x11/x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	static volatile int8_t x14 = INT8_MIN;
	static uint32_t x15 = 41428U;
	uint8_t x16 = 69U;

	t3 = (x13<(x14<(x15/x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	volatile uint8_t x19 = 1U;
	volatile int32_t t4 = 62;

	t4 = (x17<(x18<(x19/x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	static int8_t x22 = INT8_MIN;
	uint8_t x23 = 27U;

	t5 = (x21<(x22<(x23/x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	uint8_t x26 = 125U;
	uint8_t x28 = 10U;
	volatile int32_t t6 = 5441121;

	t6 = (x25<(x26<(x27/x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	int8_t x30 = 1;
	volatile int8_t x31 = INT8_MIN;
	static int16_t x32 = 8;

	t7 = (x29<(x30<(x31/x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -14;
	int8_t x34 = -1;
	volatile uint64_t x36 = UINT64_MAX;
	static int32_t t8 = -20850854;

	t8 = (x33<(x34<(x35/x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = INT8_MAX;
	volatile uint16_t x39 = UINT16_MAX;
	static uint16_t x40 = 33U;
	volatile int32_t t9 = 11543400;

	t9 = (x37<(x38<(x39/x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;
	int32_t x42 = -1685327;
	int16_t x43 = INT16_MIN;
	static uint8_t x44 = 10U;
	static int32_t t10 = -28054;

	t10 = (x41<(x42<(x43/x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x45 = 44U;
	uint16_t x46 = UINT16_MAX;
	int64_t x48 = -556764LL;
	volatile int32_t t11 = -231;

	t11 = (x45<(x46<(x47/x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 1696979173049LL;
	int32_t x51 = INT32_MIN;
	static volatile int32_t x52 = INT32_MAX;
	volatile int32_t t12 = -1;

	t12 = (x49<(x50<(x51/x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	int64_t x56 = INT64_MAX;
	int32_t t13 = 161494548;

	t13 = (x53<(x54<(x55/x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x57 = UINT16_MAX;
	static int8_t x58 = -1;
	int8_t x59 = INT8_MIN;
	int32_t x60 = INT32_MAX;

	t14 = (x57<(x58<(x59/x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x61 = UINT32_MAX;
	int64_t x62 = -283545074952421650LL;
	int8_t x64 = 7;

	t15 = (x61<(x62<(x63/x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 54;
	uint64_t x66 = UINT64_MAX;
	int8_t x67 = INT8_MIN;
	int32_t t16 = -59491;

	t16 = (x65<(x66<(x67/x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = INT16_MIN;
	uint64_t x70 = 24LLU;
	uint32_t x71 = UINT32_MAX;
	static int64_t x72 = -1950120122LL;

	t17 = (x69<(x70<(x71/x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = UINT32_MAX;
	int8_t x74 = -1;
	static uint32_t x76 = UINT32_MAX;
	static volatile int32_t t18 = -1;

	t18 = (x73<(x74<(x75/x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = 2;
	volatile int32_t x78 = INT32_MIN;
	int8_t x79 = 1;
	int8_t x80 = 1;
	int32_t t19 = 22;

	t19 = (x77<(x78<(x79/x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = INT32_MIN;
	int16_t x83 = -1;

	t20 = (x81<(x82<(x83/x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x85 = 83U;
	volatile uint16_t x86 = 96U;
	static int16_t x87 = -1;
	int8_t x88 = 29;
	volatile int32_t t21 = -8046;

	t21 = (x85<(x86<(x87/x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = 1;
	uint32_t x90 = 994058638U;
	volatile int32_t x91 = INT32_MIN;
	static int64_t x92 = -1LL;
	volatile int32_t t22 = -47032803;

	t22 = (x89<(x90<(x91/x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 3U;
	uint16_t x94 = 2008U;
	uint64_t x95 = UINT64_MAX;
	volatile int32_t x96 = -140903;
	int32_t t23 = 106;

	t23 = (x93<(x94<(x95/x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 2U;
	uint16_t x98 = 1U;
	static int32_t x99 = INT32_MIN;
	int32_t t24 = 1356220;

	t24 = (x97<(x98<(x99/x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x101 = INT64_MIN;
	volatile int32_t t25 = 1012;

	t25 = (x101<(x102<(x103/x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = UINT16_MAX;
	int8_t x106 = INT8_MIN;
	volatile int64_t x108 = 11399494696817LL;
	volatile int32_t t26 = 4;

	t26 = (x105<(x106<(x107/x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x109 = -2;
	volatile int32_t x110 = INT32_MIN;
	int32_t x111 = 5;
	volatile int32_t x112 = -1;
	volatile int32_t t27 = 1;

	t27 = (x109<(x110<(x111/x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -1;
	int16_t x114 = INT16_MAX;
	static int16_t x115 = -1;
	int8_t x116 = -1;
	int32_t t28 = 701;

	t28 = (x113<(x114<(x115/x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x117 = 1;
	uint16_t x118 = 1U;
	int16_t x119 = INT16_MAX;
	volatile uint64_t x120 = 266500507LLU;
	volatile int32_t t29 = -403988;

	t29 = (x117<(x118<(x119/x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MAX;
	int8_t x123 = INT8_MIN;
	volatile uint64_t x124 = UINT64_MAX;
	static volatile int32_t t30 = 1224537;

	t30 = (x121<(x122<(x123/x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	uint64_t x126 = 3745835902984475843LLU;
	volatile int16_t x127 = INT16_MIN;
	static volatile int32_t t31 = 18792;

	t31 = (x125<(x126<(x127/x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x130 = 13;
	int32_t x131 = -1;
	int8_t x132 = 30;
	int32_t t32 = -58280036;

	t32 = (x129<(x130<(x131/x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x133 = UINT64_MAX;
	volatile uint64_t x135 = 905452781LLU;
	int64_t x136 = INT64_MIN;
	static int32_t t33 = -137;

	t33 = (x133<(x134<(x135/x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = UINT16_MAX;
	uint64_t x138 = 2175967695590457302LLU;
	static int8_t x140 = 8;
	int32_t t34 = 183;

	t34 = (x137<(x138<(x139/x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x145 = 1U;
	volatile uint64_t x146 = UINT64_MAX;
	uint64_t x147 = UINT64_MAX;
	int64_t x148 = -243LL;
	volatile int32_t t35 = 94607933;

	t35 = (x145<(x146<(x147/x148)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = -12203846;
	int32_t x150 = -1;
	static int64_t x151 = INT64_MIN;
	uint32_t x152 = UINT32_MAX;
	int32_t t36 = -749186966;

	t36 = (x149<(x150<(x151/x152)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x154 = 3U;
	uint32_t x155 = 69382U;
	int8_t x156 = INT8_MIN;

	t37 = (x153<(x154<(x155/x156)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = INT32_MAX;
	volatile int8_t x158 = INT8_MIN;
	volatile int32_t x159 = -20240440;
	static volatile int64_t x160 = -1014LL;
	volatile int32_t t38 = 21;

	t38 = (x157<(x158<(x159/x160)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x163 = UINT32_MAX;
	int16_t x164 = INT16_MIN;

	t39 = (x161<(x162<(x163/x164)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x165 = INT32_MAX;
	volatile int8_t x166 = -1;
	int8_t x167 = -1;
	int8_t x168 = -1;
	volatile int32_t t40 = -13719658;

	t40 = (x165<(x166<(x167/x168)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x170 = 55U;
	int8_t x171 = -1;
	int64_t x172 = INT64_MIN;

	t41 = (x169<(x170<(x171/x172)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = INT64_MIN;
	int64_t x174 = INT64_MAX;
	int8_t x175 = -1;
	int32_t x176 = -1;
	volatile int32_t t42 = 101;

	t42 = (x173<(x174<(x175/x176)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x178 = 2U;
	uint32_t x179 = 23U;
	uint16_t x180 = UINT16_MAX;
	static int32_t t43 = -1;

	t43 = (x177<(x178<(x179/x180)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x181 = 0U;
	static int8_t x182 = INT8_MIN;
	static uint64_t x183 = 497494294LLU;
	int16_t x184 = INT16_MAX;
	int32_t t44 = 3616588;

	t44 = (x181<(x182<(x183/x184)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x185 = UINT32_MAX;
	static uint32_t x186 = 7U;
	int8_t x187 = INT8_MIN;
	int16_t x188 = INT16_MIN;
	volatile int32_t t45 = 43;

	t45 = (x185<(x186<(x187/x188)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x189 = 488699208115118LLU;
	volatile uint16_t x190 = 2182U;
	volatile int64_t x191 = 5507203LL;
	static int16_t x192 = INT16_MIN;

	t46 = (x189<(x190<(x191/x192)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x193 = UINT64_MAX;
	uint32_t x194 = UINT32_MAX;
	volatile int64_t x195 = INT64_MIN;

	t47 = (x193<(x194<(x195/x196)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x197 = -1;
	static int8_t x198 = INT8_MIN;
	volatile int32_t x200 = 101501;

	t48 = (x197<(x198<(x199/x200)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x202 = 34;
	static int64_t x203 = INT64_MIN;
	int32_t t49 = 448840157;

	t49 = (x201<(x202<(x203/x204)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x206 = 29402U;
	int64_t x207 = -477260703LL;
	volatile int32_t t50 = 3;

	t50 = (x205<(x206<(x207/x208)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x209 = -1LL;
	uint64_t x210 = UINT64_MAX;
	int32_t x211 = INT32_MAX;
	volatile int64_t x212 = INT64_MIN;
	int32_t t51 = 2;

	t51 = (x209<(x210<(x211/x212)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x213 = -1;
	int8_t x214 = INT8_MIN;
	int8_t x215 = 1;
	int8_t x216 = INT8_MIN;
	volatile int32_t t52 = 1328344;

	t52 = (x213<(x214<(x215/x216)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x217 = INT16_MIN;
	int64_t x220 = -6595669LL;
	volatile int32_t t53 = -4;

	t53 = (x217<(x218<(x219/x220)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x222 = -1;
	static int16_t x224 = INT16_MIN;
	int32_t t54 = -996;

	t54 = (x221<(x222<(x223/x224)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x226 = INT16_MAX;
	int64_t x227 = 4749LL;
	int8_t x228 = -3;
	static int32_t t55 = -1440890;

	t55 = (x225<(x226<(x227/x228)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x229 = INT64_MIN;
	int64_t x231 = -1LL;
	static int8_t x232 = INT8_MAX;
	int32_t t56 = -44629851;

	t56 = (x229<(x230<(x231/x232)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x233 = -1;
	int32_t x234 = 0;
	int8_t x235 = INT8_MIN;
	int16_t x236 = INT16_MAX;
	volatile int32_t t57 = -6;

	t57 = (x233<(x234<(x235/x236)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x237 = INT8_MAX;
	int16_t x239 = 4;
	static uint32_t x240 = 994U;

	t58 = (x237<(x238<(x239/x240)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x241 = INT16_MAX;
	int8_t x242 = -3;
	static int32_t x244 = INT32_MAX;

	t59 = (x241<(x242<(x243/x244)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x245 = 4U;
	int16_t x247 = -1009;
	int8_t x248 = INT8_MAX;
	int32_t t60 = 3;

	t60 = (x245<(x246<(x247/x248)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x249 = INT8_MAX;
	int32_t x250 = 1;
	int8_t x251 = 33;
	int32_t x252 = INT32_MAX;
	int32_t t61 = 58871664;

	t61 = (x249<(x250<(x251/x252)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x255 = 1U;
	uint64_t x256 = 2409060162132603074LLU;
	int32_t t62 = 370;

	t62 = (x253<(x254<(x255/x256)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x257 = 5U;
	volatile uint8_t x258 = 3U;
	uint32_t x259 = 0U;
	uint32_t x260 = 6566U;
	static int32_t t63 = -1;

	t63 = (x257<(x258<(x259/x260)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x261 = UINT32_MAX;
	static uint32_t x264 = 65702265U;
	int32_t t64 = 4594;

	t64 = (x261<(x262<(x263/x264)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x267 = 130U;
	static volatile uint64_t x268 = UINT64_MAX;
	int32_t t65 = -442;

	t65 = (x265<(x266<(x267/x268)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x269 = UINT16_MAX;
	volatile int16_t x270 = INT16_MIN;
	static volatile int8_t x272 = INT8_MAX;
	static int32_t t66 = -6399;

	t66 = (x269<(x270<(x271/x272)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x273 = -3252666784837807LL;
	uint32_t x274 = 347391270U;
	int32_t x275 = INT32_MIN;
	int64_t x276 = -1LL;
	int32_t t67 = -21088975;

	t67 = (x273<(x274<(x275/x276)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x277 = 0U;
	int64_t x278 = INT64_MIN;
	static uint32_t x280 = 313U;
	static int32_t t68 = 12;

	t68 = (x277<(x278<(x279/x280)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x281 = INT32_MAX;
	int16_t x282 = -1;
	int32_t x283 = -968804;
	int8_t x284 = INT8_MIN;
	static int32_t t69 = 62187393;

	t69 = (x281<(x282<(x283/x284)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x285 = INT64_MIN;
	volatile int32_t x287 = INT32_MAX;
	uint32_t x288 = 1160362447U;
	volatile int32_t t70 = -3441226;

	t70 = (x285<(x286<(x287/x288)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x289 = INT8_MIN;
	volatile int8_t x290 = INT8_MIN;
	static int64_t x291 = INT64_MIN;
	static int32_t t71 = -845204;

	t71 = (x289<(x290<(x291/x292)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x294 = -1;
	uint8_t x295 = 4U;
	int32_t t72 = 427806209;

	t72 = (x293<(x294<(x295/x296)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x297 = 8U;
	uint16_t x298 = 0U;
	int64_t x299 = 1184280LL;
	static volatile uint64_t x300 = 2055168319842165189LLU;

	t73 = (x297<(x298<(x299/x300)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x301 = INT64_MAX;
	int32_t x304 = -373879;
	int32_t t74 = -10550;

	t74 = (x301<(x302<(x303/x304)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x305 = INT8_MIN;
	volatile int8_t x308 = INT8_MIN;
	volatile int32_t t75 = 215;

	t75 = (x305<(x306<(x307/x308)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x309 = INT32_MIN;
	int8_t x310 = INT8_MAX;
	static uint16_t x311 = 2561U;
	static int16_t x312 = INT16_MIN;

	t76 = (x309<(x310<(x311/x312)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x313 = UINT64_MAX;
	int16_t x314 = INT16_MAX;
	volatile int8_t x316 = INT8_MIN;
	int32_t t77 = 18643274;

	t77 = (x313<(x314<(x315/x316)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x317 = -33;
	volatile uint64_t x318 = UINT64_MAX;
	int16_t x319 = INT16_MAX;
	static volatile int32_t t78 = 2113;

	t78 = (x317<(x318<(x319/x320)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x325 = -1LL;
	static int64_t x326 = INT64_MAX;
	static uint8_t x327 = 6U;
	int64_t x328 = -1661LL;
	volatile int32_t t79 = -59345178;

	t79 = (x325<(x326<(x327/x328)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x329 = -2313;
	static uint32_t x330 = UINT32_MAX;
	int16_t x331 = INT16_MIN;
	static int16_t x332 = 2;
	static volatile int32_t t80 = -43;

	t80 = (x329<(x330<(x331/x332)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x333 = INT64_MIN;
	int16_t x334 = INT16_MIN;
	uint32_t x335 = 6738572U;
	int32_t x336 = 477113;
	volatile int32_t t81 = -53473;

	t81 = (x333<(x334<(x335/x336)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x337 = -100;
	uint64_t x338 = UINT64_MAX;
	static int8_t x339 = INT8_MIN;
	volatile int32_t t82 = 303591615;

	t82 = (x337<(x338<(x339/x340)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x341 = INT16_MAX;
	uint64_t x342 = 502563031601LLU;
	static uint64_t x343 = 323040810LLU;
	int16_t x344 = 306;
	int32_t t83 = 113;

	t83 = (x341<(x342<(x343/x344)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x345 = UINT32_MAX;
	static uint16_t x346 = 1U;
	int16_t x347 = INT16_MIN;

	t84 = (x345<(x346<(x347/x348)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x349 = 11;
	int8_t x350 = -1;
	volatile int32_t x351 = INT32_MIN;
	volatile uint8_t x352 = 27U;

	t85 = (x349<(x350<(x351/x352)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x353 = INT16_MAX;
	int8_t x354 = 22;
	volatile uint32_t x355 = 103082660U;
	int32_t x356 = INT32_MIN;
	static volatile int32_t t86 = -6978;

	t86 = (x353<(x354<(x355/x356)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x358 = 0U;
	static uint32_t x359 = 1611702913U;
	volatile uint32_t x360 = UINT32_MAX;
	int32_t t87 = -68977755;

	t87 = (x357<(x358<(x359/x360)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x362 = 233113LL;
	int16_t x363 = 40;
	uint64_t x364 = 66711428677LLU;
	int32_t t88 = 461055334;

	t88 = (x361<(x362<(x363/x364)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x365 = -94641683543420LL;
	volatile int64_t x366 = 3LL;
	static uint32_t x367 = 3U;
	int32_t t89 = 25957;

	t89 = (x365<(x366<(x367/x368)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x373 = INT16_MIN;
	static uint64_t x374 = UINT64_MAX;
	int32_t x375 = INT32_MIN;
	int32_t x376 = INT32_MIN;
	static int32_t t90 = -2593;

	t90 = (x373<(x374<(x375/x376)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x377 = -1;
	static int32_t x378 = -1;
	int16_t x380 = INT16_MIN;
	volatile int32_t t91 = -33984995;

	t91 = (x377<(x378<(x379/x380)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x381 = -1;
	int8_t x382 = -1;
	uint32_t x383 = UINT32_MAX;
	volatile uint16_t x384 = 259U;
	volatile int32_t t92 = -95240334;

	t92 = (x381<(x382<(x383/x384)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x385 = INT8_MIN;
	int64_t x386 = -1068131315326LL;
	int8_t x387 = -1;
	int64_t x388 = -1LL;
	static volatile int32_t t93 = 1324301;

	t93 = (x385<(x386<(x387/x388)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x391 = 93U;
	volatile int32_t t94 = -166052;

	t94 = (x389<(x390<(x391/x392)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x393 = 293;
	uint32_t x394 = 103U;
	static volatile uint64_t x396 = 7303426808011056149LLU;
	int32_t t95 = 14585557;

	t95 = (x393<(x394<(x395/x396)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x398 = INT64_MAX;
	int32_t x399 = INT32_MIN;
	volatile int32_t t96 = -147405;

	t96 = (x397<(x398<(x399/x400)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x401 = UINT16_MAX;
	int16_t x403 = INT16_MIN;
	volatile int16_t x404 = INT16_MIN;
	int32_t t97 = -30;

	t97 = (x401<(x402<(x403/x404)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x405 = INT32_MIN;
	static int32_t x407 = INT32_MAX;
	volatile int64_t x408 = INT64_MIN;
	int32_t t98 = -2;

	t98 = (x405<(x406<(x407/x408)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x409 = -1;
	volatile int32_t x410 = 1;
	static uint32_t x412 = 1U;

	t99 = (x409<(x410<(x411/x412)));

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

