#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x10 = -2035;
volatile uint64_t x11 = 161465151039LLU;
int8_t x16 = -1;
int32_t x17 = 0;
static volatile uint64_t x18 = 250568752392LLU;
int8_t x24 = INT8_MIN;
int32_t x26 = -9047089;
static int16_t x27 = 1381;
int32_t x34 = INT32_MAX;
uint32_t x36 = 61341U;
volatile int32_t t7 = 46;
uint8_t x52 = 104U;
volatile int32_t t8 = 1338622;
uint32_t x67 = 8974U;
static volatile int32_t t12 = -14667172;
int16_t x76 = INT16_MIN;
int8_t x78 = INT8_MIN;
int64_t x83 = INT64_MIN;
uint8_t x90 = 2U;
int32_t t19 = -735;
uint8_t x97 = 23U;
uint16_t x99 = 264U;
volatile int32_t x100 = -24260;
int32_t x110 = -1;
int64_t x111 = INT64_MAX;
uint32_t x116 = 25753317U;
int8_t x120 = 37;
int32_t x121 = -1;
uint8_t x130 = 51U;
uint64_t x138 = 87260LLU;
int16_t x142 = -1;
int16_t x149 = -12977;
int16_t x152 = INT16_MIN;
volatile int32_t t32 = -14;
static int8_t x157 = INT8_MIN;
volatile int32_t t33 = 283;
static uint8_t x162 = UINT8_MAX;
int8_t x165 = INT8_MIN;
int16_t x171 = 15;
int16_t x173 = 1;
int16_t x174 = 32;
volatile int32_t t37 = 59957155;
int8_t x189 = INT8_MIN;
volatile uint16_t x192 = 3126U;
uint16_t x193 = 89U;
int32_t x194 = INT32_MAX;
uint32_t x204 = UINT32_MAX;
int32_t x208 = INT32_MIN;
uint16_t x209 = 0U;
uint32_t x211 = 49514263U;
int16_t x212 = -2039;
volatile int32_t t46 = -311997;
volatile uint8_t x222 = UINT8_MAX;
int32_t x234 = -1;
static int8_t x238 = INT8_MAX;
uint64_t x248 = 3928805LLU;
uint8_t x249 = 0U;
int32_t x260 = -107426876;
uint8_t x274 = 0U;
static uint64_t x281 = 1743901LLU;
uint32_t x284 = UINT32_MAX;
uint64_t t62 = 6975LLU;
int16_t x286 = -1;
static volatile int8_t x289 = INT8_MIN;
int64_t x294 = 33597635952108354LL;
uint64_t x296 = 5602080162777LLU;
uint8_t x298 = UINT8_MAX;
static volatile uint64_t t66 = 40275104924311LLU;
int16_t x307 = INT16_MIN;
int64_t x309 = INT64_MAX;
int16_t x313 = 27;
int32_t x321 = -62;
volatile int32_t t72 = 3988;
int16_t x330 = INT16_MIN;
uint64_t x332 = 7375753727801LLU;
int64_t x338 = INT64_MIN;
volatile int8_t x345 = -1;
uint16_t x358 = 1150U;
uint16_t x360 = 6U;
volatile int32_t t82 = -1;
int32_t x369 = -788624754;
uint8_t x374 = UINT8_MAX;
uint64_t x376 = 4LLU;
uint8_t x377 = 20U;
int64_t x381 = -47268949391512637LL;
int8_t x382 = INT8_MAX;
int32_t x392 = INT32_MIN;
uint64_t x401 = UINT64_MAX;
static volatile uint64_t x416 = 204LLU;
static uint32_t x419 = 253941U;
static int32_t x421 = INT32_MAX;
volatile int64_t x435 = -73167875LL;
int8_t x443 = 4;


void f0(void) {
	volatile int64_t x9 = INT64_MIN;
	int64_t x12 = INT64_MIN;
	volatile int64_t t0 = INT64_MIN;

	t0 = (x9+((x10-x11)==x12));

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x13 = UINT16_MAX;
	uint8_t x14 = 80U;
	int8_t x15 = INT8_MAX;
	volatile int32_t t1 = 2275070;

	t1 = (x13+((x14-x15)==x16));

	if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x19 = -1;
	volatile int32_t x20 = INT32_MIN;
	volatile int32_t t2 = -103365473;

	t2 = (x17+((x18-x19)==x20));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x21 = 46U;
	volatile int8_t x22 = INT8_MAX;
	uint32_t x23 = 2887U;
	static int32_t t3 = 1681463;

	t3 = (x21+((x22-x23)==x24));

	if (t3 != 46) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = -1LL;
	int32_t x28 = INT32_MIN;
	volatile int64_t t4 = -1125713451043539116LL;

	t4 = (x25+((x26-x27)==x28));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x33 = INT32_MAX;
	int64_t x35 = 3075721LL;
	int32_t t5 = INT32_MAX;

	t5 = (x33+((x34-x35)==x36));

	if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x37 = 29687633609725988LLU;
	uint64_t x38 = 16244699534449LLU;
	int32_t x39 = 91;
	int16_t x40 = INT16_MAX;
	volatile uint64_t t6 = 390293LLU;

	t6 = (x37+((x38-x39)==x40));

	if (t6 != 29687633609725988LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x41 = -1;
	static int16_t x42 = INT16_MIN;
	uint32_t x43 = 9U;
	static int8_t x44 = 58;

	t7 = (x41+((x42-x43)==x44));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x49 = -1;
	static uint32_t x50 = UINT32_MAX;
	uint32_t x51 = 37U;

	t8 = (x49+((x50-x51)==x52));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x53 = UINT16_MAX;
	uint16_t x54 = UINT16_MAX;
	int8_t x55 = 0;
	volatile uint64_t x56 = 89LLU;
	int32_t t9 = -110246686;

	t9 = (x53+((x54-x55)==x56));

	if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x57 = -34;
	int32_t x58 = INT32_MIN;
	int8_t x59 = -1;
	uint16_t x60 = 3U;
	volatile int32_t t10 = 14842;

	t10 = (x57+((x58-x59)==x60));

	if (t10 != -34) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x61 = -3319LL;
	int8_t x62 = INT8_MIN;
	static int8_t x63 = INT8_MAX;
	uint64_t x64 = 33897471550242668LLU;
	static volatile int64_t t11 = -1503LL;

	t11 = (x61+((x62-x63)==x64));

	if (t11 != -3319LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x65 = -997;
	static uint64_t x66 = UINT64_MAX;
	volatile int16_t x68 = INT16_MAX;

	t12 = (x65+((x66-x67)==x68));

	if (t12 != -997) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x69 = 24066444U;
	static uint8_t x70 = UINT8_MAX;
	int32_t x71 = 0;
	uint32_t x72 = 13U;
	static volatile uint32_t t13 = 14417U;

	t13 = (x69+((x70-x71)==x72));

	if (t13 != 24066444U) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x73 = 460409050U;
	uint8_t x74 = UINT8_MAX;
	int32_t x75 = -257960;
	uint32_t t14 = 16737172U;

	t14 = (x73+((x74-x75)==x76));

	if (t14 != 460409050U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x77 = -7;
	uint16_t x79 = 16625U;
	volatile int32_t x80 = -814646611;
	volatile int32_t t15 = -76;

	t15 = (x77+((x78-x79)==x80));

	if (t15 != -7) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x81 = INT64_MIN;
	int32_t x82 = -394516;
	volatile int64_t x84 = INT64_MIN;
	volatile int64_t t16 = INT64_MIN;

	t16 = (x81+((x82-x83)==x84));

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x85 = 1;
	int8_t x86 = -16;
	int16_t x87 = INT16_MAX;
	int64_t x88 = INT64_MAX;
	int32_t t17 = 80632777;

	t17 = (x85+((x86-x87)==x88));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x89 = -117300LL;
	volatile int16_t x91 = INT16_MIN;
	static uint32_t x92 = UINT32_MAX;
	volatile int64_t t18 = -4908046LL;

	t18 = (x89+((x90-x91)==x92));

	if (t18 != -117300LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x93 = -1;
	volatile uint32_t x94 = UINT32_MAX;
	uint8_t x95 = UINT8_MAX;
	int16_t x96 = -50;

	t19 = (x93+((x94-x95)==x96));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x98 = 8140124439LLU;
	int32_t t20 = 101;

	t20 = (x97+((x98-x99)==x100));

	if (t20 != 23) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x101 = INT32_MIN;
	volatile uint8_t x102 = UINT8_MAX;
	uint64_t x103 = 482728762792257764LLU;
	uint64_t x104 = 6525020032258399242LLU;
	static volatile int32_t t21 = INT32_MIN;

	t21 = (x101+((x102-x103)==x104));

	if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x105 = 25U;
	uint32_t x106 = 88379U;
	int8_t x107 = 53;
	int16_t x108 = -1;
	static uint32_t t22 = 450752989U;

	t22 = (x105+((x106-x107)==x108));

	if (t22 != 25U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x109 = 45938000576105LLU;
	int8_t x112 = -4;
	volatile uint64_t t23 = 1784537LLU;

	t23 = (x109+((x110-x111)==x112));

	if (t23 != 45938000576105LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x113 = UINT8_MAX;
	uint8_t x114 = UINT8_MAX;
	uint32_t x115 = 0U;
	static volatile int32_t t24 = 9455897;

	t24 = (x113+((x114-x115)==x116));

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x117 = -1373990593LL;
	static int64_t x118 = -1LL;
	static volatile uint64_t x119 = 851516380488954LLU;
	static volatile int64_t t25 = -222088771378LL;

	t25 = (x117+((x118-x119)==x120));

	if (t25 != -1373990593LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x122 = -100;
	int16_t x123 = INT16_MIN;
	int8_t x124 = INT8_MAX;
	int32_t t26 = 893055661;

	t26 = (x121+((x122-x123)==x124));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x129 = -1;
	uint16_t x131 = 5841U;
	int32_t x132 = INT32_MIN;
	volatile int32_t t27 = 3673919;

	t27 = (x129+((x130-x131)==x132));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x137 = 44;
	int8_t x139 = -1;
	int16_t x140 = 0;
	static int32_t t28 = 119;

	t28 = (x137+((x138-x139)==x140));

	if (t28 != 44) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x141 = INT16_MAX;
	int32_t x143 = INT32_MIN;
	int8_t x144 = INT8_MIN;
	int32_t t29 = -1;

	t29 = (x141+((x142-x143)==x144));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x145 = 40;
	int32_t x146 = INT32_MIN;
	int32_t x147 = -5859310;
	static int64_t x148 = -1LL;
	volatile int32_t t30 = 2;

	t30 = (x145+((x146-x147)==x148));

	if (t30 != 40) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x150 = INT64_MAX;
	uint64_t x151 = 279814842LLU;
	int32_t t31 = 0;

	t31 = (x149+((x150-x151)==x152));

	if (t31 != -12977) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x153 = INT8_MIN;
	volatile int8_t x154 = INT8_MIN;
	static int32_t x155 = 7;
	uint8_t x156 = 5U;

	t32 = (x153+((x154-x155)==x156));

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x158 = 17U;
	uint32_t x159 = 67U;
	static int32_t x160 = INT32_MIN;

	t33 = (x157+((x158-x159)==x160));

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x161 = -1LL;
	volatile int16_t x163 = INT16_MAX;
	int16_t x164 = 54;
	volatile int64_t t34 = -644841339954041364LL;

	t34 = (x161+((x162-x163)==x164));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x166 = UINT16_MAX;
	volatile uint64_t x167 = 7LLU;
	int64_t x168 = -1LL;
	volatile int32_t t35 = 13666974;

	t35 = (x165+((x166-x167)==x168));

	if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x169 = 11020639U;
	int16_t x170 = INT16_MAX;
	uint16_t x172 = UINT16_MAX;
	static volatile uint32_t t36 = 1009496964U;

	t36 = (x169+((x170-x171)==x172));

	if (t36 != 11020639U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x175 = INT32_MAX;
	uint32_t x176 = 15237U;

	t37 = (x173+((x174-x175)==x176));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint8_t x177 = UINT8_MAX;
	int16_t x178 = -7146;
	int8_t x179 = INT8_MAX;
	uint64_t x180 = UINT64_MAX;
	int32_t t38 = 283974474;

	t38 = (x177+((x178-x179)==x180));

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x181 = 12642U;
	int64_t x182 = -1LL;
	uint64_t x183 = UINT64_MAX;
	int64_t x184 = INT64_MIN;
	int32_t t39 = -543707500;

	t39 = (x181+((x182-x183)==x184));

	if (t39 != 12642) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x185 = 6235U;
	int8_t x186 = INT8_MIN;
	static volatile int32_t x187 = INT32_MIN;
	int8_t x188 = 0;
	volatile int32_t t40 = -11;

	t40 = (x185+((x186-x187)==x188));

	if (t40 != 6235) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x190 = 30661LLU;
	int32_t x191 = INT32_MAX;
	static volatile int32_t t41 = -185201351;

	t41 = (x189+((x190-x191)==x192));

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x195 = 26;
	int16_t x196 = -1;
	int32_t t42 = -5877;

	t42 = (x193+((x194-x195)==x196));

	if (t42 != 89) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x197 = 17U;
	static int32_t x198 = INT32_MIN;
	static volatile int16_t x199 = INT16_MIN;
	volatile uint8_t x200 = 3U;
	int32_t t43 = -110002;

	t43 = (x197+((x198-x199)==x200));

	if (t43 != 17) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x201 = INT8_MIN;
	int64_t x202 = INT64_MIN;
	uint64_t x203 = 445620911727296LLU;
	volatile int32_t t44 = 33933045;

	t44 = (x201+((x202-x203)==x204));

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x205 = INT8_MIN;
	int8_t x206 = -1;
	uint8_t x207 = UINT8_MAX;
	static volatile int32_t t45 = -4982772;

	t45 = (x205+((x206-x207)==x208));

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x210 = 36;

	t46 = (x209+((x210-x211)==x212));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x213 = -1;
	int16_t x214 = INT16_MAX;
	int32_t x215 = -2462322;
	uint16_t x216 = 26U;
	int32_t t47 = 234;

	t47 = (x213+((x214-x215)==x216));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x221 = 26;
	int8_t x223 = INT8_MIN;
	static int8_t x224 = -1;
	int32_t t48 = 8362160;

	t48 = (x221+((x222-x223)==x224));

	if (t48 != 26) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x225 = 3U;
	int8_t x226 = INT8_MIN;
	int8_t x227 = -1;
	static volatile int8_t x228 = INT8_MIN;
	int32_t t49 = 7880421;

	t49 = (x225+((x226-x227)==x228));

	if (t49 != 3) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x229 = INT32_MAX;
	int32_t x230 = INT32_MIN;
	int16_t x231 = INT16_MIN;
	static volatile int16_t x232 = INT16_MIN;
	static int32_t t50 = INT32_MAX;

	t50 = (x229+((x230-x231)==x232));

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x233 = 3LLU;
	static volatile uint64_t x235 = 0LLU;
	static uint64_t x236 = UINT64_MAX;
	uint64_t t51 = 335473696LLU;

	t51 = (x233+((x234-x235)==x236));

	if (t51 != 4LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x237 = INT64_MIN;
	static uint32_t x239 = 2760U;
	static int32_t x240 = INT32_MIN;
	int64_t t52 = INT64_MIN;

	t52 = (x237+((x238-x239)==x240));

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x241 = INT32_MIN;
	int8_t x242 = 6;
	int8_t x243 = -1;
	int32_t x244 = 4;
	volatile int32_t t53 = INT32_MIN;

	t53 = (x241+((x242-x243)==x244));

	if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x245 = -726767909;
	uint8_t x246 = 1U;
	volatile int16_t x247 = INT16_MAX;
	int32_t t54 = -72293120;

	t54 = (x245+((x246-x247)==x248));

	if (t54 != -726767909) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x250 = 35;
	uint64_t x251 = UINT64_MAX;
	int16_t x252 = INT16_MAX;
	int32_t t55 = 1532;

	t55 = (x249+((x250-x251)==x252));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x253 = 1U;
	volatile uint32_t x254 = UINT32_MAX;
	static int8_t x255 = -4;
	uint64_t x256 = UINT64_MAX;
	volatile int32_t t56 = -13498;

	t56 = (x253+((x254-x255)==x256));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x257 = 153284129641382338LL;
	int32_t x258 = -1685178;
	int16_t x259 = INT16_MIN;
	int64_t t57 = -391461266LL;

	t57 = (x257+((x258-x259)==x260));

	if (t57 != 153284129641382338LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x261 = -1;
	int16_t x262 = -1;
	int16_t x263 = -1;
	volatile int8_t x264 = -23;
	volatile int32_t t58 = -114;

	t58 = (x261+((x262-x263)==x264));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x269 = -1;
	int8_t x270 = INT8_MIN;
	int8_t x271 = INT8_MIN;
	int8_t x272 = INT8_MAX;
	int32_t t59 = -539921;

	t59 = (x269+((x270-x271)==x272));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x273 = INT8_MIN;
	uint16_t x275 = 219U;
	static int8_t x276 = INT8_MAX;
	int32_t t60 = -107;

	t60 = (x273+((x274-x275)==x276));

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x277 = INT16_MAX;
	int32_t x278 = INT32_MIN;
	int16_t x279 = INT16_MIN;
	static volatile uint32_t x280 = UINT32_MAX;
	static volatile int32_t t61 = -133371;

	t61 = (x277+((x278-x279)==x280));

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x282 = INT8_MIN;
	volatile int64_t x283 = -1LL;

	t62 = (x281+((x282-x283)==x284));

	if (t62 != 1743901LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x285 = INT16_MIN;
	static int64_t x287 = -393LL;
	volatile int64_t x288 = INT64_MIN;
	volatile int32_t t63 = 10914935;

	t63 = (x285+((x286-x287)==x288));

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x290 = UINT16_MAX;
	uint8_t x291 = 2U;
	int8_t x292 = INT8_MAX;
	volatile int32_t t64 = 9;

	t64 = (x289+((x290-x291)==x292));

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x293 = 20830769704834LL;
	uint64_t x295 = 33LLU;
	static volatile int64_t t65 = -359331LL;

	t65 = (x293+((x294-x295)==x296));

	if (t65 != 20830769704834LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x297 = 23724305926LLU;
	uint8_t x299 = 1U;
	uint64_t x300 = UINT64_MAX;

	t66 = (x297+((x298-x299)==x300));

	if (t66 != 23724305926LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x301 = INT64_MAX;
	static int32_t x302 = -1;
	uint32_t x303 = 54395U;
	int8_t x304 = INT8_MIN;
	int64_t t67 = INT64_MAX;

	t67 = (x301+((x302-x303)==x304));

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x305 = -27103;
	uint32_t x306 = 3180396U;
	uint64_t x308 = 915LLU;
	static int32_t t68 = -89;

	t68 = (x305+((x306-x307)==x308));

	if (t68 != -27103) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x310 = -1;
	int16_t x311 = -1;
	int16_t x312 = INT16_MIN;
	int64_t t69 = INT64_MAX;

	t69 = (x309+((x310-x311)==x312));

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x314 = -95274066;
	uint64_t x315 = 31907665LLU;
	int64_t x316 = INT64_MIN;
	volatile int32_t t70 = -23;

	t70 = (x313+((x314-x315)==x316));

	if (t70 != 27) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x317 = -3;
	static uint32_t x318 = UINT32_MAX;
	uint32_t x319 = 0U;
	int16_t x320 = -1;
	volatile int32_t t71 = -114128643;

	t71 = (x317+((x318-x319)==x320));

	if (t71 != -2) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x322 = 3417087U;
	static int8_t x323 = INT8_MAX;
	int16_t x324 = INT16_MIN;

	t72 = (x321+((x322-x323)==x324));

	if (t72 != -62) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x325 = INT16_MIN;
	int64_t x326 = 2394405930134259LL;
	uint16_t x327 = 61U;
	volatile int8_t x328 = INT8_MAX;
	int32_t t73 = 61;

	t73 = (x325+((x326-x327)==x328));

	if (t73 != -32768) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x329 = -1;
	int8_t x331 = INT8_MIN;
	static int32_t t74 = 15446;

	t74 = (x329+((x330-x331)==x332));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x333 = -15;
	int8_t x334 = INT8_MIN;
	uint64_t x335 = UINT64_MAX;
	int16_t x336 = 744;
	static int32_t t75 = -657734;

	t75 = (x333+((x334-x335)==x336));

	if (t75 != -15) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x337 = INT16_MIN;
	static volatile uint64_t x339 = 111412561LLU;
	uint16_t x340 = 1627U;
	static int32_t t76 = 90826;

	t76 = (x337+((x338-x339)==x340));

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x341 = 20U;
	int32_t x342 = INT32_MAX;
	int32_t x343 = 483648477;
	int64_t x344 = -3665LL;
	int32_t t77 = 233;

	t77 = (x341+((x342-x343)==x344));

	if (t77 != 20) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x346 = 111U;
	volatile int32_t x347 = 2270;
	int8_t x348 = -1;
	int32_t t78 = 133;

	t78 = (x345+((x346-x347)==x348));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x349 = 0U;
	int8_t x350 = 39;
	int64_t x351 = -1LL;
	static int16_t x352 = 1;
	int32_t t79 = 21070;

	t79 = (x349+((x350-x351)==x352));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x353 = 0;
	volatile int32_t x354 = 311;
	int16_t x355 = INT16_MIN;
	int8_t x356 = INT8_MAX;
	static volatile int32_t t80 = 6296;

	t80 = (x353+((x354-x355)==x356));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x357 = UINT64_MAX;
	int64_t x359 = INT64_MAX;
	uint64_t t81 = UINT64_MAX;

	t81 = (x357+((x358-x359)==x360));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x361 = INT8_MIN;
	volatile int64_t x362 = -7504042LL;
	uint32_t x363 = 39772541U;
	uint8_t x364 = 4U;

	t82 = (x361+((x362-x363)==x364));

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x365 = UINT32_MAX;
	int64_t x366 = -1LL;
	uint64_t x367 = 84625177096066LLU;
	int8_t x368 = INT8_MIN;
	volatile uint32_t t83 = UINT32_MAX;

	t83 = (x365+((x366-x367)==x368));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x370 = INT8_MIN;
	volatile uint64_t x371 = 525367211507855LLU;
	static volatile int16_t x372 = INT16_MAX;
	volatile int32_t t84 = 1255249;

	t84 = (x369+((x370-x371)==x372));

	if (t84 != -788624754) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x373 = INT8_MAX;
	static volatile uint32_t x375 = 5736798U;
	static volatile int32_t t85 = 0;

	t85 = (x373+((x374-x375)==x376));

	if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x378 = -1;
	volatile int32_t x379 = -1;
	uint16_t x380 = 9114U;
	int32_t t86 = -1;

	t86 = (x377+((x378-x379)==x380));

	if (t86 != 20) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x383 = 1643629U;
	int8_t x384 = -1;
	volatile int64_t t87 = -26977470894806079LL;

	t87 = (x381+((x382-x383)==x384));

	if (t87 != -47268949391512637LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x389 = 30522383926301LL;
	int16_t x390 = INT16_MAX;
	uint32_t x391 = UINT32_MAX;
	int64_t t88 = -711654731690828126LL;

	t88 = (x389+((x390-x391)==x392));

	if (t88 != 30522383926301LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x402 = 5U;
	static int64_t x403 = -1LL;
	uint32_t x404 = 1U;
	volatile uint64_t t89 = UINT64_MAX;

	t89 = (x401+((x402-x403)==x404));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x405 = 1969348U;
	int32_t x406 = -1;
	static int8_t x407 = -3;
	static volatile uint16_t x408 = UINT16_MAX;
	uint32_t t90 = 10291874U;

	t90 = (x405+((x406-x407)==x408));

	if (t90 != 1969348U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x409 = INT64_MIN;
	int8_t x410 = INT8_MAX;
	int8_t x411 = INT8_MIN;
	int16_t x412 = INT16_MIN;
	volatile int64_t t91 = INT64_MIN;

	t91 = (x409+((x410-x411)==x412));

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x413 = INT8_MIN;
	volatile int8_t x414 = INT8_MAX;
	static int8_t x415 = INT8_MAX;
	int32_t t92 = 69796550;

	t92 = (x413+((x414-x415)==x416));

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x417 = UINT16_MAX;
	uint32_t x418 = UINT32_MAX;
	int32_t x420 = INT32_MAX;
	int32_t t93 = -112;

	t93 = (x417+((x418-x419)==x420));

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x422 = INT64_MIN;
	int32_t x423 = -1;
	int64_t x424 = -1LL;
	volatile int32_t t94 = INT32_MAX;

	t94 = (x421+((x422-x423)==x424));

	if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x425 = 2296829595882677LL;
	uint32_t x426 = 1611224248U;
	int64_t x427 = INT64_MAX;
	volatile int16_t x428 = INT16_MIN;
	volatile int64_t t95 = 358495650385LL;

	t95 = (x425+((x426-x427)==x428));

	if (t95 != 2296829595882677LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x429 = UINT32_MAX;
	int64_t x430 = 1644927738242685LL;
	static uint64_t x431 = 3471439081154537403LLU;
	static int32_t x432 = INT32_MAX;
	static uint32_t t96 = UINT32_MAX;

	t96 = (x429+((x430-x431)==x432));

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x433 = 2046215LLU;
	static int32_t x434 = -130860;
	int64_t x436 = -7505864339LL;
	volatile uint64_t t97 = 15211162391308LLU;

	t97 = (x433+((x434-x435)==x436));

	if (t97 != 2046215LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x437 = UINT64_MAX;
	int16_t x438 = INT16_MIN;
	volatile int16_t x439 = INT16_MIN;
	int64_t x440 = -2LL;
	uint64_t t98 = UINT64_MAX;

	t98 = (x437+((x438-x439)==x440));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint64_t x441 = UINT64_MAX;
	int64_t x442 = -1LL;
	int16_t x444 = INT16_MIN;
	volatile uint64_t t99 = UINT64_MAX;

	t99 = (x441+((x442-x443)==x444));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

