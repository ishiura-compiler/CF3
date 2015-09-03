#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t2 = -254;
uint16_t x18 = UINT16_MAX;
int64_t x22 = -2591418652LL;
int32_t x25 = INT32_MAX;
int8_t x27 = -14;
volatile int32_t t6 = 2;
static int32_t x34 = INT32_MIN;
static uint64_t x35 = UINT64_MAX;
static int64_t x48 = INT64_MIN;
int32_t t11 = 13394;
uint32_t x51 = 388701U;
static int64_t x52 = INT64_MIN;
volatile int16_t x62 = 699;
volatile int32_t t17 = -10;
static volatile int32_t t18 = 22;
int16_t x78 = INT16_MIN;
static volatile int64_t x86 = INT64_MIN;
static uint16_t x89 = UINT16_MAX;
volatile int64_t x91 = -1399482LL;
uint64_t x94 = 8LLU;
int8_t x97 = INT8_MIN;
int32_t t24 = -10934804;
static int64_t x104 = INT64_MIN;
static volatile int32_t t25 = 25301454;
int8_t x106 = INT8_MAX;
int16_t x109 = -116;
static volatile int32_t t27 = -233248;
volatile uint64_t x115 = 40963780LLU;
volatile int32_t t29 = 0;
static int32_t x125 = -13913;
int16_t x150 = INT16_MAX;
volatile uint32_t x158 = 4630U;
volatile int8_t x159 = -1;
volatile int32_t t40 = -18861;
int16_t x168 = INT16_MIN;
volatile int32_t t41 = 16;
int8_t x169 = INT8_MIN;
static int16_t x170 = INT16_MIN;
int64_t x171 = INT64_MIN;
int16_t x172 = INT16_MAX;
int32_t x183 = -1;
int32_t x190 = INT32_MIN;
uint32_t x195 = 357526207U;
int8_t x196 = INT8_MAX;
int32_t x209 = -1;
volatile int16_t x211 = 1;
int32_t x214 = -855037503;
int32_t t53 = 59;
int64_t x218 = -4379332154985588LL;
volatile uint16_t x219 = 44U;
static volatile uint8_t x227 = 10U;
static volatile uint8_t x233 = 12U;
static int64_t x234 = INT64_MIN;
volatile int32_t t58 = -356682142;
int16_t x241 = 2770;
uint16_t x244 = 12455U;
volatile int32_t t60 = 7;
int64_t x246 = 37753440819LL;
int8_t x249 = 0;
uint64_t x251 = 5922672094LLU;
uint32_t x253 = 202451U;
int8_t x257 = -1;
int8_t x267 = -1;
int32_t t71 = -223;
int32_t x289 = INT32_MIN;
static uint32_t x290 = UINT32_MAX;
int16_t x292 = 2070;
uint8_t x302 = 20U;
uint64_t x308 = 560987538421LLU;
uint8_t x310 = UINT8_MAX;
volatile int32_t t77 = -1063;
uint32_t x321 = 1547U;
uint8_t x324 = 0U;
static volatile int32_t t80 = -677424;
volatile uint8_t x326 = UINT8_MAX;
int8_t x328 = INT8_MAX;
static volatile uint8_t x329 = UINT8_MAX;
volatile int16_t x331 = -1;
int32_t x332 = INT32_MIN;
volatile int32_t t82 = -1;
static int64_t x335 = -7235934895059LL;
uint32_t x338 = 40321U;
volatile int32_t t84 = 74210;
int64_t x341 = INT64_MIN;
volatile uint32_t x350 = UINT32_MAX;
static volatile uint16_t x352 = 3929U;
static volatile int8_t x355 = INT8_MAX;
static int32_t t88 = -1045075;
uint8_t x358 = 3U;
int16_t x362 = INT16_MIN;
uint32_t x364 = UINT32_MAX;
uint8_t x367 = UINT8_MAX;
static uint8_t x373 = 4U;
static int32_t x381 = INT32_MAX;
uint16_t x386 = 264U;
static volatile int8_t x389 = INT8_MAX;
volatile int32_t t99 = 41009978;


void f0(void) {
	uint16_t x1 = 1U;
	int32_t x2 = 608597580;
	volatile uint64_t x3 = UINT64_MAX;
	uint32_t x4 = 0U;
	int32_t t0 = 1;

	t0 = (x1==((x2<x3)+x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	volatile int32_t x6 = 787637;
	uint8_t x7 = 9U;
	static volatile int16_t x8 = -1;
	volatile int32_t t1 = 7684498;

	t1 = (x5==((x6<x7)+x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	uint32_t x10 = 117U;
	int32_t x11 = 27492;
	uint16_t x12 = UINT16_MAX;

	t2 = (x9==((x10<x11)+x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	static int32_t x14 = -7;
	static uint8_t x15 = 26U;
	int64_t x16 = -1LL;
	volatile int32_t t3 = 240;

	t3 = (x13==((x14<x15)+x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = UINT64_MAX;
	volatile uint64_t x19 = 1574LLU;
	int32_t x20 = -14471;
	volatile int32_t t4 = 2;

	t4 = (x17==((x18<x19)+x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	int16_t x23 = INT16_MIN;
	volatile int8_t x24 = INT8_MAX;
	int32_t t5 = -4;

	t5 = (x21==((x22<x23)+x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x26 = INT16_MAX;
	uint8_t x28 = UINT8_MAX;

	t6 = (x25==((x26<x27)+x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 336LLU;
	uint64_t x30 = UINT64_MAX;
	int8_t x31 = -57;
	static volatile int16_t x32 = INT16_MIN;
	static int32_t t7 = -18;

	t7 = (x29==((x30<x31)+x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = INT16_MIN;
	int8_t x36 = INT8_MIN;
	int32_t t8 = -402390790;

	t8 = (x33==((x34<x35)+x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 3U;
	int64_t x38 = 20231288LL;
	volatile int8_t x39 = INT8_MIN;
	int32_t x40 = INT32_MAX;
	volatile int32_t t9 = 1;

	t9 = (x37==((x38<x39)+x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = INT16_MIN;
	volatile int32_t x42 = -1;
	static int32_t x43 = INT32_MAX;
	static uint32_t x44 = 15U;
	int32_t t10 = 1;

	t10 = (x41==((x42<x43)+x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = -3;
	uint32_t x46 = 1622U;
	int32_t x47 = INT32_MIN;

	t11 = (x45==((x46<x47)+x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = -1LL;
	int16_t x50 = INT16_MIN;
	int32_t t12 = -858077471;

	t12 = (x49==((x50<x51)+x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;
	int64_t x54 = -1LL;
	int8_t x55 = 3;
	static uint16_t x56 = 15U;
	static int32_t t13 = 0;

	t13 = (x53==((x54<x55)+x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = 461244696LL;
	int32_t x58 = -2;
	int32_t x59 = INT32_MAX;
	static int8_t x60 = INT8_MAX;
	volatile int32_t t14 = -998130552;

	t14 = (x57==((x58<x59)+x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = INT8_MIN;
	int64_t x63 = INT64_MAX;
	uint64_t x64 = UINT64_MAX;
	volatile int32_t t15 = 0;

	t15 = (x61==((x62<x63)+x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = 4826410997LL;
	static int16_t x66 = INT16_MIN;
	int64_t x67 = INT64_MAX;
	int32_t x68 = INT32_MIN;
	int32_t t16 = -285335;

	t16 = (x65==((x66<x67)+x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = 881722622LL;
	int16_t x70 = INT16_MIN;
	static int16_t x71 = 0;
	static int32_t x72 = -1;

	t17 = (x69==((x70<x71)+x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	uint16_t x74 = 158U;
	int16_t x75 = -1;
	static int16_t x76 = 285;

	t18 = (x73==((x74<x75)+x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 0U;
	int32_t x79 = INT32_MAX;
	int16_t x80 = 155;
	static volatile int32_t t19 = -111207984;

	t19 = (x77==((x78<x79)+x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	volatile uint32_t x82 = 2112533838U;
	uint64_t x83 = UINT64_MAX;
	int32_t x84 = INT32_MIN;
	int32_t t20 = 70;

	t20 = (x81==((x82<x83)+x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x85 = INT64_MIN;
	uint8_t x87 = 4U;
	int32_t x88 = 63;
	int32_t t21 = 1631;

	t21 = (x85==((x86<x87)+x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x90 = 2;
	int64_t x92 = INT64_MIN;
	volatile int32_t t22 = 3694385;

	t22 = (x89==((x90<x91)+x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x93 = 413099546U;
	int16_t x95 = INT16_MAX;
	uint64_t x96 = 3601641139595LLU;
	volatile int32_t t23 = 157779;

	t23 = (x93==((x94<x95)+x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x98 = 70U;
	int64_t x99 = INT64_MAX;
	int64_t x100 = INT64_MIN;

	t24 = (x97==((x98<x99)+x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -1LL;
	static int32_t x102 = -1;
	int16_t x103 = 1;

	t25 = (x101==((x102<x103)+x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	int8_t x107 = -1;
	int64_t x108 = INT64_MIN;
	int32_t t26 = 25;

	t26 = (x105==((x106<x107)+x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x110 = 1LL;
	int16_t x111 = 3;
	uint32_t x112 = 40403675U;

	t27 = (x109==((x110<x111)+x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = -1LL;
	static volatile uint64_t x114 = 575210990553546623LLU;
	int64_t x116 = INT64_MIN;
	volatile int32_t t28 = 2026;

	t28 = (x113==((x114<x115)+x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x117 = INT8_MAX;
	int64_t x118 = -1LL;
	int32_t x119 = -1;
	static int32_t x120 = 949657;

	t29 = (x117==((x118<x119)+x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -31246872LL;
	uint16_t x122 = 317U;
	int64_t x123 = -4LL;
	int16_t x124 = INT16_MIN;
	int32_t t30 = -67941516;

	t30 = (x121==((x122<x123)+x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x126 = UINT64_MAX;
	volatile int8_t x127 = INT8_MAX;
	int32_t x128 = INT32_MIN;
	volatile int32_t t31 = -382155542;

	t31 = (x125==((x126<x127)+x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = -3443446062LL;
	int64_t x130 = INT64_MIN;
	static uint16_t x131 = 558U;
	volatile int16_t x132 = -1;
	int32_t t32 = -4318953;

	t32 = (x129==((x130<x131)+x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x133 = 92U;
	int32_t x134 = -1;
	int64_t x135 = INT64_MIN;
	volatile int8_t x136 = 0;
	int32_t t33 = 320107;

	t33 = (x133==((x134<x135)+x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x137 = INT32_MAX;
	uint16_t x138 = UINT16_MAX;
	int8_t x139 = 1;
	int16_t x140 = -27;
	volatile int32_t t34 = 58;

	t34 = (x137==((x138<x139)+x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MAX;
	static int8_t x142 = 27;
	int16_t x143 = INT16_MIN;
	static int8_t x144 = INT8_MIN;
	volatile int32_t t35 = 230;

	t35 = (x141==((x142<x143)+x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x145 = UINT8_MAX;
	static volatile uint16_t x146 = 10838U;
	int8_t x147 = INT8_MIN;
	volatile uint32_t x148 = 4U;
	int32_t t36 = -1;

	t36 = (x145==((x146<x147)+x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -1;
	int32_t x151 = -1;
	int32_t x152 = -1;
	static volatile int32_t t37 = 23598469;

	t37 = (x149==((x150<x151)+x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x153 = -11;
	static int16_t x154 = -1;
	uint64_t x155 = UINT64_MAX;
	int8_t x156 = 0;
	volatile int32_t t38 = 25542497;

	t38 = (x153==((x154<x155)+x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	static volatile uint16_t x160 = UINT16_MAX;
	volatile int32_t t39 = -144341;

	t39 = (x157==((x158<x159)+x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = UINT32_MAX;
	static int8_t x162 = INT8_MAX;
	static uint32_t x163 = 39U;
	uint16_t x164 = 1U;

	t40 = (x161==((x162<x163)+x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MAX;
	int8_t x166 = INT8_MIN;
	volatile int16_t x167 = 0;

	t41 = (x165==((x166<x167)+x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t t42 = -711292;

	t42 = (x169==((x170<x171)+x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x173 = INT8_MIN;
	static volatile uint64_t x174 = 4066866880708645762LLU;
	int32_t x175 = -117;
	int16_t x176 = 0;
	volatile int32_t t43 = -58458;

	t43 = (x173==((x174<x175)+x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -23393211983804LL;
	uint16_t x178 = 127U;
	volatile int32_t x179 = 2026;
	volatile int32_t x180 = INT32_MIN;
	volatile int32_t t44 = -473603;

	t44 = (x177==((x178<x179)+x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 19037U;
	uint16_t x182 = UINT16_MAX;
	static volatile int32_t x184 = 490;
	volatile int32_t t45 = 64543;

	t45 = (x181==((x182<x183)+x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = UINT8_MAX;
	int8_t x186 = -1;
	static volatile int32_t x187 = -1;
	static int32_t x188 = INT32_MAX;
	static int32_t t46 = 1;

	t46 = (x185==((x186<x187)+x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x189 = 115;
	uint8_t x191 = UINT8_MAX;
	uint32_t x192 = 878804454U;
	volatile int32_t t47 = -818597220;

	t47 = (x189==((x190<x191)+x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 2875003U;
	static int16_t x194 = -1;
	int32_t t48 = 11;

	t48 = (x193==((x194<x195)+x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 69713U;
	int32_t x198 = -1;
	uint16_t x199 = 423U;
	int16_t x200 = 33;
	int32_t t49 = 0;

	t49 = (x197==((x198<x199)+x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MAX;
	volatile int64_t x202 = 271981963970LL;
	int32_t x203 = 18645795;
	uint64_t x204 = 147893890244577LLU;
	static int32_t t50 = -2;

	t50 = (x201==((x202<x203)+x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = UINT16_MAX;
	volatile int16_t x206 = -170;
	uint8_t x207 = UINT8_MAX;
	static uint32_t x208 = UINT32_MAX;
	static volatile int32_t t51 = -45668;

	t51 = (x205==((x206<x207)+x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x210 = INT64_MAX;
	int32_t x212 = -22049;
	static int32_t t52 = -380437319;

	t52 = (x209==((x210<x211)+x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -1;
	uint8_t x215 = UINT8_MAX;
	int32_t x216 = -8233401;

	t53 = (x213==((x214<x215)+x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = 94226734LL;
	int8_t x220 = INT8_MIN;
	int32_t t54 = -11;

	t54 = (x217==((x218<x219)+x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = -1;
	int8_t x222 = -1;
	int64_t x223 = -2837938997346591LL;
	int32_t x224 = 16368411;
	int32_t t55 = -6810153;

	t55 = (x221==((x222<x223)+x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = 1U;
	static uint8_t x226 = 1U;
	uint8_t x228 = UINT8_MAX;
	volatile int32_t t56 = 573294;

	t56 = (x225==((x226<x227)+x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MIN;
	volatile int16_t x230 = -815;
	int64_t x231 = -1LL;
	int16_t x232 = INT16_MIN;
	volatile int32_t t57 = -14321;

	t57 = (x229==((x230<x231)+x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x235 = 3;
	static int64_t x236 = 41LL;

	t58 = (x233==((x234<x235)+x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	uint8_t x238 = 2U;
	int64_t x239 = INT64_MIN;
	volatile int16_t x240 = INT16_MIN;
	int32_t t59 = -2338;

	t59 = (x237==((x238<x239)+x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x242 = INT16_MIN;
	int64_t x243 = -1629399LL;

	t60 = (x241==((x242<x243)+x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MAX;
	uint64_t x247 = 129552730244837LLU;
	static volatile int16_t x248 = -1;
	static volatile int32_t t61 = 317616485;

	t61 = (x245==((x246<x247)+x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x250 = 2;
	uint32_t x252 = 21016U;
	static int32_t t62 = -59708643;

	t62 = (x249==((x250<x251)+x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x254 = 6538001548LLU;
	int32_t x255 = -1;
	volatile int32_t x256 = INT32_MIN;
	volatile int32_t t63 = 547729;

	t63 = (x253==((x254<x255)+x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x258 = INT64_MIN;
	int64_t x259 = INT64_MIN;
	uint32_t x260 = UINT32_MAX;
	int32_t t64 = -991752;

	t64 = (x257==((x258<x259)+x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x261 = INT16_MIN;
	static int16_t x262 = -37;
	static uint32_t x263 = 12086420U;
	int64_t x264 = 32719698570LL;
	volatile int32_t t65 = 91;

	t65 = (x261==((x262<x263)+x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x265 = INT16_MIN;
	static volatile int8_t x266 = -1;
	int64_t x268 = 1742313387927LL;
	static int32_t t66 = 7;

	t66 = (x265==((x266<x267)+x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = 16877800LLU;
	uint32_t x270 = 4540902U;
	static int16_t x271 = INT16_MIN;
	static volatile uint32_t x272 = 417704969U;
	volatile int32_t t67 = -21105;

	t67 = (x269==((x270<x271)+x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 57U;
	int8_t x274 = INT8_MIN;
	uint64_t x275 = UINT64_MAX;
	uint64_t x276 = 881268LLU;
	int32_t t68 = -2637;

	t68 = (x273==((x274<x275)+x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x277 = 0;
	int32_t x278 = INT32_MIN;
	int16_t x279 = 0;
	int32_t x280 = -53382;
	volatile int32_t t69 = -191216;

	t69 = (x277==((x278<x279)+x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MAX;
	static int16_t x282 = -166;
	int8_t x283 = -22;
	volatile uint32_t x284 = 1964817849U;
	volatile int32_t t70 = 5729458;

	t70 = (x281==((x282<x283)+x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 806568U;
	int16_t x286 = INT16_MAX;
	int32_t x287 = -1;
	int16_t x288 = INT16_MIN;

	t71 = (x285==((x286<x287)+x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x291 = INT8_MIN;
	int32_t t72 = -1860;

	t72 = (x289==((x290<x291)+x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = UINT8_MAX;
	uint32_t x294 = 44099185U;
	uint16_t x295 = 4U;
	uint64_t x296 = 2186609540451231284LLU;
	int32_t t73 = 1373;

	t73 = (x293==((x294<x295)+x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MAX;
	int32_t x298 = 3901;
	volatile int8_t x299 = INT8_MAX;
	int64_t x300 = INT64_MIN;
	int32_t t74 = -1;

	t74 = (x297==((x298<x299)+x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x301 = INT8_MIN;
	int32_t x303 = INT32_MAX;
	uint8_t x304 = 4U;
	volatile int32_t t75 = 221535;

	t75 = (x301==((x302<x303)+x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x305 = INT16_MAX;
	int64_t x306 = INT64_MAX;
	int64_t x307 = -1LL;
	int32_t t76 = 117;

	t76 = (x305==((x306<x307)+x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x309 = 24925247920LLU;
	volatile int8_t x311 = -1;
	volatile int64_t x312 = -1LL;

	t77 = (x309==((x310<x311)+x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MIN;
	int8_t x314 = INT8_MAX;
	static uint32_t x315 = UINT32_MAX;
	uint64_t x316 = 1LLU;
	volatile int32_t t78 = 914584491;

	t78 = (x313==((x314<x315)+x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = UINT32_MAX;
	int8_t x318 = 3;
	volatile int32_t x319 = -32133;
	int32_t x320 = INT32_MAX;
	int32_t t79 = 25;

	t79 = (x317==((x318<x319)+x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x322 = INT16_MIN;
	int16_t x323 = 7629;

	t80 = (x321==((x322<x323)+x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = -1;
	uint32_t x327 = 1U;
	volatile int32_t t81 = 1;

	t81 = (x325==((x326<x327)+x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x330 = INT32_MIN;

	t82 = (x329==((x330<x331)+x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MIN;
	int64_t x334 = INT64_MIN;
	uint16_t x336 = UINT16_MAX;
	static int32_t t83 = 7005315;

	t83 = (x333==((x334<x335)+x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = 17850268993923LL;
	int64_t x339 = INT64_MAX;
	int8_t x340 = INT8_MIN;

	t84 = (x337==((x338<x339)+x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x342 = 9U;
	int64_t x343 = 13610594LL;
	int8_t x344 = 3;
	volatile int32_t t85 = -28011;

	t85 = (x341==((x342<x343)+x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x345 = -1617434;
	int8_t x346 = INT8_MAX;
	uint16_t x347 = 6U;
	volatile uint64_t x348 = 263764430LLU;
	int32_t t86 = -63386;

	t86 = (x345==((x346<x347)+x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = -1;
	int64_t x351 = -1LL;
	volatile int32_t t87 = -2;

	t87 = (x349==((x350<x351)+x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = 1;
	uint32_t x354 = 259138524U;
	int16_t x356 = INT16_MAX;

	t88 = (x353==((x354<x355)+x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MAX;
	int8_t x359 = INT8_MAX;
	uint64_t x360 = UINT64_MAX;
	volatile int32_t t89 = -53241;

	t89 = (x357==((x358<x359)+x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = UINT64_MAX;
	uint8_t x363 = 124U;
	int32_t t90 = -11;

	t90 = (x361==((x362<x363)+x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = UINT8_MAX;
	int8_t x366 = INT8_MIN;
	int32_t x368 = -18577;
	static volatile int32_t t91 = 151368;

	t91 = (x365==((x366<x367)+x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x369 = 28U;
	int16_t x370 = -83;
	int16_t x371 = -27;
	int16_t x372 = INT16_MIN;
	int32_t t92 = 12;

	t92 = (x369==((x370<x371)+x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x374 = INT16_MIN;
	int64_t x375 = -839LL;
	int32_t x376 = -242083;
	volatile int32_t t93 = 7115871;

	t93 = (x373==((x374<x375)+x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x377 = UINT32_MAX;
	int16_t x378 = -4992;
	static volatile int16_t x379 = 3;
	uint8_t x380 = UINT8_MAX;
	static int32_t t94 = -32945525;

	t94 = (x377==((x378<x379)+x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x382 = INT16_MAX;
	static uint8_t x383 = UINT8_MAX;
	static volatile int8_t x384 = INT8_MIN;
	int32_t t95 = -209025;

	t95 = (x381==((x382<x383)+x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x385 = INT8_MIN;
	int64_t x387 = INT64_MIN;
	int64_t x388 = -12843706LL;
	volatile int32_t t96 = -43;

	t96 = (x385==((x386<x387)+x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x390 = INT8_MAX;
	int32_t x391 = 738;
	int8_t x392 = -34;
	int32_t t97 = 10868124;

	t97 = (x389==((x390<x391)+x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 1906099LLU;
	int32_t x394 = -723978452;
	volatile int16_t x395 = INT16_MIN;
	uint32_t x396 = 472422564U;
	static volatile int32_t t98 = 504913;

	t98 = (x393==((x394<x395)+x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x397 = INT32_MIN;
	int64_t x398 = -1LL;
	int64_t x399 = 203341394LL;
	static uint16_t x400 = UINT16_MAX;

	t99 = (x397==((x398<x399)+x400));

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

