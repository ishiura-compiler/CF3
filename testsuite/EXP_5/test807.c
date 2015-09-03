#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 56U;
int8_t x8 = INT8_MIN;
uint16_t x15 = 12617U;
volatile int32_t t3 = 8252404;
int64_t t4 = 3859635401217183LL;
volatile uint32_t x24 = 497661U;
uint16_t x41 = 0U;
static volatile uint32_t t10 = 11U;
uint64_t x54 = 7027725903899LLU;
uint32_t x58 = UINT32_MAX;
uint32_t x59 = 26388662U;
volatile uint64_t t14 = 933143225730956434LLU;
int64_t t15 = -41817915961383LL;
int16_t x74 = INT16_MIN;
volatile uint64_t x76 = UINT64_MAX;
uint64_t x85 = 3855123292850132861LLU;
int8_t x87 = -1;
volatile uint32_t x89 = UINT32_MAX;
int8_t x91 = 61;
int8_t x94 = INT8_MIN;
uint32_t x109 = UINT32_MAX;
volatile uint64_t t26 = 56336229607LLU;
static int64_t x121 = INT64_MAX;
static volatile int64_t x125 = -23LL;
volatile uint64_t t28 = 512545LLU;
uint8_t x131 = 34U;
int8_t x146 = INT8_MIN;
int32_t x147 = INT32_MAX;
uint64_t t33 = 4595356663836651204LLU;
uint64_t x151 = UINT64_MAX;
static volatile int8_t x155 = -6;
int32_t x156 = INT32_MAX;
static volatile int32_t t35 = 9345554;
uint64_t x157 = UINT64_MAX;
int16_t x161 = -1;
volatile int16_t x163 = -1;
volatile int64_t t39 = -57078723715129LL;
int16_t x176 = 1100;
int32_t x180 = INT32_MIN;
int64_t x187 = -261321LL;
volatile int8_t x195 = 6;
volatile int32_t t45 = 202223;
int64_t x199 = -1LL;
uint64_t x203 = UINT64_MAX;
int16_t x204 = 32;
uint16_t x208 = UINT16_MAX;
int8_t x210 = 6;
static volatile int16_t x213 = -1;
volatile int16_t x215 = INT16_MIN;
uint64_t x217 = 122857542LLU;
uint64_t t51 = 110273210LLU;
int8_t x221 = 0;
int32_t x223 = -1;
static uint64_t t53 = 13587528565492LLU;
int16_t x231 = INT16_MIN;
volatile uint64_t t55 = 559403436700278LLU;
volatile int16_t x238 = INT16_MAX;
static int64_t x240 = -1LL;
int16_t x244 = -1;
uint16_t x250 = UINT16_MAX;
int64_t x257 = 82877LL;
int32_t x261 = -1;
int8_t x264 = INT8_MIN;
int16_t x267 = -114;
int32_t t62 = 3872380;
int64_t t64 = 3944237LL;
int16_t x277 = 9862;
int32_t t65 = -1;
int32_t x284 = INT32_MIN;
volatile int64_t t66 = -18838612984382287LL;
static int32_t x290 = -94402;
uint64_t x295 = UINT64_MAX;
int8_t x296 = INT8_MAX;
int16_t x298 = INT16_MIN;
volatile int8_t x299 = -15;
uint64_t x300 = 439232611887353987LLU;
uint64_t t70 = 7383901991205849473LLU;
int16_t x308 = INT16_MIN;
uint64_t t73 = 9322788634LLU;
volatile uint32_t x317 = UINT32_MAX;
static uint64_t x322 = UINT64_MAX;
uint16_t x324 = UINT16_MAX;
uint64_t x326 = UINT64_MAX;
uint64_t t77 = 58001LLU;
int64_t x336 = INT64_MAX;
uint32_t x341 = UINT32_MAX;
uint32_t x342 = UINT32_MAX;
static volatile int64_t x348 = -12LL;
int8_t x351 = INT8_MIN;
static int64_t x361 = 89LL;
uint32_t x363 = 12038U;
int16_t x365 = INT16_MIN;
volatile uint64_t x370 = UINT64_MAX;
volatile int8_t x371 = -1;
int16_t x372 = INT16_MIN;
int8_t x373 = 1;
int8_t x374 = -61;
uint32_t x379 = UINT32_MAX;
volatile int32_t x381 = -1;
uint8_t x382 = UINT8_MAX;
static int64_t t91 = 29LL;
static volatile int64_t t92 = -480711LL;
static int16_t x394 = INT16_MAX;
int32_t x402 = INT32_MAX;
volatile uint32_t t96 = 41279870U;
volatile int32_t x411 = INT32_MIN;
uint16_t x416 = 5989U;
int64_t x419 = 15165714101152514LL;


void f0(void) {
	static uint16_t x2 = 1611U;
	volatile int16_t x3 = 14;
	uint32_t x4 = 250239U;
	volatile uint32_t t0 = 37062U;

	t0 = (x1+((x2%x3)&x4));

	if (t0 != 57U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 53139639LLU;
	volatile int64_t x6 = INT64_MAX;
	int64_t x7 = -1LL;
	uint64_t t1 = 2007238326079LLU;

	t1 = (x5+((x6%x7)&x8));

	if (t1 != 53139639LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int8_t x10 = 41;
	volatile int32_t x11 = -1348;
	volatile int16_t x12 = INT16_MAX;
	static int32_t t2 = 8405;

	t2 = (x9+((x10%x11)&x12));

	if (t2 != -2147483607) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	int16_t x14 = INT16_MIN;
	int16_t x16 = 1;

	t3 = (x13+((x14%x15)&x16));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x17 = INT32_MAX;
	int32_t x18 = INT32_MAX;
	volatile int64_t x19 = 10824LL;
	int32_t x20 = INT32_MAX;

	t4 = (x17+((x18%x19)&x20));

	if (t4 != 2147485694LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	int32_t x22 = -1;
	int16_t x23 = 8201;
	volatile uint32_t t5 = 189U;

	t5 = (x21+((x22%x23)&x24));

	if (t5 != 2147981308U) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 3690799U;
	static uint8_t x26 = 1U;
	volatile int32_t x27 = INT32_MIN;
	uint8_t x28 = UINT8_MAX;
	uint32_t t6 = 1842675982U;

	t6 = (x25+((x26%x27)&x28));

	if (t6 != 3690800U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	int8_t x30 = 1;
	volatile int16_t x31 = INT16_MIN;
	int8_t x32 = -1;
	volatile int32_t t7 = 3;

	t7 = (x29+((x30%x31)&x32));

	if (t7 != -127) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = INT64_MIN;
	static uint8_t x34 = 14U;
	int64_t x35 = -3639LL;
	int64_t x36 = -10839918LL;
	int64_t t8 = 467579590LL;

	t8 = (x33+((x34%x35)&x36));

	if (t8 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = 11962;
	static volatile uint64_t x38 = 8289231846117777LLU;
	int16_t x39 = INT16_MIN;
	int32_t x40 = INT32_MIN;
	static volatile uint64_t t9 = 125091LLU;

	t9 = (x37+((x38%x39)&x40));

	if (t9 != 8289231046717114LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x42 = 24U;
	static int8_t x43 = -1;
	uint32_t x44 = 269938641U;

	t10 = (x41+((x42%x43)&x44));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x49 = -1;
	int64_t x50 = -809340712744700597LL;
	uint64_t x51 = 104355430393880136LLU;
	volatile int8_t x52 = INT8_MAX;
	uint64_t t11 = 17633LLU;

	t11 = (x49+((x50%x51)&x52));

	if (t11 != 66LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = 64410LLU;
	int16_t x55 = INT16_MIN;
	volatile int64_t x56 = -1LL;
	volatile uint64_t t12 = 36109692LLU;

	t12 = (x53+((x54%x55)&x56));

	if (t12 != 7027725968309LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = 938U;
	static int16_t x60 = -1;
	static uint32_t t13 = 310U;

	t13 = (x57+((x58%x59)&x60));

	if (t13 != 20004989U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = 3U;
	int32_t x62 = -5;
	uint32_t x63 = 2249U;
	uint64_t x64 = 6572LLU;

	t14 = (x61+((x62%x63)&x64));

	if (t14 != 267LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x69 = UINT32_MAX;
	int64_t x70 = INT64_MIN;
	static int8_t x71 = INT8_MIN;
	uint32_t x72 = 0U;

	t15 = (x69+((x70%x71)&x72));

	if (t15 != 4294967295LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = -33260068;
	uint8_t x75 = 6U;
	uint64_t t16 = 3LLU;

	t16 = (x73+((x74%x75)&x76));

	if (t16 != 18446744073676291546LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MAX;
	static uint64_t x78 = 1696460365638578598LLU;
	volatile int8_t x79 = -1;
	static int64_t x80 = INT64_MIN;
	static volatile uint64_t t17 = 8196922128138293LLU;

	t17 = (x77+((x78%x79)&x80));

	if (t17 != 32767LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x81 = 9U;
	int32_t x82 = INT32_MIN;
	int16_t x83 = -1;
	volatile int32_t x84 = 2;
	volatile int32_t t18 = -488;

	t18 = (x81+((x82%x83)&x84));

	if (t18 != 9) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x86 = 27370U;
	int16_t x88 = INT16_MIN;
	static volatile uint64_t t19 = 37421210275860882LLU;

	t19 = (x85+((x86%x87)&x88));

	if (t19 != 3855123292850132861LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x90 = UINT32_MAX;
	int8_t x92 = 2;
	uint32_t t20 = UINT32_MAX;

	t20 = (x89+((x90%x91)&x92));

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = -1LL;
	int64_t x95 = 77716LL;
	static volatile uint8_t x96 = 34U;
	volatile int64_t t21 = -24LL;

	t21 = (x93+((x94%x95)&x96));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = -1;
	static int32_t x98 = INT32_MIN;
	int64_t x99 = INT64_MIN;
	static uint32_t x100 = 193U;
	volatile int64_t t22 = -95LL;

	t22 = (x97+((x98%x99)&x100));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = INT64_MAX;
	static int32_t x102 = INT32_MIN;
	int32_t x103 = INT32_MAX;
	static volatile int8_t x104 = -14;
	int64_t t23 = -764LL;

	t23 = (x101+((x102%x103)&x104));

	if (t23 != 9223372036854775793LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x110 = INT64_MAX;
	int16_t x111 = -15015;
	int32_t x112 = 60117933;
	volatile int64_t t24 = 710LL;

	t24 = (x109+((x110%x111)&x112));

	if (t24 != 4294967300LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x113 = 58U;
	int32_t x114 = -1;
	volatile uint16_t x115 = UINT16_MAX;
	volatile uint64_t x116 = 1180LLU;
	static uint64_t t25 = 375933581LLU;

	t25 = (x113+((x114%x115)&x116));

	if (t25 != 1238LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x117 = 10962615355248524LLU;
	uint32_t x118 = 7376U;
	int8_t x119 = INT8_MAX;
	static int16_t x120 = -236;

	t26 = (x117+((x118%x119)&x120));

	if (t26 != 10962615355248524LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x122 = INT64_MAX;
	uint8_t x123 = UINT8_MAX;
	volatile int16_t x124 = INT16_MIN;
	static int64_t t27 = INT64_MAX;

	t27 = (x121+((x122%x123)&x124));

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x126 = INT8_MIN;
	int8_t x127 = INT8_MIN;
	uint64_t x128 = UINT64_MAX;

	t28 = (x125+((x126%x127)&x128));

	if (t28 != 18446744073709551593LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x129 = 1027U;
	int64_t x130 = INT64_MIN;
	int16_t x132 = INT16_MAX;
	int64_t t29 = 16526160LL;

	t29 = (x129+((x130%x131)&x132));

	if (t29 != 33769LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int32_t x133 = -33305143;
	static uint32_t x134 = 744171U;
	uint16_t x135 = 19U;
	int8_t x136 = INT8_MAX;
	static uint32_t t30 = 4289987U;

	t30 = (x133+((x134%x135)&x136));

	if (t30 != 4261662170U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x137 = INT32_MIN;
	uint8_t x138 = 60U;
	int64_t x139 = 737747309LL;
	uint8_t x140 = 33U;
	volatile int64_t t31 = 0LL;

	t31 = (x137+((x138%x139)&x140));

	if (t31 != -2147483616LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x141 = 72U;
	int8_t x142 = INT8_MIN;
	static int8_t x143 = INT8_MIN;
	volatile int64_t x144 = INT64_MIN;
	static volatile int64_t t32 = 3334025091576663LL;

	t32 = (x141+((x142%x143)&x144));

	if (t32 != 72LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x145 = 1LLU;
	uint64_t x148 = 44749LLU;

	t33 = (x145+((x146%x147)&x148));

	if (t33 != 44673LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x149 = -53;
	static int64_t x150 = -1LL;
	uint64_t x152 = 549316LLU;
	volatile uint64_t t34 = 207749162LLU;

	t34 = (x149+((x150%x151)&x152));

	if (t34 != 18446744073709551563LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x153 = INT16_MIN;
	uint16_t x154 = 1U;

	t35 = (x153+((x154%x155)&x156));

	if (t35 != -32767) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x158 = INT8_MIN;
	uint32_t x159 = UINT32_MAX;
	int32_t x160 = 4037;
	static uint64_t t36 = 1LLU;

	t36 = (x157+((x158%x159)&x160));

	if (t36 != 3967LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x162 = UINT64_MAX;
	int8_t x164 = INT8_MIN;
	volatile uint64_t t37 = UINT64_MAX;

	t37 = (x161+((x162%x163)&x164));

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x165 = INT64_MAX;
	int64_t x166 = INT64_MIN;
	int16_t x167 = -279;
	static volatile uint64_t x168 = 1388240322LLU;
	volatile uint64_t t38 = 15064966853797521LLU;

	t38 = (x165+((x166%x167)&x168));

	if (t38 != 9223372038243016127LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x169 = 15;
	int64_t x170 = INT64_MIN;
	static volatile int64_t x171 = 413387995115767254LL;
	int16_t x172 = -1;

	t39 = (x169+((x170%x171)&x172));

	if (t39 != -128836144307896205LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x173 = INT64_MAX;
	static volatile int32_t x174 = INT32_MIN;
	int32_t x175 = INT32_MIN;
	volatile int64_t t40 = INT64_MAX;

	t40 = (x173+((x174%x175)&x176));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x177 = INT8_MIN;
	static volatile uint32_t x178 = 13U;
	uint32_t x179 = 35U;
	uint32_t t41 = 1186711U;

	t41 = (x177+((x178%x179)&x180));

	if (t41 != 4294967168U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x181 = 79717;
	static uint64_t x182 = 9344LLU;
	uint16_t x183 = 32365U;
	volatile int32_t x184 = INT32_MIN;
	volatile uint64_t t42 = 41470221LLU;

	t42 = (x181+((x182%x183)&x184));

	if (t42 != 79717LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x185 = INT64_MIN;
	int8_t x186 = INT8_MAX;
	uint32_t x188 = 6U;
	volatile int64_t t43 = 177LL;

	t43 = (x185+((x186%x187)&x188));

	if (t43 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x189 = 1U;
	int8_t x190 = -41;
	int32_t x191 = INT32_MIN;
	int8_t x192 = INT8_MAX;
	volatile uint32_t t44 = 0U;

	t44 = (x189+((x190%x191)&x192));

	if (t44 != 88U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x193 = INT8_MIN;
	int8_t x194 = INT8_MIN;
	int8_t x196 = INT8_MAX;

	t45 = (x193+((x194%x195)&x196));

	if (t45 != -2) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x197 = -1LL;
	uint8_t x198 = 96U;
	int32_t x200 = -1;
	int64_t t46 = 11385145393LL;

	t46 = (x197+((x198%x199)&x200));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x201 = INT8_MIN;
	uint64_t x202 = UINT64_MAX;
	volatile uint64_t t47 = 676444302781LLU;

	t47 = (x201+((x202%x203)&x204));

	if (t47 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x205 = -1;
	uint64_t x206 = 1719586LLU;
	int8_t x207 = INT8_MIN;
	uint64_t t48 = 7LLU;

	t48 = (x205+((x206%x207)&x208));

	if (t48 != 15649LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x209 = 29119;
	uint32_t x211 = 128949U;
	volatile int16_t x212 = INT16_MIN;
	static uint32_t t49 = 1900U;

	t49 = (x209+((x210%x211)&x212));

	if (t49 != 29119U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x214 = 341U;
	int32_t x216 = INT32_MIN;
	int32_t t50 = 525416;

	t50 = (x213+((x214%x215)&x216));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x218 = 18U;
	volatile int16_t x219 = INT16_MIN;
	uint8_t x220 = UINT8_MAX;

	t51 = (x217+((x218%x219)&x220));

	if (t51 != 122857560LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint32_t x222 = UINT32_MAX;
	static uint16_t x224 = 12U;
	static volatile uint32_t t52 = 225106391U;

	t52 = (x221+((x222%x223)&x224));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x225 = INT32_MIN;
	int16_t x226 = INT16_MIN;
	int8_t x227 = INT8_MIN;
	uint64_t x228 = 30749842271346558LLU;

	t53 = (x225+((x226%x227)&x228));

	if (t53 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x229 = INT16_MAX;
	volatile int16_t x230 = INT16_MIN;
	static volatile int16_t x232 = INT16_MIN;
	int32_t t54 = -2;

	t54 = (x229+((x230%x231)&x232));

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x233 = 35321635103509375LLU;
	uint8_t x234 = 12U;
	uint32_t x235 = 7456U;
	static int16_t x236 = 0;

	t55 = (x233+((x234%x235)&x236));

	if (t55 != 35321635103509375LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x237 = 51413LL;
	int8_t x239 = INT8_MAX;
	int64_t t56 = 16LL;

	t56 = (x237+((x238%x239)&x240));

	if (t56 != 51414LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x241 = INT64_MIN;
	uint32_t x242 = 133042U;
	volatile uint16_t x243 = 153U;
	volatile int64_t t57 = -2042LL;

	t57 = (x241+((x242%x243)&x244));

	if (t57 != -9223372036854775723LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x249 = INT32_MIN;
	volatile int32_t x251 = 225156;
	int8_t x252 = -1;
	volatile int32_t t58 = 0;

	t58 = (x249+((x250%x251)&x252));

	if (t58 != -2147418113) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x253 = INT8_MIN;
	static int8_t x254 = INT8_MAX;
	uint32_t x255 = 39046250U;
	static volatile int64_t x256 = INT64_MAX;
	static int64_t t59 = -20LL;

	t59 = (x253+((x254%x255)&x256));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x258 = 0;
	volatile int16_t x259 = -1;
	uint32_t x260 = 1000270775U;
	int64_t t60 = -192749LL;

	t60 = (x257+((x258%x259)&x260));

	if (t60 != 82877LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x262 = INT8_MAX;
	static int16_t x263 = INT16_MIN;
	volatile int32_t t61 = -477;

	t61 = (x261+((x262%x263)&x264));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x265 = 15U;
	static int16_t x266 = INT16_MIN;
	int32_t x268 = INT32_MAX;

	t62 = (x265+((x266%x267)&x268));

	if (t62 != 2147483613) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x269 = -3;
	int32_t x270 = 248607;
	int16_t x271 = INT16_MAX;
	volatile uint16_t x272 = 0U;
	volatile int32_t t63 = 2;

	t63 = (x269+((x270%x271)&x272));

	if (t63 != -3) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x273 = 13U;
	int64_t x274 = INT64_MIN;
	int16_t x275 = INT16_MIN;
	volatile int16_t x276 = 613;

	t64 = (x273+((x274%x275)&x276));

	if (t64 != 13LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x278 = 3330U;
	int16_t x279 = -477;
	volatile uint8_t x280 = UINT8_MAX;

	t65 = (x277+((x278%x279)&x280));

	if (t65 != 10074) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x281 = -25435LL;
	volatile int8_t x282 = INT8_MAX;
	int64_t x283 = 1825520LL;

	t66 = (x281+((x282%x283)&x284));

	if (t66 != -25435LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x285 = INT32_MIN;
	volatile int8_t x286 = 1;
	uint16_t x287 = UINT16_MAX;
	volatile uint64_t x288 = 235301983120211105LLU;
	volatile uint64_t t67 = 556974390LLU;

	t67 = (x285+((x286%x287)&x288));

	if (t67 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x289 = -5;
	volatile int32_t x291 = -733965;
	int8_t x292 = INT8_MAX;
	int32_t t68 = -74;

	t68 = (x289+((x290%x291)&x292));

	if (t68 != 57) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x293 = INT8_MAX;
	uint32_t x294 = UINT32_MAX;
	volatile uint64_t t69 = 294439LLU;

	t69 = (x293+((x294%x295)&x296));

	if (t69 != 254LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x297 = INT8_MAX;

	t70 = (x297+((x298%x299)&x300));

	if (t70 != 439232611887354111LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x301 = 5U;
	static volatile int32_t x302 = -713;
	int32_t x303 = -8053;
	int32_t x304 = 66;
	uint32_t t71 = 32853750U;

	t71 = (x301+((x302%x303)&x304));

	if (t71 != 7U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x305 = UINT8_MAX;
	static int16_t x306 = INT16_MAX;
	volatile int32_t x307 = 102;
	volatile int32_t t72 = -5873;

	t72 = (x305+((x306%x307)&x308));

	if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x309 = 9322558592776419LL;
	int8_t x310 = -1;
	int8_t x311 = 8;
	uint64_t x312 = 737154611789995500LLU;

	t73 = (x309+((x310%x311)&x312));

	if (t73 != 746477170382771919LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x313 = 29U;
	int64_t x314 = INT64_MIN;
	volatile uint32_t x315 = 531116U;
	int8_t x316 = -1;
	static int64_t t74 = 392408430LL;

	t74 = (x313+((x314%x315)&x316));

	if (t74 != -519199LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x318 = 55U;
	volatile int32_t x319 = INT32_MIN;
	static uint8_t x320 = 0U;
	volatile uint32_t t75 = UINT32_MAX;

	t75 = (x317+((x318%x319)&x320));

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x321 = 0U;
	int8_t x323 = INT8_MIN;
	volatile uint64_t t76 = 7170LLU;

	t76 = (x321+((x322%x323)&x324));

	if (t76 != 127LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x325 = INT16_MIN;
	volatile uint8_t x327 = UINT8_MAX;
	int8_t x328 = -1;

	t77 = (x325+((x326%x327)&x328));

	if (t77 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x329 = INT16_MIN;
	int32_t x330 = INT32_MIN;
	static uint8_t x331 = UINT8_MAX;
	volatile int64_t x332 = -1LL;
	volatile int64_t t78 = -3581658581446230023LL;

	t78 = (x329+((x330%x331)&x332));

	if (t78 != -32896LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x333 = INT64_MIN;
	uint32_t x334 = UINT32_MAX;
	int16_t x335 = INT16_MIN;
	volatile int64_t t79 = 679702755594367112LL;

	t79 = (x333+((x334%x335)&x336));

	if (t79 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x337 = INT8_MAX;
	int32_t x338 = -1;
	static uint32_t x339 = UINT32_MAX;
	static int64_t x340 = 1866502507648138089LL;
	volatile int64_t t80 = -2LL;

	t80 = (x337+((x338%x339)&x340));

	if (t80 != 127LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x343 = -1;
	static int8_t x344 = INT8_MIN;
	volatile uint32_t t81 = UINT32_MAX;

	t81 = (x341+((x342%x343)&x344));

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x345 = 136377135U;
	uint32_t x346 = 55U;
	static uint8_t x347 = 55U;
	static int64_t t82 = -14320399792546005LL;

	t82 = (x345+((x346%x347)&x348));

	if (t82 != 136377135LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x349 = INT32_MAX;
	int64_t x350 = INT64_MAX;
	volatile int64_t x352 = -1LL;
	int64_t t83 = -4830047026266500LL;

	t83 = (x349+((x350%x351)&x352));

	if (t83 != 2147483774LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x353 = INT8_MIN;
	int32_t x354 = INT32_MAX;
	volatile int32_t x355 = -1;
	static uint16_t x356 = UINT16_MAX;
	volatile int32_t t84 = -52636883;

	t84 = (x353+((x354%x355)&x356));

	if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x357 = INT32_MIN;
	int64_t x358 = -1LL;
	int16_t x359 = INT16_MAX;
	int8_t x360 = INT8_MAX;
	int64_t t85 = 10694LL;

	t85 = (x357+((x358%x359)&x360));

	if (t85 != -2147483521LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x362 = UINT16_MAX;
	uint8_t x364 = UINT8_MAX;
	int64_t t86 = -66140374LL;

	t86 = (x361+((x362%x363)&x364));

	if (t86 != 314LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x366 = INT64_MIN;
	int64_t x367 = INT64_MIN;
	uint64_t x368 = UINT64_MAX;
	uint64_t t87 = 8818744610661462LLU;

	t87 = (x365+((x366%x367)&x368));

	if (t87 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x369 = INT16_MIN;
	volatile uint64_t t88 = 1165LLU;

	t88 = (x369+((x370%x371)&x372));

	if (t88 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x375 = UINT64_MAX;
	int32_t x376 = INT32_MIN;
	volatile uint64_t t89 = 968186066LLU;

	t89 = (x373+((x374%x375)&x376));

	if (t89 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x377 = UINT32_MAX;
	uint16_t x378 = UINT16_MAX;
	int8_t x380 = -2;
	uint32_t t90 = 5862U;

	t90 = (x377+((x378%x379)&x380));

	if (t90 != 65533U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x383 = INT8_MAX;
	static int64_t x384 = -1LL;

	t91 = (x381+((x382%x383)&x384));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x385 = 28193386U;
	int16_t x386 = INT16_MIN;
	int32_t x387 = INT32_MIN;
	static int64_t x388 = INT64_MIN;

	t92 = (x385+((x386%x387)&x388));

	if (t92 != -9223372036826582422LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x389 = INT32_MIN;
	volatile uint8_t x390 = 2U;
	uint64_t x391 = UINT64_MAX;
	int8_t x392 = -1;
	volatile uint64_t t93 = 81LLU;

	t93 = (x389+((x390%x391)&x392));

	if (t93 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x393 = INT64_MIN;
	uint16_t x395 = 20U;
	static int16_t x396 = 12;
	int64_t t94 = -8117330785LL;

	t94 = (x393+((x394%x395)&x396));

	if (t94 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x397 = INT32_MIN;
	volatile uint8_t x398 = 15U;
	static int8_t x399 = -3;
	int8_t x400 = INT8_MIN;
	volatile int32_t t95 = INT32_MIN;

	t95 = (x397+((x398%x399)&x400));

	if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x401 = -1;
	static uint32_t x403 = UINT32_MAX;
	int8_t x404 = INT8_MIN;

	t96 = (x401+((x402%x403)&x404));

	if (t96 != 2147483519U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x409 = -1;
	uint16_t x410 = UINT16_MAX;
	volatile int32_t x412 = INT32_MIN;
	static volatile int32_t t97 = -369604;

	t97 = (x409+((x410%x411)&x412));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x413 = -1;
	static uint8_t x414 = 14U;
	uint64_t x415 = 33040168187067LLU;
	volatile uint64_t t98 = 5787LLU;

	t98 = (x413+((x414%x415)&x416));

	if (t98 != 3LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x417 = INT32_MIN;
	volatile int16_t x418 = 13;
	static int32_t x420 = -41293161;
	int64_t t99 = 1875467977LL;

	t99 = (x417+((x418%x419)&x420));

	if (t99 != -2147483643LL) { NG(); } else { ; }
	
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

