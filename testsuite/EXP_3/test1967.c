#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = INT16_MIN;
int8_t x9 = -1;
uint16_t x12 = 5U;
uint64_t x16 = UINT64_MAX;
int64_t x23 = INT64_MIN;
int64_t t5 = -1451378701LL;
int64_t x25 = INT64_MAX;
int64_t x27 = -1LL;
int32_t x30 = -7066921;
int8_t x33 = -1;
int32_t t8 = 642288781;
int64_t x40 = -1LL;
int8_t x41 = 0;
static int32_t x46 = -1;
int16_t x50 = INT16_MAX;
static int8_t x55 = INT8_MIN;
int32_t x58 = INT32_MIN;
int32_t x64 = 3;
int8_t x68 = -5;
int8_t x70 = 1;
uint64_t x71 = UINT64_MAX;
volatile int32_t x72 = INT32_MIN;
uint32_t x77 = UINT32_MAX;
int8_t x80 = INT8_MAX;
int64_t x81 = 282234LL;
static int64_t x82 = INT64_MAX;
int64_t x83 = -472493LL;
int64_t t20 = -13878060LL;
volatile int16_t x85 = -2;
static volatile int64_t t21 = 1019LL;
int8_t x91 = 26;
volatile int64_t x92 = INT64_MIN;
int64_t x93 = INT64_MIN;
int8_t x94 = -38;
volatile uint64_t x104 = 9LLU;
static volatile uint64_t t25 = 118432718427407LLU;
volatile int64_t x107 = INT64_MIN;
static int64_t x109 = 27LL;
static uint32_t x115 = 41674U;
int64_t x116 = 374475689858879897LL;
int16_t x120 = INT16_MAX;
int32_t t29 = 937;
int8_t x123 = -37;
static int32_t t31 = -21802;
uint16_t x130 = UINT16_MAX;
int32_t x137 = -1;
static uint32_t x141 = UINT32_MAX;
static volatile int32_t x144 = 2184016;
uint64_t t36 = 2LLU;
int32_t x149 = INT32_MIN;
static int32_t x151 = INT32_MIN;
int64_t x152 = -53941668586485635LL;
volatile int64_t t37 = 48579435996189070LL;
int16_t x154 = INT16_MIN;
uint16_t x155 = UINT16_MAX;
volatile int32_t t39 = 77170115;
static volatile uint8_t x165 = UINT8_MAX;
int32_t x169 = -497251276;
static uint8_t x175 = 14U;
static int16_t x176 = 138;
uint8_t x179 = 54U;
int64_t x195 = -1LL;
uint64_t x203 = 40203086LLU;
uint16_t x204 = UINT16_MAX;
volatile int8_t x207 = -1;
int8_t x209 = -1;
int8_t x211 = INT8_MAX;
static uint8_t x214 = 34U;
uint64_t t54 = 1462502LLU;
static uint32_t x223 = UINT32_MAX;
uint16_t x224 = UINT16_MAX;
uint64_t x228 = 751146195LLU;
int16_t x230 = INT16_MIN;
int32_t t57 = -1043;
uint8_t x239 = UINT8_MAX;
int64_t t61 = 0LL;
int64_t x253 = INT64_MIN;
volatile uint16_t x255 = UINT16_MAX;
volatile int8_t x261 = -1;
uint8_t x264 = UINT8_MAX;
static int16_t x288 = INT16_MIN;
int32_t t71 = 7754924;
volatile uint64_t t72 = 23961LLU;
static uint16_t x293 = UINT16_MAX;
int32_t x296 = INT32_MIN;
int32_t t73 = -34375955;
int32_t x310 = INT32_MAX;
uint64_t x315 = 24LLU;
int32_t x319 = INT32_MIN;
int32_t x322 = -25029;
uint64_t t80 = 110936946193701532LLU;
static int32_t t81 = 2;
static int64_t x339 = 1502719645LL;
uint64_t x348 = UINT64_MAX;
static int64_t x353 = 240033531908186LL;
static uint16_t x357 = UINT16_MAX;
uint32_t x361 = UINT32_MAX;
uint8_t x362 = 9U;
static int8_t x363 = -3;
int16_t x364 = INT16_MAX;
uint32_t x367 = UINT32_MAX;
static uint16_t x368 = 100U;
uint64_t x370 = 20LLU;
int8_t x372 = INT8_MAX;
int32_t x382 = -1;
volatile int32_t t96 = -4027;
int8_t x391 = -4;
volatile int32_t x394 = INT32_MIN;
volatile int32_t t99 = -2;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int16_t x2 = 14519;
	volatile uint64_t x4 = 1449274LLU;
	static volatile uint64_t t0 = 13818167LLU;

	t0 = ((x1<x2)/(x3|x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 288276620U;
	uint64_t x6 = 15415242640LLU;
	static int16_t x7 = INT16_MAX;
	uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = 161;

	t1 = ((x5<x6)/(x7|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x10 = INT32_MAX;
	int64_t x11 = INT64_MIN;
	int64_t t2 = -8631730177LL;

	t2 = ((x9<x10)/(x11|x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	volatile uint8_t x14 = 4U;
	static uint8_t x15 = UINT8_MAX;
	uint64_t t3 = 8858LLU;

	t3 = ((x13<x14)/(x15|x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	static volatile int8_t x18 = 25;
	int16_t x19 = 60;
	int64_t x20 = -3302685877285423468LL;
	int64_t t4 = 95LL;

	t4 = ((x17<x18)/(x19|x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MAX;
	int8_t x22 = 3;
	volatile int16_t x24 = INT16_MIN;

	t5 = ((x21<x22)/(x23|x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = INT8_MIN;
	static volatile uint32_t x28 = UINT32_MAX;
	volatile int64_t t6 = -40072063LL;

	t6 = ((x25<x26)/(x27|x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = INT16_MIN;
	int32_t x31 = 31499;
	uint64_t x32 = 3LLU;
	uint64_t t7 = 33777887445193501LLU;

	t7 = ((x29<x30)/(x31|x32));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x34 = INT8_MIN;
	int32_t x35 = INT32_MIN;
	int16_t x36 = INT16_MAX;

	t8 = ((x33<x34)/(x35|x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 2U;
	volatile int16_t x38 = -1;
	int16_t x39 = -1;
	int64_t t9 = 17177051386583600LL;

	t9 = ((x37<x38)/(x39|x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x42 = 154U;
	int8_t x43 = -25;
	uint32_t x44 = 208U;
	volatile uint32_t t10 = 1834U;

	t10 = ((x41<x42)/(x43|x44));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = 143181;
	volatile uint64_t x47 = 61310517324628053LLU;
	static int16_t x48 = 0;
	volatile uint64_t t11 = 2974661379964LLU;

	t11 = ((x45<x46)/(x47|x48));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = UINT64_MAX;
	static int16_t x51 = -5348;
	uint64_t x52 = 186312LLU;
	volatile uint64_t t12 = 7353LLU;

	t12 = ((x49<x50)/(x51|x52));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	uint8_t x54 = 0U;
	int64_t x56 = INT64_MIN;
	int64_t t13 = -3LL;

	t13 = ((x53<x54)/(x55|x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	uint32_t x59 = 867526U;
	int8_t x60 = -1;
	uint32_t t14 = 9U;

	t14 = ((x57<x58)/(x59|x60));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 78U;
	int64_t x62 = 33891562464LL;
	uint8_t x63 = UINT8_MAX;
	static volatile int32_t t15 = 582;

	t15 = ((x61<x62)/(x63|x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 26U;
	int16_t x66 = -1;
	uint16_t x67 = 247U;
	int32_t t16 = 47387;

	t16 = ((x65<x66)/(x67|x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x69 = INT32_MIN;
	static volatile uint64_t t17 = 860884087695189LLU;

	t17 = ((x69<x70)/(x71|x72));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	volatile int8_t x74 = -1;
	int8_t x75 = INT8_MIN;
	uint8_t x76 = UINT8_MAX;
	static volatile int32_t t18 = 712004268;

	t18 = ((x73<x74)/(x75|x76));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x78 = -7790;
	uint8_t x79 = 19U;
	volatile int32_t t19 = -3;

	t19 = ((x77<x78)/(x79|x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x84 = -24167953511LL;

	t20 = ((x81<x82)/(x83|x84));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x86 = UINT64_MAX;
	int64_t x87 = -1LL;
	static uint32_t x88 = 253264429U;

	t21 = ((x85<x86)/(x87|x88));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = -18257;
	volatile int8_t x90 = INT8_MIN;
	volatile int64_t t22 = 47LL;

	t22 = ((x89<x90)/(x91|x92));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x95 = INT64_MIN;
	uint8_t x96 = UINT8_MAX;
	int64_t t23 = -28LL;

	t23 = ((x93<x94)/(x95|x96));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 102486753626199695LLU;
	int16_t x98 = INT16_MIN;
	int8_t x99 = INT8_MIN;
	int8_t x100 = 0;
	int32_t t24 = -163944;

	t24 = ((x97<x98)/(x99|x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = UINT8_MAX;
	static uint64_t x102 = 2000530415683135006LLU;
	static uint64_t x103 = UINT64_MAX;

	t25 = ((x101<x102)/(x103|x104));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	static int64_t x106 = INT64_MIN;
	int8_t x108 = -1;
	volatile int64_t t26 = 141234LL;

	t26 = ((x105<x106)/(x107|x108));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x110 = UINT64_MAX;
	int64_t x111 = INT64_MAX;
	uint8_t x112 = UINT8_MAX;
	volatile int64_t t27 = 10074024LL;

	t27 = ((x109<x110)/(x111|x112));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -1;
	int16_t x114 = INT16_MIN;
	static int64_t t28 = 8117295888854362LL;

	t28 = ((x113<x114)/(x115|x116));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = 130136871;
	volatile int32_t x118 = 62479;
	volatile int16_t x119 = -69;

	t29 = ((x117<x118)/(x119|x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 45U;
	volatile int8_t x122 = INT8_MIN;
	int64_t x124 = INT64_MAX;
	volatile int64_t t30 = 73756673619259914LL;

	t30 = ((x121<x122)/(x123|x124));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = 1;
	uint32_t x126 = 3517423U;
	static int16_t x127 = INT16_MIN;
	int16_t x128 = -11;

	t31 = ((x125<x126)/(x127|x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = UINT8_MAX;
	int16_t x131 = INT16_MIN;
	int16_t x132 = -1;
	int32_t t32 = -1;

	t32 = ((x129<x130)/(x131|x132));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 1U;
	uint32_t x134 = 9185U;
	static int32_t x135 = INT32_MAX;
	int8_t x136 = INT8_MIN;
	static volatile int32_t t33 = 233753737;

	t33 = ((x133<x134)/(x135|x136));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x138 = INT8_MIN;
	int32_t x139 = -1;
	volatile int64_t x140 = INT64_MAX;
	static volatile int64_t t34 = 490857816LL;

	t34 = ((x137<x138)/(x139|x140));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x142 = 49894084410862307LL;
	volatile int16_t x143 = INT16_MAX;
	volatile int32_t t35 = -2;

	t35 = ((x141<x142)/(x143|x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = 6488413U;
	uint64_t x146 = 1122142775892185321LLU;
	static volatile int32_t x147 = 1;
	uint64_t x148 = UINT64_MAX;

	t36 = ((x145<x146)/(x147|x148));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x150 = INT64_MIN;

	t37 = ((x149<x150)/(x151|x152));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x153 = 386LLU;
	int32_t x156 = 1819;
	int32_t t38 = 643;

	t38 = ((x153<x154)/(x155|x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	volatile int32_t x158 = 31461143;
	int32_t x159 = -8898080;
	int16_t x160 = INT16_MAX;

	t39 = ((x157<x158)/(x159|x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x161 = -50;
	static volatile int64_t x162 = INT64_MIN;
	static int32_t x163 = 5563;
	int64_t x164 = INT64_MAX;
	static int64_t t40 = 3130605100538613LL;

	t40 = ((x161<x162)/(x163|x164));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x166 = UINT16_MAX;
	volatile uint16_t x167 = 184U;
	volatile int64_t x168 = INT64_MIN;
	volatile int64_t t41 = -2863145615791LL;

	t41 = ((x165<x166)/(x167|x168));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint16_t x170 = 1U;
	uint64_t x171 = 51122550758700035LLU;
	uint8_t x172 = 7U;
	volatile uint64_t t42 = 6804LLU;

	t42 = ((x169<x170)/(x171|x172));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	volatile uint32_t x174 = UINT32_MAX;
	volatile int32_t t43 = -2;

	t43 = ((x173<x174)/(x175|x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = 63;
	uint64_t x178 = UINT64_MAX;
	int16_t x180 = -1509;
	volatile int32_t t44 = 12275;

	t44 = ((x177<x178)/(x179|x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 18045300741254LLU;
	uint16_t x182 = UINT16_MAX;
	int16_t x183 = -1;
	volatile int8_t x184 = 12;
	int32_t t45 = -357;

	t45 = ((x181<x182)/(x183|x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x185 = -1LL;
	int32_t x186 = -1;
	int16_t x187 = -158;
	static uint32_t x188 = UINT32_MAX;
	uint32_t t46 = 20951798U;

	t46 = ((x185<x186)/(x187|x188));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = 46U;
	static int32_t x190 = -1;
	volatile int32_t x191 = INT32_MIN;
	static int8_t x192 = -1;
	volatile int32_t t47 = -345325434;

	t47 = ((x189<x190)/(x191|x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x193 = 28978746LLU;
	int16_t x194 = -1;
	int32_t x196 = 767;
	int64_t t48 = 961LL;

	t48 = ((x193<x194)/(x195|x196));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x197 = 3602232326026449LLU;
	uint64_t x198 = UINT64_MAX;
	int32_t x199 = 968;
	volatile uint32_t x200 = 1092431904U;
	static uint32_t t49 = 1U;

	t49 = ((x197<x198)/(x199|x200));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 0U;
	int8_t x202 = INT8_MAX;
	volatile uint64_t t50 = 20657717642LLU;

	t50 = ((x201<x202)/(x203|x204));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = 55513;
	static int8_t x206 = INT8_MIN;
	int8_t x208 = INT8_MIN;
	static int32_t t51 = -98;

	t51 = ((x205<x206)/(x207|x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x210 = INT64_MIN;
	uint32_t x212 = UINT32_MAX;
	uint32_t t52 = 4092U;

	t52 = ((x209<x210)/(x211|x212));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -1;
	int16_t x215 = 0;
	int32_t x216 = -10897677;
	int32_t t53 = 232;

	t53 = ((x213<x214)/(x215|x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x217 = -1LL;
	static int16_t x218 = -1;
	volatile uint64_t x219 = UINT64_MAX;
	uint8_t x220 = 0U;

	t54 = ((x217<x218)/(x219|x220));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MAX;
	uint32_t x222 = 358595U;
	uint32_t t55 = 759047881U;

	t55 = ((x221<x222)/(x223|x224));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = 1586LLU;
	uint8_t x226 = 1U;
	uint8_t x227 = 1U;
	volatile uint64_t t56 = 419878108012LLU;

	t56 = ((x225<x226)/(x227|x228));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MIN;
	int32_t x231 = -1;
	volatile int16_t x232 = -4;

	t57 = ((x229<x230)/(x231|x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x233 = -1;
	uint32_t x234 = 56U;
	int16_t x235 = 114;
	int32_t x236 = INT32_MAX;
	volatile int32_t t58 = 5;

	t58 = ((x233<x234)/(x235|x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 708U;
	int32_t x238 = INT32_MIN;
	static int32_t x240 = -1;
	volatile int32_t t59 = -3634;

	t59 = ((x237<x238)/(x239|x240));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = -1LL;
	int8_t x242 = -23;
	uint16_t x243 = 827U;
	static uint16_t x244 = 4262U;
	volatile int32_t t60 = 135849924;

	t60 = ((x241<x242)/(x243|x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = 1746;
	static uint8_t x246 = UINT8_MAX;
	int8_t x247 = 22;
	int64_t x248 = INT64_MIN;

	t61 = ((x245<x246)/(x247|x248));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x249 = -1;
	int32_t x250 = INT32_MIN;
	uint16_t x251 = UINT16_MAX;
	static int32_t x252 = INT32_MIN;
	int32_t t62 = -181;

	t62 = ((x249<x250)/(x251|x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x254 = 4011428677539474067LL;
	int16_t x256 = -1;
	volatile int32_t t63 = 914;

	t63 = ((x253<x254)/(x255|x256));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	volatile int8_t x258 = 6;
	uint8_t x259 = 21U;
	static int8_t x260 = INT8_MIN;
	int32_t t64 = 8;

	t64 = ((x257<x258)/(x259|x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x262 = -6;
	volatile uint8_t x263 = 24U;
	volatile int32_t t65 = -14;

	t65 = ((x261<x262)/(x263|x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MIN;
	int8_t x266 = INT8_MIN;
	static volatile int16_t x267 = -816;
	volatile uint32_t x268 = 815146U;
	volatile uint32_t t66 = 87933U;

	t66 = ((x265<x266)/(x267|x268));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x269 = INT16_MAX;
	int16_t x270 = INT16_MIN;
	uint16_t x271 = 1575U;
	static int8_t x272 = 5;
	volatile int32_t t67 = -617217892;

	t67 = ((x269<x270)/(x271|x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MIN;
	int8_t x274 = -16;
	int8_t x275 = -1;
	int16_t x276 = INT16_MIN;
	int32_t t68 = 240;

	t68 = ((x273<x274)/(x275|x276));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	int16_t x278 = 1;
	uint8_t x279 = 31U;
	volatile uint64_t x280 = 6021216112LLU;
	volatile uint64_t t69 = 14900289893391LLU;

	t69 = ((x277<x278)/(x279|x280));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	volatile int8_t x282 = INT8_MAX;
	int64_t x283 = -3915743LL;
	static uint8_t x284 = UINT8_MAX;
	int64_t t70 = 502917LL;

	t70 = ((x281<x282)/(x283|x284));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 0U;
	static int8_t x286 = INT8_MIN;
	int16_t x287 = INT16_MAX;

	t71 = ((x285<x286)/(x287|x288));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	int16_t x290 = -1;
	int8_t x291 = -30;
	uint64_t x292 = 25915977299LLU;

	t72 = ((x289<x290)/(x291|x292));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x294 = 5286;
	uint8_t x295 = UINT8_MAX;

	t73 = ((x293<x294)/(x295|x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 61U;
	uint16_t x298 = 0U;
	static int8_t x299 = INT8_MIN;
	static volatile uint32_t x300 = UINT32_MAX;
	uint32_t t74 = 17U;

	t74 = ((x297<x298)/(x299|x300));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = UINT8_MAX;
	int8_t x302 = -1;
	static int32_t x303 = INT32_MIN;
	int32_t x304 = -1;
	static volatile int32_t t75 = -13754344;

	t75 = ((x301<x302)/(x303|x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = -52;
	int64_t x306 = INT64_MAX;
	static int16_t x307 = INT16_MIN;
	int8_t x308 = INT8_MIN;
	static int32_t t76 = -110;

	t76 = ((x305<x306)/(x307|x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = UINT32_MAX;
	static int8_t x311 = 9;
	uint64_t x312 = 11034352859388LLU;
	uint64_t t77 = 670921196539LLU;

	t77 = ((x309<x310)/(x311|x312));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = 216532743303625479LLU;
	static int8_t x314 = 15;
	int64_t x316 = INT64_MAX;
	volatile uint64_t t78 = 40671307LLU;

	t78 = ((x313<x314)/(x315|x316));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 126731LLU;
	int32_t x318 = 31125558;
	uint8_t x320 = 2U;
	volatile int32_t t79 = 1;

	t79 = ((x317<x318)/(x319|x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x321 = -17693584337568456LL;
	uint32_t x323 = UINT32_MAX;
	static uint64_t x324 = 43278888239666084LLU;

	t80 = ((x321<x322)/(x323|x324));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MIN;
	static int64_t x326 = INT64_MAX;
	uint16_t x327 = 5160U;
	int16_t x328 = 1;

	t81 = ((x325<x326)/(x327|x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = UINT64_MAX;
	static uint64_t x330 = UINT64_MAX;
	int32_t x331 = 14973;
	int32_t x332 = 0;
	static volatile int32_t t82 = -1;

	t82 = ((x329<x330)/(x331|x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x333 = INT8_MAX;
	int32_t x334 = INT32_MIN;
	static uint8_t x335 = 25U;
	static int16_t x336 = INT16_MIN;
	static volatile int32_t t83 = -1;

	t83 = ((x333<x334)/(x335|x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint32_t x337 = 7877U;
	static int16_t x338 = -7;
	uint64_t x340 = UINT64_MAX;
	static volatile uint64_t t84 = 46346987LLU;

	t84 = ((x337<x338)/(x339|x340));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x341 = INT16_MAX;
	volatile int64_t x342 = INT64_MAX;
	int8_t x343 = -1;
	volatile uint16_t x344 = 5U;
	int32_t t85 = 5231;

	t85 = ((x341<x342)/(x343|x344));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x345 = INT16_MIN;
	int8_t x346 = INT8_MAX;
	static int8_t x347 = -1;
	uint64_t t86 = 533556450LLU;

	t86 = ((x345<x346)/(x347|x348));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x349 = INT8_MAX;
	int32_t x350 = -1;
	int8_t x351 = INT8_MIN;
	volatile uint32_t x352 = 15910U;
	volatile uint32_t t87 = 989461084U;

	t87 = ((x349<x350)/(x351|x352));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x354 = -650;
	int16_t x355 = -1;
	int16_t x356 = INT16_MAX;
	static volatile int32_t t88 = -11;

	t88 = ((x353<x354)/(x355|x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x358 = 721U;
	static int32_t x359 = INT32_MIN;
	int16_t x360 = -3;
	volatile int32_t t89 = 2018584;

	t89 = ((x357<x358)/(x359|x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t t90 = -6703;

	t90 = ((x361<x362)/(x363|x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MAX;
	volatile int32_t x366 = INT32_MIN;
	volatile uint32_t t91 = 113522404U;

	t91 = ((x365<x366)/(x367|x368));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x369 = -1729;
	int8_t x371 = 2;
	static volatile int32_t t92 = -22243978;

	t92 = ((x369<x370)/(x371|x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x373 = INT64_MIN;
	volatile int64_t x374 = INT64_MAX;
	int64_t x375 = -1LL;
	uint16_t x376 = 22U;
	int64_t t93 = 23962797LL;

	t93 = ((x373<x374)/(x375|x376));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x377 = 718636U;
	uint8_t x378 = 0U;
	int8_t x379 = INT8_MIN;
	int64_t x380 = INT64_MIN;
	static int64_t t94 = -19LL;

	t94 = ((x377<x378)/(x379|x380));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	static uint16_t x383 = 6U;
	static uint16_t x384 = 907U;
	static volatile int32_t t95 = 13412367;

	t95 = ((x381<x382)/(x383|x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x385 = UINT16_MAX;
	uint8_t x386 = 1U;
	int16_t x387 = 62;
	int32_t x388 = 1;

	t96 = ((x385<x386)/(x387|x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x389 = INT64_MIN;
	volatile uint32_t x390 = 1U;
	volatile int64_t x392 = -1LL;
	volatile int64_t t97 = 6560759881LL;

	t97 = ((x389<x390)/(x391|x392));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MIN;
	uint32_t x395 = 5U;
	int16_t x396 = 1379;
	volatile uint32_t t98 = 11519066U;

	t98 = ((x393<x394)/(x395|x396));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = -2;
	static int32_t x398 = 436;
	static int8_t x399 = INT8_MIN;
	int16_t x400 = 0;

	t99 = ((x397<x398)/(x399|x400));

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

