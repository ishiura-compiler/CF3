#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x1 = -610332874;
volatile int32_t t0 = 0;
volatile int64_t t1 = -1LL;
int32_t x13 = -1;
static int16_t x20 = INT16_MIN;
int64_t x21 = -1LL;
int16_t x22 = INT16_MIN;
uint8_t x32 = 30U;
int8_t x35 = INT8_MAX;
int16_t x49 = INT16_MIN;
volatile uint64_t x82 = 133775541143LLU;
volatile uint64_t x111 = 913614086655106151LLU;
int32_t x113 = 54;
volatile int64_t t23 = -2LL;
int64_t x117 = -1LL;
static int64_t t24 = 31049139795LL;
int64_t x124 = INT64_MIN;
static int32_t x126 = -638182;
int64_t x132 = INT64_MIN;
uint64_t x133 = 242LLU;
volatile int16_t x145 = -19;
volatile int64_t x148 = -505391935LL;
uint64_t x152 = 11540LLU;
uint64_t t30 = 1338596704714034LLU;
volatile int32_t t32 = -382114;
int32_t x177 = INT32_MIN;
volatile uint8_t x179 = 5U;
int16_t x182 = -12;
int8_t x183 = 2;
volatile int32_t t36 = 3;
volatile int8_t x199 = -15;
volatile uint32_t t39 = 4636695U;
static int8_t x201 = 0;
int32_t t40 = -22;
int32_t x210 = INT32_MAX;
volatile int32_t x225 = -211;
static uint64_t x230 = UINT64_MAX;
int32_t x231 = -1;
static int32_t x234 = INT32_MAX;
static volatile int8_t x249 = INT8_MIN;
int16_t x255 = -1;
int8_t x260 = INT8_MAX;
int16_t x262 = 28;
int16_t x268 = INT16_MIN;
volatile int32_t t54 = -5409;
volatile int64_t x275 = INT64_MIN;
uint64_t t58 = 9078324314LLU;
int64_t t59 = -1LL;
int8_t x298 = 20;
static int32_t x299 = INT32_MIN;
int32_t t62 = 1305;
int32_t t64 = 215752288;
int32_t x325 = -13684;
volatile uint64_t x328 = 394LLU;
int64_t x330 = -44164994LL;
uint8_t x346 = UINT8_MAX;
uint32_t x363 = 873856U;
uint64_t x365 = 355764938712LLU;
int32_t t75 = 2;
volatile int32_t x379 = 17123;
static int8_t x381 = -1;
int64_t x382 = INT64_MAX;
int8_t x386 = -12;
int64_t t79 = -4838820750631LL;
int16_t x393 = -1;
int32_t x408 = INT32_MIN;
volatile int32_t t84 = -1;
int32_t x409 = -4;
uint16_t x411 = UINT16_MAX;
static volatile int8_t x413 = INT8_MIN;
static uint64_t t86 = 1LLU;
static int16_t x422 = INT16_MIN;
int64_t x423 = -1LL;
int32_t t90 = 326535327;
int16_t x440 = INT16_MIN;
static int64_t t92 = 1LL;
int8_t x443 = INT8_MAX;
static volatile int32_t t94 = -6422485;
int16_t x460 = INT16_MIN;
static uint8_t x464 = 38U;
uint32_t t98 = 10U;
static uint32_t x468 = UINT32_MAX;


void f0(void) {
	static volatile int32_t x2 = 41821490;
	static int16_t x3 = -1;
	int8_t x4 = -1;

	t0 = (x1-((x2<x3)+x4));

	if (t0 != -610332873) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint8_t x9 = 7U;
	static int64_t x10 = 149521LL;
	int16_t x11 = INT16_MIN;
	int64_t x12 = 847LL;

	t1 = (x9-((x10<x11)+x12));

	if (t1 != -840LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x14 = -1;
	int64_t x15 = INT64_MIN;
	static int8_t x16 = 1;
	static int32_t t2 = 1382513;

	t2 = (x13-((x14<x15)+x16));

	if (t2 != -2) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x17 = INT64_MIN;
	static volatile int32_t x18 = -1;
	uint16_t x19 = 704U;
	int64_t t3 = 5520005113865LL;

	t3 = (x17-((x18<x19)+x20));

	if (t3 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x23 = INT64_MIN;
	uint32_t x24 = 13998U;
	int64_t t4 = -239985746LL;

	t4 = (x21-((x22<x23)+x24));

	if (t4 != -13999LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = -1LL;
	int8_t x26 = -1;
	volatile int16_t x27 = INT16_MAX;
	uint16_t x28 = UINT16_MAX;
	volatile int64_t t5 = -985241949582594LL;

	t5 = (x25-((x26<x27)+x28));

	if (t5 != -65537LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x29 = 0U;
	uint16_t x30 = 13342U;
	volatile uint32_t x31 = 1080748722U;
	volatile int32_t t6 = 83;

	t6 = (x29-((x30<x31)+x32));

	if (t6 != -31) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 3343488526LLU;
	int8_t x34 = INT8_MAX;
	uint64_t x36 = 4493435337876671350LLU;
	uint64_t t7 = 387638LLU;

	t7 = (x33-((x34<x35)+x36));

	if (t7 != 13953308739176368792LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x37 = UINT32_MAX;
	int8_t x38 = -1;
	int8_t x39 = INT8_MIN;
	int32_t x40 = -1;
	static uint32_t t8 = 15510U;

	t8 = (x37-((x38<x39)+x40));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MAX;
	int64_t x42 = INT64_MIN;
	volatile int64_t x43 = INT64_MIN;
	uint64_t x44 = 34313542687LLU;
	static uint64_t t9 = 638LLU;

	t9 = (x41-((x42<x43)+x44));

	if (t9 != 18446744041543492576LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x45 = 69U;
	int16_t x46 = INT16_MAX;
	int32_t x47 = INT32_MAX;
	uint32_t x48 = 931337735U;
	static uint32_t t10 = 906086U;

	t10 = (x45-((x46<x47)+x48));

	if (t10 != 3363629629U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x50 = INT64_MIN;
	static uint8_t x51 = 1U;
	static int16_t x52 = INT16_MAX;
	static volatile int32_t t11 = -583;

	t11 = (x49-((x50<x51)+x52));

	if (t11 != -65536) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x53 = -3107;
	int64_t x54 = -13438141899298LL;
	int8_t x55 = INT8_MIN;
	int16_t x56 = -1;
	static volatile int32_t t12 = 11197055;

	t12 = (x53-((x54<x55)+x56));

	if (t12 != -3107) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x57 = -1;
	int8_t x58 = INT8_MIN;
	volatile int32_t x59 = INT32_MIN;
	int8_t x60 = INT8_MIN;
	int32_t t13 = 66062;

	t13 = (x57-((x58<x59)+x60));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x61 = 6U;
	volatile uint16_t x62 = 1021U;
	int32_t x63 = -1;
	static uint64_t x64 = 0LLU;
	uint64_t t14 = 142002034LLU;

	t14 = (x61-((x62<x63)+x64));

	if (t14 != 6LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x69 = 180U;
	uint64_t x70 = 7906227033777LLU;
	int32_t x71 = INT32_MIN;
	static volatile uint8_t x72 = 1U;
	volatile int32_t t15 = -15586;

	t15 = (x69-((x70<x71)+x72));

	if (t15 != 178) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x77 = INT16_MIN;
	int16_t x78 = -1;
	int8_t x79 = INT8_MIN;
	static volatile uint64_t x80 = 26617847LLU;
	volatile uint64_t t16 = 20142786LLU;

	t16 = (x77-((x78<x79)+x80));

	if (t16 != 18446744073682901001LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x81 = 8U;
	int16_t x83 = INT16_MIN;
	static uint64_t x84 = UINT64_MAX;
	uint64_t t17 = 7079LLU;

	t17 = (x81-((x82<x83)+x84));

	if (t17 != 8LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x89 = -1LL;
	int8_t x90 = -6;
	int32_t x91 = INT32_MIN;
	int16_t x92 = INT16_MIN;
	int64_t t18 = -50219016675327LL;

	t18 = (x89-((x90<x91)+x92));

	if (t18 != 32767LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x97 = INT8_MIN;
	int32_t x98 = -51252;
	uint64_t x99 = 33LLU;
	volatile uint16_t x100 = UINT16_MAX;
	volatile int32_t t19 = 117;

	t19 = (x97-((x98<x99)+x100));

	if (t19 != -65663) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x101 = INT16_MIN;
	int8_t x102 = INT8_MIN;
	int16_t x103 = INT16_MAX;
	uint64_t x104 = 396747475279002LLU;
	static uint64_t t20 = 7798LLU;

	t20 = (x101-((x102<x103)+x104));

	if (t20 != 18446347326234239845LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x105 = 4563258736704441990LLU;
	volatile int32_t x106 = INT32_MAX;
	static int8_t x107 = INT8_MIN;
	uint64_t x108 = UINT64_MAX;
	uint64_t t21 = 909LLU;

	t21 = (x105-((x106<x107)+x108));

	if (t21 != 4563258736704441991LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x109 = INT16_MIN;
	uint16_t x110 = 516U;
	uint16_t x112 = 529U;
	volatile int32_t t22 = 14854767;

	t22 = (x109-((x110<x111)+x112));

	if (t22 != -33298) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x114 = -1LL;
	static int8_t x115 = INT8_MIN;
	int64_t x116 = 1097132534959LL;

	t23 = (x113-((x114<x115)+x116));

	if (t23 != -1097132534905LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x118 = -1LL;
	volatile int64_t x119 = INT64_MIN;
	int16_t x120 = -1;

	t24 = (x117-((x118<x119)+x120));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x121 = INT32_MIN;
	volatile int64_t x122 = INT64_MIN;
	uint64_t x123 = 808353332368039LLU;
	static int64_t t25 = 4424958160346LL;

	t25 = (x121-((x122<x123)+x124));

	if (t25 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x125 = 475;
	int8_t x127 = INT8_MAX;
	static volatile uint64_t x128 = 1595322587844LLU;
	volatile uint64_t t26 = 14200101539064051LLU;

	t26 = (x125-((x126<x127)+x128));

	if (t26 != 18446742478386964246LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x129 = -1;
	uint8_t x130 = 49U;
	int16_t x131 = 5;
	int64_t t27 = INT64_MAX;

	t27 = (x129-((x130<x131)+x132));

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x134 = INT32_MAX;
	static volatile int8_t x135 = -7;
	int64_t x136 = -1LL;
	volatile uint64_t t28 = 266838LLU;

	t28 = (x133-((x134<x135)+x136));

	if (t28 != 243LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x146 = INT16_MIN;
	int8_t x147 = -1;
	volatile int64_t t29 = 8489004591641913LL;

	t29 = (x145-((x146<x147)+x148));

	if (t29 != 505391915LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x149 = 5508374LLU;
	volatile uint32_t x150 = UINT32_MAX;
	uint16_t x151 = 2764U;

	t30 = (x149-((x150<x151)+x152));

	if (t30 != 5496834LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x153 = INT8_MIN;
	int8_t x154 = 1;
	int16_t x155 = -3;
	uint32_t x156 = UINT32_MAX;
	uint32_t t31 = 44058931U;

	t31 = (x153-((x154<x155)+x156));

	if (t31 != 4294967169U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x157 = INT8_MIN;
	uint32_t x158 = 4456U;
	static int8_t x159 = -1;
	int16_t x160 = -1;

	t32 = (x157-((x158<x159)+x160));

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x165 = INT16_MAX;
	uint8_t x166 = UINT8_MAX;
	int8_t x167 = -1;
	int64_t x168 = 0LL;
	int64_t t33 = -3649698337002703995LL;

	t33 = (x165-((x166<x167)+x168));

	if (t33 != 32767LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x173 = -44;
	int16_t x174 = INT16_MIN;
	int16_t x175 = -1;
	static int16_t x176 = -3360;
	volatile int32_t t34 = -9026;

	t34 = (x173-((x174<x175)+x176));

	if (t34 != 3315) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x178 = UINT8_MAX;
	volatile uint32_t x180 = UINT32_MAX;
	uint32_t t35 = 1U;

	t35 = (x177-((x178<x179)+x180));

	if (t35 != 2147483649U) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x181 = -158;
	int8_t x184 = INT8_MIN;

	t36 = (x181-((x182<x183)+x184));

	if (t36 != -31) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x189 = 965081241883796049LLU;
	volatile uint64_t x190 = 73523036098109LLU;
	volatile uint32_t x191 = 63449U;
	static int16_t x192 = 441;
	volatile uint64_t t37 = 347LLU;

	t37 = (x189-((x190<x191)+x192));

	if (t37 != 965081241883795608LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x193 = 12U;
	volatile int64_t x194 = INT64_MIN;
	int8_t x195 = -3;
	int64_t x196 = -1LL;
	int64_t t38 = -44622579345676620LL;

	t38 = (x193-((x194<x195)+x196));

	if (t38 != 12LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x197 = INT16_MIN;
	static uint16_t x198 = 1U;
	volatile uint32_t x200 = UINT32_MAX;

	t39 = (x197-((x198<x199)+x200));

	if (t39 != 4294934529U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x202 = 25U;
	uint32_t x203 = UINT32_MAX;
	uint8_t x204 = UINT8_MAX;

	t40 = (x201-((x202<x203)+x204));

	if (t40 != -256) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x205 = INT16_MAX;
	int32_t x206 = INT32_MIN;
	int32_t x207 = -1;
	int64_t x208 = 7862185054LL;
	volatile int64_t t41 = 5LL;

	t41 = (x205-((x206<x207)+x208));

	if (t41 != -7862152288LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x209 = INT8_MIN;
	uint8_t x211 = UINT8_MAX;
	int16_t x212 = INT16_MIN;
	volatile int32_t t42 = 429;

	t42 = (x209-((x210<x211)+x212));

	if (t42 != 32640) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x213 = 393572002180440LLU;
	volatile uint64_t x214 = 11218264698LLU;
	static int16_t x215 = -1;
	int64_t x216 = 33LL;
	static uint64_t t43 = 134LLU;

	t43 = (x213-((x214<x215)+x216));

	if (t43 != 393572002180406LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x226 = INT64_MIN;
	static int64_t x227 = -1609104LL;
	static int8_t x228 = INT8_MAX;
	int32_t t44 = 854281;

	t44 = (x225-((x226<x227)+x228));

	if (t44 != -339) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x229 = -6160;
	static int32_t x232 = INT32_MIN;
	volatile int32_t t45 = 37152224;

	t45 = (x229-((x230<x231)+x232));

	if (t45 != 2147477488) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x233 = 8U;
	int32_t x235 = INT32_MIN;
	int32_t x236 = -2049;
	int32_t t46 = 0;

	t46 = (x233-((x234<x235)+x236));

	if (t46 != 2057) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x241 = UINT8_MAX;
	uint32_t x242 = 3234U;
	int32_t x243 = INT32_MIN;
	static uint8_t x244 = UINT8_MAX;
	volatile int32_t t47 = 29588;

	t47 = (x241-((x242<x243)+x244));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x245 = INT32_MAX;
	int8_t x246 = INT8_MAX;
	int16_t x247 = 785;
	int16_t x248 = -1;
	static volatile int32_t t48 = INT32_MAX;

	t48 = (x245-((x246<x247)+x248));

	if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x250 = INT32_MIN;
	static int32_t x251 = -222474877;
	static volatile int16_t x252 = INT16_MIN;
	int32_t t49 = 1288;

	t49 = (x249-((x250<x251)+x252));

	if (t49 != 32639) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x253 = UINT32_MAX;
	static uint32_t x254 = UINT32_MAX;
	static volatile uint16_t x256 = 37U;
	volatile uint32_t t50 = 101U;

	t50 = (x253-((x254<x255)+x256));

	if (t50 != 4294967258U) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x257 = INT32_MAX;
	int16_t x258 = INT16_MAX;
	volatile int32_t x259 = -1;
	static volatile int32_t t51 = 0;

	t51 = (x257-((x258<x259)+x260));

	if (t51 != 2147483520) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x261 = INT8_MIN;
	int64_t x263 = 3494540435295981090LL;
	volatile int8_t x264 = INT8_MAX;
	volatile int32_t t52 = 28;

	t52 = (x261-((x262<x263)+x264));

	if (t52 != -256) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x265 = INT16_MIN;
	int64_t x266 = 54016LL;
	static uint32_t x267 = 799U;
	volatile int32_t t53 = 14504;

	t53 = (x265-((x266<x267)+x268));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x269 = INT8_MAX;
	static int8_t x270 = 1;
	volatile int8_t x271 = INT8_MIN;
	uint16_t x272 = UINT16_MAX;

	t54 = (x269-((x270<x271)+x272));

	if (t54 != -65408) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x273 = -1;
	volatile int64_t x274 = INT64_MAX;
	int8_t x276 = -1;
	int32_t t55 = -104091;

	t55 = (x273-((x274<x275)+x276));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x281 = -1;
	uint16_t x282 = 1898U;
	int64_t x283 = -1LL;
	uint32_t x284 = UINT32_MAX;
	static uint32_t t56 = 0U;

	t56 = (x281-((x282<x283)+x284));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x285 = 259106001LLU;
	static int8_t x286 = INT8_MIN;
	uint32_t x287 = UINT32_MAX;
	static uint8_t x288 = 40U;
	uint64_t t57 = 0LLU;

	t57 = (x285-((x286<x287)+x288));

	if (t57 != 259105960LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint64_t x289 = 4227553LLU;
	uint64_t x290 = 1LLU;
	volatile int32_t x291 = -602161177;
	static int32_t x292 = -1;

	t58 = (x289-((x290<x291)+x292));

	if (t58 != 4227553LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x293 = 0U;
	uint64_t x294 = 8800LLU;
	volatile int64_t x295 = INT64_MIN;
	int64_t x296 = -1LL;

	t59 = (x293-((x294<x295)+x296));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x297 = INT16_MAX;
	uint64_t x300 = 3LLU;
	uint64_t t60 = 153LLU;

	t60 = (x297-((x298<x299)+x300));

	if (t60 != 32764LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x301 = INT16_MIN;
	int16_t x302 = -1;
	static int16_t x303 = INT16_MIN;
	int8_t x304 = INT8_MAX;
	int32_t t61 = -231;

	t61 = (x301-((x302<x303)+x304));

	if (t61 != -32895) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x305 = 49;
	volatile uint16_t x306 = UINT16_MAX;
	int32_t x307 = INT32_MIN;
	volatile uint8_t x308 = 2U;

	t62 = (x305-((x306<x307)+x308));

	if (t62 != 47) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x309 = -1;
	int32_t x310 = -4634102;
	static int16_t x311 = -217;
	static int8_t x312 = INT8_MIN;
	static int32_t t63 = 10;

	t63 = (x309-((x310<x311)+x312));

	if (t63 != 126) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x313 = 1U;
	static int8_t x314 = INT8_MIN;
	uint8_t x315 = 0U;
	static volatile int8_t x316 = INT8_MAX;

	t64 = (x313-((x314<x315)+x316));

	if (t64 != -127) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x317 = UINT8_MAX;
	int64_t x318 = -1790757LL;
	int8_t x319 = -1;
	int32_t x320 = -1;
	int32_t t65 = 194;

	t65 = (x317-((x318<x319)+x320));

	if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x321 = -1;
	uint8_t x322 = UINT8_MAX;
	volatile int16_t x323 = 12;
	volatile uint16_t x324 = UINT16_MAX;
	int32_t t66 = 30;

	t66 = (x321-((x322<x323)+x324));

	if (t66 != -65536) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x326 = 3U;
	int64_t x327 = INT64_MIN;
	volatile uint64_t t67 = 2147297599100528LLU;

	t67 = (x325-((x326<x327)+x328));

	if (t67 != 18446744073709537538LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x329 = 10;
	uint64_t x331 = UINT64_MAX;
	uint32_t x332 = 2U;
	uint32_t t68 = 11328191U;

	t68 = (x329-((x330<x331)+x332));

	if (t68 != 7U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x341 = INT32_MIN;
	uint8_t x342 = 36U;
	static int64_t x343 = INT64_MAX;
	int32_t x344 = INT32_MIN;
	static volatile int32_t t69 = -2999684;

	t69 = (x341-((x342<x343)+x344));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x345 = 20U;
	volatile int16_t x347 = INT16_MAX;
	static uint32_t x348 = 235929694U;
	uint32_t t70 = 61178067U;

	t70 = (x345-((x346<x347)+x348));

	if (t70 != 4059037621U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x349 = 14876278289664LLU;
	volatile int8_t x350 = -1;
	uint16_t x351 = 31428U;
	int16_t x352 = INT16_MIN;
	uint64_t t71 = 63824066LLU;

	t71 = (x349-((x350<x351)+x352));

	if (t71 != 14876278322431LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint16_t x353 = 2U;
	static uint64_t x354 = 4147LLU;
	static int64_t x355 = 97LL;
	int16_t x356 = -1069;
	volatile int32_t t72 = -44;

	t72 = (x353-((x354<x355)+x356));

	if (t72 != 1071) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x361 = INT8_MAX;
	uint8_t x362 = 1U;
	static int8_t x364 = -56;
	static int32_t t73 = 2603;

	t73 = (x361-((x362<x363)+x364));

	if (t73 != 182) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x366 = UINT8_MAX;
	uint64_t x367 = UINT64_MAX;
	volatile int16_t x368 = INT16_MAX;
	uint64_t t74 = 1421846850347497015LLU;

	t74 = (x365-((x366<x367)+x368));

	if (t74 != 355764905944LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x369 = INT16_MIN;
	int32_t x370 = INT32_MAX;
	static int8_t x371 = -40;
	volatile int16_t x372 = INT16_MAX;

	t75 = (x369-((x370<x371)+x372));

	if (t75 != -65535) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x373 = UINT32_MAX;
	volatile uint32_t x374 = UINT32_MAX;
	volatile int64_t x375 = -1LL;
	int32_t x376 = INT32_MIN;
	uint32_t t76 = 49860585U;

	t76 = (x373-((x374<x375)+x376));

	if (t76 != 2147483647U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x377 = UINT16_MAX;
	static volatile int64_t x378 = INT64_MAX;
	int64_t x380 = INT64_MAX;
	static volatile int64_t t77 = 2056252762LL;

	t77 = (x377-((x378<x379)+x380));

	if (t77 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x383 = 0U;
	int64_t x384 = INT64_MIN;
	volatile int64_t t78 = INT64_MAX;

	t78 = (x381-((x382<x383)+x384));

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x385 = -6;
	int32_t x387 = INT32_MAX;
	static volatile int64_t x388 = -1LL;

	t79 = (x385-((x386<x387)+x388));

	if (t79 != -6LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x389 = -4;
	int32_t x390 = INT32_MAX;
	uint8_t x391 = 111U;
	volatile uint16_t x392 = 0U;
	volatile int32_t t80 = -21;

	t80 = (x389-((x390<x391)+x392));

	if (t80 != -4) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x394 = 20LLU;
	static volatile int16_t x395 = INT16_MAX;
	volatile uint64_t x396 = UINT64_MAX;
	uint64_t t81 = UINT64_MAX;

	t81 = (x393-((x394<x395)+x396));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x397 = 6;
	uint16_t x398 = 297U;
	int8_t x399 = -1;
	volatile int8_t x400 = INT8_MIN;
	int32_t t82 = -3600375;

	t82 = (x397-((x398<x399)+x400));

	if (t82 != 134) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x401 = 25LLU;
	int64_t x402 = INT64_MIN;
	int32_t x403 = INT32_MIN;
	int64_t x404 = -361237916964773012LL;
	volatile uint64_t t83 = 2637102717407LLU;

	t83 = (x401-((x402<x403)+x404));

	if (t83 != 361237916964773036LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x405 = INT8_MIN;
	static int8_t x406 = -29;
	uint8_t x407 = 40U;

	t84 = (x405-((x406<x407)+x408));

	if (t84 != 2147483519) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x410 = -1LL;
	uint8_t x412 = 11U;
	static volatile int32_t t85 = -24895362;

	t85 = (x409-((x410<x411)+x412));

	if (t85 != -16) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x414 = 533090748677077998LL;
	static volatile int16_t x415 = INT16_MIN;
	static uint64_t x416 = UINT64_MAX;

	t86 = (x413-((x414<x415)+x416));

	if (t86 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x417 = UINT64_MAX;
	static int64_t x418 = INT64_MAX;
	uint32_t x419 = 95U;
	static int16_t x420 = INT16_MIN;
	volatile uint64_t t87 = 379822165414856066LLU;

	t87 = (x417-((x418<x419)+x420));

	if (t87 != 32767LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint16_t x421 = 3465U;
	int16_t x424 = 2;
	volatile int32_t t88 = -12135993;

	t88 = (x421-((x422<x423)+x424));

	if (t88 != 3462) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x425 = INT32_MIN;
	static int64_t x426 = 62280690211766203LL;
	uint32_t x427 = 418U;
	volatile int64_t x428 = INT64_MIN;
	int64_t t89 = -76671275195LL;

	t89 = (x425-((x426<x427)+x428));

	if (t89 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x429 = -1;
	int64_t x430 = 9047LL;
	int8_t x431 = INT8_MAX;
	static int16_t x432 = -1;

	t90 = (x429-((x430<x431)+x432));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x433 = -1;
	static int32_t x434 = INT32_MIN;
	int8_t x435 = INT8_MIN;
	static int64_t x436 = -1LL;
	int64_t t91 = -532431999823686LL;

	t91 = (x433-((x434<x435)+x436));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x437 = -1LL;
	static int8_t x438 = INT8_MAX;
	int32_t x439 = -798;

	t92 = (x437-((x438<x439)+x440));

	if (t92 != 32767LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x441 = 234U;
	volatile uint8_t x442 = 1U;
	int8_t x444 = INT8_MAX;
	static uint32_t t93 = 20U;

	t93 = (x441-((x442<x443)+x444));

	if (t93 != 106U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x445 = 2U;
	uint16_t x446 = 82U;
	uint32_t x447 = 22U;
	int16_t x448 = -296;

	t94 = (x445-((x446<x447)+x448));

	if (t94 != 298) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x449 = UINT64_MAX;
	int32_t x450 = INT32_MIN;
	volatile int32_t x451 = INT32_MIN;
	static volatile int8_t x452 = -1;
	uint64_t t95 = 147400043LLU;

	t95 = (x449-((x450<x451)+x452));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x453 = 283U;
	uint64_t x454 = 9521LLU;
	int8_t x455 = 0;
	static int64_t x456 = 57870LL;
	volatile int64_t t96 = -89LL;

	t96 = (x453-((x454<x455)+x456));

	if (t96 != -57587LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x457 = -2;
	int32_t x458 = INT32_MIN;
	uint8_t x459 = 14U;
	int32_t t97 = -4391349;

	t97 = (x457-((x458<x459)+x460));

	if (t97 != 32765) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x461 = 3283U;
	static int8_t x462 = INT8_MAX;
	int8_t x463 = INT8_MIN;

	t98 = (x461-((x462<x463)+x464));

	if (t98 != 3245U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x465 = -396385664970LL;
	uint8_t x466 = 61U;
	volatile int8_t x467 = INT8_MIN;
	volatile int64_t t99 = 1731708819844LL;

	t99 = (x465-((x466<x467)+x468));

	if (t99 != -400680632265LL) { NG(); } else { ; }
	
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

