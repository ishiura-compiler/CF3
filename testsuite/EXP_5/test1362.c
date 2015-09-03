#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x8 = -1;
uint32_t x16 = 65U;
volatile uint16_t x21 = 1964U;
static uint32_t x22 = 349528769U;
static int16_t x23 = -1;
int8_t x24 = INT8_MIN;
static volatile int8_t x29 = -22;
uint64_t x32 = UINT64_MAX;
static int64_t x34 = INT64_MIN;
int16_t x39 = -1;
volatile int32_t t8 = -4;
uint16_t x45 = 0U;
volatile int16_t x47 = INT16_MAX;
int32_t x51 = INT32_MIN;
int8_t x58 = -1;
static volatile int32_t t13 = -6875185;
static int64_t x62 = INT64_MAX;
static int8_t x68 = INT8_MIN;
int64_t x74 = -1LL;
static volatile int32_t x82 = INT32_MIN;
int64_t x83 = 59303717547119459LL;
int64_t x87 = 952LL;
volatile int32_t t21 = -1647284;
volatile int32_t x95 = -25106892;
static int32_t t22 = 65100;
uint64_t x98 = 24625275LLU;
static int32_t t24 = -106;
volatile int16_t x107 = 7;
int32_t x113 = -5;
int32_t t27 = -3;
static int8_t x124 = INT8_MIN;
int16_t x128 = INT16_MIN;
int32_t x131 = -1;
int64_t x139 = INT64_MIN;
int8_t x148 = INT8_MAX;
volatile int32_t x150 = INT32_MIN;
volatile int32_t t37 = 217;
static int16_t x158 = -1;
volatile int32_t t39 = -2;
static int16_t x165 = -3034;
int32_t x170 = -1;
int32_t x175 = INT32_MIN;
static volatile int32_t t42 = 8129;
uint32_t x179 = 103290594U;
static int8_t x180 = INT8_MIN;
int32_t t43 = -100242644;
volatile int32_t t44 = 438;
volatile int16_t x186 = INT16_MIN;
int64_t x187 = -1LL;
uint8_t x193 = UINT8_MAX;
int32_t x201 = -158026;
int32_t t50 = -752;
uint64_t x219 = 2563LLU;
uint32_t x221 = UINT32_MAX;
volatile uint64_t x225 = UINT64_MAX;
static int32_t t55 = -431914;
volatile int32_t x244 = INT32_MIN;
static int8_t x249 = INT8_MIN;
int16_t x254 = 6;
int8_t x256 = -1;
volatile uint64_t x264 = UINT64_MAX;
int64_t x267 = -1LL;
uint32_t x269 = 110U;
volatile int32_t t64 = -382428;
int8_t x274 = 1;
uint64_t x276 = 2120982440LLU;
uint8_t x294 = UINT8_MAX;
int32_t t72 = -1049780905;
int64_t x305 = -33LL;
uint8_t x306 = UINT8_MAX;
volatile int8_t x310 = 2;
uint32_t x317 = 4U;
volatile int32_t t76 = -25574563;
static volatile int8_t x325 = INT8_MAX;
static volatile uint16_t x333 = 7822U;
volatile int16_t x335 = -15;
static volatile int32_t t80 = 0;
int16_t x352 = INT16_MIN;
uint16_t x353 = 25U;
static int64_t x356 = 611125060720LL;
volatile int32_t t85 = 155;
static int32_t x357 = INT32_MIN;
uint8_t x358 = 5U;
int32_t t86 = -1774;
volatile int32_t t88 = -332;
volatile int64_t x374 = INT64_MIN;
int16_t x376 = -1;
static int32_t x379 = -20398801;
volatile int8_t x381 = INT8_MIN;
uint16_t x382 = UINT16_MAX;
static int32_t x383 = INT32_MIN;
uint64_t x391 = 131553764LLU;
static int32_t t94 = -164769;
int32_t x397 = INT32_MIN;
int16_t x399 = INT16_MIN;
int32_t x403 = INT32_MIN;
int8_t x404 = -14;
static int32_t t98 = 494;
int16_t x409 = -507;


void f0(void) {
	static int32_t x1 = INT32_MIN;
	int8_t x2 = 58;
	uint8_t x3 = UINT8_MAX;
	int16_t x4 = INT16_MIN;
	static int32_t t0 = -955531;

	t0 = (x1<=((x2<x3)+x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	uint32_t x6 = 39571672U;
	volatile int16_t x7 = -187;
	volatile int32_t t1 = 7;

	t1 = (x5<=((x6<x7)+x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = UINT16_MAX;
	uint16_t x14 = UINT16_MAX;
	int32_t x15 = INT32_MIN;
	int32_t t2 = 563;

	t2 = (x13<=((x14<x15)+x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = -1;
	int16_t x18 = INT16_MIN;
	static int8_t x19 = -1;
	uint8_t x20 = 75U;
	int32_t t3 = -3633173;

	t3 = (x17<=((x18<x19)+x20));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t t4 = 9;

	t4 = (x21<=((x22<x23)+x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = -12401867LL;
	uint64_t x26 = UINT64_MAX;
	uint8_t x27 = UINT8_MAX;
	volatile int64_t x28 = INT64_MIN;
	static int32_t t5 = -97587;

	t5 = (x25<=((x26<x27)+x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x30 = -424;
	int16_t x31 = -56;
	volatile int32_t t6 = 7003328;

	t6 = (x29<=((x30<x31)+x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = 0U;
	volatile int8_t x35 = INT8_MAX;
	int8_t x36 = INT8_MAX;
	volatile int32_t t7 = -12171;

	t7 = (x33<=((x34<x35)+x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = INT32_MAX;
	volatile int64_t x38 = INT64_MIN;
	int32_t x40 = INT32_MIN;

	t8 = (x37<=((x38<x39)+x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x41 = INT8_MIN;
	int64_t x42 = INT64_MAX;
	int8_t x43 = 1;
	static int8_t x44 = INT8_MIN;
	volatile int32_t t9 = -360;

	t9 = (x41<=((x42<x43)+x44));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x46 = -1;
	static uint64_t x48 = UINT64_MAX;
	int32_t t10 = -482;

	t10 = (x45<=((x46<x47)+x48));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = 1;
	static int32_t x50 = -1886346;
	int64_t x52 = INT64_MIN;
	static volatile int32_t t11 = -17955090;

	t11 = (x49<=((x50<x51)+x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MAX;
	static uint64_t x54 = 144LLU;
	static int64_t x55 = -1LL;
	volatile uint32_t x56 = UINT32_MAX;
	volatile int32_t t12 = 534060182;

	t12 = (x53<=((x54<x55)+x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = -126199295813133LL;
	int32_t x59 = INT32_MIN;
	int64_t x60 = -1LL;

	t13 = (x57<=((x58<x59)+x60));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x61 = UINT64_MAX;
	uint32_t x63 = 1936759U;
	int32_t x64 = INT32_MIN;
	volatile int32_t t14 = 374890;

	t14 = (x61<=((x62<x63)+x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = 9446024U;
	uint64_t x66 = 3820LLU;
	static volatile int32_t x67 = -970;
	volatile int32_t t15 = -345199045;

	t15 = (x65<=((x66<x67)+x68));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MIN;
	int64_t x70 = INT64_MAX;
	int64_t x71 = INT64_MAX;
	int8_t x72 = -5;
	int32_t t16 = -933817667;

	t16 = (x69<=((x70<x71)+x72));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = INT64_MAX;
	int16_t x75 = 14;
	uint64_t x76 = 56LLU;
	volatile int32_t t17 = -994;

	t17 = (x73<=((x74<x75)+x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x77 = -15;
	uint8_t x78 = UINT8_MAX;
	static int8_t x79 = 0;
	int32_t x80 = -30853;
	int32_t t18 = 659196305;

	t18 = (x77<=((x78<x79)+x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x81 = UINT64_MAX;
	uint64_t x84 = UINT64_MAX;
	int32_t t19 = -766153;

	t19 = (x81<=((x82<x83)+x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x85 = 148U;
	uint8_t x86 = 1U;
	int32_t x88 = INT32_MIN;
	int32_t t20 = -3;

	t20 = (x85<=((x86<x87)+x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = 38;
	int16_t x90 = -1;
	volatile uint64_t x91 = UINT64_MAX;
	uint64_t x92 = 239206367110955LLU;

	t21 = (x89<=((x90<x91)+x92));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x93 = 16U;
	volatile uint64_t x94 = 236240947929LLU;
	uint16_t x96 = 641U;

	t22 = (x93<=((x94<x95)+x96));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = INT32_MAX;
	uint8_t x99 = 44U;
	int32_t x100 = INT32_MIN;
	int32_t t23 = 14583653;

	t23 = (x97<=((x98<x99)+x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x101 = -115761791;
	int32_t x102 = -1;
	uint16_t x103 = UINT16_MAX;
	int64_t x104 = INT64_MIN;

	t24 = (x101<=((x102<x103)+x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = INT32_MIN;
	int32_t x106 = -17;
	uint8_t x108 = 59U;
	volatile int32_t t25 = -29393175;

	t25 = (x105<=((x106<x107)+x108));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x109 = -1;
	static volatile int32_t x110 = -1;
	uint64_t x111 = 15689291LLU;
	int32_t x112 = INT32_MIN;
	int32_t t26 = 6938;

	t26 = (x109<=((x110<x111)+x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x114 = -1449;
	static int32_t x115 = -1;
	int16_t x116 = -4;

	t27 = (x113<=((x114<x115)+x116));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x117 = -1LL;
	int32_t x118 = INT32_MIN;
	volatile int8_t x119 = 0;
	int32_t x120 = INT32_MIN;
	int32_t t28 = 316975014;

	t28 = (x117<=((x118<x119)+x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x121 = -1LL;
	int16_t x122 = INT16_MIN;
	int32_t x123 = 339;
	volatile int32_t t29 = 23287;

	t29 = (x121<=((x122<x123)+x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = -1;
	int64_t x126 = -1LL;
	uint32_t x127 = 12U;
	static volatile int32_t t30 = -9961;

	t30 = (x125<=((x126<x127)+x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x129 = 2U;
	static int64_t x130 = INT64_MIN;
	volatile uint64_t x132 = UINT64_MAX;
	volatile int32_t t31 = -58;

	t31 = (x129<=((x130<x131)+x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x133 = 8;
	volatile int8_t x134 = -20;
	uint64_t x135 = 151116LLU;
	int16_t x136 = -1;
	volatile int32_t t32 = -125530024;

	t32 = (x133<=((x134<x135)+x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = -1;
	int8_t x138 = INT8_MAX;
	static int16_t x140 = INT16_MAX;
	int32_t t33 = -363;

	t33 = (x137<=((x138<x139)+x140));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x141 = 102LL;
	int8_t x142 = 3;
	volatile int8_t x143 = 0;
	int16_t x144 = INT16_MIN;
	volatile int32_t t34 = 488420330;

	t34 = (x141<=((x142<x143)+x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = INT8_MIN;
	int8_t x146 = INT8_MAX;
	volatile int32_t x147 = INT32_MIN;
	int32_t t35 = 152322600;

	t35 = (x145<=((x146<x147)+x148));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x149 = INT8_MIN;
	static uint32_t x151 = UINT32_MAX;
	int16_t x152 = -1;
	int32_t t36 = -448;

	t36 = (x149<=((x150<x151)+x152));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x153 = 0;
	int8_t x154 = -2;
	volatile int8_t x155 = -14;
	static int8_t x156 = INT8_MIN;

	t37 = (x153<=((x154<x155)+x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x157 = INT64_MAX;
	volatile int8_t x159 = INT8_MIN;
	uint64_t x160 = 799150563706LLU;
	int32_t t38 = 135;

	t38 = (x157<=((x158<x159)+x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x161 = 7543613965215332LL;
	int8_t x162 = INT8_MIN;
	static volatile int8_t x163 = -11;
	volatile uint64_t x164 = UINT64_MAX;

	t39 = (x161<=((x162<x163)+x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int32_t x166 = -1;
	int64_t x167 = -1LL;
	volatile int16_t x168 = -270;
	int32_t t40 = 1707912;

	t40 = (x165<=((x166<x167)+x168));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x169 = INT16_MIN;
	static int8_t x171 = INT8_MIN;
	uint8_t x172 = UINT8_MAX;
	int32_t t41 = 1065;

	t41 = (x169<=((x170<x171)+x172));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = -1LL;
	static volatile uint8_t x174 = UINT8_MAX;
	int16_t x176 = -13;

	t42 = (x173<=((x174<x175)+x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x177 = 34843403019557056LLU;
	uint64_t x178 = 28419285605LLU;

	t43 = (x177<=((x178<x179)+x180));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = 11;
	uint64_t x182 = 635434329456LLU;
	int64_t x183 = -2776496870982LL;
	int64_t x184 = -1LL;

	t44 = (x181<=((x182<x183)+x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x185 = -1LL;
	static int16_t x188 = -1;
	int32_t t45 = 41256614;

	t45 = (x185<=((x186<x187)+x188));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = -1;
	uint32_t x190 = UINT32_MAX;
	int8_t x191 = -1;
	int16_t x192 = INT16_MAX;
	int32_t t46 = 890796;

	t46 = (x189<=((x190<x191)+x192));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x194 = 57U;
	int8_t x195 = -5;
	int8_t x196 = INT8_MAX;
	static volatile int32_t t47 = 0;

	t47 = (x193<=((x194<x195)+x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x202 = 6U;
	static int16_t x203 = 11;
	int16_t x204 = -1;
	static int32_t t48 = 15913461;

	t48 = (x201<=((x202<x203)+x204));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x209 = 1;
	int16_t x210 = 149;
	static volatile uint16_t x211 = 3989U;
	int8_t x212 = INT8_MIN;
	int32_t t49 = -1038630;

	t49 = (x209<=((x210<x211)+x212));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x213 = 66605954103LL;
	uint64_t x214 = 412963148510683895LLU;
	uint16_t x215 = 3196U;
	volatile int16_t x216 = -112;

	t50 = (x213<=((x214<x215)+x216));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x217 = INT16_MIN;
	int8_t x218 = INT8_MIN;
	int16_t x220 = INT16_MIN;
	volatile int32_t t51 = -60915594;

	t51 = (x217<=((x218<x219)+x220));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x222 = INT64_MIN;
	int64_t x223 = 1117880102205656LL;
	int64_t x224 = -1LL;
	int32_t t52 = -6;

	t52 = (x221<=((x222<x223)+x224));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x226 = UINT64_MAX;
	static volatile uint32_t x227 = 398202U;
	static uint16_t x228 = 15854U;
	int32_t t53 = -2640097;

	t53 = (x225<=((x226<x227)+x228));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x229 = -553445;
	static uint8_t x230 = 50U;
	uint8_t x231 = UINT8_MAX;
	int64_t x232 = INT64_MIN;
	volatile int32_t t54 = -45;

	t54 = (x229<=((x230<x231)+x232));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x233 = -18777401835943422LL;
	volatile int64_t x234 = -6205634670468LL;
	static volatile int32_t x235 = INT32_MAX;
	int8_t x236 = INT8_MAX;

	t55 = (x233<=((x234<x235)+x236));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x237 = -1;
	int16_t x238 = 6;
	volatile int32_t x239 = INT32_MIN;
	uint64_t x240 = 894793259523057LLU;
	int32_t t56 = -21741;

	t56 = (x237<=((x238<x239)+x240));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x241 = 207LLU;
	volatile int8_t x242 = INT8_MIN;
	uint8_t x243 = 5U;
	volatile int32_t t57 = -338;

	t57 = (x241<=((x242<x243)+x244));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x245 = 4U;
	int32_t x246 = INT32_MIN;
	int16_t x247 = INT16_MAX;
	int16_t x248 = -22;
	int32_t t58 = 4157015;

	t58 = (x245<=((x246<x247)+x248));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x250 = 13U;
	static uint16_t x251 = 473U;
	uint32_t x252 = 1541615212U;
	int32_t t59 = -3;

	t59 = (x249<=((x250<x251)+x252));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x253 = INT32_MIN;
	volatile int64_t x255 = 216396750512458LL;
	int32_t t60 = 1831;

	t60 = (x253<=((x254<x255)+x256));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x257 = INT32_MAX;
	uint32_t x258 = 2U;
	volatile uint32_t x259 = 21U;
	int64_t x260 = -1LL;
	volatile int32_t t61 = -9152;

	t61 = (x257<=((x258<x259)+x260));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x261 = INT64_MAX;
	int64_t x262 = INT64_MIN;
	volatile uint64_t x263 = 3791066875048291LLU;
	int32_t t62 = 11;

	t62 = (x261<=((x262<x263)+x264));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x265 = INT64_MIN;
	volatile int16_t x266 = INT16_MAX;
	int32_t x268 = -84805710;
	int32_t t63 = 10815091;

	t63 = (x265<=((x266<x267)+x268));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x270 = INT64_MAX;
	uint32_t x271 = 6799U;
	volatile int32_t x272 = -1;

	t64 = (x269<=((x270<x271)+x272));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x273 = 5523283964LLU;
	static int16_t x275 = INT16_MIN;
	static volatile int32_t t65 = 22;

	t65 = (x273<=((x274<x275)+x276));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x277 = 2075628002U;
	int8_t x278 = -13;
	int8_t x279 = INT8_MAX;
	int64_t x280 = 0LL;
	volatile int32_t t66 = -759259;

	t66 = (x277<=((x278<x279)+x280));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x281 = 4579U;
	static uint8_t x282 = UINT8_MAX;
	uint8_t x283 = 0U;
	uint8_t x284 = 0U;
	volatile int32_t t67 = 1268042;

	t67 = (x281<=((x282<x283)+x284));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x285 = 283617331506826LL;
	uint16_t x286 = 30U;
	volatile uint8_t x287 = UINT8_MAX;
	static uint64_t x288 = 14851482291110619LLU;
	volatile int32_t t68 = -1111752;

	t68 = (x285<=((x286<x287)+x288));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x289 = 651644744;
	int8_t x290 = INT8_MIN;
	static int32_t x291 = INT32_MAX;
	int8_t x292 = INT8_MAX;
	volatile int32_t t69 = -333;

	t69 = (x289<=((x290<x291)+x292));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x293 = UINT64_MAX;
	volatile int8_t x295 = INT8_MIN;
	static int64_t x296 = INT64_MAX;
	volatile int32_t t70 = -1;

	t70 = (x293<=((x294<x295)+x296));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x297 = INT64_MIN;
	int8_t x298 = -1;
	uint16_t x299 = UINT16_MAX;
	int32_t x300 = -737458841;
	volatile int32_t t71 = 3;

	t71 = (x297<=((x298<x299)+x300));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x301 = 4U;
	int8_t x302 = INT8_MAX;
	int32_t x303 = INT32_MAX;
	volatile uint64_t x304 = UINT64_MAX;

	t72 = (x301<=((x302<x303)+x304));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint16_t x307 = 0U;
	int16_t x308 = INT16_MIN;
	int32_t t73 = 47320091;

	t73 = (x305<=((x306<x307)+x308));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x309 = 86402001593237LLU;
	int16_t x311 = INT16_MAX;
	volatile int16_t x312 = 4;
	static volatile int32_t t74 = 1418753;

	t74 = (x309<=((x310<x311)+x312));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x313 = UINT16_MAX;
	int8_t x314 = -1;
	int32_t x315 = INT32_MAX;
	static int8_t x316 = -1;
	int32_t t75 = -501808;

	t75 = (x313<=((x314<x315)+x316));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x318 = UINT16_MAX;
	volatile int32_t x319 = -69;
	int8_t x320 = 7;

	t76 = (x317<=((x318<x319)+x320));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x321 = INT8_MIN;
	uint8_t x322 = UINT8_MAX;
	static int8_t x323 = 1;
	uint16_t x324 = 8U;
	int32_t t77 = 511028097;

	t77 = (x321<=((x322<x323)+x324));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x326 = -29096;
	int32_t x327 = INT32_MIN;
	int8_t x328 = INT8_MAX;
	static volatile int32_t t78 = -10;

	t78 = (x325<=((x326<x327)+x328));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x329 = INT64_MAX;
	volatile int8_t x330 = -12;
	static int64_t x331 = INT64_MIN;
	int16_t x332 = INT16_MAX;
	volatile int32_t t79 = 233;

	t79 = (x329<=((x330<x331)+x332));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x334 = -14039080;
	int16_t x336 = -1;

	t80 = (x333<=((x334<x335)+x336));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x337 = 110550329LLU;
	static int8_t x338 = INT8_MAX;
	volatile int64_t x339 = INT64_MIN;
	uint16_t x340 = 5313U;
	volatile int32_t t81 = 128430;

	t81 = (x337<=((x338<x339)+x340));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x341 = -17371220907832LL;
	volatile uint32_t x342 = 31115U;
	int8_t x343 = -1;
	int32_t x344 = INT32_MIN;
	int32_t t82 = 806121;

	t82 = (x341<=((x342<x343)+x344));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x345 = 11;
	static int64_t x346 = -15024548978545564LL;
	uint64_t x347 = UINT64_MAX;
	static int64_t x348 = -5338LL;
	int32_t t83 = -201764513;

	t83 = (x345<=((x346<x347)+x348));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x349 = INT16_MAX;
	volatile int8_t x350 = 0;
	volatile int16_t x351 = INT16_MIN;
	int32_t t84 = 1107311;

	t84 = (x349<=((x350<x351)+x352));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x354 = 2U;
	uint32_t x355 = UINT32_MAX;

	t85 = (x353<=((x354<x355)+x356));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x359 = -1LL;
	volatile uint16_t x360 = UINT16_MAX;

	t86 = (x357<=((x358<x359)+x360));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x361 = INT64_MIN;
	static volatile int32_t x362 = INT32_MAX;
	uint64_t x363 = UINT64_MAX;
	int8_t x364 = -1;
	volatile int32_t t87 = 5564676;

	t87 = (x361<=((x362<x363)+x364));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x365 = INT32_MAX;
	int8_t x366 = INT8_MIN;
	int8_t x367 = -1;
	int8_t x368 = -3;

	t88 = (x365<=((x366<x367)+x368));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x369 = 8;
	static int64_t x370 = -61LL;
	int32_t x371 = 31234;
	uint8_t x372 = UINT8_MAX;
	int32_t t89 = -923;

	t89 = (x369<=((x370<x371)+x372));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x373 = -932LL;
	static int8_t x375 = 60;
	int32_t t90 = 831;

	t90 = (x373<=((x374<x375)+x376));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x377 = 1;
	volatile int16_t x378 = INT16_MIN;
	int64_t x380 = -128786068382708LL;
	static volatile int32_t t91 = -484;

	t91 = (x377<=((x378<x379)+x380));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x384 = INT16_MIN;
	int32_t t92 = 8291286;

	t92 = (x381<=((x382<x383)+x384));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x385 = -1;
	volatile int32_t x386 = -1;
	int16_t x387 = INT16_MIN;
	volatile uint64_t x388 = UINT64_MAX;
	static int32_t t93 = -220;

	t93 = (x385<=((x386<x387)+x388));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x389 = 1U;
	int32_t x390 = INT32_MIN;
	uint64_t x392 = 36128521424706761LLU;

	t94 = (x389<=((x390<x391)+x392));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x393 = -2;
	static int8_t x394 = INT8_MIN;
	volatile uint64_t x395 = 4LLU;
	uint16_t x396 = UINT16_MAX;
	volatile int32_t t95 = 867862;

	t95 = (x393<=((x394<x395)+x396));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x398 = INT32_MAX;
	static volatile int8_t x400 = INT8_MIN;
	static volatile int32_t t96 = -964769379;

	t96 = (x397<=((x398<x399)+x400));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x401 = 14172094U;
	int32_t x402 = -1;
	static int32_t t97 = 212;

	t97 = (x401<=((x402<x403)+x404));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x405 = 6LLU;
	uint8_t x406 = 7U;
	volatile uint8_t x407 = 0U;
	static int64_t x408 = INT64_MIN;

	t98 = (x405<=((x406<x407)+x408));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x410 = -1LL;
	int16_t x411 = INT16_MAX;
	uint16_t x412 = UINT16_MAX;
	static int32_t t99 = 57868;

	t99 = (x409<=((x410<x411)+x412));

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

