#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x1 = UINT32_MAX;
int16_t x4 = -1;
volatile int32_t t0 = 25;
uint8_t x6 = 81U;
int8_t x10 = 59;
static int8_t x13 = INT8_MIN;
uint64_t x15 = 39566636030LLU;
static uint32_t x19 = 243U;
volatile int16_t x20 = 8072;
int16_t x21 = INT16_MIN;
int8_t x24 = INT8_MIN;
static uint16_t x31 = 1U;
volatile int32_t t9 = 2;
int64_t x41 = -1LL;
static uint64_t x43 = 2866LLU;
uint16_t x44 = UINT16_MAX;
volatile int8_t x45 = 2;
uint32_t x49 = 156U;
int16_t x52 = 3477;
uint64_t x54 = 84659LLU;
int8_t x55 = INT8_MAX;
volatile int32_t t14 = 23;
static int8_t x73 = INT8_MIN;
uint64_t x81 = 3810468LLU;
int32_t t21 = -27042;
static volatile uint32_t x91 = UINT32_MAX;
int16_t x92 = INT16_MAX;
static uint64_t x94 = UINT64_MAX;
uint16_t x102 = UINT16_MAX;
int32_t t25 = -31;
static int32_t x110 = INT32_MAX;
volatile int32_t t28 = 5;
static volatile int64_t x121 = INT64_MIN;
int64_t x123 = -1LL;
static int32_t t30 = 170;
volatile int16_t x132 = 2861;
int16_t x136 = INT16_MAX;
int64_t x140 = INT64_MIN;
int32_t t35 = -14229;
int16_t x150 = 0;
uint32_t x151 = 16471301U;
int16_t x165 = INT16_MIN;
int64_t x167 = INT64_MIN;
int32_t x173 = -6004297;
volatile int32_t t44 = 575;
int8_t x182 = -1;
int32_t t45 = 240748;
int16_t x189 = -4;
int32_t x190 = 1461;
uint16_t x193 = UINT16_MAX;
uint8_t x202 = 70U;
int32_t t50 = 172426;
int32_t x209 = 135815456;
int32_t t52 = 410790;
int32_t t53 = -20793;
int16_t x220 = -2473;
int8_t x226 = INT8_MIN;
int8_t x227 = 0;
int8_t x228 = INT8_MIN;
volatile int32_t t56 = 2;
static volatile int64_t x237 = INT64_MIN;
int64_t x243 = INT64_MAX;
int64_t x247 = -2463350913272520098LL;
volatile int64_t x251 = 140680LL;
uint16_t x252 = 3U;
int8_t x253 = INT8_MAX;
volatile int32_t t64 = 6909;
uint16_t x266 = 128U;
int16_t x267 = INT16_MAX;
uint32_t x270 = UINT32_MAX;
static uint32_t x273 = 1U;
volatile int64_t x286 = INT64_MIN;
int16_t x294 = -5;
int64_t x296 = INT64_MIN;
uint16_t x314 = 116U;
volatile uint8_t x323 = UINT8_MAX;
int32_t t81 = 83;
int64_t x339 = INT64_MIN;
int8_t x346 = -3;
static uint32_t x348 = 138038U;
volatile uint64_t x349 = UINT64_MAX;
uint8_t x358 = 25U;
int16_t x361 = 31;
int32_t t88 = 142969425;
static uint16_t x366 = 2656U;
uint32_t x367 = 298865U;
int32_t t90 = 62098964;
static uint32_t x373 = 780U;
int8_t x376 = -1;
int64_t x377 = INT64_MAX;
volatile uint8_t x378 = 1U;
int32_t x381 = INT32_MAX;
uint16_t x388 = 605U;
int8_t x392 = INT8_MIN;
int64_t x396 = INT64_MIN;
int32_t t97 = 62;
volatile int32_t t98 = 15806198;
static int32_t x405 = INT32_MIN;


void f0(void) {
	static uint64_t x2 = 9549LLU;
	volatile uint16_t x3 = 125U;

	t0 = (x1<=(x2<=(x3%x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 8;
	int64_t x7 = INT64_MIN;
	volatile int32_t x8 = 61273684;
	int32_t t1 = 610929961;

	t1 = (x5<=(x6<=(x7%x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MIN;
	volatile int32_t x11 = -1;
	int32_t x12 = INT32_MIN;
	int32_t t2 = 284286;

	t2 = (x9<=(x10<=(x11%x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x14 = UINT64_MAX;
	int32_t x16 = 722245492;
	volatile int32_t t3 = 1594;

	t3 = (x13<=(x14<=(x15%x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	static int32_t x18 = 1;
	static volatile int32_t t4 = 900;

	t4 = (x17<=(x18<=(x19%x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x22 = 1U;
	int64_t x23 = -546542773450846065LL;
	static volatile int32_t t5 = 629;

	t5 = (x21<=(x22<=(x23%x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -27925122882LL;
	int8_t x26 = INT8_MIN;
	volatile int64_t x27 = INT64_MIN;
	volatile int16_t x28 = -1;
	volatile int32_t t6 = 24;

	t6 = (x25<=(x26<=(x27%x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -4;
	volatile int16_t x30 = INT16_MIN;
	volatile uint32_t x32 = 10U;
	static volatile int32_t t7 = -33420;

	t7 = (x29<=(x30<=(x31%x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = UINT16_MAX;
	uint32_t x34 = UINT32_MAX;
	volatile int64_t x35 = -1LL;
	int32_t x36 = -1;
	volatile int32_t t8 = -65;

	t8 = (x33<=(x34<=(x35%x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 29044134564306LLU;
	uint32_t x38 = 246258164U;
	static int32_t x39 = -1;
	volatile int64_t x40 = 4260233321844881561LL;

	t9 = (x37<=(x38<=(x39%x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x42 = -907065LL;
	int32_t t10 = -27941;

	t10 = (x41<=(x42<=(x43%x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x46 = UINT32_MAX;
	uint32_t x47 = 1360793267U;
	int32_t x48 = INT32_MIN;
	volatile int32_t t11 = 1236673;

	t11 = (x45<=(x46<=(x47%x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = INT32_MAX;
	int8_t x51 = INT8_MAX;
	volatile int32_t t12 = -29759;

	t12 = (x49<=(x50<=(x51%x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x53 = -1;
	static int8_t x56 = -1;
	volatile int32_t t13 = 663723;

	t13 = (x53<=(x54<=(x55%x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -4517019077016864028LL;
	uint16_t x58 = 19468U;
	int16_t x59 = -1;
	volatile int8_t x60 = -1;

	t14 = (x57<=(x58<=(x59%x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = UINT64_MAX;
	int16_t x62 = INT16_MAX;
	static uint16_t x63 = 34U;
	static volatile uint16_t x64 = 8U;
	volatile int32_t t15 = 287252;

	t15 = (x61<=(x62<=(x63%x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	int32_t x66 = 2;
	volatile int16_t x67 = 0;
	int32_t x68 = INT32_MIN;
	volatile int32_t t16 = 24;

	t16 = (x65<=(x66<=(x67%x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = UINT8_MAX;
	uint8_t x70 = UINT8_MAX;
	int64_t x71 = INT64_MIN;
	volatile int32_t x72 = -1;
	static int32_t t17 = 10;

	t17 = (x69<=(x70<=(x71%x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = -1;
	uint8_t x75 = UINT8_MAX;
	int64_t x76 = INT64_MIN;
	int32_t t18 = 18;

	t18 = (x73<=(x74<=(x75%x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = 0;
	volatile uint32_t x78 = 2U;
	uint16_t x79 = 0U;
	int64_t x80 = INT64_MIN;
	int32_t t19 = 1953222;

	t19 = (x77<=(x78<=(x79%x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x82 = 0;
	static int32_t x83 = -25052;
	uint64_t x84 = 6493467769LLU;
	volatile int32_t t20 = 144;

	t20 = (x81<=(x82<=(x83%x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	uint16_t x86 = 1U;
	volatile int16_t x87 = INT16_MIN;
	uint64_t x88 = 6087LLU;

	t21 = (x85<=(x86<=(x87%x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x89 = UINT64_MAX;
	int8_t x90 = INT8_MAX;
	int32_t t22 = 4171;

	t22 = (x89<=(x90<=(x91%x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -1LL;
	volatile int8_t x95 = 0;
	int8_t x96 = INT8_MAX;
	int32_t t23 = -312049;

	t23 = (x93<=(x94<=(x95%x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 5822U;
	uint64_t x98 = 419457068087009883LLU;
	static volatile int32_t x99 = 12628782;
	int16_t x100 = -1;
	volatile int32_t t24 = -1;

	t24 = (x97<=(x98<=(x99%x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -782;
	int16_t x103 = INT16_MIN;
	static int32_t x104 = INT32_MIN;

	t25 = (x101<=(x102<=(x103%x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = INT8_MIN;
	static volatile uint16_t x106 = UINT16_MAX;
	int8_t x107 = INT8_MIN;
	int32_t x108 = INT32_MIN;
	volatile int32_t t26 = 0;

	t26 = (x105<=(x106<=(x107%x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 0U;
	uint32_t x111 = 4622U;
	int16_t x112 = INT16_MAX;
	volatile int32_t t27 = 18;

	t27 = (x109<=(x110<=(x111%x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint8_t x113 = 1U;
	uint16_t x114 = 37U;
	int16_t x115 = -1;
	int64_t x116 = 107566935345645LL;

	t28 = (x113<=(x114<=(x115%x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x117 = -3;
	static volatile int64_t x118 = -625LL;
	static uint8_t x119 = UINT8_MAX;
	static uint16_t x120 = 10U;
	static int32_t t29 = 3;

	t29 = (x117<=(x118<=(x119%x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x122 = -2751;
	uint8_t x124 = 3U;

	t30 = (x121<=(x122<=(x123%x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	static volatile uint16_t x126 = 5U;
	int8_t x127 = INT8_MIN;
	static int16_t x128 = 69;
	int32_t t31 = 10671741;

	t31 = (x125<=(x126<=(x127%x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = 7;
	int16_t x130 = -1;
	int64_t x131 = INT64_MIN;
	volatile int32_t t32 = -3645;

	t32 = (x129<=(x130<=(x131%x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x133 = INT16_MIN;
	int16_t x134 = INT16_MIN;
	int16_t x135 = 470;
	int32_t t33 = 3386;

	t33 = (x133<=(x134<=(x135%x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MAX;
	int64_t x138 = 846LL;
	int32_t x139 = INT32_MIN;
	volatile int32_t t34 = -28668;

	t34 = (x137<=(x138<=(x139%x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = -1LL;
	static int32_t x142 = INT32_MIN;
	uint16_t x143 = 1U;
	volatile int32_t x144 = INT32_MIN;

	t35 = (x141<=(x142<=(x143%x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	static uint32_t x146 = 487660U;
	int32_t x147 = 329010;
	int8_t x148 = INT8_MIN;
	int32_t t36 = -109832;

	t36 = (x145<=(x146<=(x147%x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -1;
	int8_t x152 = INT8_MIN;
	volatile int32_t t37 = -61905451;

	t37 = (x149<=(x150<=(x151%x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x153 = 431509060LLU;
	int64_t x154 = 238LL;
	volatile int32_t x155 = -164010347;
	uint8_t x156 = 1U;
	volatile int32_t t38 = 129213;

	t38 = (x153<=(x154<=(x155%x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x157 = INT16_MAX;
	volatile int16_t x158 = -81;
	uint16_t x159 = 5796U;
	static uint16_t x160 = UINT16_MAX;
	volatile int32_t t39 = -501129;

	t39 = (x157<=(x158<=(x159%x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -1;
	uint64_t x162 = UINT64_MAX;
	volatile uint8_t x163 = 53U;
	int8_t x164 = -12;
	int32_t t40 = -1070671435;

	t40 = (x161<=(x162<=(x163%x164)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x166 = 7145LLU;
	static int32_t x168 = -1;
	static int32_t t41 = -92;

	t41 = (x165<=(x166<=(x167%x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 148221LLU;
	int32_t x170 = -1;
	static int64_t x171 = INT64_MAX;
	int32_t x172 = 13733;
	volatile int32_t t42 = -82237;

	t42 = (x169<=(x170<=(x171%x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x174 = INT8_MAX;
	uint8_t x175 = 79U;
	static uint16_t x176 = 324U;
	volatile int32_t t43 = -12644;

	t43 = (x173<=(x174<=(x175%x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -1;
	uint16_t x178 = 18U;
	int16_t x179 = 2846;
	int16_t x180 = INT16_MIN;

	t44 = (x177<=(x178<=(x179%x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x181 = UINT16_MAX;
	int32_t x183 = INT32_MAX;
	int8_t x184 = -1;

	t45 = (x181<=(x182<=(x183%x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -1;
	uint32_t x186 = 416U;
	static int64_t x187 = INT64_MAX;
	int8_t x188 = 3;
	volatile int32_t t46 = 114;

	t46 = (x185<=(x186<=(x187%x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x191 = 1;
	static volatile uint16_t x192 = UINT16_MAX;
	int32_t t47 = 1;

	t47 = (x189<=(x190<=(x191%x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x194 = INT8_MAX;
	int32_t x195 = -1;
	static uint8_t x196 = UINT8_MAX;
	static volatile int32_t t48 = 232389;

	t48 = (x193<=(x194<=(x195%x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x197 = 540035964724339704LLU;
	uint32_t x198 = 147245027U;
	volatile uint32_t x199 = UINT32_MAX;
	int32_t x200 = INT32_MAX;
	volatile int32_t t49 = 50973;

	t49 = (x197<=(x198<=(x199%x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = 221541652;
	int16_t x203 = INT16_MIN;
	int32_t x204 = 107428021;

	t50 = (x201<=(x202<=(x203%x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x205 = 2LLU;
	int16_t x206 = INT16_MIN;
	volatile int16_t x207 = -1;
	static int8_t x208 = -3;
	int32_t t51 = 61753;

	t51 = (x205<=(x206<=(x207%x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x210 = 2609;
	static uint8_t x211 = 5U;
	uint8_t x212 = 1U;

	t52 = (x209<=(x210<=(x211%x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x213 = INT32_MIN;
	static uint8_t x214 = UINT8_MAX;
	uint64_t x215 = 763583351523534LLU;
	static int8_t x216 = -1;

	t53 = (x213<=(x214<=(x215%x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = 192131876;
	int32_t x218 = INT32_MIN;
	int8_t x219 = INT8_MAX;
	volatile int32_t t54 = 13463069;

	t54 = (x217<=(x218<=(x219%x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x221 = INT16_MIN;
	volatile uint8_t x222 = 0U;
	uint8_t x223 = UINT8_MAX;
	static int32_t x224 = INT32_MIN;
	volatile int32_t t55 = -2975467;

	t55 = (x221<=(x222<=(x223%x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;

	t56 = (x225<=(x226<=(x227%x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x229 = UINT8_MAX;
	static int32_t x230 = -1;
	int32_t x231 = -154537;
	volatile int64_t x232 = -119110533419235LL;
	volatile int32_t t57 = -14522722;

	t57 = (x229<=(x230<=(x231%x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	int64_t x234 = INT64_MIN;
	uint32_t x235 = 2U;
	int32_t x236 = INT32_MIN;
	volatile int32_t t58 = 563;

	t58 = (x233<=(x234<=(x235%x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x238 = -1;
	volatile int32_t x239 = INT32_MIN;
	int32_t x240 = 62;
	volatile int32_t t59 = -892306;

	t59 = (x237<=(x238<=(x239%x240)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 1U;
	uint64_t x242 = UINT64_MAX;
	uint32_t x244 = UINT32_MAX;
	volatile int32_t t60 = 313336;

	t60 = (x241<=(x242<=(x243%x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MAX;
	uint64_t x246 = UINT64_MAX;
	static int32_t x248 = 8;
	int32_t t61 = -626;

	t61 = (x245<=(x246<=(x247%x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -8;
	int32_t x250 = -372;
	int32_t t62 = 0;

	t62 = (x249<=(x250<=(x251%x252)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x254 = -1;
	uint16_t x255 = 175U;
	static volatile int32_t x256 = 524042;
	int32_t t63 = -586272;

	t63 = (x253<=(x254<=(x255%x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x257 = INT64_MIN;
	uint16_t x258 = UINT16_MAX;
	static int32_t x259 = -1;
	uint32_t x260 = UINT32_MAX;

	t64 = (x257<=(x258<=(x259%x260)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x261 = INT64_MIN;
	int64_t x262 = -1LL;
	uint16_t x263 = 31494U;
	int32_t x264 = INT32_MAX;
	volatile int32_t t65 = -1746;

	t65 = (x261<=(x262<=(x263%x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MIN;
	volatile int32_t x268 = INT32_MIN;
	int32_t t66 = -15865;

	t66 = (x265<=(x266<=(x267%x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = UINT16_MAX;
	int64_t x271 = -1LL;
	int8_t x272 = INT8_MIN;
	volatile int32_t t67 = -61;

	t67 = (x269<=(x270<=(x271%x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x274 = 996U;
	uint8_t x275 = 63U;
	static uint16_t x276 = UINT16_MAX;
	static int32_t t68 = -293650270;

	t68 = (x273<=(x274<=(x275%x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x277 = UINT64_MAX;
	uint16_t x278 = UINT16_MAX;
	static uint32_t x279 = 1685570U;
	int8_t x280 = INT8_MIN;
	volatile int32_t t69 = 95974210;

	t69 = (x277<=(x278<=(x279%x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = -1;
	int8_t x282 = -1;
	static uint8_t x283 = 19U;
	int16_t x284 = -1;
	volatile int32_t t70 = -116282019;

	t70 = (x281<=(x282<=(x283%x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = -1;
	int32_t x287 = INT32_MIN;
	uint16_t x288 = 12624U;
	volatile int32_t t71 = -18777787;

	t71 = (x285<=(x286<=(x287%x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x293 = 1628637U;
	uint8_t x295 = 2U;
	int32_t t72 = -547100;

	t72 = (x293<=(x294<=(x295%x296)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x297 = 5027469834LLU;
	static int32_t x298 = INT32_MIN;
	int64_t x299 = INT64_MIN;
	uint64_t x300 = 6211107515049LLU;
	static volatile int32_t t73 = -522690450;

	t73 = (x297<=(x298<=(x299%x300)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x301 = -792181;
	int8_t x302 = -30;
	static int32_t x303 = INT32_MIN;
	uint64_t x304 = 4281657LLU;
	static volatile int32_t t74 = -1623;

	t74 = (x301<=(x302<=(x303%x304)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x305 = INT32_MIN;
	int32_t x306 = INT32_MAX;
	uint32_t x307 = 32182738U;
	int16_t x308 = INT16_MAX;
	int32_t t75 = -3918477;

	t75 = (x305<=(x306<=(x307%x308)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x309 = INT8_MIN;
	uint64_t x310 = UINT64_MAX;
	int32_t x311 = INT32_MAX;
	int8_t x312 = INT8_MAX;
	volatile int32_t t76 = 243801705;

	t76 = (x309<=(x310<=(x311%x312)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x313 = 1;
	int32_t x315 = -1;
	volatile int64_t x316 = INT64_MAX;
	int32_t t77 = 87943228;

	t77 = (x313<=(x314<=(x315%x316)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x317 = INT64_MAX;
	volatile int64_t x318 = -1LL;
	int64_t x319 = -1LL;
	uint8_t x320 = 16U;
	volatile int32_t t78 = -74314748;

	t78 = (x317<=(x318<=(x319%x320)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x321 = INT16_MIN;
	uint32_t x322 = 1276U;
	int32_t x324 = INT32_MIN;
	static int32_t t79 = 5680;

	t79 = (x321<=(x322<=(x323%x324)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x325 = 9U;
	uint16_t x326 = 465U;
	int64_t x327 = 428037002234LL;
	volatile uint32_t x328 = 13U;
	int32_t t80 = -106;

	t80 = (x325<=(x326<=(x327%x328)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x329 = 7187666502145LLU;
	int64_t x330 = -176609909669LL;
	static uint16_t x331 = 7U;
	int64_t x332 = INT64_MAX;

	t81 = (x329<=(x330<=(x331%x332)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x333 = INT16_MIN;
	int32_t x334 = INT32_MAX;
	static int64_t x335 = -4646875137LL;
	int8_t x336 = INT8_MIN;
	static volatile int32_t t82 = -89685417;

	t82 = (x333<=(x334<=(x335%x336)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x337 = 1502104LL;
	volatile uint32_t x338 = UINT32_MAX;
	static int32_t x340 = 351591417;
	volatile int32_t t83 = -5023;

	t83 = (x337<=(x338<=(x339%x340)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x341 = INT32_MIN;
	static uint64_t x342 = 1915248467213929276LLU;
	volatile int8_t x343 = INT8_MIN;
	int32_t x344 = INT32_MIN;
	int32_t t84 = 509082;

	t84 = (x341<=(x342<=(x343%x344)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x345 = INT16_MAX;
	uint64_t x347 = 3029865418698LLU;
	volatile int32_t t85 = 939986268;

	t85 = (x345<=(x346<=(x347%x348)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x350 = 11U;
	int8_t x351 = INT8_MIN;
	volatile int16_t x352 = INT16_MIN;
	volatile int32_t t86 = -442;

	t86 = (x349<=(x350<=(x351%x352)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x357 = -1LL;
	volatile int32_t x359 = INT32_MIN;
	static int8_t x360 = INT8_MIN;
	static volatile int32_t t87 = 2;

	t87 = (x357<=(x358<=(x359%x360)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x362 = 0LL;
	volatile uint64_t x363 = UINT64_MAX;
	volatile int32_t x364 = -239844275;

	t88 = (x361<=(x362<=(x363%x364)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x365 = INT64_MIN;
	int8_t x368 = 15;
	static int32_t t89 = -11754;

	t89 = (x365<=(x366<=(x367%x368)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x369 = INT8_MIN;
	int16_t x370 = INT16_MIN;
	int32_t x371 = -15858038;
	uint16_t x372 = UINT16_MAX;

	t90 = (x369<=(x370<=(x371%x372)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x374 = 1606599U;
	int32_t x375 = -57964;
	static volatile int32_t t91 = -10001;

	t91 = (x373<=(x374<=(x375%x376)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x379 = INT64_MAX;
	int64_t x380 = 12LL;
	int32_t t92 = 1194;

	t92 = (x377<=(x378<=(x379%x380)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x382 = -1;
	uint8_t x383 = 13U;
	int32_t x384 = INT32_MIN;
	int32_t t93 = -398568420;

	t93 = (x381<=(x382<=(x383%x384)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x385 = UINT64_MAX;
	volatile int64_t x386 = INT64_MIN;
	uint32_t x387 = 56U;
	static volatile int32_t t94 = -46;

	t94 = (x385<=(x386<=(x387%x388)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x389 = 2U;
	int8_t x390 = -1;
	int64_t x391 = -4614404445LL;
	volatile int32_t t95 = 12780779;

	t95 = (x389<=(x390<=(x391%x392)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x393 = INT8_MAX;
	int16_t x394 = -1;
	uint16_t x395 = UINT16_MAX;
	int32_t t96 = -26;

	t96 = (x393<=(x394<=(x395%x396)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x397 = UINT64_MAX;
	static volatile int16_t x398 = INT16_MIN;
	volatile uint8_t x399 = 108U;
	int32_t x400 = INT32_MIN;

	t97 = (x397<=(x398<=(x399%x400)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x401 = INT16_MAX;
	uint64_t x402 = UINT64_MAX;
	volatile int8_t x403 = -1;
	uint8_t x404 = 40U;

	t98 = (x401<=(x402<=(x403%x404)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x406 = -50;
	int8_t x407 = INT8_MIN;
	int64_t x408 = INT64_MIN;
	volatile int32_t t99 = 1;

	t99 = (x405<=(x406<=(x407%x408)));

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

