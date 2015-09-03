#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x2 = -40019714;
int16_t x4 = 176;
volatile int16_t x6 = INT16_MAX;
int8_t x9 = INT8_MIN;
volatile int32_t t3 = -20;
uint16_t x21 = 27936U;
int8_t x24 = 9;
static int64_t x28 = INT64_MIN;
int8_t x30 = 1;
int64_t x31 = INT64_MIN;
int64_t t8 = 213218LL;
static int8_t x43 = -1;
uint64_t t9 = 104807LLU;
int32_t x63 = -2548;
volatile uint8_t x67 = 7U;
uint64_t t15 = 353943388804630LLU;
uint64_t x73 = UINT64_MAX;
volatile int32_t x78 = INT32_MIN;
static volatile int8_t x81 = 63;
volatile int8_t x83 = 31;
int8_t x85 = INT8_MIN;
volatile int64_t t19 = 333974421555LL;
int16_t x90 = INT16_MIN;
int8_t x92 = 15;
int16_t x103 = INT16_MAX;
static volatile uint64_t x106 = 129673388278LLU;
volatile int16_t x109 = 18;
int32_t x110 = INT32_MIN;
int32_t x112 = INT32_MIN;
static int8_t x113 = INT8_MAX;
uint16_t x117 = 57U;
int8_t x120 = -3;
int32_t t27 = 1;
int8_t x122 = INT8_MIN;
int32_t x132 = -1;
int8_t x135 = INT8_MIN;
static int32_t x136 = 4;
volatile int32_t t31 = -1511;
static uint64_t t32 = UINT64_MAX;
volatile uint64_t x148 = 59019598307143LLU;
int8_t x150 = -1;
volatile uint64_t t35 = 876232LLU;
static volatile int64_t x157 = -1LL;
int64_t x158 = INT64_MAX;
volatile int32_t x160 = INT32_MIN;
int64_t x176 = 223440LL;
int16_t x177 = 10638;
int16_t x179 = -171;
int64_t t40 = -18LL;
volatile uint32_t x185 = 10U;
int64_t x186 = -1LL;
int16_t x187 = INT16_MAX;
int16_t x193 = INT16_MIN;
int8_t x194 = -1;
static int16_t x196 = -23;
int64_t t44 = -2985425589LL;
static volatile int64_t t45 = 25480550688771LL;
static uint16_t x213 = 2U;
uint16_t x216 = UINT16_MAX;
uint32_t t48 = 98U;
int64_t x217 = -1LL;
volatile int32_t x225 = INT32_MIN;
volatile int64_t x226 = 67944236LL;
volatile uint64_t t52 = 232LLU;
uint64_t x238 = 36850593LLU;
int16_t x241 = INT16_MIN;
int64_t x249 = 15739178386LL;
static int32_t x250 = INT32_MIN;
int32_t x252 = -4089;
int64_t x256 = -1LL;
int64_t x258 = INT64_MAX;
uint16_t x259 = 3789U;
int32_t t59 = 130323;
volatile uint16_t x266 = UINT16_MAX;
int8_t x280 = -1;
volatile uint16_t x285 = 417U;
static volatile int32_t x286 = -163497;
uint8_t x291 = UINT8_MAX;
uint16_t x292 = UINT16_MAX;
static int32_t x295 = INT32_MAX;
static int8_t x297 = INT8_MIN;
volatile int8_t x300 = 0;
static uint32_t t68 = 35U;
int16_t x306 = INT16_MAX;
int64_t x313 = INT64_MAX;
volatile uint8_t x314 = 0U;
volatile int64_t x321 = INT64_MAX;
int64_t x330 = 635630LL;
volatile uint16_t x331 = 3U;
uint16_t x333 = 499U;
volatile uint16_t x335 = UINT16_MAX;
volatile int32_t x341 = -415;
uint16_t x351 = 149U;
int16_t x352 = INT16_MAX;
uint64_t x363 = UINT64_MAX;
int64_t x368 = INT64_MIN;
int32_t x378 = -1;
static int8_t x379 = -1;
static int64_t t85 = INT64_MIN;
int64_t x381 = 235749977057074572LL;
uint32_t x386 = 1699U;
uint16_t x387 = UINT16_MAX;
int32_t x390 = INT32_MAX;
volatile uint32_t x395 = 2023454U;
uint64_t x396 = UINT64_MAX;
int32_t x398 = -7077;
static volatile int64_t t90 = INT64_MAX;
volatile int32_t t91 = 331;
volatile uint32_t x407 = 1874748928U;
uint64_t t93 = 3522310381622LLU;
int32_t x419 = -1031606;
static uint64_t t96 = 823543143LLU;
int32_t x426 = INT32_MAX;
uint64_t t97 = 45726285LLU;
static volatile int64_t t98 = 851677627585649086LL;
int32_t x439 = -550636220;
int32_t t99 = -188049;


void f0(void) {
	volatile int8_t x1 = 0;
	volatile int8_t x3 = -1;
	int32_t t0 = -3;

	t0 = (x1-((x2%x3)&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -35813125385264LL;
	int32_t x7 = -7985840;
	static uint8_t x8 = 77U;
	int64_t t1 = -14LL;

	t1 = (x5-((x6%x7)&x8));

	if (t1 != -35813125385341LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x10 = 1254137U;
	uint16_t x11 = 207U;
	int8_t x12 = INT8_MIN;
	static uint32_t t2 = 54342358U;

	t2 = (x9-((x10%x11)&x12));

	if (t2 != 4294967040U) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x13 = 16047;
	volatile uint16_t x14 = 907U;
	int32_t x15 = INT32_MAX;
	volatile int8_t x16 = INT8_MIN;

	t3 = (x13-((x14%x15)&x16));

	if (t3 != 15151) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x17 = UINT64_MAX;
	static int8_t x18 = INT8_MIN;
	uint16_t x19 = 2U;
	volatile int32_t x20 = 4756677;
	volatile uint64_t t4 = UINT64_MAX;

	t4 = (x17-((x18%x19)&x20));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = INT16_MIN;
	static uint64_t x23 = 2059400LLU;
	uint64_t t5 = 460034489734LLU;

	t5 = (x21-((x22%x23)&x24));

	if (t5 != 27928LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x25 = -1;
	static int8_t x26 = INT8_MIN;
	int64_t x27 = -125LL;
	static int64_t t6 = INT64_MAX;

	t6 = (x25-((x26%x27)&x28));

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = -1;
	int32_t x32 = INT32_MIN;
	int64_t t7 = 3LL;

	t7 = (x29-((x30%x31)&x32));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 9700U;
	int16_t x34 = INT16_MIN;
	uint16_t x35 = 7U;
	int64_t x36 = -1LL;

	t8 = (x33-((x34%x35)&x36));

	if (t8 != 9701LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = 5303500258639LLU;
	uint64_t x42 = 5645LLU;
	int16_t x44 = INT16_MIN;

	t9 = (x41-((x42%x43)&x44));

	if (t9 != 5303500258639LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x45 = 357U;
	static int16_t x46 = INT16_MAX;
	int8_t x47 = INT8_MIN;
	int32_t x48 = INT32_MIN;
	volatile int32_t t10 = 27654;

	t10 = (x45-((x46%x47)&x48));

	if (t10 != 357) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = UINT64_MAX;
	volatile int64_t x50 = INT64_MIN;
	volatile int32_t x51 = INT32_MAX;
	static int8_t x52 = INT8_MIN;
	static volatile uint64_t t11 = 62186842903LLU;

	t11 = (x49-((x50%x51)&x52));

	if (t11 != 127LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint16_t x53 = UINT16_MAX;
	volatile uint8_t x54 = 5U;
	volatile int16_t x55 = -11916;
	uint16_t x56 = UINT16_MAX;
	int32_t t12 = -109;

	t12 = (x53-((x54%x55)&x56));

	if (t12 != 65530) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = INT16_MIN;
	int64_t x62 = INT64_MIN;
	volatile int8_t x64 = INT8_MIN;
	static volatile int64_t t13 = -103LL;

	t13 = (x61-((x62%x63)&x64));

	if (t13 != -32000LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x65 = 14699;
	int16_t x66 = 0;
	int16_t x68 = 51;
	int32_t t14 = -1012247;

	t14 = (x65-((x66%x67)&x68));

	if (t14 != 14699) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = INT8_MAX;
	int64_t x70 = INT64_MAX;
	int8_t x71 = -9;
	uint64_t x72 = 799504722965815169LLU;

	t15 = (x69-((x70%x71)&x72));

	if (t15 != 126LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x74 = -1;
	volatile int8_t x75 = INT8_MAX;
	uint64_t x76 = 304LLU;
	uint64_t t16 = 4762489175823632LLU;

	t16 = (x73-((x74%x75)&x76));

	if (t16 != 18446744073709551311LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x77 = 128063U;
	static volatile uint64_t x79 = UINT64_MAX;
	int16_t x80 = INT16_MIN;
	uint64_t t17 = 218574039LLU;

	t17 = (x77-((x78%x79)&x80));

	if (t17 != 2147611711LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x82 = INT16_MIN;
	static uint8_t x84 = UINT8_MAX;
	volatile int32_t t18 = 26;

	t18 = (x81-((x82%x83)&x84));

	if (t18 != -192) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x86 = 51257LL;
	volatile int16_t x87 = -772;
	uint32_t x88 = 9977U;

	t19 = (x85-((x86%x87)&x88));

	if (t19 != -177LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = INT16_MIN;
	int32_t x91 = INT32_MAX;
	int32_t t20 = 11892;

	t20 = (x89-((x90%x91)&x92));

	if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x93 = 19U;
	uint64_t x94 = 15305772562479LLU;
	int16_t x95 = 37;
	int32_t x96 = INT32_MAX;
	volatile uint64_t t21 = 105445023306989542LLU;

	t21 = (x93-((x94%x95)&x96));

	if (t21 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x97 = UINT8_MAX;
	uint64_t x98 = 31047839LLU;
	volatile uint16_t x99 = UINT16_MAX;
	int8_t x100 = INT8_MAX;
	volatile uint64_t t22 = 1LLU;

	t22 = (x97-((x98%x99)&x100));

	if (t22 != 135LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x101 = UINT32_MAX;
	uint64_t x102 = UINT64_MAX;
	volatile uint32_t x104 = 427U;
	volatile uint64_t t23 = 427969902559LLU;

	t23 = (x101-((x102%x103)&x104));

	if (t23 != 4294967284LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x105 = UINT16_MAX;
	uint64_t x107 = 1352919341983288472LLU;
	uint16_t x108 = UINT16_MAX;
	volatile uint64_t t24 = 10LLU;

	t24 = (x105-((x106%x107)&x108));

	if (t24 != 7945LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x111 = 3186138U;
	uint32_t t25 = 15824U;

	t25 = (x109-((x110%x111)&x112));

	if (t25 != 18U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x114 = INT64_MIN;
	volatile uint32_t x115 = 470320U;
	static int32_t x116 = -1;
	int64_t t26 = -69072LL;

	t26 = (x113-((x114%x115)&x116));

	if (t26 != 83055LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint16_t x118 = UINT16_MAX;
	int16_t x119 = -610;

	t27 = (x117-((x118%x119)&x120));

	if (t27 != -208) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x121 = INT32_MIN;
	static uint32_t x123 = 1521U;
	volatile uint64_t x124 = 3603646233869011LLU;
	uint64_t t28 = 5LLU;

	t28 = (x121-((x122%x123)&x124));

	if (t28 != 18446744071562067438LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x125 = -1LL;
	static uint16_t x126 = UINT16_MAX;
	uint32_t x127 = 21020762U;
	int16_t x128 = 1111;
	volatile int64_t t29 = -55993546999638285LL;

	t29 = (x125-((x126%x127)&x128));

	if (t29 != -1112LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = INT64_MIN;
	static volatile int8_t x130 = 11;
	volatile int8_t x131 = -1;
	volatile int64_t t30 = INT64_MIN;

	t30 = (x129-((x130%x131)&x132));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x133 = -1;
	int16_t x134 = INT16_MIN;

	t31 = (x133-((x134%x135)&x136));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x137 = 0U;
	int32_t x138 = -3;
	uint64_t x139 = 19956LLU;
	int16_t x140 = 9;

	t32 = (x137-((x138%x139)&x140));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = -8;
	int32_t x142 = 196910683;
	uint64_t x143 = UINT64_MAX;
	uint32_t x144 = UINT32_MAX;
	uint64_t t33 = 2045312LLU;

	t33 = (x141-((x142%x143)&x144));

	if (t33 != 18446744073512640925LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x145 = 0U;
	static volatile int32_t x146 = -1051074451;
	static uint8_t x147 = 1U;
	volatile uint64_t t34 = 48371LLU;

	t34 = (x145-((x146%x147)&x148));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = -3857493LL;
	uint32_t x151 = 1175295621U;
	uint64_t x152 = 30216LLU;

	t35 = (x149-((x150%x151)&x152));

	if (t35 != 18446744073705680811LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x159 = INT8_MAX;
	int64_t t36 = -113648399371671LL;

	t36 = (x157-((x158%x159)&x160));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x161 = 0U;
	int32_t x162 = 37039;
	volatile int16_t x163 = INT16_MIN;
	int16_t x164 = INT16_MIN;
	volatile int32_t t37 = 1;

	t37 = (x161-((x162%x163)&x164));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x165 = 30145U;
	int16_t x166 = INT16_MIN;
	static volatile int32_t x167 = INT32_MIN;
	volatile int8_t x168 = -1;
	static volatile uint32_t t38 = 1U;

	t38 = (x165-((x166%x167)&x168));

	if (t38 != 62913U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x173 = INT32_MIN;
	int8_t x174 = -7;
	int32_t x175 = -10188;
	static volatile int64_t t39 = 1LL;

	t39 = (x173-((x174%x175)&x176));

	if (t39 != -2147707088LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x178 = INT32_MAX;
	int64_t x180 = 220599853LL;

	t40 = (x177-((x178%x179)&x180));

	if (t40 != 10630LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x188 = 8089673772977LLU;
	volatile uint64_t t41 = 869453177541858LLU;

	t41 = (x185-((x186%x187)&x188));

	if (t41 != 18446735984035778649LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x189 = INT32_MIN;
	int8_t x190 = INT8_MAX;
	static int8_t x191 = INT8_MIN;
	static uint32_t x192 = UINT32_MAX;
	volatile uint32_t t42 = 58U;

	t42 = (x189-((x190%x191)&x192));

	if (t42 != 2147483521U) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x195 = 2;
	volatile int32_t t43 = -32;

	t43 = (x193-((x194%x195)&x196));

	if (t43 != -32745) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x197 = 1U;
	int32_t x198 = INT32_MIN;
	int32_t x199 = -17251;
	int64_t x200 = 6975921LL;

	t44 = (x197-((x198%x199)&x200));

	if (t44 != -6967295LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x201 = INT64_MAX;
	int64_t x202 = INT64_MAX;
	int32_t x203 = INT32_MIN;
	volatile uint16_t x204 = UINT16_MAX;

	t45 = (x201-((x202%x203)&x204));

	if (t45 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x205 = -27478527342874LL;
	volatile int8_t x206 = INT8_MIN;
	int64_t x207 = INT64_MAX;
	int16_t x208 = -534;
	int64_t t46 = -13338615553LL;

	t46 = (x205-((x206%x207)&x208));

	if (t46 != -27478527342234LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x209 = 475210222LLU;
	volatile int16_t x210 = -1;
	int16_t x211 = INT16_MIN;
	static int32_t x212 = INT32_MAX;
	static volatile uint64_t t47 = 2607876783899LLU;

	t47 = (x209-((x210%x211)&x212));

	if (t47 != 18446744072037278191LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x214 = UINT32_MAX;
	int8_t x215 = INT8_MIN;

	t48 = (x213-((x214%x215)&x216));

	if (t48 != 4294967171U) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x218 = -369040553131619974LL;
	uint32_t x219 = UINT32_MAX;
	uint16_t x220 = 107U;
	int64_t t49 = -4519872813LL;

	t49 = (x217-((x218%x219)&x220));

	if (t49 != -10LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x221 = -15;
	uint32_t x222 = 496180U;
	int8_t x223 = INT8_MIN;
	static volatile uint8_t x224 = UINT8_MAX;
	volatile uint32_t t50 = 1988U;

	t50 = (x221-((x222%x223)&x224));

	if (t50 != 4294967229U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x227 = 101LLU;
	static int8_t x228 = 2;
	volatile uint64_t t51 = 192073392114LLU;

	t51 = (x225-((x226%x227)&x228));

	if (t51 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x229 = INT32_MIN;
	static uint64_t x230 = 3499348LLU;
	uint16_t x231 = 3923U;
	int16_t x232 = -1;

	t52 = (x229-((x230%x231)&x232));

	if (t52 != 18446744071562067936LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x233 = 1;
	int64_t x234 = 154345479012352LL;
	volatile int32_t x235 = 3;
	volatile int8_t x236 = -1;
	int64_t t53 = 78LL;

	t53 = (x233-((x234%x235)&x236));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x237 = 511027U;
	volatile uint32_t x239 = 16989U;
	volatile int16_t x240 = -1;
	volatile uint64_t t54 = 0LLU;

	t54 = (x237-((x238%x239)&x240));

	if (t54 != 509575LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x242 = UINT32_MAX;
	static volatile uint8_t x243 = UINT8_MAX;
	int8_t x244 = -1;
	uint32_t t55 = 233519U;

	t55 = (x241-((x242%x243)&x244));

	if (t55 != 4294934528U) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x251 = 6671U;
	int64_t t56 = 29639LL;

	t56 = (x249-((x250%x251)&x252));

	if (t56 != 15739182475LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x253 = 485U;
	int64_t x254 = INT64_MAX;
	int8_t x255 = -2;
	volatile int64_t t57 = -1047830LL;

	t57 = (x253-((x254%x255)&x256));

	if (t57 != 484LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x257 = INT32_MIN;
	uint16_t x260 = UINT16_MAX;
	volatile int64_t t58 = 14LL;

	t58 = (x257-((x258%x259)&x260));

	if (t58 != -2147486607LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x261 = UINT16_MAX;
	uint16_t x262 = UINT16_MAX;
	int16_t x263 = -5;
	int32_t x264 = INT32_MIN;

	t59 = (x261-((x262%x263)&x264));

	if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x265 = UINT32_MAX;
	uint64_t x267 = 714629LLU;
	uint32_t x268 = 2U;
	uint64_t t60 = 13857301LLU;

	t60 = (x265-((x266%x267)&x268));

	if (t60 != 4294967293LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x269 = UINT32_MAX;
	int32_t x270 = INT32_MIN;
	int64_t x271 = 62453633653LL;
	uint32_t x272 = 79468U;
	volatile int64_t t61 = 103032780511255838LL;

	t61 = (x269-((x270%x271)&x272));

	if (t61 != 4294967295LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x273 = -1;
	int8_t x274 = INT8_MAX;
	volatile int16_t x275 = INT16_MIN;
	volatile uint64_t x276 = UINT64_MAX;
	static uint64_t t62 = 225639789792LLU;

	t62 = (x273-((x274%x275)&x276));

	if (t62 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x277 = -3;
	int32_t x278 = INT32_MIN;
	uint8_t x279 = 7U;
	volatile int32_t t63 = -2944969;

	t63 = (x277-((x278%x279)&x280));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x281 = -1;
	volatile uint64_t x282 = 2058770866207476732LLU;
	uint32_t x283 = UINT32_MAX;
	uint32_t x284 = 821251243U;
	volatile uint64_t t64 = 1074961968562030LLU;

	t64 = (x281-((x282%x283)&x284));

	if (t64 != 18446744073696836565LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x287 = INT8_MIN;
	uint16_t x288 = 599U;
	volatile int32_t t65 = -1;

	t65 = (x285-((x286%x287)&x288));

	if (t65 != -182) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x289 = INT64_MAX;
	volatile int64_t x290 = -1LL;
	volatile int64_t t66 = 7143641908LL;

	t66 = (x289-((x290%x291)&x292));

	if (t66 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x293 = 2983081U;
	int16_t x294 = 62;
	volatile int32_t x296 = INT32_MAX;
	volatile uint32_t t67 = 8865U;

	t67 = (x293-((x294%x295)&x296));

	if (t67 != 2983019U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x298 = 214249U;
	uint16_t x299 = UINT16_MAX;

	t68 = (x297-((x298%x299)&x300));

	if (t68 != 4294967168U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x301 = INT8_MIN;
	int16_t x302 = INT16_MIN;
	static int64_t x303 = INT64_MIN;
	int16_t x304 = -1;
	static volatile int64_t t69 = -20438665284LL;

	t69 = (x301-((x302%x303)&x304));

	if (t69 != 32640LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x305 = UINT64_MAX;
	volatile int64_t x307 = INT64_MIN;
	int8_t x308 = INT8_MIN;
	uint64_t t70 = 2175668791647LLU;

	t70 = (x305-((x306%x307)&x308));

	if (t70 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x309 = -21927969;
	static int16_t x310 = INT16_MAX;
	int32_t x311 = -640695;
	int8_t x312 = -1;
	volatile int32_t t71 = -140;

	t71 = (x309-((x310%x311)&x312));

	if (t71 != -21960736) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x315 = INT32_MIN;
	volatile int8_t x316 = INT8_MIN;
	int64_t t72 = INT64_MAX;

	t72 = (x313-((x314%x315)&x316));

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x322 = INT64_MAX;
	uint8_t x323 = 11U;
	uint8_t x324 = 18U;
	int64_t t73 = 1234047956LL;

	t73 = (x321-((x322%x323)&x324));

	if (t73 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x325 = -258274;
	uint16_t x326 = 2284U;
	static int16_t x327 = -1;
	static volatile int64_t x328 = INT64_MIN;
	static int64_t t74 = -12928152655192LL;

	t74 = (x325-((x326%x327)&x328));

	if (t74 != -258274LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x329 = 1U;
	int32_t x332 = INT32_MIN;
	int64_t t75 = 258273LL;

	t75 = (x329-((x330%x331)&x332));

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x334 = -6164;
	uint16_t x336 = UINT16_MAX;
	static volatile int32_t t76 = 686;

	t76 = (x333-((x334%x335)&x336));

	if (t76 != -58873) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x337 = 108195799308648347LLU;
	int8_t x338 = INT8_MAX;
	volatile uint8_t x339 = UINT8_MAX;
	static int16_t x340 = -1;
	volatile uint64_t t77 = 1300225LLU;

	t77 = (x337-((x338%x339)&x340));

	if (t77 != 108195799308648220LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x342 = 2U;
	uint64_t x343 = UINT64_MAX;
	static int32_t x344 = -1;
	uint64_t t78 = 8001296331732LLU;

	t78 = (x341-((x342%x343)&x344));

	if (t78 != 18446744073709551199LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x345 = 172U;
	int64_t x346 = INT64_MAX;
	uint16_t x347 = UINT16_MAX;
	int64_t x348 = INT64_MIN;
	volatile int64_t t79 = 29537707283LL;

	t79 = (x345-((x346%x347)&x348));

	if (t79 != 172LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x349 = -2862203598284LL;
	static uint32_t x350 = UINT32_MAX;
	volatile int64_t t80 = -21365LL;

	t80 = (x349-((x350%x351)&x352));

	if (t80 != -2862203598412LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x353 = INT64_MIN;
	int32_t x354 = INT32_MAX;
	static int32_t x355 = 363385;
	uint16_t x356 = 1U;
	volatile int64_t t81 = INT64_MIN;

	t81 = (x353-((x354%x355)&x356));

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x357 = UINT64_MAX;
	int16_t x358 = INT16_MAX;
	int64_t x359 = -3066717926911LL;
	static int16_t x360 = INT16_MIN;
	uint64_t t82 = UINT64_MAX;

	t82 = (x357-((x358%x359)&x360));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x361 = INT8_MIN;
	static uint32_t x362 = 36U;
	uint32_t x364 = 1U;
	volatile uint64_t t83 = 28429117579LLU;

	t83 = (x361-((x362%x363)&x364));

	if (t83 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x365 = -5358;
	int64_t x366 = -1LL;
	int16_t x367 = -1;
	int64_t t84 = 7733428854108LL;

	t84 = (x365-((x366%x367)&x368));

	if (t84 != -5358LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x377 = INT64_MIN;
	static uint16_t x380 = 20U;

	t85 = (x377-((x378%x379)&x380));

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x382 = UINT32_MAX;
	static int8_t x383 = INT8_MIN;
	int32_t x384 = INT32_MIN;
	static volatile int64_t t86 = 1327258178LL;

	t86 = (x381-((x382%x383)&x384));

	if (t86 != 235749977057074572LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x385 = INT64_MAX;
	volatile int16_t x388 = -1;
	int64_t t87 = -53540LL;

	t87 = (x385-((x386%x387)&x388));

	if (t87 != 9223372036854774108LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x389 = -3732;
	static uint64_t x391 = 8317027LLU;
	static int64_t x392 = INT64_MIN;
	uint64_t t88 = 64646816909LLU;

	t88 = (x389-((x390%x391)&x392));

	if (t88 != 18446744073709547884LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x393 = -12;
	uint64_t x394 = 3715366329821123477LLU;
	volatile uint64_t t89 = 106LLU;

	t89 = (x393-((x394%x395)&x396));

	if (t89 != 18446744073708664029LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x397 = INT64_MAX;
	int32_t x399 = 3;
	int32_t x400 = -3132618;

	t90 = (x397-((x398%x399)&x400));

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x401 = UINT16_MAX;
	int8_t x402 = -1;
	static volatile int16_t x403 = INT16_MIN;
	uint8_t x404 = 13U;

	t91 = (x401-((x402%x403)&x404));

	if (t91 != 65522) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x405 = 117345LLU;
	int8_t x406 = INT8_MIN;
	static int8_t x408 = INT8_MAX;
	uint64_t t92 = 47952820LLU;

	t92 = (x405-((x406%x407)&x408));

	if (t92 != 117345LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x409 = INT64_MAX;
	int8_t x410 = -1;
	volatile uint64_t x411 = UINT64_MAX;
	volatile int16_t x412 = INT16_MAX;

	t93 = (x409-((x410%x411)&x412));

	if (t93 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x413 = INT16_MAX;
	int32_t x414 = 289235;
	volatile int16_t x415 = -97;
	static int8_t x416 = INT8_MIN;
	static int32_t t94 = 1822466;

	t94 = (x413-((x414%x415)&x416));

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x417 = UINT8_MAX;
	static int8_t x418 = INT8_MIN;
	int32_t x420 = -1;
	volatile int32_t t95 = 76437;

	t95 = (x417-((x418%x419)&x420));

	if (t95 != 383) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x421 = -2166442946LL;
	uint64_t x422 = 56940727096LLU;
	int64_t x423 = INT64_MAX;
	static int8_t x424 = INT8_MIN;

	t96 = (x421-((x422%x423)&x424));

	if (t96 != 18446744014602381630LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x425 = INT32_MAX;
	uint64_t x427 = 135LLU;
	static int64_t x428 = INT64_MIN;

	t97 = (x425-((x426%x427)&x428));

	if (t97 != 2147483647LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x429 = UINT8_MAX;
	int8_t x430 = -62;
	static uint32_t x431 = 720715U;
	volatile int64_t x432 = -296449409542630LL;

	t98 = (x429-((x430%x431)&x432));

	if (t98 != -4881LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x437 = 0U;
	int16_t x438 = 10;
	uint16_t x440 = UINT16_MAX;

	t99 = (x437-((x438%x439)&x440));

	if (t99 != -10) { NG(); } else { ; }
	
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

