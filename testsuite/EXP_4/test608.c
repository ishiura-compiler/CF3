#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t t0 = -714886709;
volatile int32_t t1 = -210919;
volatile int32_t t2 = 156750;
static int8_t x13 = INT8_MIN;
int8_t x19 = -1;
volatile int32_t t4 = -21446429;
int16_t x21 = -1706;
static int16_t x24 = -1;
int16_t x29 = INT16_MAX;
volatile int64_t x33 = -1LL;
uint8_t x41 = UINT8_MAX;
uint32_t x61 = 3U;
static uint16_t x62 = UINT16_MAX;
int8_t x67 = -1;
static int32_t x72 = 10753;
volatile int32_t t18 = 3;
int64_t x77 = INT64_MIN;
int64_t x83 = -1LL;
static int8_t x87 = 2;
int64_t x99 = -1LL;
uint32_t x101 = 63153U;
volatile uint16_t x102 = 475U;
int16_t x103 = INT16_MIN;
volatile uint8_t x106 = UINT8_MAX;
static uint16_t x108 = 7U;
volatile int32_t t25 = 88480;
static volatile uint32_t x111 = 362577635U;
int64_t x114 = 0LL;
volatile int32_t x126 = -1592086;
uint64_t x128 = 3399708227396LLU;
int16_t x133 = -2005;
int8_t x135 = INT8_MIN;
static volatile uint64_t x143 = 27279274LLU;
uint16_t x146 = 56U;
volatile uint16_t x151 = UINT16_MAX;
int16_t x153 = -1;
int32_t t37 = 878;
static volatile int16_t x157 = INT16_MIN;
int64_t x161 = INT64_MIN;
int32_t t39 = -86;
static int64_t x168 = -1LL;
uint16_t x172 = 3U;
volatile int32_t t41 = 1554;
uint8_t x174 = UINT8_MAX;
volatile int32_t t42 = -1100;
int32_t t43 = -268049575;
int32_t x183 = INT32_MIN;
int32_t x184 = INT32_MAX;
static uint32_t x185 = UINT32_MAX;
uint32_t x192 = 614U;
uint64_t x195 = UINT64_MAX;
int64_t x202 = INT64_MIN;
uint32_t x203 = 2070688722U;
uint32_t x204 = 558103U;
int64_t x206 = INT64_MAX;
volatile int32_t x212 = INT32_MIN;
static uint32_t x215 = UINT32_MAX;
int32_t t52 = -195644193;
static uint16_t x217 = UINT16_MAX;
int32_t x218 = INT32_MAX;
int16_t x219 = -20;
uint16_t x221 = UINT16_MAX;
int32_t x224 = INT32_MAX;
int32_t t54 = 31056983;
int32_t x225 = -1;
uint32_t x226 = 7928U;
static int16_t x233 = INT16_MIN;
volatile int32_t t57 = 371029;
uint8_t x246 = UINT8_MAX;
int32_t x249 = INT32_MIN;
static uint32_t x263 = UINT32_MAX;
int32_t t64 = 558838;
int16_t x265 = 385;
static volatile int64_t x275 = -7056439354811725LL;
uint32_t x276 = 297146476U;
int8_t x280 = -1;
uint64_t x284 = 105LLU;
int32_t t69 = -65789389;
uint64_t x291 = 64048175218872LLU;
uint32_t x297 = 3U;
int32_t x300 = -1;
static int32_t t73 = 35233;
static int8_t x304 = 1;
static volatile int32_t t74 = 9612491;
static int32_t x305 = INT32_MAX;
uint32_t x306 = UINT32_MAX;
int32_t t75 = 97414240;
int32_t x314 = 17212683;
int64_t x328 = 2317268188LL;
static volatile int32_t t79 = -1;
uint32_t x329 = 8210217U;
volatile int16_t x330 = INT16_MIN;
static volatile int16_t x334 = INT16_MIN;
static volatile int32_t t85 = -709340629;
volatile int64_t x355 = INT64_MAX;
uint64_t x357 = UINT64_MAX;
int16_t x359 = 0;
int32_t t87 = 85817;
volatile uint32_t x365 = UINT32_MAX;
uint32_t x373 = 3281U;
int32_t t92 = 409624;
static uint8_t x388 = 1U;
int16_t x389 = INT16_MIN;
uint8_t x396 = UINT8_MAX;
static volatile int64_t x397 = INT64_MAX;
static uint32_t x404 = UINT32_MAX;


void f0(void) {
	uint32_t x1 = 5425973U;
	int16_t x2 = -1;
	int16_t x3 = -1;
	static int16_t x4 = 451;

	t0 = (x1<=(x2==(x3/x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	volatile int64_t x6 = INT64_MIN;
	uint32_t x7 = 5207U;
	uint16_t x8 = 14716U;

	t1 = (x5<=(x6==(x7/x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = -6618651977459547LL;
	int16_t x10 = INT16_MAX;
	int64_t x11 = INT64_MAX;
	static uint8_t x12 = 41U;

	t2 = (x9<=(x10==(x11/x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = INT8_MIN;
	int64_t x15 = -1LL;
	int16_t x16 = INT16_MIN;
	int32_t t3 = -7359266;

	t3 = (x13<=(x14==(x15/x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = INT32_MIN;
	uint64_t x18 = UINT64_MAX;
	volatile int32_t x20 = 903;

	t4 = (x17<=(x18==(x19/x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = -1;
	int64_t x23 = 909148008526654374LL;
	volatile int32_t t5 = 198062304;

	t5 = (x21<=(x22==(x23/x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 1;
	static volatile int8_t x26 = -1;
	int16_t x27 = -3;
	volatile int16_t x28 = 2541;
	static int32_t t6 = 36003;

	t6 = (x25<=(x26==(x27/x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x30 = UINT64_MAX;
	int16_t x31 = INT16_MIN;
	int8_t x32 = 28;
	volatile int32_t t7 = 6;

	t7 = (x29<=(x30==(x31/x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x34 = 1157;
	int32_t x35 = 171381;
	volatile int64_t x36 = -1LL;
	volatile int32_t t8 = -340;

	t8 = (x33<=(x34==(x35/x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -9;
	volatile int32_t x38 = INT32_MIN;
	int16_t x39 = -5;
	int32_t x40 = -1;
	int32_t t9 = -208007;

	t9 = (x37<=(x38==(x39/x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x42 = UINT64_MAX;
	int64_t x43 = INT64_MIN;
	uint16_t x44 = UINT16_MAX;
	volatile int32_t t10 = 524435190;

	t10 = (x41<=(x42==(x43/x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = INT64_MIN;
	int32_t x46 = -30965;
	int16_t x47 = INT16_MIN;
	uint16_t x48 = 8604U;
	int32_t t11 = 5841;

	t11 = (x45<=(x46==(x47/x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x49 = -1704;
	volatile int32_t x50 = 2923738;
	int16_t x51 = INT16_MIN;
	int8_t x52 = INT8_MIN;
	static volatile int32_t t12 = 1691;

	t12 = (x49<=(x50==(x51/x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	static int8_t x54 = -1;
	uint8_t x55 = 19U;
	int8_t x56 = INT8_MIN;
	volatile int32_t t13 = -30548;

	t13 = (x53<=(x54==(x55/x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	int8_t x58 = INT8_MAX;
	volatile int64_t x59 = 1738606146LL;
	uint16_t x60 = 11447U;
	volatile int32_t t14 = -111727103;

	t14 = (x57<=(x58==(x59/x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x63 = UINT16_MAX;
	int16_t x64 = INT16_MIN;
	volatile int32_t t15 = -36114298;

	t15 = (x61<=(x62==(x63/x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = INT64_MIN;
	volatile uint64_t x66 = UINT64_MAX;
	volatile int64_t x68 = INT64_MIN;
	volatile int32_t t16 = -92290226;

	t16 = (x65<=(x66==(x67/x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	int32_t x70 = INT32_MIN;
	static uint8_t x71 = UINT8_MAX;
	static int32_t t17 = 2423477;

	t17 = (x69<=(x70==(x71/x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = -159535;
	uint64_t x74 = 234475860615389LLU;
	volatile int16_t x75 = 6937;
	int16_t x76 = INT16_MIN;

	t18 = (x73<=(x74==(x75/x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x78 = INT64_MAX;
	volatile int16_t x79 = INT16_MIN;
	int64_t x80 = INT64_MIN;
	int32_t t19 = 0;

	t19 = (x77<=(x78==(x79/x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = INT16_MIN;
	int16_t x82 = INT16_MIN;
	static int32_t x84 = -1;
	int32_t t20 = -1399;

	t20 = (x81<=(x82==(x83/x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -1;
	static volatile uint64_t x86 = UINT64_MAX;
	uint16_t x88 = 46U;
	volatile int32_t t21 = 1;

	t21 = (x85<=(x86==(x87/x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = 1737114792045LL;
	static uint8_t x94 = 25U;
	uint8_t x95 = 40U;
	uint16_t x96 = 1426U;
	int32_t t22 = 697794;

	t22 = (x93<=(x94==(x95/x96)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x97 = 3060911349LL;
	volatile int64_t x98 = 705636085988365LL;
	int32_t x100 = -64005449;
	int32_t t23 = 1;

	t23 = (x97<=(x98==(x99/x100)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x104 = -1LL;
	volatile int32_t t24 = -45863;

	t24 = (x101<=(x102==(x103/x104)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = 94;
	int8_t x107 = -1;

	t25 = (x105<=(x106==(x107/x108)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x109 = 75262U;
	static uint8_t x110 = 11U;
	static volatile uint32_t x112 = 3983U;
	static int32_t t26 = 49790869;

	t26 = (x109<=(x110==(x111/x112)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = -195401478LL;
	uint8_t x115 = UINT8_MAX;
	volatile int8_t x116 = -23;
	int32_t t27 = -24;

	t27 = (x113<=(x114==(x115/x116)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x117 = -30;
	int16_t x118 = 0;
	volatile int8_t x119 = -1;
	int16_t x120 = 105;
	static volatile int32_t t28 = -924;

	t28 = (x117<=(x118==(x119/x120)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x121 = -1;
	int64_t x122 = INT64_MAX;
	int64_t x123 = 413550135868386LL;
	static uint32_t x124 = 397250747U;
	int32_t t29 = -1737646;

	t29 = (x121<=(x122==(x123/x124)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = -33678819;
	int64_t x127 = 188160387LL;
	volatile int32_t t30 = -731730495;

	t30 = (x125<=(x126==(x127/x128)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x129 = -45;
	volatile int8_t x130 = 0;
	uint16_t x131 = UINT16_MAX;
	static uint16_t x132 = 14U;
	volatile int32_t t31 = -561849;

	t31 = (x129<=(x130==(x131/x132)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x134 = -1;
	int8_t x136 = INT8_MIN;
	volatile int32_t t32 = 240373203;

	t32 = (x133<=(x134==(x135/x136)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = INT16_MAX;
	int64_t x138 = 889341223417LL;
	int64_t x139 = INT64_MIN;
	int16_t x140 = INT16_MAX;
	int32_t t33 = 301;

	t33 = (x137<=(x138==(x139/x140)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x141 = INT32_MIN;
	int32_t x142 = INT32_MIN;
	int64_t x144 = -1LL;
	volatile int32_t t34 = -431;

	t34 = (x141<=(x142==(x143/x144)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x145 = UINT8_MAX;
	uint64_t x147 = 16592972LLU;
	int64_t x148 = INT64_MAX;
	volatile int32_t t35 = 50681904;

	t35 = (x145<=(x146==(x147/x148)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x149 = UINT64_MAX;
	int64_t x150 = INT64_MIN;
	volatile int32_t x152 = -1;
	volatile int32_t t36 = 59945;

	t36 = (x149<=(x150==(x151/x152)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x154 = -715;
	static int8_t x155 = INT8_MIN;
	uint16_t x156 = UINT16_MAX;

	t37 = (x153<=(x154==(x155/x156)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x158 = -1;
	volatile int32_t x159 = INT32_MIN;
	int8_t x160 = INT8_MAX;
	volatile int32_t t38 = -1741626;

	t38 = (x157<=(x158==(x159/x160)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x162 = INT32_MIN;
	int8_t x163 = INT8_MAX;
	static uint32_t x164 = 75U;

	t39 = (x161<=(x162==(x163/x164)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x165 = -8725106718LL;
	int16_t x166 = 15;
	int64_t x167 = -2284976913620207908LL;
	int32_t t40 = 175164;

	t40 = (x165<=(x166==(x167/x168)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x169 = 10180871U;
	static volatile int64_t x170 = -1LL;
	uint32_t x171 = 5188136U;

	t41 = (x169<=(x170==(x171/x172)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = INT64_MAX;
	int16_t x175 = INT16_MAX;
	volatile int8_t x176 = INT8_MIN;

	t42 = (x173<=(x174==(x175/x176)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x177 = UINT8_MAX;
	static uint32_t x178 = UINT32_MAX;
	int8_t x179 = 12;
	volatile int64_t x180 = INT64_MIN;

	t43 = (x177<=(x178==(x179/x180)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x181 = -1;
	int64_t x182 = INT64_MIN;
	volatile int32_t t44 = -73;

	t44 = (x181<=(x182==(x183/x184)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x186 = INT16_MIN;
	int32_t x187 = -69357119;
	int16_t x188 = INT16_MAX;
	volatile int32_t t45 = -65;

	t45 = (x185<=(x186==(x187/x188)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x189 = INT64_MIN;
	int64_t x190 = INT64_MAX;
	static int8_t x191 = -1;
	int32_t t46 = -60456;

	t46 = (x189<=(x190==(x191/x192)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x193 = -1;
	uint8_t x194 = 2U;
	static int16_t x196 = -5545;
	int32_t t47 = 7738187;

	t47 = (x193<=(x194==(x195/x196)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = -50;
	volatile uint16_t x198 = 13816U;
	int8_t x199 = INT8_MIN;
	int64_t x200 = 942LL;
	volatile int32_t t48 = -1152431;

	t48 = (x197<=(x198==(x199/x200)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x201 = 519;
	int32_t t49 = -24182808;

	t49 = (x201<=(x202==(x203/x204)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x205 = 0U;
	static uint32_t x207 = UINT32_MAX;
	static int16_t x208 = INT16_MIN;
	int32_t t50 = 2;

	t50 = (x205<=(x206==(x207/x208)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x209 = 10U;
	uint32_t x210 = 1810575047U;
	int16_t x211 = INT16_MAX;
	int32_t t51 = -6211637;

	t51 = (x209<=(x210==(x211/x212)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x213 = 8037212972606LL;
	static int32_t x214 = INT32_MIN;
	static int64_t x216 = INT64_MIN;

	t52 = (x213<=(x214==(x215/x216)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x220 = INT64_MIN;
	int32_t t53 = 585248;

	t53 = (x217<=(x218==(x219/x220)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x222 = 24546U;
	int64_t x223 = -13283LL;

	t54 = (x221<=(x222==(x223/x224)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x227 = 0U;
	int64_t x228 = INT64_MAX;
	volatile int32_t t55 = 26115360;

	t55 = (x225<=(x226==(x227/x228)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x229 = 63U;
	volatile int8_t x230 = INT8_MIN;
	uint32_t x231 = UINT32_MAX;
	uint16_t x232 = UINT16_MAX;
	static int32_t t56 = -1648015;

	t56 = (x229<=(x230==(x231/x232)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x234 = INT32_MAX;
	uint16_t x235 = 308U;
	int32_t x236 = INT32_MAX;

	t57 = (x233<=(x234==(x235/x236)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x237 = 48132509143LLU;
	int64_t x238 = -1102LL;
	volatile uint16_t x239 = UINT16_MAX;
	uint32_t x240 = 73383U;
	volatile int32_t t58 = 1019147;

	t58 = (x237<=(x238==(x239/x240)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x241 = -1LL;
	volatile uint8_t x242 = 6U;
	int32_t x243 = INT32_MIN;
	static uint8_t x244 = 38U;
	volatile int32_t t59 = 1398684;

	t59 = (x241<=(x242==(x243/x244)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = INT16_MAX;
	uint16_t x247 = 6107U;
	static uint64_t x248 = 1LLU;
	volatile int32_t t60 = 16380;

	t60 = (x245<=(x246==(x247/x248)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x250 = INT64_MAX;
	int32_t x251 = 3047577;
	uint32_t x252 = UINT32_MAX;
	volatile int32_t t61 = 36847630;

	t61 = (x249<=(x250==(x251/x252)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x253 = 1;
	volatile int32_t x254 = INT32_MIN;
	int16_t x255 = INT16_MIN;
	static volatile int8_t x256 = INT8_MAX;
	static volatile int32_t t62 = 2421331;

	t62 = (x253<=(x254==(x255/x256)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x257 = 98119326U;
	int16_t x258 = 6426;
	uint32_t x259 = 11565134U;
	volatile int16_t x260 = -1;
	int32_t t63 = -5988056;

	t63 = (x257<=(x258==(x259/x260)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x261 = UINT32_MAX;
	int64_t x262 = -1LL;
	static int64_t x264 = -90284377LL;

	t64 = (x261<=(x262==(x263/x264)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x266 = 38LL;
	int32_t x267 = INT32_MIN;
	int8_t x268 = INT8_MIN;
	static volatile int32_t t65 = -962;

	t65 = (x265<=(x266==(x267/x268)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x269 = 1U;
	int64_t x270 = INT64_MIN;
	uint32_t x271 = UINT32_MAX;
	int8_t x272 = 1;
	volatile int32_t t66 = 117;

	t66 = (x269<=(x270==(x271/x272)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x273 = INT8_MIN;
	int8_t x274 = -26;
	int32_t t67 = 9886;

	t67 = (x273<=(x274==(x275/x276)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x277 = UINT32_MAX;
	int16_t x278 = -1024;
	int16_t x279 = -1;
	static volatile int32_t t68 = 7187;

	t68 = (x277<=(x278==(x279/x280)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x281 = INT16_MIN;
	static int64_t x282 = 1956LL;
	int16_t x283 = INT16_MAX;

	t69 = (x281<=(x282==(x283/x284)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x285 = -2480LL;
	int32_t x286 = -1;
	static uint16_t x287 = 22U;
	int32_t x288 = 4878584;
	int32_t t70 = -1024;

	t70 = (x285<=(x286==(x287/x288)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x289 = INT8_MIN;
	uint32_t x290 = 345U;
	int32_t x292 = INT32_MIN;
	static int32_t t71 = -1605;

	t71 = (x289<=(x290==(x291/x292)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x293 = -1;
	static uint32_t x294 = UINT32_MAX;
	uint8_t x295 = 48U;
	uint32_t x296 = 4U;
	int32_t t72 = 14;

	t72 = (x293<=(x294==(x295/x296)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x298 = INT64_MAX;
	static volatile int64_t x299 = -1LL;

	t73 = (x297<=(x298==(x299/x300)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x301 = INT64_MIN;
	int32_t x302 = INT32_MIN;
	static int16_t x303 = 13295;

	t74 = (x301<=(x302==(x303/x304)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x307 = INT32_MIN;
	volatile int8_t x308 = INT8_MAX;

	t75 = (x305<=(x306==(x307/x308)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x309 = 8172;
	int32_t x310 = 24;
	static volatile uint8_t x311 = UINT8_MAX;
	volatile int8_t x312 = -1;
	int32_t t76 = 3;

	t76 = (x309<=(x310==(x311/x312)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x313 = UINT8_MAX;
	int8_t x315 = 0;
	int16_t x316 = -1279;
	volatile int32_t t77 = 0;

	t77 = (x313<=(x314==(x315/x316)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x321 = 3895U;
	static int8_t x322 = INT8_MIN;
	int8_t x323 = INT8_MIN;
	volatile uint16_t x324 = 132U;
	int32_t t78 = 158238733;

	t78 = (x321<=(x322==(x323/x324)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x325 = -13;
	int16_t x326 = INT16_MIN;
	int16_t x327 = INT16_MIN;

	t79 = (x325<=(x326==(x327/x328)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x331 = -1114;
	int64_t x332 = INT64_MAX;
	volatile int32_t t80 = 21361;

	t80 = (x329<=(x330==(x331/x332)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x333 = -1;
	volatile int32_t x335 = -21;
	int16_t x336 = -1;
	static int32_t t81 = -271;

	t81 = (x333<=(x334==(x335/x336)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x337 = 2U;
	static volatile uint8_t x338 = 15U;
	volatile int32_t x339 = 136489;
	uint32_t x340 = 863477488U;
	int32_t t82 = -40;

	t82 = (x337<=(x338==(x339/x340)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x341 = 8142252U;
	uint8_t x342 = 38U;
	volatile int64_t x343 = 6783LL;
	int16_t x344 = 122;
	int32_t t83 = 360;

	t83 = (x341<=(x342==(x343/x344)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x345 = UINT8_MAX;
	volatile uint16_t x346 = 29852U;
	int16_t x347 = INT16_MIN;
	volatile int8_t x348 = -1;
	int32_t t84 = -7607838;

	t84 = (x345<=(x346==(x347/x348)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x349 = -1;
	int64_t x350 = -1LL;
	int32_t x351 = -1;
	static int8_t x352 = -17;

	t85 = (x349<=(x350==(x351/x352)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x353 = 1705988167697LL;
	int8_t x354 = INT8_MIN;
	static volatile uint8_t x356 = 127U;
	int32_t t86 = 3;

	t86 = (x353<=(x354==(x355/x356)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x358 = -3682;
	uint16_t x360 = 17U;

	t87 = (x357<=(x358==(x359/x360)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x361 = UINT32_MAX;
	uint64_t x362 = 51643343165LLU;
	int8_t x363 = -1;
	uint8_t x364 = 3U;
	static int32_t t88 = -3221073;

	t88 = (x361<=(x362==(x363/x364)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x366 = -1;
	volatile int8_t x367 = INT8_MAX;
	uint64_t x368 = 773271979021LLU;
	volatile int32_t t89 = -5;

	t89 = (x365<=(x366==(x367/x368)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x369 = 1U;
	uint16_t x370 = 0U;
	static volatile int32_t x371 = -196;
	uint8_t x372 = 7U;
	int32_t t90 = -963722;

	t90 = (x369<=(x370==(x371/x372)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x374 = INT64_MIN;
	volatile int64_t x375 = INT64_MAX;
	int16_t x376 = -4;
	volatile int32_t t91 = 199;

	t91 = (x373<=(x374==(x375/x376)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x377 = INT32_MAX;
	uint16_t x378 = 5379U;
	int8_t x379 = 0;
	int8_t x380 = -19;

	t92 = (x377<=(x378==(x379/x380)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x381 = INT16_MIN;
	int32_t x382 = 2989;
	int16_t x383 = 46;
	int64_t x384 = INT64_MAX;
	static int32_t t93 = -2365644;

	t93 = (x381<=(x382==(x383/x384)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x385 = 13757;
	static volatile int64_t x386 = INT64_MIN;
	volatile int32_t x387 = 3;
	static int32_t t94 = 115;

	t94 = (x385<=(x386==(x387/x388)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x390 = -1LL;
	uint32_t x391 = 894U;
	static uint16_t x392 = 17U;
	int32_t t95 = -22108;

	t95 = (x389<=(x390==(x391/x392)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x393 = INT32_MAX;
	int64_t x394 = -1LL;
	uint32_t x395 = 2932041U;
	int32_t t96 = 217464;

	t96 = (x393<=(x394==(x395/x396)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x398 = 1;
	int8_t x399 = INT8_MAX;
	uint8_t x400 = 78U;
	int32_t t97 = -6980;

	t97 = (x397<=(x398==(x399/x400)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x401 = 3U;
	volatile uint64_t x402 = 14736LLU;
	int32_t x403 = INT32_MIN;
	volatile int32_t t98 = -4976;

	t98 = (x401<=(x402==(x403/x404)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x405 = INT8_MIN;
	int64_t x406 = INT64_MIN;
	uint64_t x407 = UINT64_MAX;
	uint8_t x408 = 4U;
	volatile int32_t t99 = 0;

	t99 = (x405<=(x406==(x407/x408)));

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

