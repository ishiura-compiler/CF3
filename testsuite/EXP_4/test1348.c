#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x5 = 2549U;
volatile int32_t x7 = 1294;
uint16_t x9 = UINT16_MAX;
static uint32_t x14 = UINT32_MAX;
int32_t x15 = INT32_MAX;
int32_t t5 = -6995;
int8_t x28 = -2;
uint8_t x46 = 2U;
uint16_t x76 = 9U;
volatile int16_t x81 = INT16_MAX;
static volatile int8_t x87 = INT8_MIN;
uint32_t x88 = 447U;
uint32_t x101 = 36246U;
static int32_t x102 = INT32_MIN;
int32_t x103 = INT32_MIN;
static int32_t t26 = 352;
int8_t x109 = 47;
static uint8_t x111 = 18U;
static uint8_t x112 = UINT8_MAX;
int32_t t27 = -1;
int8_t x116 = INT8_MAX;
int64_t x118 = INT64_MAX;
volatile uint8_t x121 = 21U;
uint32_t x122 = UINT32_MAX;
volatile int32_t t30 = 15867549;
int8_t x131 = -1;
int64_t x135 = -1LL;
static uint32_t x136 = 12684073U;
uint16_t x137 = 1U;
volatile int16_t x138 = 0;
int32_t x139 = INT32_MIN;
volatile int32_t t34 = -8989;
int32_t t35 = -90243477;
int8_t x145 = -1;
volatile int64_t x147 = INT64_MIN;
uint64_t x163 = 3300LLU;
volatile int32_t t42 = 2979;
static int8_t x174 = -2;
int32_t t45 = 57659;
uint16_t x188 = UINT16_MAX;
uint64_t x189 = UINT64_MAX;
int32_t t47 = 40878;
int8_t x194 = INT8_MAX;
static volatile int32_t t48 = -126340370;
int64_t x198 = INT64_MIN;
int64_t x211 = INT64_MAX;
static int64_t x216 = -1LL;
static int64_t x217 = INT64_MIN;
int8_t x219 = INT8_MIN;
int32_t x229 = INT32_MIN;
int8_t x235 = -1;
int8_t x236 = INT8_MIN;
int8_t x245 = INT8_MAX;
int16_t x248 = INT16_MIN;
int32_t t61 = 8154;
int8_t x251 = -1;
int32_t t62 = 76;
static int32_t x254 = 140;
int8_t x257 = 33;
static volatile uint8_t x265 = UINT8_MAX;
int8_t x268 = INT8_MIN;
uint16_t x269 = UINT16_MAX;
static int16_t x271 = INT16_MAX;
int32_t x272 = INT32_MAX;
static int32_t x276 = INT32_MIN;
int16_t x277 = INT16_MIN;
uint16_t x280 = 5U;
static int32_t t69 = -1;
int32_t x281 = 11994;
int32_t t70 = 33490145;
volatile int32_t x286 = INT32_MIN;
volatile uint32_t x287 = 253U;
uint16_t x288 = 5426U;
volatile int8_t x290 = INT8_MIN;
int8_t x291 = INT8_MIN;
int64_t x292 = -108337280667258LL;
uint64_t x300 = 19LLU;
uint16_t x301 = UINT16_MAX;
static int16_t x305 = INT16_MAX;
int32_t x310 = 104914;
volatile uint64_t x311 = UINT64_MAX;
int32_t t78 = 0;
volatile int8_t x323 = 6;
static int16_t x324 = -25;
volatile int32_t t80 = -417905243;
static uint32_t x331 = 42U;
int8_t x340 = INT8_MIN;
uint64_t x341 = 115564136846383774LLU;
int32_t x344 = -1;
uint16_t x346 = 26910U;
volatile int16_t x347 = 4;
static int32_t t86 = 1;
uint8_t x358 = UINT8_MAX;
uint16_t x361 = UINT16_MAX;
int16_t x368 = 450;
int64_t x369 = 3547474820688799LL;
static int64_t x381 = -1LL;
int32_t t95 = -4683;
static int8_t x385 = INT8_MIN;
int64_t x388 = -489428840078668800LL;
int32_t x389 = -1;
int8_t x391 = -1;
int32_t t98 = -23543053;


void f0(void) {
	volatile int64_t x1 = INT64_MIN;
	int64_t x2 = -52038887234002289LL;
	int32_t x3 = 63770;
	static int32_t x4 = -1;
	volatile int32_t t0 = 0;

	t0 = (x1<(x2^(x3==x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = -2279;
	int64_t x8 = INT64_MIN;
	int32_t t1 = 1;

	t1 = (x5<(x6^(x7==x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x10 = UINT8_MAX;
	int32_t x11 = -597121418;
	static int64_t x12 = 18774476289250LL;
	volatile int32_t t2 = -265392603;

	t2 = (x9<(x10^(x11==x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MIN;
	int64_t x16 = -1LL;
	static volatile int32_t t3 = 135;

	t3 = (x13<(x14^(x15==x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = INT8_MAX;
	int8_t x18 = -1;
	int32_t x19 = -1;
	int8_t x20 = INT8_MIN;
	static volatile int32_t t4 = 24;

	t4 = (x17<(x18^(x19==x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = UINT32_MAX;
	volatile int32_t x22 = INT32_MAX;
	uint64_t x23 = 4288169157212574055LLU;
	int32_t x24 = INT32_MIN;

	t5 = (x21<(x22^(x23==x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = INT64_MAX;
	int8_t x26 = 0;
	uint32_t x27 = 14U;
	int32_t t6 = -21;

	t6 = (x25<(x26^(x27==x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	static int16_t x30 = INT16_MIN;
	uint32_t x31 = 72288U;
	static volatile int64_t x32 = -215LL;
	int32_t t7 = -22153;

	t7 = (x29<(x30^(x31==x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	static int16_t x34 = -1;
	uint32_t x35 = UINT32_MAX;
	int64_t x36 = -1LL;
	static int32_t t8 = -17;

	t8 = (x33<(x34^(x35==x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = INT32_MIN;
	int64_t x38 = 24583790130LL;
	uint32_t x39 = 3264U;
	int64_t x40 = INT64_MAX;
	int32_t t9 = -90;

	t9 = (x37<(x38^(x39==x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	int16_t x42 = 1189;
	volatile int64_t x43 = INT64_MIN;
	uint8_t x44 = UINT8_MAX;
	volatile int32_t t10 = 1517960;

	t10 = (x41<(x42^(x43==x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MAX;
	int32_t x47 = INT32_MIN;
	int64_t x48 = -373710264LL;
	int32_t t11 = 1047273;

	t11 = (x45<(x46^(x47==x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x49 = INT8_MIN;
	uint64_t x50 = 90916146474914LLU;
	int8_t x51 = -1;
	int16_t x52 = -4185;
	int32_t t12 = -8005;

	t12 = (x49<(x50^(x51==x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = 44828306564038500LL;
	uint16_t x54 = 63U;
	int64_t x55 = INT64_MIN;
	int16_t x56 = -1536;
	int32_t t13 = -469510005;

	t13 = (x53<(x54^(x55==x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = 20;
	volatile uint64_t x58 = 19532982311694172LLU;
	int16_t x59 = 85;
	int16_t x60 = INT16_MAX;
	static volatile int32_t t14 = -436;

	t14 = (x57<(x58^(x59==x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -1372LL;
	int8_t x62 = INT8_MAX;
	int32_t x63 = INT32_MIN;
	int16_t x64 = -1;
	static volatile int32_t t15 = 0;

	t15 = (x61<(x62^(x63==x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = -2712210;
	static uint16_t x66 = 173U;
	int32_t x67 = INT32_MIN;
	int8_t x68 = -1;
	volatile int32_t t16 = 1;

	t16 = (x65<(x66^(x67==x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	volatile int64_t x70 = 160LL;
	uint32_t x71 = 53U;
	int32_t x72 = INT32_MIN;
	int32_t t17 = 543;

	t17 = (x69<(x70^(x71==x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MAX;
	static uint32_t x74 = 67040U;
	int16_t x75 = -78;
	volatile int32_t t18 = 0;

	t18 = (x73<(x74^(x75==x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -1;
	volatile uint32_t x78 = 1U;
	int64_t x79 = 139656097123465468LL;
	uint8_t x80 = 20U;
	volatile int32_t t19 = 0;

	t19 = (x77<(x78^(x79==x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x82 = 793U;
	int8_t x83 = INT8_MIN;
	static int8_t x84 = -1;
	int32_t t20 = 8;

	t20 = (x81<(x82^(x83==x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = 203;
	volatile int32_t x86 = -1;
	static int32_t t21 = 1;

	t21 = (x85<(x86^(x87==x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x89 = 1189422U;
	static int16_t x90 = INT16_MAX;
	volatile int32_t x91 = 1;
	volatile uint8_t x92 = UINT8_MAX;
	int32_t t22 = -1025298;

	t22 = (x89<(x90^(x91==x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x93 = INT16_MAX;
	int16_t x94 = INT16_MAX;
	static int32_t x95 = INT32_MIN;
	static uint16_t x96 = UINT16_MAX;
	static int32_t t23 = 0;

	t23 = (x93<(x94^(x95==x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = -1;
	uint8_t x98 = UINT8_MAX;
	volatile int16_t x99 = -1;
	int16_t x100 = INT16_MAX;
	int32_t t24 = -102629564;

	t24 = (x97<(x98^(x99==x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x104 = 17710U;
	int32_t t25 = -127;

	t25 = (x101<(x102^(x103==x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	int16_t x106 = INT16_MAX;
	uint32_t x107 = 31019974U;
	volatile int32_t x108 = INT32_MIN;

	t26 = (x105<(x106^(x107==x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x110 = 1;

	t27 = (x109<(x110^(x111==x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = -1;
	static int32_t x114 = INT32_MIN;
	uint64_t x115 = UINT64_MAX;
	volatile int32_t t28 = 0;

	t28 = (x113<(x114^(x115==x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = 32252U;
	int32_t x119 = -3;
	int16_t x120 = INT16_MIN;
	static volatile int32_t t29 = -63;

	t29 = (x117<(x118^(x119==x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x123 = 223526424;
	uint32_t x124 = 21509891U;

	t30 = (x121<(x122^(x123==x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = 9346LL;
	int16_t x126 = -12036;
	uint8_t x127 = 8U;
	volatile int32_t x128 = -837;
	int32_t t31 = -20117;

	t31 = (x125<(x126^(x127==x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x129 = INT16_MAX;
	static int64_t x130 = INT64_MAX;
	uint16_t x132 = UINT16_MAX;
	volatile int32_t t32 = -1;

	t32 = (x129<(x130^(x131==x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x133 = 62U;
	int16_t x134 = 0;
	int32_t t33 = -1;

	t33 = (x133<(x134^(x135==x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x140 = -7;

	t34 = (x137<(x138^(x139==x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x141 = UINT16_MAX;
	uint32_t x142 = 1U;
	volatile int8_t x143 = INT8_MIN;
	static int32_t x144 = -1;

	t35 = (x141<(x142^(x143==x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x146 = 14391U;
	int8_t x148 = -1;
	int32_t t36 = -26487;

	t36 = (x145<(x146^(x147==x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x149 = -27;
	int64_t x150 = 2LL;
	uint64_t x151 = 78LLU;
	static uint64_t x152 = 4LLU;
	volatile int32_t t37 = -24006564;

	t37 = (x149<(x150^(x151==x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 700U;
	uint8_t x154 = UINT8_MAX;
	volatile int16_t x155 = -1;
	uint16_t x156 = 82U;
	static int32_t t38 = 1011;

	t38 = (x153<(x154^(x155==x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x157 = INT32_MIN;
	uint16_t x158 = UINT16_MAX;
	static volatile int8_t x159 = INT8_MIN;
	int32_t x160 = INT32_MIN;
	static volatile int32_t t39 = 1551990;

	t39 = (x157<(x158^(x159==x160)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	uint64_t x162 = 533681662LLU;
	int32_t x164 = INT32_MAX;
	int32_t t40 = -45108196;

	t40 = (x161<(x162^(x163==x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -1;
	int64_t x166 = -27829321478LL;
	int64_t x167 = INT64_MIN;
	static uint8_t x168 = 47U;
	static int32_t t41 = 1504;

	t41 = (x165<(x166^(x167==x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x169 = INT8_MIN;
	static uint16_t x170 = 7U;
	int8_t x171 = -1;
	static int8_t x172 = INT8_MIN;

	t42 = (x169<(x170^(x171==x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x173 = 64053;
	volatile int16_t x175 = INT16_MIN;
	int64_t x176 = INT64_MAX;
	volatile int32_t t43 = -1256696;

	t43 = (x173<(x174^(x175==x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint64_t x177 = UINT64_MAX;
	static int64_t x178 = 9992732LL;
	uint8_t x179 = 11U;
	int16_t x180 = -1;
	int32_t t44 = -632333;

	t44 = (x177<(x178^(x179==x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = INT32_MAX;
	uint8_t x182 = 88U;
	int64_t x183 = INT64_MIN;
	int8_t x184 = INT8_MAX;

	t45 = (x181<(x182^(x183==x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -448LL;
	int64_t x186 = INT64_MAX;
	volatile int16_t x187 = INT16_MAX;
	volatile int32_t t46 = -755;

	t46 = (x185<(x186^(x187==x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x190 = -1;
	static int8_t x191 = INT8_MIN;
	uint16_t x192 = UINT16_MAX;

	t47 = (x189<(x190^(x191==x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x193 = INT8_MAX;
	int64_t x195 = INT64_MIN;
	volatile int64_t x196 = INT64_MAX;

	t48 = (x193<(x194^(x195==x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = INT64_MIN;
	uint8_t x199 = UINT8_MAX;
	int64_t x200 = INT64_MIN;
	static volatile int32_t t49 = 2602;

	t49 = (x197<(x198^(x199==x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x201 = -1;
	int64_t x202 = -28232940145925941LL;
	volatile int32_t x203 = INT32_MAX;
	int64_t x204 = -61773LL;
	int32_t t50 = -392955;

	t50 = (x201<(x202^(x203==x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MAX;
	int32_t x206 = 173;
	static volatile int8_t x207 = 2;
	volatile int8_t x208 = INT8_MIN;
	int32_t t51 = -3540579;

	t51 = (x205<(x206^(x207==x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -1LL;
	static volatile int16_t x210 = 120;
	uint16_t x212 = UINT16_MAX;
	int32_t t52 = 368;

	t52 = (x209<(x210^(x211==x212)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x213 = -1;
	volatile uint8_t x214 = 3U;
	static volatile uint8_t x215 = 0U;
	volatile int32_t t53 = -91;

	t53 = (x213<(x214^(x215==x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x218 = 0LL;
	int64_t x220 = INT64_MIN;
	volatile int32_t t54 = 42296;

	t54 = (x217<(x218^(x219==x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -1;
	uint16_t x222 = 12U;
	volatile int64_t x223 = INT64_MAX;
	int32_t x224 = INT32_MIN;
	volatile int32_t t55 = 657012150;

	t55 = (x221<(x222^(x223==x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -6371731;
	volatile uint32_t x226 = 21281012U;
	static int16_t x227 = INT16_MIN;
	int16_t x228 = -1;
	static volatile int32_t t56 = 0;

	t56 = (x225<(x226^(x227==x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x230 = -1LL;
	uint64_t x231 = 11136031902956441LLU;
	uint64_t x232 = 2084842LLU;
	volatile int32_t t57 = 4366919;

	t57 = (x229<(x230^(x231==x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x233 = -1;
	int16_t x234 = INT16_MIN;
	volatile int32_t t58 = -814254611;

	t58 = (x233<(x234^(x235==x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MAX;
	uint32_t x238 = UINT32_MAX;
	int64_t x239 = INT64_MAX;
	int8_t x240 = 2;
	volatile int32_t t59 = -72;

	t59 = (x237<(x238^(x239==x240)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MAX;
	uint64_t x242 = 936981LLU;
	int16_t x243 = -1;
	uint8_t x244 = 127U;
	int32_t t60 = 427310;

	t60 = (x241<(x242^(x243==x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x246 = 3U;
	volatile int8_t x247 = 5;

	t61 = (x245<(x246^(x247==x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = 6;
	static uint16_t x250 = 26404U;
	uint64_t x252 = UINT64_MAX;

	t62 = (x249<(x250^(x251==x252)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	int64_t x255 = INT64_MIN;
	int16_t x256 = INT16_MIN;
	int32_t t63 = -270;

	t63 = (x253<(x254^(x255==x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x258 = -1;
	volatile int8_t x259 = 3;
	uint8_t x260 = UINT8_MAX;
	volatile int32_t t64 = -1;

	t64 = (x257<(x258^(x259==x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MAX;
	int32_t x262 = INT32_MIN;
	int64_t x263 = INT64_MIN;
	uint16_t x264 = 6U;
	int32_t t65 = 31215134;

	t65 = (x261<(x262^(x263==x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x266 = INT32_MAX;
	int16_t x267 = INT16_MAX;
	volatile int32_t t66 = 6787058;

	t66 = (x265<(x266^(x267==x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x270 = INT32_MAX;
	static volatile int32_t t67 = -11265;

	t67 = (x269<(x270^(x271==x272)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	int16_t x274 = 34;
	uint64_t x275 = 257250596LLU;
	volatile int32_t t68 = 5347744;

	t68 = (x273<(x274^(x275==x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x278 = INT64_MAX;
	volatile int16_t x279 = INT16_MIN;

	t69 = (x277<(x278^(x279==x280)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x282 = 9;
	int64_t x283 = INT64_MIN;
	uint8_t x284 = UINT8_MAX;

	t70 = (x281<(x282^(x283==x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x285 = INT16_MIN;
	int32_t t71 = 415603382;

	t71 = (x285<(x286^(x287==x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = UINT64_MAX;
	int32_t t72 = 63730229;

	t72 = (x289<(x290^(x291==x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MIN;
	volatile int8_t x294 = -27;
	static int64_t x295 = -37610LL;
	int64_t x296 = INT64_MIN;
	static int32_t t73 = 32690;

	t73 = (x293<(x294^(x295==x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -1;
	int16_t x298 = -511;
	uint16_t x299 = UINT16_MAX;
	static volatile int32_t t74 = 37;

	t74 = (x297<(x298^(x299==x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x302 = 3U;
	uint32_t x303 = 416452U;
	static int32_t x304 = -42286;
	int32_t t75 = -3809;

	t75 = (x301<(x302^(x303==x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x306 = UINT64_MAX;
	static volatile uint32_t x307 = 7762U;
	uint64_t x308 = UINT64_MAX;
	volatile int32_t t76 = 20330450;

	t76 = (x305<(x306^(x307==x308)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x309 = -1;
	int8_t x312 = INT8_MIN;
	int32_t t77 = 14529;

	t77 = (x309<(x310^(x311==x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = -1;
	volatile uint8_t x314 = UINT8_MAX;
	uint16_t x315 = 10U;
	int32_t x316 = 1;

	t78 = (x313<(x314^(x315==x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 5804U;
	uint64_t x318 = UINT64_MAX;
	static int32_t x319 = INT32_MIN;
	int32_t x320 = -448783;
	static volatile int32_t t79 = -250556;

	t79 = (x317<(x318^(x319==x320)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 1U;
	static int16_t x322 = INT16_MAX;

	t80 = (x321<(x322^(x323==x324)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x325 = INT32_MAX;
	uint32_t x326 = 6814U;
	volatile int64_t x327 = INT64_MIN;
	static uint32_t x328 = 878U;
	int32_t t81 = -5104;

	t81 = (x325<(x326^(x327==x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = 0;
	int64_t x330 = -549352614LL;
	static int64_t x332 = 27655116758941359LL;
	int32_t t82 = 226210;

	t82 = (x329<(x330^(x331==x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -1;
	int16_t x334 = -2580;
	volatile int8_t x335 = INT8_MIN;
	int16_t x336 = -1265;
	volatile int32_t t83 = 93333355;

	t83 = (x333<(x334^(x335==x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = UINT8_MAX;
	static uint8_t x338 = 1U;
	int32_t x339 = INT32_MIN;
	int32_t t84 = -91200;

	t84 = (x337<(x338^(x339==x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x342 = INT16_MIN;
	int8_t x343 = INT8_MAX;
	volatile int32_t t85 = 13409;

	t85 = (x341<(x342^(x343==x344)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x345 = 22;
	int8_t x348 = INT8_MAX;

	t86 = (x345<(x346^(x347==x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x349 = INT32_MIN;
	int16_t x350 = INT16_MAX;
	static uint8_t x351 = 43U;
	uint32_t x352 = 847569824U;
	int32_t t87 = 54;

	t87 = (x349<(x350^(x351==x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x353 = INT8_MIN;
	uint16_t x354 = 533U;
	volatile int8_t x355 = INT8_MIN;
	volatile uint16_t x356 = UINT16_MAX;
	int32_t t88 = 0;

	t88 = (x353<(x354^(x355==x356)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = -135380022;
	int8_t x359 = 27;
	int8_t x360 = -1;
	int32_t t89 = 93204;

	t89 = (x357<(x358^(x359==x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x362 = INT8_MIN;
	int32_t x363 = INT32_MIN;
	int64_t x364 = INT64_MIN;
	int32_t t90 = 59725;

	t90 = (x361<(x362^(x363==x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x365 = INT16_MIN;
	uint32_t x366 = UINT32_MAX;
	int64_t x367 = INT64_MAX;
	volatile int32_t t91 = -16981781;

	t91 = (x365<(x366^(x367==x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x370 = INT8_MAX;
	uint16_t x371 = 1341U;
	volatile int32_t x372 = -1;
	volatile int32_t t92 = -8;

	t92 = (x369<(x370^(x371==x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = 9;
	volatile uint32_t x374 = 24U;
	int32_t x375 = -1;
	int8_t x376 = 0;
	volatile int32_t t93 = 196771802;

	t93 = (x373<(x374^(x375==x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = 33;
	volatile int8_t x378 = INT8_MIN;
	uint64_t x379 = 89991LLU;
	uint64_t x380 = 6746264916988LLU;
	volatile int32_t t94 = 8516826;

	t94 = (x377<(x378^(x379==x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x382 = INT8_MIN;
	int16_t x383 = INT16_MIN;
	int16_t x384 = INT16_MIN;

	t95 = (x381<(x382^(x383==x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x386 = UINT8_MAX;
	volatile uint16_t x387 = 81U;
	int32_t t96 = 54976353;

	t96 = (x385<(x386^(x387==x388)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x390 = 1U;
	int8_t x392 = INT8_MIN;
	int32_t t97 = 26;

	t97 = (x389<(x390^(x391==x392)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = UINT16_MAX;
	uint8_t x394 = UINT8_MAX;
	static int64_t x395 = INT64_MIN;
	int8_t x396 = 1;

	t98 = (x393<(x394^(x395==x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x397 = 8;
	int16_t x398 = -1;
	volatile int8_t x399 = -1;
	int16_t x400 = -28;
	volatile int32_t t99 = 25644565;

	t99 = (x397<(x398^(x399==x400)));

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

