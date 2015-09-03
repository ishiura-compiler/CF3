#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = UINT32_MAX;
int32_t t0 = 682731749;
volatile uint8_t x5 = 14U;
static uint16_t x7 = 2659U;
static uint32_t x10 = 6U;
volatile int32_t t3 = -457;
static int32_t x27 = INT32_MAX;
int16_t x28 = 117;
uint16_t x30 = 6024U;
volatile int16_t x32 = 115;
uint32_t x35 = UINT32_MAX;
volatile int32_t t7 = -447715;
static volatile int16_t x42 = -1;
int64_t x44 = -1LL;
static uint32_t x48 = 207360U;
uint64_t x50 = 4751216218307LLU;
uint16_t x57 = 4683U;
uint32_t x58 = UINT32_MAX;
uint8_t x61 = 1U;
static int32_t t14 = -9646254;
int16_t x74 = -639;
volatile uint8_t x77 = 3U;
int8_t x84 = 1;
volatile int32_t t17 = 0;
int64_t x100 = -1LL;
static int8_t x102 = 19;
static int32_t x113 = -1;
static volatile int32_t t23 = -29296;
int32_t t26 = 9758395;
int32_t x148 = 0;
static int8_t x150 = INT8_MIN;
volatile int32_t t29 = -367049497;
int64_t x160 = -37418LL;
uint64_t x163 = 67526412628782LLU;
uint16_t x164 = 0U;
static int8_t x178 = INT8_MIN;
int16_t x180 = INT16_MAX;
uint64_t x188 = 146057448959LLU;
int16_t x192 = 0;
static volatile uint32_t x197 = 11168U;
uint64_t x198 = 194427LLU;
volatile int32_t t39 = 277307486;
int8_t x217 = INT8_MAX;
int16_t x219 = -1;
int8_t x235 = -1;
int32_t t44 = 6;
volatile int32_t t48 = 0;
int32_t x259 = 1155;
int16_t x260 = INT16_MIN;
static volatile uint32_t x266 = 1U;
int32_t x269 = -229;
int8_t x270 = -7;
static uint32_t x272 = 770U;
uint32_t x278 = 154343U;
volatile int32_t t53 = 12911;
int32_t t55 = 184981695;
volatile uint64_t x290 = 936LLU;
static int32_t x292 = -59410440;
int8_t x295 = -13;
int32_t t57 = 400089567;
int16_t x298 = -1;
int32_t x299 = 9;
int64_t x307 = -5LL;
int32_t x309 = INT32_MIN;
static int64_t x316 = 5058546709817LL;
uint8_t x320 = 113U;
uint16_t x328 = 67U;
uint16_t x331 = 31U;
uint32_t x346 = 17U;
int8_t x348 = -1;
int8_t x350 = -1;
int16_t x359 = INT16_MIN;
uint8_t x364 = 0U;
uint16_t x377 = 7U;
uint8_t x379 = 0U;
volatile int8_t x382 = -1;
volatile int32_t t73 = 121;
int32_t x393 = INT32_MAX;
int16_t x397 = INT16_MIN;
volatile uint64_t x405 = UINT64_MAX;
int64_t x406 = -1LL;
int64_t x415 = INT64_MIN;
int64_t x434 = 8609739845598256LL;
uint32_t x443 = UINT32_MAX;
int16_t x444 = -236;
volatile uint64_t x445 = UINT64_MAX;
volatile uint32_t x448 = 5225791U;
volatile int32_t t84 = 11;
volatile int32_t t88 = -1;
static volatile int8_t x481 = 3;
static volatile int16_t x484 = INT16_MAX;
int8_t x485 = 0;
int64_t x499 = -1LL;
static int32_t t93 = 7172841;
static int8_t x512 = -1;
uint64_t x515 = 36594439365851917LLU;
uint64_t x520 = 3421LLU;


void f0(void) {
	volatile int64_t x1 = -1LL;
	int64_t x3 = -1917091LL;
	volatile int16_t x4 = -1;

	t0 = ((x1+x2)<(x3-x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = -183;
	uint16_t x8 = 8870U;
	static int32_t t1 = 4182946;

	t1 = ((x5+x6)<(x7-x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	static int8_t x11 = INT8_MIN;
	int8_t x12 = -1;
	volatile int32_t t2 = -1;

	t2 = ((x9+x10)<(x11-x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 1U;
	volatile int8_t x18 = 1;
	int16_t x19 = -219;
	uint16_t x20 = 105U;

	t3 = ((x17+x18)<(x19-x20));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x25 = INT64_MAX;
	int32_t x26 = INT32_MIN;
	volatile int32_t t4 = 100073;

	t4 = ((x25+x26)<(x27-x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = 244527976;
	int8_t x31 = INT8_MAX;
	int32_t t5 = 1;

	t5 = ((x29+x30)<(x31-x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x33 = 0U;
	static int8_t x34 = INT8_MAX;
	static int32_t x36 = 7;
	int32_t t6 = 619;

	t6 = ((x33+x34)<(x35-x36));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = INT16_MAX;
	static int64_t x38 = INT64_MIN;
	int32_t x39 = 1;
	uint32_t x40 = 1567959782U;

	t7 = ((x37+x38)<(x39-x40));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x41 = 82U;
	volatile int8_t x43 = INT8_MAX;
	volatile int32_t t8 = -1;

	t8 = ((x41+x42)<(x43-x44));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = 42;
	int64_t x46 = INT64_MIN;
	static volatile int16_t x47 = INT16_MAX;
	volatile int32_t t9 = -161518871;

	t9 = ((x45+x46)<(x47-x48));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = INT64_MIN;
	int16_t x51 = INT16_MAX;
	static uint16_t x52 = UINT16_MAX;
	volatile int32_t t10 = 414396;

	t10 = ((x49+x50)<(x51-x52));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x59 = -1;
	uint16_t x60 = 26U;
	int32_t t11 = 11727;

	t11 = ((x57+x58)<(x59-x60));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x62 = 12U;
	uint32_t x63 = UINT32_MAX;
	static volatile uint64_t x64 = 259669577511LLU;
	int32_t t12 = 76724536;

	t12 = ((x61+x62)<(x63-x64));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = -1;
	static int8_t x66 = INT8_MIN;
	uint8_t x67 = 108U;
	int16_t x68 = -1;
	volatile int32_t t13 = -27;

	t13 = ((x65+x66)<(x67-x68));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x69 = 50U;
	int64_t x70 = -1LL;
	int64_t x71 = 724322274159LL;
	static uint16_t x72 = UINT16_MAX;

	t14 = ((x69+x70)<(x71-x72));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x73 = 10990462U;
	volatile int8_t x75 = 0;
	static int16_t x76 = INT16_MAX;
	int32_t t15 = -13;

	t15 = ((x73+x74)<(x75-x76));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x78 = INT8_MIN;
	int16_t x79 = INT16_MAX;
	int32_t x80 = INT32_MAX;
	static volatile int32_t t16 = 817;

	t16 = ((x77+x78)<(x79-x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = INT64_MAX;
	int32_t x82 = INT32_MIN;
	uint8_t x83 = UINT8_MAX;

	t17 = ((x81+x82)<(x83-x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x89 = -1;
	volatile int32_t x90 = 2620;
	int64_t x91 = INT64_MAX;
	int64_t x92 = 112LL;
	int32_t t18 = -6712776;

	t18 = ((x89+x90)<(x91-x92));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x97 = 6379506884370973LL;
	int32_t x98 = 25;
	static int64_t x99 = -2083946268333072LL;
	int32_t t19 = 19981;

	t19 = ((x97+x98)<(x99-x100));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x101 = -487107;
	static uint8_t x103 = 1U;
	int16_t x104 = 1;
	volatile int32_t t20 = -266241546;

	t20 = ((x101+x102)<(x103-x104));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x105 = -1;
	int8_t x106 = INT8_MAX;
	int8_t x107 = INT8_MAX;
	static uint32_t x108 = 4U;
	int32_t t21 = 2503127;

	t21 = ((x105+x106)<(x107-x108));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x114 = -38;
	volatile int64_t x115 = INT64_MAX;
	static uint32_t x116 = 51U;
	static volatile int32_t t22 = 453;

	t22 = ((x113+x114)<(x115-x116));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x117 = -14154428275767504LL;
	uint32_t x118 = 496137U;
	int8_t x119 = -12;
	int64_t x120 = INT64_MIN;

	t23 = ((x117+x118)<(x119-x120));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x121 = 122997415562LLU;
	uint16_t x122 = 187U;
	int16_t x123 = INT16_MAX;
	uint16_t x124 = 1845U;
	volatile int32_t t24 = 0;

	t24 = ((x121+x122)<(x123-x124));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x125 = -696;
	static int16_t x126 = INT16_MAX;
	int32_t x127 = -2070;
	volatile int32_t x128 = 420422458;
	int32_t t25 = 1933;

	t25 = ((x125+x126)<(x127-x128));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x133 = INT16_MIN;
	volatile uint16_t x134 = UINT16_MAX;
	static int8_t x135 = INT8_MIN;
	volatile int8_t x136 = 42;

	t26 = ((x133+x134)<(x135-x136));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x145 = 4206204027685646158LLU;
	volatile int8_t x146 = INT8_MAX;
	int8_t x147 = INT8_MIN;
	int32_t t27 = -846;

	t27 = ((x145+x146)<(x147-x148));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x149 = -1447964021787615LL;
	int64_t x151 = -1LL;
	int8_t x152 = INT8_MIN;
	int32_t t28 = -493;

	t28 = ((x149+x150)<(x151-x152));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x153 = INT8_MIN;
	uint8_t x154 = 0U;
	volatile int32_t x155 = -1;
	int64_t x156 = 2008327208LL;

	t29 = ((x153+x154)<(x155-x156));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x157 = -13;
	volatile uint16_t x158 = 1128U;
	volatile uint16_t x159 = UINT16_MAX;
	volatile int32_t t30 = 31690897;

	t30 = ((x157+x158)<(x159-x160));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x161 = 17;
	static volatile uint16_t x162 = UINT16_MAX;
	volatile int32_t t31 = -15;

	t31 = ((x161+x162)<(x163-x164));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x173 = -1LL;
	static int64_t x174 = -1LL;
	uint64_t x175 = 2651934580LLU;
	static int32_t x176 = -1;
	volatile int32_t t32 = -1;

	t32 = ((x173+x174)<(x175-x176));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x177 = INT16_MIN;
	int32_t x179 = -27;
	static int32_t t33 = -237981;

	t33 = ((x177+x178)<(x179-x180));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x181 = 288;
	int8_t x182 = INT8_MAX;
	volatile uint32_t x183 = 68900U;
	static int8_t x184 = -1;
	static volatile int32_t t34 = -17624;

	t34 = ((x181+x182)<(x183-x184));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x185 = 173921685928LL;
	int16_t x186 = -7345;
	volatile int16_t x187 = INT16_MIN;
	volatile int32_t t35 = 45;

	t35 = ((x185+x186)<(x187-x188));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x189 = INT32_MIN;
	int64_t x190 = -1LL;
	static uint8_t x191 = 57U;
	static int32_t t36 = 0;

	t36 = ((x189+x190)<(x191-x192));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x193 = -15;
	int16_t x194 = INT16_MIN;
	static uint8_t x195 = UINT8_MAX;
	static int8_t x196 = INT8_MIN;
	int32_t t37 = -800;

	t37 = ((x193+x194)<(x195-x196));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x199 = INT16_MIN;
	int64_t x200 = 76088134854LL;
	int32_t t38 = 758868357;

	t38 = ((x197+x198)<(x199-x200));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x209 = 9U;
	static int32_t x210 = -1;
	int64_t x211 = -1825492187325013641LL;
	int16_t x212 = -60;

	t39 = ((x209+x210)<(x211-x212));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x213 = 2U;
	int32_t x214 = INT32_MIN;
	volatile uint8_t x215 = 48U;
	int16_t x216 = -104;
	int32_t t40 = -226;

	t40 = ((x213+x214)<(x215-x216));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x218 = -14418107LL;
	int64_t x220 = INT64_MAX;
	int32_t t41 = 233;

	t41 = ((x217+x218)<(x219-x220));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x221 = UINT64_MAX;
	uint64_t x222 = UINT64_MAX;
	int16_t x223 = -5;
	uint32_t x224 = 437914U;
	static volatile int32_t t42 = -401;

	t42 = ((x221+x222)<(x223-x224));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x229 = INT8_MIN;
	volatile int8_t x230 = -10;
	int8_t x231 = -1;
	static int16_t x232 = -1;
	static volatile int32_t t43 = -8307353;

	t43 = ((x229+x230)<(x231-x232));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x233 = 31698228;
	volatile int8_t x234 = INT8_MIN;
	int32_t x236 = -1;

	t44 = ((x233+x234)<(x235-x236));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x241 = 32U;
	int32_t x242 = 121880;
	int64_t x243 = -79309141LL;
	int8_t x244 = INT8_MIN;
	static volatile int32_t t45 = 2918;

	t45 = ((x241+x242)<(x243-x244));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x245 = 30599U;
	volatile uint8_t x246 = 106U;
	int32_t x247 = -1;
	int32_t x248 = -1;
	static int32_t t46 = -10034872;

	t46 = ((x245+x246)<(x247-x248));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x249 = 110814405U;
	int8_t x250 = -21;
	uint8_t x251 = 0U;
	volatile uint16_t x252 = UINT16_MAX;
	int32_t t47 = 20318382;

	t47 = ((x249+x250)<(x251-x252));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x253 = INT32_MIN;
	volatile uint16_t x254 = UINT16_MAX;
	uint64_t x255 = 471982LLU;
	int8_t x256 = 5;

	t48 = ((x253+x254)<(x255-x256));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x257 = 2;
	volatile int16_t x258 = 15;
	volatile int32_t t49 = 14024;

	t49 = ((x257+x258)<(x259-x260));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x265 = INT32_MIN;
	volatile int16_t x267 = 5205;
	int8_t x268 = -1;
	volatile int32_t t50 = 323254955;

	t50 = ((x265+x266)<(x267-x268));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x271 = INT32_MAX;
	volatile int32_t t51 = 2;

	t51 = ((x269+x270)<(x271-x272));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x273 = 164U;
	int8_t x274 = INT8_MAX;
	int64_t x275 = INT64_MIN;
	volatile int8_t x276 = -3;
	int32_t t52 = 76082;

	t52 = ((x273+x274)<(x275-x276));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x277 = -1;
	static volatile uint32_t x279 = 184439755U;
	static volatile int8_t x280 = -11;

	t53 = ((x277+x278)<(x279-x280));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x281 = UINT8_MAX;
	uint64_t x282 = UINT64_MAX;
	static volatile int64_t x283 = INT64_MAX;
	uint64_t x284 = UINT64_MAX;
	static volatile int32_t t54 = -20569;

	t54 = ((x281+x282)<(x283-x284));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x285 = INT8_MAX;
	int8_t x286 = -1;
	int8_t x287 = INT8_MIN;
	int64_t x288 = INT64_MIN;

	t55 = ((x285+x286)<(x287-x288));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x289 = INT64_MAX;
	int16_t x291 = INT16_MIN;
	volatile int32_t t56 = -48013;

	t56 = ((x289+x290)<(x291-x292));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x293 = INT8_MIN;
	uint8_t x294 = UINT8_MAX;
	uint32_t x296 = 1300U;

	t57 = ((x293+x294)<(x295-x296));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x297 = 21;
	int16_t x300 = -1;
	int32_t t58 = 6;

	t58 = ((x297+x298)<(x299-x300));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x305 = 0LLU;
	uint8_t x306 = UINT8_MAX;
	volatile int16_t x308 = -1;
	int32_t t59 = 4;

	t59 = ((x305+x306)<(x307-x308));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x310 = 8019U;
	uint64_t x311 = 7066177339LLU;
	volatile uint32_t x312 = 1254U;
	int32_t t60 = 209353;

	t60 = ((x309+x310)<(x311-x312));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x313 = INT8_MAX;
	int8_t x314 = INT8_MAX;
	uint16_t x315 = 4U;
	volatile int32_t t61 = 206062;

	t61 = ((x313+x314)<(x315-x316));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x317 = 1334U;
	volatile int32_t x318 = -36803776;
	int16_t x319 = INT16_MIN;
	static int32_t t62 = -851649;

	t62 = ((x317+x318)<(x319-x320));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x325 = UINT32_MAX;
	uint32_t x326 = UINT32_MAX;
	static volatile uint32_t x327 = UINT32_MAX;
	int32_t t63 = -7;

	t63 = ((x325+x326)<(x327-x328));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x329 = 156;
	int8_t x330 = -26;
	int8_t x332 = -32;
	volatile int32_t t64 = 1;

	t64 = ((x329+x330)<(x331-x332));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x345 = INT16_MIN;
	volatile uint16_t x347 = 123U;
	int32_t t65 = -404162326;

	t65 = ((x345+x346)<(x347-x348));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x349 = INT8_MIN;
	int32_t x351 = INT32_MAX;
	uint32_t x352 = 31391U;
	int32_t t66 = 21045421;

	t66 = ((x349+x350)<(x351-x352));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x357 = -1;
	int8_t x358 = -1;
	int16_t x360 = -465;
	volatile int32_t t67 = -166643;

	t67 = ((x357+x358)<(x359-x360));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x361 = INT16_MIN;
	volatile int8_t x362 = 40;
	static volatile int32_t x363 = -1;
	volatile int32_t t68 = 485648783;

	t68 = ((x361+x362)<(x363-x364));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x365 = UINT64_MAX;
	uint64_t x366 = 2180579LLU;
	int8_t x367 = 16;
	int32_t x368 = INT32_MAX;
	int32_t t69 = 199;

	t69 = ((x365+x366)<(x367-x368));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x378 = UINT8_MAX;
	uint32_t x380 = 533850U;
	static volatile int32_t t70 = 2122500;

	t70 = ((x377+x378)<(x379-x380));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x381 = INT64_MAX;
	uint8_t x383 = 2U;
	int16_t x384 = INT16_MIN;
	volatile int32_t t71 = 22610;

	t71 = ((x381+x382)<(x383-x384));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x385 = UINT64_MAX;
	volatile uint32_t x386 = 197032U;
	int16_t x387 = INT16_MIN;
	uint32_t x388 = 141413U;
	int32_t t72 = 394;

	t72 = ((x385+x386)<(x387-x388));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x389 = INT16_MIN;
	int8_t x390 = -3;
	int64_t x391 = -1049140LL;
	uint64_t x392 = 5216163851668LLU;

	t73 = ((x389+x390)<(x391-x392));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x394 = -1;
	int16_t x395 = -1;
	volatile int8_t x396 = -1;
	static volatile int32_t t74 = 8;

	t74 = ((x393+x394)<(x395-x396));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x398 = INT16_MIN;
	int64_t x399 = -1LL;
	uint32_t x400 = 337694U;
	int32_t t75 = -1498;

	t75 = ((x397+x398)<(x399-x400));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x401 = -51;
	volatile int16_t x402 = -1;
	volatile uint32_t x403 = 251U;
	static volatile int16_t x404 = INT16_MIN;
	int32_t t76 = 76690871;

	t76 = ((x401+x402)<(x403-x404));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x407 = -1;
	int8_t x408 = -1;
	volatile int32_t t77 = 965790;

	t77 = ((x405+x406)<(x407-x408));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x409 = -1LL;
	int8_t x410 = INT8_MIN;
	int16_t x411 = INT16_MAX;
	static uint64_t x412 = 98487893488919LLU;
	int32_t t78 = 0;

	t78 = ((x409+x410)<(x411-x412));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x413 = 7;
	volatile int64_t x414 = -701246924621314LL;
	static int32_t x416 = INT32_MIN;
	int32_t t79 = 1027597399;

	t79 = ((x413+x414)<(x415-x416));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x425 = -1;
	int64_t x426 = INT64_MAX;
	int32_t x427 = -1;
	int8_t x428 = -1;
	int32_t t80 = 73189654;

	t80 = ((x425+x426)<(x427-x428));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x433 = INT32_MIN;
	uint16_t x435 = 0U;
	static int8_t x436 = INT8_MIN;
	int32_t t81 = -177288;

	t81 = ((x433+x434)<(x435-x436));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x437 = -1;
	int16_t x438 = 853;
	volatile uint16_t x439 = 111U;
	static int8_t x440 = INT8_MAX;
	int32_t t82 = 8084193;

	t82 = ((x437+x438)<(x439-x440));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x441 = INT8_MIN;
	static uint32_t x442 = UINT32_MAX;
	int32_t t83 = -4307;

	t83 = ((x441+x442)<(x443-x444));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x446 = INT32_MIN;
	volatile uint64_t x447 = 2169521LLU;

	t84 = ((x445+x446)<(x447-x448));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x453 = INT16_MAX;
	uint8_t x454 = UINT8_MAX;
	int16_t x455 = INT16_MIN;
	int64_t x456 = INT64_MIN;
	static volatile int32_t t85 = 0;

	t85 = ((x453+x454)<(x455-x456));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x457 = UINT32_MAX;
	static uint8_t x458 = UINT8_MAX;
	uint8_t x459 = UINT8_MAX;
	static int16_t x460 = -1;
	volatile int32_t t86 = -444;

	t86 = ((x457+x458)<(x459-x460));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x461 = INT8_MIN;
	uint16_t x462 = 8U;
	uint64_t x463 = UINT64_MAX;
	int64_t x464 = INT64_MIN;
	int32_t t87 = -1;

	t87 = ((x461+x462)<(x463-x464));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x469 = 1U;
	uint32_t x470 = UINT32_MAX;
	volatile int64_t x471 = INT64_MAX;
	volatile uint32_t x472 = 616U;

	t88 = ((x469+x470)<(x471-x472));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x473 = INT8_MIN;
	int8_t x474 = INT8_MAX;
	int64_t x475 = INT64_MIN;
	uint64_t x476 = 140141992212349LLU;
	volatile int32_t t89 = 2047741;

	t89 = ((x473+x474)<(x475-x476));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x482 = 0;
	static uint16_t x483 = UINT16_MAX;
	static int32_t t90 = 9395029;

	t90 = ((x481+x482)<(x483-x484));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x486 = INT64_MIN;
	int64_t x487 = -1LL;
	int64_t x488 = 1068175269LL;
	volatile int32_t t91 = -12;

	t91 = ((x485+x486)<(x487-x488));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x489 = INT16_MIN;
	volatile int32_t x490 = INT32_MAX;
	int64_t x491 = INT64_MAX;
	int16_t x492 = 229;
	volatile int32_t t92 = -390;

	t92 = ((x489+x490)<(x491-x492));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x497 = -438370349;
	int8_t x498 = INT8_MIN;
	int8_t x500 = INT8_MAX;

	t93 = ((x497+x498)<(x499-x500));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x505 = 106U;
	int16_t x506 = INT16_MIN;
	int64_t x507 = 254339091LL;
	static int32_t x508 = INT32_MAX;
	volatile int32_t t94 = -1;

	t94 = ((x505+x506)<(x507-x508));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x509 = -1;
	static volatile uint16_t x510 = UINT16_MAX;
	int64_t x511 = INT64_MIN;
	int32_t t95 = -712835;

	t95 = ((x509+x510)<(x511-x512));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x513 = 6226LLU;
	volatile int64_t x514 = INT64_MAX;
	int16_t x516 = INT16_MIN;
	volatile int32_t t96 = 989;

	t96 = ((x513+x514)<(x515-x516));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x517 = INT8_MAX;
	static volatile int16_t x518 = INT16_MAX;
	static int64_t x519 = 2205557915LL;
	int32_t t97 = -3823;

	t97 = ((x517+x518)<(x519-x520));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x521 = INT8_MAX;
	int32_t x522 = INT32_MIN;
	int16_t x523 = -30;
	static uint16_t x524 = UINT16_MAX;
	static volatile int32_t t98 = 57447111;

	t98 = ((x521+x522)<(x523-x524));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x525 = -1LL;
	static uint8_t x526 = 76U;
	uint8_t x527 = 3U;
	uint8_t x528 = UINT8_MAX;
	volatile int32_t t99 = 664049;

	t99 = ((x525+x526)<(x527-x528));

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

