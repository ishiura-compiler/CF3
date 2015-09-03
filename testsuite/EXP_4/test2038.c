#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x7 = 4U;
static uint16_t x8 = 9798U;
static volatile int8_t x10 = INT8_MIN;
static int64_t x11 = -1LL;
uint8_t x22 = 119U;
volatile int32_t x26 = INT32_MIN;
uint64_t x27 = 18315LLU;
int16_t x32 = -1219;
volatile int8_t x33 = -1;
static int32_t t8 = -55629;
int32_t x40 = 20276;
uint16_t x41 = UINT16_MAX;
int64_t x45 = -1LL;
int64_t x47 = 1332634654LL;
int8_t x53 = INT8_MIN;
static int16_t x58 = INT16_MAX;
volatile int32_t t16 = -986;
int32_t x70 = INT32_MIN;
int32_t t17 = 26042;
int16_t x80 = INT16_MIN;
static int8_t x84 = -59;
int64_t x85 = INT64_MIN;
int32_t x86 = INT32_MIN;
int64_t x89 = INT64_MAX;
static int16_t x100 = 2244;
int32_t t24 = -164032390;
int8_t x106 = 3;
int16_t x114 = INT16_MAX;
int32_t t27 = -1699;
int32_t x118 = INT32_MAX;
volatile int32_t t29 = 187690411;
int32_t x125 = INT32_MAX;
static int8_t x137 = INT8_MIN;
uint32_t x138 = 259U;
static uint64_t x145 = UINT64_MAX;
static uint8_t x147 = 65U;
int8_t x155 = -49;
uint16_t x159 = UINT16_MAX;
static volatile uint32_t x164 = 8850675U;
volatile int32_t t38 = -23;
uint32_t x165 = 0U;
int16_t x176 = INT16_MIN;
static uint64_t x183 = UINT64_MAX;
volatile uint32_t x191 = UINT32_MAX;
volatile int32_t t44 = -2159;
int16_t x194 = INT16_MAX;
volatile int32_t t47 = 296;
volatile int64_t x211 = -1LL;
static uint64_t x212 = UINT64_MAX;
int32_t x214 = -1;
int32_t t50 = -848097;
volatile int64_t x217 = INT64_MIN;
static int32_t t52 = -164;
static int16_t x226 = INT16_MAX;
int16_t x233 = INT16_MIN;
int8_t x236 = -1;
volatile int32_t t55 = 20466;
uint16_t x252 = 0U;
int8_t x259 = INT8_MAX;
static int32_t x260 = INT32_MIN;
int32_t x266 = -1;
volatile int32_t t62 = -24871496;
static uint32_t x269 = 136381851U;
int16_t x275 = -1;
static int16_t x276 = 7;
volatile int32_t t65 = 2389;
uint64_t x281 = UINT64_MAX;
int64_t x282 = -432343LL;
static int8_t x283 = -1;
static volatile uint16_t x285 = 7U;
volatile int32_t t67 = -1;
uint8_t x290 = 118U;
static volatile int32_t t69 = -1244527;
volatile int16_t x299 = -1;
static int16_t x309 = INT16_MIN;
int16_t x311 = INT16_MAX;
static uint32_t x314 = 801U;
static int16_t x318 = INT16_MIN;
volatile int16_t x338 = INT16_MIN;
int32_t x341 = INT32_MIN;
uint8_t x348 = 44U;
int8_t x349 = INT8_MIN;
int16_t x352 = INT16_MIN;
int8_t x357 = INT8_MIN;
static int8_t x365 = -1;
int64_t x367 = INT64_MIN;
static int16_t x372 = INT16_MIN;
int16_t x373 = INT16_MIN;
int16_t x376 = 1948;
int64_t x384 = INT64_MAX;
static int16_t x395 = 1;
int64_t x397 = -6284616475685869LL;
int32_t x401 = INT32_MAX;
static volatile int64_t x403 = -1LL;
int16_t x416 = -1;


void f0(void) {
	uint64_t x1 = 4926213LLU;
	int64_t x2 = 513911303762566LL;
	static int8_t x3 = INT8_MIN;
	uint32_t x4 = UINT32_MAX;
	volatile int32_t t0 = -843;

	t0 = (x1<=(x2+(x3^x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	volatile uint64_t x6 = 1229619053LLU;
	int32_t t1 = -1797;

	t1 = (x5<=(x6+(x7^x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 0U;
	static int32_t x12 = 25647;
	int32_t t2 = -12967;

	t2 = (x9<=(x10+(x11^x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = 29944U;
	volatile uint32_t x14 = UINT32_MAX;
	static int16_t x15 = INT16_MAX;
	int16_t x16 = INT16_MIN;
	int32_t t3 = -29;

	t3 = (x13<=(x14+(x15^x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	volatile uint8_t x18 = 3U;
	int32_t x19 = -1;
	int8_t x20 = INT8_MIN;
	static volatile int32_t t4 = 453;

	t4 = (x17<=(x18+(x19^x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 0;
	int64_t x23 = INT64_MAX;
	int8_t x24 = INT8_MAX;
	int32_t t5 = 93210254;

	t5 = (x21<=(x22+(x23^x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	uint16_t x28 = 960U;
	volatile int32_t t6 = -7;

	t6 = (x25<=(x26+(x27^x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 1;
	volatile int32_t x30 = -1;
	int32_t x31 = INT32_MIN;
	volatile int32_t t7 = -6;

	t7 = (x29<=(x30+(x31^x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x34 = 419748U;
	volatile int8_t x35 = -1;
	int16_t x36 = INT16_MAX;

	t8 = (x33<=(x34+(x35^x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -6522;
	static uint64_t x38 = UINT64_MAX;
	int8_t x39 = INT8_MIN;
	static int32_t t9 = 146522;

	t9 = (x37<=(x38+(x39^x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x42 = 2760933493LL;
	int16_t x43 = INT16_MAX;
	int8_t x44 = INT8_MAX;
	volatile int32_t t10 = 25;

	t10 = (x41<=(x42+(x43^x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x46 = 85U;
	uint16_t x48 = 31940U;
	static int32_t t11 = 248555787;

	t11 = (x45<=(x46+(x47^x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 0U;
	static volatile int16_t x50 = INT16_MAX;
	int16_t x51 = -5;
	int8_t x52 = -1;
	volatile int32_t t12 = 9821;

	t12 = (x49<=(x50+(x51^x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = -3;
	uint32_t x55 = 13568U;
	int64_t x56 = 8617068451LL;
	volatile int32_t t13 = 27;

	t13 = (x53<=(x54+(x55^x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	volatile int8_t x59 = INT8_MAX;
	int16_t x60 = -2790;
	static volatile int32_t t14 = -1382;

	t14 = (x57<=(x58+(x59^x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x61 = 2U;
	uint8_t x62 = UINT8_MAX;
	int32_t x63 = INT32_MIN;
	static int16_t x64 = INT16_MIN;
	int32_t t15 = -61;

	t15 = (x61<=(x62+(x63^x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 84U;
	uint64_t x66 = 10669582069875LLU;
	int16_t x67 = -87;
	int32_t x68 = 3864;

	t16 = (x65<=(x66+(x67^x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	volatile int32_t x71 = INT32_MIN;
	volatile int64_t x72 = 141591217407559LL;

	t17 = (x69<=(x70+(x71^x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = 11;
	uint64_t x74 = 2LLU;
	static volatile uint8_t x75 = 2U;
	int64_t x76 = 534750945200819LL;
	volatile int32_t t18 = -2585696;

	t18 = (x73<=(x74+(x75^x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	static int8_t x78 = INT8_MIN;
	volatile int16_t x79 = 0;
	volatile int32_t t19 = 941;

	t19 = (x77<=(x78+(x79^x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x81 = 3U;
	static uint8_t x82 = UINT8_MAX;
	int32_t x83 = 1234;
	volatile int32_t t20 = 58;

	t20 = (x81<=(x82+(x83^x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x87 = 1095790935829807LL;
	uint16_t x88 = UINT16_MAX;
	int32_t t21 = 866045;

	t21 = (x85<=(x86+(x87^x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x90 = 24;
	uint64_t x91 = 3364LLU;
	int32_t x92 = INT32_MAX;
	volatile int32_t t22 = -80;

	t22 = (x89<=(x90+(x91^x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = -316819;
	int64_t x94 = INT64_MAX;
	uint8_t x95 = 1U;
	static int8_t x96 = 1;
	static volatile int32_t t23 = -3702;

	t23 = (x93<=(x94+(x95^x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MAX;
	int8_t x98 = INT8_MAX;
	volatile uint16_t x99 = 13436U;

	t24 = (x97<=(x98+(x99^x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x101 = UINT8_MAX;
	uint64_t x102 = 21685802218508121LLU;
	int16_t x103 = INT16_MAX;
	uint8_t x104 = 17U;
	volatile int32_t t25 = -1694800;

	t25 = (x101<=(x102+(x103^x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	volatile uint16_t x107 = UINT16_MAX;
	uint32_t x108 = 8480470U;
	volatile int32_t t26 = -7353;

	t26 = (x105<=(x106+(x107^x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x113 = -45736LL;
	volatile int16_t x115 = INT16_MAX;
	static int32_t x116 = 0;

	t27 = (x113<=(x114+(x115^x116)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x117 = 571322370U;
	volatile int64_t x119 = 240773436169806LL;
	int32_t x120 = INT32_MAX;
	volatile int32_t t28 = -17;

	t28 = (x117<=(x118+(x119^x120)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x121 = UINT32_MAX;
	int16_t x122 = INT16_MAX;
	static volatile int16_t x123 = -1;
	volatile uint32_t x124 = 79U;

	t29 = (x121<=(x122+(x123^x124)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x126 = UINT32_MAX;
	int16_t x127 = -19;
	static volatile uint64_t x128 = UINT64_MAX;
	volatile int32_t t30 = 7442;

	t30 = (x125<=(x126+(x127^x128)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x133 = INT64_MAX;
	int32_t x134 = INT32_MIN;
	uint8_t x135 = UINT8_MAX;
	static volatile uint64_t x136 = 529483874LLU;
	volatile int32_t t31 = 549476;

	t31 = (x133<=(x134+(x135^x136)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x139 = INT8_MIN;
	int8_t x140 = -1;
	volatile int32_t t32 = -233641;

	t32 = (x137<=(x138+(x139^x140)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x141 = INT8_MAX;
	static uint8_t x142 = 40U;
	int32_t x143 = INT32_MIN;
	uint8_t x144 = 22U;
	static volatile int32_t t33 = -7;

	t33 = (x141<=(x142+(x143^x144)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x146 = -41032334LL;
	int64_t x148 = -3267LL;
	volatile int32_t t34 = 277;

	t34 = (x145<=(x146+(x147^x148)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x149 = 0;
	static uint64_t x150 = UINT64_MAX;
	int64_t x151 = INT64_MAX;
	static uint32_t x152 = UINT32_MAX;
	int32_t t35 = 235;

	t35 = (x149<=(x150+(x151^x152)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x153 = 7579U;
	int32_t x154 = -4;
	uint16_t x156 = 1U;
	int32_t t36 = -3687321;

	t36 = (x153<=(x154+(x155^x156)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x157 = INT64_MIN;
	int64_t x158 = -1442831628LL;
	uint32_t x160 = UINT32_MAX;
	volatile int32_t t37 = 1946;

	t37 = (x157<=(x158+(x159^x160)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x161 = -1;
	static int16_t x162 = -179;
	volatile int32_t x163 = INT32_MIN;

	t38 = (x161<=(x162+(x163^x164)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x166 = -1;
	uint64_t x167 = 10LLU;
	volatile uint8_t x168 = 41U;
	volatile int32_t t39 = 685116032;

	t39 = (x165<=(x166+(x167^x168)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x169 = 9U;
	volatile uint8_t x170 = 38U;
	static int8_t x171 = INT8_MIN;
	int64_t x172 = -1LL;
	int32_t t40 = -147655775;

	t40 = (x169<=(x170+(x171^x172)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x173 = 1;
	int16_t x174 = INT16_MIN;
	static volatile int8_t x175 = INT8_MIN;
	int32_t t41 = -397;

	t41 = (x173<=(x174+(x175^x176)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = INT8_MAX;
	uint64_t x178 = 1460LLU;
	int32_t x179 = 218;
	static int64_t x180 = INT64_MIN;
	volatile int32_t t42 = 1009098347;

	t42 = (x177<=(x178+(x179^x180)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x181 = INT32_MAX;
	uint8_t x182 = 6U;
	int64_t x184 = -1LL;
	int32_t t43 = 3348;

	t43 = (x181<=(x182+(x183^x184)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x189 = 1;
	int64_t x190 = -100035309LL;
	volatile int64_t x192 = -1LL;

	t44 = (x189<=(x190+(x191^x192)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x193 = -1;
	volatile int16_t x195 = 2939;
	int8_t x196 = INT8_MAX;
	volatile int32_t t45 = -30;

	t45 = (x193<=(x194+(x195^x196)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x197 = INT64_MIN;
	volatile int32_t x198 = -1;
	int64_t x199 = INT64_MIN;
	static int32_t x200 = INT32_MIN;
	int32_t t46 = 63106;

	t46 = (x197<=(x198+(x199^x200)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x201 = INT16_MAX;
	int16_t x202 = INT16_MIN;
	int16_t x203 = INT16_MIN;
	int64_t x204 = INT64_MIN;

	t47 = (x201<=(x202+(x203^x204)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x205 = -1;
	uint8_t x206 = 4U;
	int8_t x207 = -1;
	int16_t x208 = INT16_MIN;
	int32_t t48 = 42;

	t48 = (x205<=(x206+(x207^x208)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x209 = INT8_MIN;
	volatile uint8_t x210 = UINT8_MAX;
	int32_t t49 = 63650;

	t49 = (x209<=(x210+(x211^x212)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x213 = UINT16_MAX;
	uint16_t x215 = 6781U;
	static uint32_t x216 = 378U;

	t50 = (x213<=(x214+(x215^x216)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x218 = -49554307209500830LL;
	int8_t x219 = INT8_MIN;
	int32_t x220 = INT32_MIN;
	int32_t t51 = 142;

	t51 = (x217<=(x218+(x219^x220)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x221 = INT32_MIN;
	static int16_t x222 = -1;
	volatile uint32_t x223 = 0U;
	static int16_t x224 = INT16_MIN;

	t52 = (x221<=(x222+(x223^x224)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint64_t x225 = 21728607499343LLU;
	int8_t x227 = 10;
	volatile int64_t x228 = INT64_MIN;
	int32_t t53 = 19649158;

	t53 = (x225<=(x226+(x227^x228)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x229 = INT64_MIN;
	int32_t x230 = INT32_MAX;
	volatile int64_t x231 = INT64_MIN;
	int16_t x232 = INT16_MAX;
	static int32_t t54 = -34143795;

	t54 = (x229<=(x230+(x231^x232)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x234 = 485788922174LLU;
	volatile int16_t x235 = INT16_MIN;

	t55 = (x233<=(x234+(x235^x236)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x237 = INT64_MIN;
	uint32_t x238 = 236185U;
	static int32_t x239 = -67502172;
	volatile uint32_t x240 = 4969U;
	volatile int32_t t56 = -508112;

	t56 = (x237<=(x238+(x239^x240)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x241 = -1;
	static int32_t x242 = INT32_MAX;
	int64_t x243 = INT64_MIN;
	static uint8_t x244 = 9U;
	int32_t t57 = 1;

	t57 = (x241<=(x242+(x243^x244)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x245 = INT16_MAX;
	uint16_t x246 = UINT16_MAX;
	int32_t x247 = 35;
	int32_t x248 = INT32_MIN;
	int32_t t58 = 10754;

	t58 = (x245<=(x246+(x247^x248)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x249 = 14;
	int64_t x250 = INT64_MAX;
	int64_t x251 = -76608972LL;
	static int32_t t59 = -61892214;

	t59 = (x249<=(x250+(x251^x252)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x253 = 41U;
	int16_t x254 = 218;
	int16_t x255 = INT16_MIN;
	int32_t x256 = -892;
	volatile int32_t t60 = -8;

	t60 = (x253<=(x254+(x255^x256)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x257 = 3U;
	static int16_t x258 = INT16_MAX;
	static volatile int32_t t61 = 1390504;

	t61 = (x257<=(x258+(x259^x260)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x265 = INT8_MIN;
	int32_t x267 = INT32_MIN;
	static int8_t x268 = 1;

	t62 = (x265<=(x266+(x267^x268)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x270 = 6765250;
	int16_t x271 = INT16_MAX;
	uint16_t x272 = UINT16_MAX;
	static int32_t t63 = -1821;

	t63 = (x269<=(x270+(x271^x272)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x273 = -1;
	uint64_t x274 = 3224040500031717LLU;
	volatile int32_t t64 = -98641390;

	t64 = (x273<=(x274+(x275^x276)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x277 = 0U;
	int32_t x278 = INT32_MIN;
	uint64_t x279 = 1062LLU;
	volatile int16_t x280 = INT16_MIN;

	t65 = (x277<=(x278+(x279^x280)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x284 = INT32_MIN;
	volatile int32_t t66 = 0;

	t66 = (x281<=(x282+(x283^x284)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x286 = INT64_MIN;
	static volatile uint64_t x287 = 46496322LLU;
	static volatile int8_t x288 = INT8_MIN;

	t67 = (x285<=(x286+(x287^x288)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x289 = UINT8_MAX;
	static int8_t x291 = -1;
	static volatile int64_t x292 = -1LL;
	static int32_t t68 = -3441037;

	t68 = (x289<=(x290+(x291^x292)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x293 = 3;
	int8_t x294 = 4;
	uint64_t x295 = 11785587192LLU;
	static int8_t x296 = -1;

	t69 = (x293<=(x294+(x295^x296)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x297 = INT16_MIN;
	int16_t x298 = INT16_MAX;
	int8_t x300 = INT8_MIN;
	static int32_t t70 = 136300;

	t70 = (x297<=(x298+(x299^x300)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x301 = UINT16_MAX;
	static uint32_t x302 = 12U;
	uint64_t x303 = 3704389644485384LLU;
	int32_t x304 = INT32_MAX;
	int32_t t71 = 24256;

	t71 = (x301<=(x302+(x303^x304)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x305 = INT16_MAX;
	int16_t x306 = INT16_MAX;
	int64_t x307 = 421735441899LL;
	int16_t x308 = 27;
	volatile int32_t t72 = 20;

	t72 = (x305<=(x306+(x307^x308)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x310 = 0;
	static int16_t x312 = -1352;
	static volatile int32_t t73 = 233472;

	t73 = (x309<=(x310+(x311^x312)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x313 = UINT32_MAX;
	int8_t x315 = 9;
	int64_t x316 = 150497LL;
	static volatile int32_t t74 = 7;

	t74 = (x313<=(x314+(x315^x316)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x317 = INT64_MAX;
	int32_t x319 = -60337491;
	int16_t x320 = INT16_MIN;
	int32_t t75 = 76572;

	t75 = (x317<=(x318+(x319^x320)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x321 = 823750278840311LLU;
	int64_t x322 = -777991959408LL;
	volatile int32_t x323 = -67842605;
	static volatile int16_t x324 = INT16_MAX;
	int32_t t76 = 91059577;

	t76 = (x321<=(x322+(x323^x324)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x325 = -1LL;
	static volatile uint8_t x326 = 3U;
	static int16_t x327 = -1231;
	volatile int8_t x328 = INT8_MAX;
	int32_t t77 = -290808797;

	t77 = (x325<=(x326+(x327^x328)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x329 = -6;
	uint16_t x330 = 50U;
	int16_t x331 = INT16_MIN;
	int64_t x332 = INT64_MAX;
	int32_t t78 = 74048;

	t78 = (x329<=(x330+(x331^x332)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x333 = INT32_MAX;
	volatile int16_t x334 = INT16_MIN;
	int16_t x335 = INT16_MAX;
	uint16_t x336 = 12U;
	int32_t t79 = -66659;

	t79 = (x333<=(x334+(x335^x336)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x337 = 2U;
	volatile int64_t x339 = -1LL;
	int32_t x340 = INT32_MIN;
	static int32_t t80 = -138940;

	t80 = (x337<=(x338+(x339^x340)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x342 = 21U;
	int16_t x343 = 3648;
	uint64_t x344 = UINT64_MAX;
	int32_t t81 = 1;

	t81 = (x341<=(x342+(x343^x344)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x345 = -1;
	static int32_t x346 = -551075475;
	int8_t x347 = -59;
	int32_t t82 = 9;

	t82 = (x345<=(x346+(x347^x348)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x350 = 55;
	uint64_t x351 = 93219474119LLU;
	volatile int32_t t83 = 27438;

	t83 = (x349<=(x350+(x351^x352)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x353 = INT32_MAX;
	static uint16_t x354 = 1391U;
	int8_t x355 = 22;
	int16_t x356 = INT16_MIN;
	volatile int32_t t84 = -5604855;

	t84 = (x353<=(x354+(x355^x356)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x358 = INT8_MAX;
	int8_t x359 = INT8_MIN;
	int8_t x360 = INT8_MIN;
	int32_t t85 = -2247;

	t85 = (x357<=(x358+(x359^x360)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x361 = UINT32_MAX;
	static uint16_t x362 = 7813U;
	int64_t x363 = INT64_MIN;
	int16_t x364 = INT16_MAX;
	int32_t t86 = 0;

	t86 = (x361<=(x362+(x363^x364)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x366 = 63U;
	volatile uint32_t x368 = UINT32_MAX;
	static int32_t t87 = -2;

	t87 = (x365<=(x366+(x367^x368)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x369 = -1;
	static volatile int8_t x370 = 0;
	volatile uint8_t x371 = 22U;
	volatile int32_t t88 = -10453038;

	t88 = (x369<=(x370+(x371^x372)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x374 = -8;
	int32_t x375 = INT32_MIN;
	volatile int32_t t89 = -935612;

	t89 = (x373<=(x374+(x375^x376)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x377 = -1;
	volatile uint8_t x378 = UINT8_MAX;
	int64_t x379 = INT64_MAX;
	static int16_t x380 = INT16_MIN;
	static int32_t t90 = -123901633;

	t90 = (x377<=(x378+(x379^x380)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x381 = INT64_MAX;
	int32_t x382 = INT32_MIN;
	int64_t x383 = -136346147598LL;
	volatile int32_t t91 = 3;

	t91 = (x381<=(x382+(x383^x384)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x385 = UINT16_MAX;
	uint64_t x386 = 4LLU;
	uint8_t x387 = 108U;
	int64_t x388 = INT64_MIN;
	static volatile int32_t t92 = -43269555;

	t92 = (x385<=(x386+(x387^x388)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x389 = UINT8_MAX;
	uint64_t x390 = 100208820398285LLU;
	static volatile uint8_t x391 = 58U;
	int16_t x392 = INT16_MIN;
	static volatile int32_t t93 = 1;

	t93 = (x389<=(x390+(x391^x392)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x393 = -174753219686555338LL;
	static int8_t x394 = -1;
	uint16_t x396 = 14775U;
	static int32_t t94 = 5;

	t94 = (x393<=(x394+(x395^x396)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x398 = INT64_MAX;
	uint8_t x399 = 3U;
	volatile int64_t x400 = INT64_MIN;
	volatile int32_t t95 = -936;

	t95 = (x397<=(x398+(x399^x400)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x402 = 18;
	uint16_t x404 = 1U;
	volatile int32_t t96 = 72108801;

	t96 = (x401<=(x402+(x403^x404)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x405 = INT8_MIN;
	uint8_t x406 = 3U;
	int16_t x407 = -1;
	int16_t x408 = 15629;
	volatile int32_t t97 = -393203548;

	t97 = (x405<=(x406+(x407^x408)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x409 = INT32_MIN;
	int64_t x410 = -2LL;
	int8_t x411 = -4;
	int64_t x412 = 13LL;
	int32_t t98 = 1798084;

	t98 = (x409<=(x410+(x411^x412)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x413 = INT8_MAX;
	volatile int8_t x414 = -1;
	uint64_t x415 = 148129597287LLU;
	int32_t t99 = -9;

	t99 = (x413<=(x414+(x415^x416)));

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

