#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = -59;
static volatile int16_t x6 = INT16_MIN;
volatile int64_t x25 = -116700181413180LL;
int64_t x26 = 66221LL;
static int64_t x29 = INT64_MIN;
static volatile int16_t x32 = INT16_MIN;
int64_t x61 = -1LL;
volatile int32_t x64 = INT32_MIN;
int32_t t13 = 1026;
volatile int32_t t15 = 31412190;
int32_t t18 = 9;
uint64_t x90 = 90619749LLU;
static volatile int32_t t20 = -295;
static uint64_t x102 = 58237700267894370LLU;
uint8_t x108 = 12U;
int64_t x110 = -1LL;
int16_t x111 = 2;
volatile int8_t x118 = -1;
volatile int32_t t26 = 170266;
int8_t x125 = INT8_MIN;
uint8_t x129 = 2U;
static volatile int16_t x132 = INT16_MAX;
static int16_t x133 = INT16_MIN;
uint8_t x144 = 1U;
volatile int32_t t31 = 20;
static uint32_t x147 = 71489952U;
int32_t x148 = INT32_MAX;
volatile int64_t x153 = INT64_MIN;
static uint16_t x156 = 3U;
volatile int32_t t34 = -297455;
int8_t x159 = INT8_MIN;
int64_t x160 = -68650LL;
volatile int16_t x163 = -1;
int8_t x164 = 55;
static volatile int16_t x166 = 4197;
static int32_t t37 = 375435615;
int8_t x172 = -1;
uint64_t x184 = UINT64_MAX;
volatile int32_t x189 = INT32_MIN;
int8_t x190 = INT8_MIN;
static uint8_t x192 = 14U;
int16_t x196 = INT16_MAX;
uint16_t x201 = 27944U;
uint16_t x210 = 394U;
volatile int16_t x212 = INT16_MIN;
int8_t x214 = -1;
uint32_t x215 = UINT32_MAX;
int32_t t48 = 248032467;
static uint8_t x217 = UINT8_MAX;
int32_t x223 = 2543;
volatile uint8_t x230 = 5U;
static int32_t t51 = -3828090;
volatile uint16_t x236 = UINT16_MAX;
int8_t x245 = INT8_MIN;
static int16_t x248 = -1;
static volatile int32_t t56 = -29;
int32_t x254 = INT32_MAX;
uint16_t x255 = 85U;
uint64_t x259 = 1847LLU;
uint32_t x260 = 790642U;
volatile int32_t t60 = 828405;
uint32_t x283 = 626U;
int8_t x286 = -1;
static volatile uint16_t x305 = 238U;
uint16_t x308 = 3236U;
int64_t x319 = -1LL;
uint16_t x320 = 3U;
int32_t x323 = INT32_MIN;
int32_t t73 = -90;
volatile int8_t x334 = INT8_MIN;
uint16_t x337 = UINT16_MAX;
static volatile uint8_t x340 = 6U;
int64_t x343 = -30313986LL;
volatile int32_t t77 = 2431217;
volatile int8_t x348 = -1;
int64_t x349 = -1LL;
static int32_t x350 = -7953;
static int32_t x353 = INT32_MIN;
int32_t x354 = -57;
int32_t t80 = -505571920;
int64_t x359 = 256274593LL;
volatile int32_t t82 = 8787;
int8_t x368 = 15;
int64_t x378 = -323LL;
int8_t x387 = INT8_MAX;
static uint64_t x390 = 497483577971LLU;
static uint32_t x391 = UINT32_MAX;
uint8_t x402 = 120U;
int32_t x405 = -1;
int32_t x407 = INT32_MIN;
int64_t x411 = -1484540LL;
int32_t x413 = INT32_MIN;
int64_t x425 = INT64_MIN;
static int8_t x426 = INT8_MAX;
int16_t x431 = -1;
int32_t t97 = -203660;
volatile int16_t x435 = INT16_MIN;
volatile uint16_t x438 = UINT16_MAX;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint32_t x2 = 115324088U;
	int64_t x4 = INT64_MAX;
	int32_t t0 = 2049794;

	t0 = (x1<(x2*(x3%x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int8_t x7 = INT8_MIN;
	int16_t x8 = INT16_MAX;
	static volatile int32_t t1 = 118439;

	t1 = (x5<(x6*(x7%x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	uint64_t x10 = 24971165LLU;
	uint64_t x11 = 6198195973341LLU;
	static volatile int32_t x12 = -343240;
	static volatile int32_t t2 = 1;

	t2 = (x9<(x10*(x11%x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = INT32_MIN;
	volatile int16_t x18 = -1;
	int64_t x19 = INT64_MIN;
	int64_t x20 = INT64_MIN;
	volatile int32_t t3 = 61;

	t3 = (x17<(x18*(x19%x20)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = -1;
	int16_t x22 = -1;
	volatile int16_t x23 = INT16_MAX;
	int64_t x24 = INT64_MIN;
	int32_t t4 = -329197290;

	t4 = (x21<(x22*(x23%x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x27 = INT32_MIN;
	static uint8_t x28 = UINT8_MAX;
	volatile int32_t t5 = -312;

	t5 = (x25<(x26*(x27%x28)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x30 = 1U;
	int64_t x31 = -1LL;
	volatile int32_t t6 = 236548538;

	t6 = (x29<(x30*(x31%x32)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x33 = INT16_MAX;
	uint64_t x34 = 4522633260087183736LLU;
	int8_t x35 = -18;
	static int8_t x36 = -1;
	volatile int32_t t7 = -4534844;

	t7 = (x33<(x34*(x35%x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = -6237;
	int16_t x38 = INT16_MIN;
	uint8_t x39 = 1U;
	int64_t x40 = 1856747LL;
	int32_t t8 = -483188168;

	t8 = (x37<(x38*(x39%x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 0U;
	uint16_t x42 = 13971U;
	static int8_t x43 = 20;
	uint32_t x44 = 457576U;
	int32_t t9 = 9707;

	t9 = (x41<(x42*(x43%x44)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x49 = UINT16_MAX;
	int64_t x50 = -1LL;
	static uint32_t x51 = 526558U;
	int8_t x52 = INT8_MAX;
	int32_t t10 = -27;

	t10 = (x49<(x50*(x51%x52)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = 12;
	int16_t x54 = -1;
	volatile int8_t x55 = INT8_MIN;
	static int8_t x56 = -46;
	int32_t t11 = 86;

	t11 = (x53<(x54*(x55%x56)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x57 = UINT16_MAX;
	uint32_t x58 = 11328U;
	uint32_t x59 = UINT32_MAX;
	volatile int16_t x60 = 88;
	int32_t t12 = 5005;

	t12 = (x57<(x58*(x59%x60)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x62 = INT16_MIN;
	static uint16_t x63 = 173U;

	t13 = (x61<(x62*(x63%x64)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = INT32_MIN;
	uint16_t x66 = 21U;
	uint8_t x67 = UINT8_MAX;
	uint32_t x68 = 1U;
	volatile int32_t t14 = 798522736;

	t14 = (x65<(x66*(x67%x68)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x69 = 9382389LLU;
	volatile uint32_t x70 = UINT32_MAX;
	int32_t x71 = INT32_MIN;
	uint16_t x72 = UINT16_MAX;

	t15 = (x69<(x70*(x71%x72)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = -1LL;
	uint16_t x74 = 6U;
	int16_t x75 = -76;
	static volatile int8_t x76 = INT8_MIN;
	static int32_t t16 = -743370000;

	t16 = (x73<(x74*(x75%x76)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x77 = 290805387366192071LLU;
	volatile int8_t x78 = INT8_MAX;
	uint32_t x79 = UINT32_MAX;
	uint32_t x80 = 55906U;
	volatile int32_t t17 = -578034;

	t17 = (x77<(x78*(x79%x80)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x85 = INT64_MIN;
	volatile int32_t x86 = -1;
	int32_t x87 = -490723;
	int64_t x88 = -45805783351LL;

	t18 = (x85<(x86*(x87%x88)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x89 = INT16_MIN;
	static uint16_t x91 = 6U;
	static int32_t x92 = INT32_MIN;
	volatile int32_t t19 = -56891586;

	t19 = (x89<(x90*(x91%x92)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x97 = UINT16_MAX;
	int16_t x98 = INT16_MIN;
	int64_t x99 = 511827466748LL;
	uint32_t x100 = 138091U;

	t20 = (x97<(x98*(x99%x100)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x101 = UINT64_MAX;
	int32_t x103 = 28719539;
	int8_t x104 = INT8_MAX;
	int32_t t21 = -177;

	t21 = (x101<(x102*(x103%x104)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x105 = INT16_MAX;
	int32_t x106 = -23090;
	static volatile uint64_t x107 = UINT64_MAX;
	volatile int32_t t22 = 349;

	t22 = (x105<(x106*(x107%x108)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x109 = 1290456U;
	int64_t x112 = INT64_MAX;
	static volatile int32_t t23 = 30;

	t23 = (x109<(x110*(x111%x112)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x113 = INT8_MIN;
	volatile uint32_t x114 = 5U;
	uint16_t x115 = UINT16_MAX;
	int64_t x116 = INT64_MIN;
	volatile int32_t t24 = 6;

	t24 = (x113<(x114*(x115%x116)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x117 = 267057950U;
	int32_t x119 = -3;
	uint8_t x120 = 11U;
	volatile int32_t t25 = -1301584;

	t25 = (x117<(x118*(x119%x120)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x121 = INT32_MAX;
	int8_t x122 = -1;
	int32_t x123 = INT32_MIN;
	volatile int64_t x124 = INT64_MIN;

	t26 = (x121<(x122*(x123%x124)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x126 = INT32_MIN;
	int32_t x127 = INT32_MAX;
	int64_t x128 = -236765499771LL;
	int32_t t27 = 48349;

	t27 = (x125<(x126*(x127%x128)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x130 = -1;
	static volatile uint8_t x131 = UINT8_MAX;
	int32_t t28 = 61;

	t28 = (x129<(x130*(x131%x132)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x134 = UINT32_MAX;
	uint32_t x135 = 3248636U;
	uint16_t x136 = 12022U;
	volatile int32_t t29 = -39306;

	t29 = (x133<(x134*(x135%x136)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x137 = 729U;
	static uint16_t x138 = UINT16_MAX;
	static uint16_t x139 = UINT16_MAX;
	static uint64_t x140 = 279591849787503408LLU;
	volatile int32_t t30 = 43;

	t30 = (x137<(x138*(x139%x140)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x141 = INT64_MAX;
	int8_t x142 = INT8_MIN;
	static volatile int8_t x143 = INT8_MIN;

	t31 = (x141<(x142*(x143%x144)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint32_t x145 = 0U;
	uint32_t x146 = UINT32_MAX;
	volatile int32_t t32 = -1;

	t32 = (x145<(x146*(x147%x148)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x149 = INT64_MAX;
	int32_t x150 = INT32_MAX;
	uint32_t x151 = UINT32_MAX;
	volatile uint32_t x152 = 14U;
	int32_t t33 = -7;

	t33 = (x149<(x150*(x151%x152)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x154 = 1U;
	int8_t x155 = -3;

	t34 = (x153<(x154*(x155%x156)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x157 = INT32_MIN;
	volatile int8_t x158 = -10;
	static volatile int32_t t35 = 1;

	t35 = (x157<(x158*(x159%x160)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x161 = 4957441;
	int32_t x162 = INT32_MAX;
	volatile int32_t t36 = -911947;

	t36 = (x161<(x162*(x163%x164)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x165 = INT16_MIN;
	static int32_t x167 = INT32_MIN;
	uint16_t x168 = 3U;

	t37 = (x165<(x166*(x167%x168)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x169 = 1168U;
	volatile int8_t x170 = INT8_MIN;
	int64_t x171 = INT64_MIN;
	volatile int32_t t38 = -19094095;

	t38 = (x169<(x170*(x171%x172)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x173 = UINT16_MAX;
	volatile int64_t x174 = -1LL;
	volatile int8_t x175 = INT8_MAX;
	int16_t x176 = -10;
	int32_t t39 = -127;

	t39 = (x173<(x174*(x175%x176)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x181 = INT32_MIN;
	volatile int32_t x182 = 100;
	volatile int16_t x183 = -1;
	volatile int32_t t40 = 1555;

	t40 = (x181<(x182*(x183%x184)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x185 = 7763;
	int32_t x186 = INT32_MIN;
	int8_t x187 = -1;
	volatile uint32_t x188 = UINT32_MAX;
	int32_t t41 = -1336989;

	t41 = (x185<(x186*(x187%x188)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x191 = -16128486402LL;
	int32_t t42 = 20774;

	t42 = (x189<(x190*(x191%x192)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x193 = 30;
	int8_t x194 = -21;
	int8_t x195 = INT8_MAX;
	int32_t t43 = 4963898;

	t43 = (x193<(x194*(x195%x196)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x197 = 0;
	static uint8_t x198 = 0U;
	int16_t x199 = 7331;
	static uint32_t x200 = UINT32_MAX;
	volatile int32_t t44 = -389;

	t44 = (x197<(x198*(x199%x200)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x202 = -89838;
	static uint32_t x203 = 8U;
	static uint32_t x204 = UINT32_MAX;
	int32_t t45 = -1000488;

	t45 = (x201<(x202*(x203%x204)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x205 = 1818U;
	volatile uint8_t x206 = UINT8_MAX;
	int32_t x207 = -18227;
	static int8_t x208 = INT8_MIN;
	int32_t t46 = 628892;

	t46 = (x205<(x206*(x207%x208)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x209 = 13;
	volatile uint64_t x211 = 1LLU;
	volatile int32_t t47 = -27;

	t47 = (x209<(x210*(x211%x212)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint32_t x213 = 17642943U;
	uint8_t x216 = UINT8_MAX;

	t48 = (x213<(x214*(x215%x216)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x218 = INT32_MAX;
	int16_t x219 = -1;
	volatile int32_t x220 = INT32_MIN;
	static volatile int32_t t49 = 3077808;

	t49 = (x217<(x218*(x219%x220)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x221 = 15U;
	static int16_t x222 = 0;
	int64_t x224 = INT64_MIN;
	static volatile int32_t t50 = -4658;

	t50 = (x221<(x222*(x223%x224)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x229 = INT8_MAX;
	int32_t x231 = INT32_MIN;
	static uint32_t x232 = UINT32_MAX;

	t51 = (x229<(x230*(x231%x232)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x233 = INT8_MIN;
	int8_t x234 = INT8_MIN;
	volatile int64_t x235 = INT64_MAX;
	volatile int32_t t52 = 401;

	t52 = (x233<(x234*(x235%x236)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x237 = 6452;
	uint8_t x238 = 2U;
	uint8_t x239 = 46U;
	uint32_t x240 = 449849U;
	volatile int32_t t53 = 544;

	t53 = (x237<(x238*(x239%x240)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x241 = 373U;
	static int8_t x242 = INT8_MIN;
	int64_t x243 = INT64_MAX;
	volatile uint64_t x244 = UINT64_MAX;
	int32_t t54 = 395835;

	t54 = (x241<(x242*(x243%x244)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x246 = 1683420114U;
	int64_t x247 = INT64_MAX;
	volatile int32_t t55 = 1543316;

	t55 = (x245<(x246*(x247%x248)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x249 = 1528020212LLU;
	uint16_t x250 = 3123U;
	int16_t x251 = -1;
	int16_t x252 = INT16_MIN;

	t56 = (x249<(x250*(x251%x252)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x253 = -1LL;
	static volatile int64_t x256 = INT64_MIN;
	volatile int32_t t57 = 0;

	t57 = (x253<(x254*(x255%x256)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x257 = UINT64_MAX;
	volatile uint64_t x258 = 697394554368472851LLU;
	int32_t t58 = 0;

	t58 = (x257<(x258*(x259%x260)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x261 = INT8_MAX;
	int16_t x262 = INT16_MIN;
	static int16_t x263 = -1;
	int64_t x264 = INT64_MIN;
	volatile int32_t t59 = 10813;

	t59 = (x261<(x262*(x263%x264)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x265 = INT8_MIN;
	uint16_t x266 = 6U;
	static int8_t x267 = INT8_MAX;
	volatile uint32_t x268 = 5896546U;

	t60 = (x265<(x266*(x267%x268)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x269 = 1U;
	int64_t x270 = INT64_MIN;
	int64_t x271 = 0LL;
	static volatile int64_t x272 = -1LL;
	volatile int32_t t61 = -1;

	t61 = (x269<(x270*(x271%x272)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x277 = 46U;
	int64_t x278 = -1LL;
	int32_t x279 = -1;
	int64_t x280 = INT64_MAX;
	static volatile int32_t t62 = 3823;

	t62 = (x277<(x278*(x279%x280)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x281 = -515605;
	int32_t x282 = -428;
	int16_t x284 = -1;
	static int32_t t63 = -42037201;

	t63 = (x281<(x282*(x283%x284)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x285 = 36743323U;
	static uint16_t x287 = 4307U;
	int32_t x288 = -28717971;
	volatile int32_t t64 = -154104;

	t64 = (x285<(x286*(x287%x288)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x289 = 10304;
	int32_t x290 = INT32_MIN;
	int32_t x291 = INT32_MIN;
	int64_t x292 = -106824668395LL;
	int32_t t65 = -8675;

	t65 = (x289<(x290*(x291%x292)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x293 = -1725;
	static volatile int32_t x294 = -1;
	int64_t x295 = -1LL;
	uint8_t x296 = UINT8_MAX;
	volatile int32_t t66 = 13;

	t66 = (x293<(x294*(x295%x296)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x297 = 3U;
	int16_t x298 = INT16_MIN;
	int16_t x299 = INT16_MAX;
	uint16_t x300 = 67U;
	volatile int32_t t67 = -30;

	t67 = (x297<(x298*(x299%x300)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x301 = UINT16_MAX;
	int16_t x302 = INT16_MAX;
	uint8_t x303 = UINT8_MAX;
	int8_t x304 = -1;
	static volatile int32_t t68 = -43;

	t68 = (x301<(x302*(x303%x304)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x306 = -376390;
	volatile int32_t x307 = 14150811;
	int32_t t69 = 459692;

	t69 = (x305<(x306*(x307%x308)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x313 = INT16_MIN;
	static int32_t x314 = 1424;
	volatile uint8_t x315 = 97U;
	int32_t x316 = INT32_MAX;
	volatile int32_t t70 = 237164;

	t70 = (x313<(x314*(x315%x316)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x317 = INT32_MAX;
	int16_t x318 = INT16_MIN;
	int32_t t71 = -31337;

	t71 = (x317<(x318*(x319%x320)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x321 = INT32_MIN;
	static volatile uint8_t x322 = 29U;
	uint16_t x324 = UINT16_MAX;
	volatile int32_t t72 = 16;

	t72 = (x321<(x322*(x323%x324)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x325 = 56676472LL;
	uint64_t x326 = 13607LLU;
	int8_t x327 = INT8_MIN;
	int32_t x328 = INT32_MIN;

	t73 = (x325<(x326*(x327%x328)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x329 = -1;
	int64_t x330 = -35LL;
	uint64_t x331 = UINT64_MAX;
	int64_t x332 = INT64_MIN;
	volatile int32_t t74 = 10931;

	t74 = (x329<(x330*(x331%x332)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x333 = INT64_MIN;
	int32_t x335 = -1;
	volatile int8_t x336 = INT8_MIN;
	static int32_t t75 = -1;

	t75 = (x333<(x334*(x335%x336)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x338 = 1U;
	static uint64_t x339 = 1274579LLU;
	volatile int32_t t76 = -1;

	t76 = (x337<(x338*(x339%x340)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x341 = 15430811125781LLU;
	uint16_t x342 = 492U;
	int8_t x344 = INT8_MAX;

	t77 = (x341<(x342*(x343%x344)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x345 = INT64_MAX;
	static uint32_t x346 = UINT32_MAX;
	int8_t x347 = INT8_MIN;
	static int32_t t78 = -64959688;

	t78 = (x345<(x346*(x347%x348)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x351 = INT32_MIN;
	int32_t x352 = -1;
	int32_t t79 = 141;

	t79 = (x349<(x350*(x351%x352)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x355 = INT64_MIN;
	static volatile uint16_t x356 = 1U;

	t80 = (x353<(x354*(x355%x356)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x357 = -1LL;
	static uint32_t x358 = 89581U;
	int32_t x360 = -1;
	volatile int32_t t81 = -13642;

	t81 = (x357<(x358*(x359%x360)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x361 = -3571689007LL;
	uint64_t x362 = UINT64_MAX;
	int16_t x363 = -1;
	int64_t x364 = INT64_MIN;

	t82 = (x361<(x362*(x363%x364)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x365 = UINT8_MAX;
	volatile uint64_t x366 = UINT64_MAX;
	static int32_t x367 = INT32_MIN;
	static volatile int32_t t83 = -2210;

	t83 = (x365<(x366*(x367%x368)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x369 = 321925U;
	int8_t x370 = INT8_MIN;
	static int32_t x371 = INT32_MIN;
	int8_t x372 = -1;
	volatile int32_t t84 = 1980143;

	t84 = (x369<(x370*(x371%x372)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x377 = -62;
	int64_t x379 = 97110LL;
	int32_t x380 = 166518;
	volatile int32_t t85 = 193029;

	t85 = (x377<(x378*(x379%x380)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x381 = 1LLU;
	int8_t x382 = INT8_MIN;
	int16_t x383 = -1;
	int64_t x384 = INT64_MIN;
	volatile int32_t t86 = -1806;

	t86 = (x381<(x382*(x383%x384)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x385 = 1U;
	volatile int16_t x386 = INT16_MIN;
	int32_t x388 = -25;
	int32_t t87 = 5;

	t87 = (x385<(x386*(x387%x388)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x389 = 7326U;
	int8_t x392 = 1;
	volatile int32_t t88 = 263704703;

	t88 = (x389<(x390*(x391%x392)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x393 = INT32_MAX;
	int16_t x394 = -1;
	uint16_t x395 = 16U;
	uint16_t x396 = UINT16_MAX;
	static int32_t t89 = -47;

	t89 = (x393<(x394*(x395%x396)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x397 = 0U;
	int8_t x398 = INT8_MAX;
	int16_t x399 = -7;
	uint64_t x400 = UINT64_MAX;
	int32_t t90 = -38505;

	t90 = (x397<(x398*(x399%x400)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x401 = INT64_MIN;
	int16_t x403 = INT16_MIN;
	static int8_t x404 = 62;
	int32_t t91 = -4;

	t91 = (x401<(x402*(x403%x404)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x406 = INT64_MAX;
	volatile int32_t x408 = INT32_MIN;
	int32_t t92 = 6682;

	t92 = (x405<(x406*(x407%x408)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x409 = 361LL;
	uint32_t x410 = UINT32_MAX;
	uint64_t x412 = 7278LLU;
	volatile int32_t t93 = 157816132;

	t93 = (x409<(x410*(x411%x412)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x414 = 0;
	static int32_t x415 = 109;
	int8_t x416 = -1;
	static volatile int32_t t94 = 305201;

	t94 = (x413<(x414*(x415%x416)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x417 = INT16_MIN;
	static uint32_t x418 = 491U;
	int16_t x419 = -1;
	static int32_t x420 = -147;
	int32_t t95 = 1;

	t95 = (x417<(x418*(x419%x420)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x427 = INT32_MIN;
	int64_t x428 = -39LL;
	int32_t t96 = 15061061;

	t96 = (x425<(x426*(x427%x428)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x429 = UINT32_MAX;
	int16_t x430 = 13;
	static uint32_t x432 = UINT32_MAX;

	t97 = (x429<(x430*(x431%x432)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x433 = 1;
	uint16_t x434 = 2U;
	uint16_t x436 = UINT16_MAX;
	volatile int32_t t98 = 64612;

	t98 = (x433<(x434*(x435%x436)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x437 = 412U;
	int16_t x439 = INT16_MAX;
	int16_t x440 = 1799;
	static volatile int32_t t99 = 58440851;

	t99 = (x437<(x438*(x439%x440)));

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

