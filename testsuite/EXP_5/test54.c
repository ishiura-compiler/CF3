#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x4 = UINT64_MAX;
static int64_t x6 = -1LL;
int32_t x8 = INT32_MIN;
volatile int32_t x11 = -170081017;
volatile int32_t t3 = -4317287;
static volatile int32_t x29 = INT32_MIN;
volatile int64_t t6 = 13188LL;
volatile int32_t x52 = INT32_MIN;
static uint32_t x53 = 19792U;
int64_t t12 = 272393835880647206LL;
int32_t x74 = 161;
volatile uint32_t x77 = UINT32_MAX;
static uint16_t x78 = 30U;
static uint32_t x89 = 0U;
static int64_t x92 = INT64_MIN;
int8_t x103 = INT8_MAX;
int16_t x105 = -6;
int8_t x109 = 30;
int8_t x110 = 0;
volatile int64_t t22 = 2099106271263838LL;
int16_t x126 = -1;
uint32_t x136 = 7U;
uint16_t x138 = 15U;
int32_t x140 = 1;
volatile int32_t x142 = -1792223;
int32_t t32 = 1731;
static int64_t t33 = -11582603LL;
int64_t x178 = -1LL;
volatile uint64_t t37 = 327631344636415120LLU;
volatile int64_t t38 = 2641LL;
uint16_t x194 = 17273U;
int32_t x195 = -1;
uint32_t x196 = 6214U;
int8_t x209 = 0;
uint64_t x210 = 17029607756901225LLU;
volatile int64_t t44 = -57191848143556LL;
static int64_t x225 = INT64_MAX;
static uint32_t x233 = 1U;
int64_t x237 = -1LL;
static volatile int64_t t48 = -550733403312LL;
int32_t x241 = -12950;
int8_t x242 = INT8_MIN;
int16_t x249 = INT16_MIN;
int64_t x250 = INT64_MIN;
volatile uint32_t x254 = 456979940U;
volatile uint64_t t51 = 103128479272166805LLU;
int8_t x264 = 1;
static uint8_t x290 = 6U;
static int16_t x303 = 3;
uint64_t x304 = 5308LLU;
static uint32_t x312 = 113226199U;
volatile int16_t x324 = 1;
uint16_t x326 = 12U;
int64_t x328 = INT64_MIN;
int64_t t63 = -1488766978457759372LL;
static volatile uint32_t x330 = 115863195U;
uint32_t x331 = 155U;
int32_t x335 = -1;
uint64_t x374 = 50813379460536685LLU;
uint8_t x387 = 0U;
int64_t x389 = -1LL;
int8_t x392 = INT8_MAX;
int8_t x394 = INT8_MIN;
volatile int8_t x422 = 1;
static int16_t x427 = INT16_MIN;
volatile uint8_t x428 = UINT8_MAX;
volatile int64_t t83 = -4034480009668LL;
int64_t x430 = 276583106792101LL;
uint64_t x441 = UINT64_MAX;
uint8_t x447 = UINT8_MAX;
static int16_t x456 = INT16_MIN;
uint32_t x462 = 1475217371U;
uint32_t x465 = 3490563U;
uint32_t t93 = 0U;
volatile uint16_t x471 = 836U;
volatile int32_t t94 = -511;
uint16_t x476 = UINT16_MAX;
uint32_t x481 = UINT32_MAX;
static volatile int16_t x491 = 111;
int32_t t99 = 12298;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int8_t x2 = INT8_MIN;
	volatile uint16_t x3 = 9819U;
	volatile uint64_t t0 = 322087342011601691LLU;

	t0 = (x1-((x2+x3)%x4));

	if (t0 != 55844LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 0LL;
	volatile int32_t x7 = 1041499;
	int64_t t1 = 4316969719LL;

	t1 = (x5-((x6+x7)%x8));

	if (t1 != -1041498LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = 945;
	uint8_t x10 = 27U;
	uint32_t x12 = 59333U;
	volatile uint32_t t2 = 123769U;

	t2 = (x9-((x10+x11)%x12));

	if (t2 != 4294912095U) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x17 = 4;
	volatile uint8_t x18 = UINT8_MAX;
	static int16_t x19 = -1;
	volatile int16_t x20 = -76;

	t3 = (x17-((x18+x19)%x20));

	if (t3 != -22) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MIN;
	static uint32_t x22 = 26312605U;
	int16_t x23 = INT16_MIN;
	int64_t x24 = -1LL;
	volatile int64_t t4 = 18441563LL;

	t4 = (x21-((x22+x23)%x24));

	if (t4 != -2147483648LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x30 = 111U;
	static volatile int8_t x31 = -1;
	uint32_t x32 = 338U;
	volatile uint32_t t5 = 343U;

	t5 = (x29-((x30+x31)%x32));

	if (t5 != 2147483538U) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x33 = -55;
	int8_t x34 = -1;
	int16_t x35 = INT16_MIN;
	volatile int64_t x36 = 1LL;

	t6 = (x33-((x34+x35)%x36));

	if (t6 != -55LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = -1;
	uint8_t x38 = UINT8_MAX;
	static uint32_t x39 = 1326U;
	static volatile int64_t x40 = INT64_MIN;
	int64_t t7 = 1122669625176703LL;

	t7 = (x37-((x38+x39)%x40));

	if (t7 != -1582LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x41 = -3;
	uint64_t x42 = 7345393355379360093LLU;
	static int8_t x43 = -1;
	uint64_t x44 = UINT64_MAX;
	volatile uint64_t t8 = 100468609LLU;

	t8 = (x41-((x42+x43)%x44));

	if (t8 != 11101350718330191521LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = INT8_MAX;
	static uint8_t x46 = 4U;
	int16_t x47 = INT16_MAX;
	int32_t x48 = INT32_MAX;
	static int32_t t9 = -2398614;

	t9 = (x45-((x46+x47)%x48));

	if (t9 != -32644) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x49 = 3958144100184LLU;
	static int32_t x50 = 5048107;
	int16_t x51 = -1;
	uint64_t t10 = 2861058533792LLU;

	t10 = (x49-((x50+x51)%x52));

	if (t10 != 3958139052078LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x54 = INT32_MAX;
	int64_t x55 = 23LL;
	int64_t x56 = INT64_MAX;
	static int64_t t11 = -1LL;

	t11 = (x53-((x54+x55)%x56));

	if (t11 != -2147463878LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x57 = -1;
	int8_t x58 = INT8_MAX;
	volatile int64_t x59 = -1LL;
	int8_t x60 = INT8_MIN;

	t12 = (x57-((x58+x59)%x60));

	if (t12 != -127LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x61 = INT32_MAX;
	uint64_t x62 = 74776478558LLU;
	uint64_t x63 = 135206027LLU;
	uint8_t x64 = UINT8_MAX;
	volatile uint64_t t13 = 82LLU;

	t13 = (x61-((x62+x63)%x64));

	if (t13 != 2147483622LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x73 = 12U;
	int64_t x75 = INT64_MIN;
	static volatile uint8_t x76 = 90U;
	volatile int64_t t14 = -31368724274LL;

	t14 = (x73-((x74+x75)%x76));

	if (t14 != 39LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x79 = -8;
	uint16_t x80 = 5189U;
	volatile uint32_t t15 = 3762106U;

	t15 = (x77-((x78+x79)%x80));

	if (t15 != 4294967273U) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x81 = 59511U;
	volatile int64_t x82 = -1LL;
	uint16_t x83 = 20U;
	uint8_t x84 = 105U;
	int64_t t16 = -1074LL;

	t16 = (x81-((x82+x83)%x84));

	if (t16 != 59492LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x85 = 2416878830979LL;
	uint8_t x86 = 7U;
	static int16_t x87 = 545;
	int8_t x88 = INT8_MIN;
	volatile int64_t t17 = 69970455696542935LL;

	t17 = (x85-((x86+x87)%x88));

	if (t17 != 2416878830939LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x90 = 1995317572215LLU;
	uint32_t x91 = UINT32_MAX;
	uint64_t t18 = 54854LLU;

	t18 = (x89-((x90+x91)%x92));

	if (t18 != 18446742074097012106LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x97 = UINT32_MAX;
	static uint32_t x98 = 146182U;
	int8_t x99 = INT8_MAX;
	volatile int16_t x100 = -1;
	volatile uint32_t t19 = 33U;

	t19 = (x97-((x98+x99)%x100));

	if (t19 != 4294820986U) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x101 = -1;
	uint8_t x102 = UINT8_MAX;
	volatile uint16_t x104 = 22U;
	volatile int32_t t20 = 931858;

	t20 = (x101-((x102+x103)%x104));

	if (t20 != -9) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x106 = UINT32_MAX;
	int64_t x107 = -1LL;
	static uint64_t x108 = 103729587LLU;
	volatile uint64_t t21 = 1075LLU;

	t21 = (x105-((x106+x107)%x108));

	if (t21 != 18446744073667497383LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x111 = -1;
	static int64_t x112 = -1LL;

	t22 = (x109-((x110+x111)%x112));

	if (t22 != 30LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x113 = UINT16_MAX;
	uint32_t x114 = 420U;
	uint64_t x115 = UINT64_MAX;
	int8_t x116 = -1;
	static volatile uint64_t t23 = 553473151984LLU;

	t23 = (x113-((x114+x115)%x116));

	if (t23 != 65116LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x117 = -3;
	static volatile int16_t x118 = 0;
	static uint32_t x119 = 571U;
	uint16_t x120 = 229U;
	volatile uint32_t t24 = 32066359U;

	t24 = (x117-((x118+x119)%x120));

	if (t24 != 4294967180U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x121 = UINT32_MAX;
	volatile int32_t x122 = INT32_MAX;
	int16_t x123 = INT16_MIN;
	int16_t x124 = INT16_MAX;
	uint32_t t25 = UINT32_MAX;

	t25 = (x121-((x122+x123)%x124));

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x125 = -1834LL;
	static int8_t x127 = -1;
	static volatile int64_t x128 = INT64_MAX;
	static volatile int64_t t26 = -192821783488706072LL;

	t26 = (x125-((x126+x127)%x128));

	if (t26 != -1832LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x133 = -5;
	volatile int64_t x134 = INT64_MIN;
	static int16_t x135 = INT16_MAX;
	static volatile int64_t t27 = 956583675798019LL;

	t27 = (x133-((x134+x135)%x136));

	if (t27 != -4LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x137 = INT16_MIN;
	uint16_t x139 = 712U;
	static int32_t t28 = -697984510;

	t28 = (x137-((x138+x139)%x140));

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x141 = 156;
	uint64_t x143 = 187964783720020LLU;
	uint32_t x144 = 65U;
	static volatile uint64_t t29 = 204210366598348LLU;

	t29 = (x141-((x142+x143)%x144));

	if (t29 != 139LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x145 = 121U;
	volatile int64_t x146 = -1LL;
	static int16_t x147 = INT16_MAX;
	static int8_t x148 = INT8_MIN;
	int64_t t30 = -2007652808LL;

	t30 = (x145-((x146+x147)%x148));

	if (t30 != -5LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x153 = INT64_MIN;
	volatile uint32_t x154 = UINT32_MAX;
	int16_t x155 = -1;
	uint16_t x156 = 1U;
	static int64_t t31 = INT64_MIN;

	t31 = (x153-((x154+x155)%x156));

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint16_t x161 = 3395U;
	int16_t x162 = -1;
	int8_t x163 = -24;
	int32_t x164 = -1;

	t32 = (x161-((x162+x163)%x164));

	if (t32 != 3395) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x165 = -1;
	int8_t x166 = 48;
	volatile int64_t x167 = -1LL;
	int32_t x168 = INT32_MAX;

	t33 = (x165-((x166+x167)%x168));

	if (t33 != -48LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x169 = 1305747869LLU;
	int8_t x170 = INT8_MIN;
	volatile int16_t x171 = -1;
	int16_t x172 = -1;
	static uint64_t t34 = 42454636197261573LLU;

	t34 = (x169-((x170+x171)%x172));

	if (t34 != 1305747869LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x173 = -15;
	uint8_t x174 = 2U;
	int32_t x175 = INT32_MIN;
	uint64_t x176 = UINT64_MAX;
	uint64_t t35 = 181822858564751542LLU;

	t35 = (x173-((x174+x175)%x176));

	if (t35 != 2147483631LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x177 = -1;
	int8_t x179 = INT8_MIN;
	int8_t x180 = INT8_MIN;
	static volatile int64_t t36 = -911385808LL;

	t36 = (x177-((x178+x179)%x180));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x181 = 6979346981944LLU;
	uint64_t x182 = 45730704990443933LLU;
	int32_t x183 = INT32_MIN;
	int32_t x184 = -995;

	t37 = (x181-((x182+x183)%x184));

	if (t37 != 18401020350213573275LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x185 = -1;
	int64_t x186 = INT64_MAX;
	int32_t x187 = -31306;
	int64_t x188 = INT64_MIN;

	t38 = (x185-((x186+x187)%x188));

	if (t38 != -9223372036854744502LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x189 = INT64_MIN;
	uint64_t x190 = 315439933013019LLU;
	int16_t x191 = INT16_MIN;
	uint32_t x192 = UINT32_MAX;
	volatile uint64_t t39 = 2312LLU;

	t39 = (x189-((x190+x191)%x192));

	if (t39 != 9223372036499809537LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x193 = 123758268613LLU;
	uint64_t t40 = 229370493031LLU;

	t40 = (x193-((x194+x195)%x196));

	if (t40 != 123758263769LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x197 = INT32_MAX;
	static int32_t x198 = 439;
	static uint16_t x199 = UINT16_MAX;
	int16_t x200 = -1;
	int32_t t41 = INT32_MAX;

	t41 = (x197-((x198+x199)%x200));

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x201 = -45LL;
	static volatile int16_t x202 = INT16_MIN;
	static int8_t x203 = INT8_MIN;
	uint32_t x204 = 14981U;
	int64_t t42 = -117614827803410LL;

	t42 = (x201-((x202+x203)%x204));

	if (t42 != -1593LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x211 = -4;
	int64_t x212 = -1144845080669532769LL;
	static uint64_t t43 = 69994304LLU;

	t43 = (x209-((x210+x211)%x212));

	if (t43 != 18429714465952650395LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x213 = -33;
	int64_t x214 = -1LL;
	uint32_t x215 = UINT32_MAX;
	uint16_t x216 = UINT16_MAX;

	t44 = (x213-((x214+x215)%x216));

	if (t44 != -65567LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x217 = UINT8_MAX;
	int32_t x218 = 350550218;
	static int8_t x219 = INT8_MIN;
	uint8_t x220 = 10U;
	static volatile int32_t t45 = 40459469;

	t45 = (x217-((x218+x219)%x220));

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x226 = INT64_MIN;
	uint64_t x227 = 645286001086576033LLU;
	int32_t x228 = INT32_MAX;
	uint64_t t46 = 20826781434423948LLU;

	t46 = (x225-((x226+x227)%x228));

	if (t46 != 9223372036666737142LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x234 = 506956178LL;
	static volatile uint32_t x235 = 45U;
	int32_t x236 = INT32_MIN;
	volatile int64_t t47 = -1LL;

	t47 = (x233-((x234+x235)%x236));

	if (t47 != -506956222LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x238 = UINT16_MAX;
	static int16_t x239 = INT16_MIN;
	int64_t x240 = -1LL;

	t48 = (x237-((x238+x239)%x240));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x243 = 21U;
	int16_t x244 = -1;
	int32_t t49 = 6283;

	t49 = (x241-((x242+x243)%x244));

	if (t49 != -12950) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x251 = 3358377747531563LLU;
	int8_t x252 = INT8_MIN;
	uint64_t t50 = 4598781LLU;

	t50 = (x249-((x250+x251)%x252));

	if (t50 != 9220013659107211477LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x253 = INT8_MAX;
	volatile uint64_t x255 = 6225538536783262539LLU;
	uint64_t x256 = 1057816687546LLU;

	t51 = (x253-((x254+x255)%x256));

	if (t51 != 18446743410999844230LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x257 = 6;
	static int16_t x258 = INT16_MIN;
	uint64_t x259 = 3319422551690148LLU;
	uint32_t x260 = 3365842U;
	volatile uint64_t t52 = 1LLU;

	t52 = (x257-((x258+x259)%x260));

	if (t52 != 18446744073706681014LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x261 = INT8_MIN;
	uint8_t x262 = 50U;
	volatile int8_t x263 = -1;
	int32_t t53 = 4126995;

	t53 = (x261-((x262+x263)%x264));

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x265 = 7580U;
	int8_t x266 = INT8_MIN;
	int8_t x267 = INT8_MIN;
	static int64_t x268 = INT64_MIN;
	int64_t t54 = -746940746489LL;

	t54 = (x265-((x266+x267)%x268));

	if (t54 != 7836LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x273 = INT64_MAX;
	uint64_t x274 = 4681047970025169354LLU;
	volatile uint64_t x275 = UINT64_MAX;
	int8_t x276 = INT8_MIN;
	static uint64_t t55 = 3028809275176189418LLU;

	t55 = (x273-((x274+x275)%x276));

	if (t55 != 4542324066829606454LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x281 = INT8_MIN;
	static int32_t x282 = INT32_MIN;
	uint8_t x283 = 3U;
	static int16_t x284 = -21;
	volatile int32_t t56 = -66979670;

	t56 = (x281-((x282+x283)%x284));

	if (t56 != -108) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x285 = 14078740LLU;
	int64_t x286 = 140295LL;
	int16_t x287 = INT16_MIN;
	uint32_t x288 = 149U;
	volatile uint64_t t57 = 2035721708722434111LLU;

	t57 = (x285-((x286+x287)%x288));

	if (t57 != 14078642LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x289 = 1;
	volatile uint16_t x291 = 567U;
	volatile int32_t x292 = -1;
	int32_t t58 = 154211;

	t58 = (x289-((x290+x291)%x292));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x301 = INT64_MAX;
	static uint32_t x302 = 517855U;
	volatile uint64_t t59 = 2466453222395024634LLU;

	t59 = (x301-((x302+x303)%x304));

	if (t59 != 9223372036854772825LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x309 = INT8_MAX;
	int16_t x310 = -1;
	static int8_t x311 = INT8_MAX;
	static uint32_t t60 = 161544U;

	t60 = (x309-((x310+x311)%x312));

	if (t60 != 1U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x317 = -1LL;
	int64_t x318 = INT64_MAX;
	int8_t x319 = INT8_MIN;
	volatile uint32_t x320 = UINT32_MAX;
	volatile int64_t t61 = -14016504860LL;

	t61 = (x317-((x318+x319)%x320));

	if (t61 != -2147483520LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x321 = 175223U;
	volatile uint16_t x322 = 3U;
	int16_t x323 = INT16_MIN;
	static volatile uint32_t t62 = 5758U;

	t62 = (x321-((x322+x323)%x324));

	if (t62 != 175223U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x325 = -1;
	volatile int8_t x327 = INT8_MIN;

	t63 = (x325-((x326+x327)%x328));

	if (t63 != 115LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x329 = UINT64_MAX;
	int16_t x332 = -6932;
	uint64_t t64 = 11862855963122LLU;

	t64 = (x329-((x330+x331)%x332));

	if (t64 != 18446744073593688265LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x333 = 0U;
	static int16_t x334 = INT16_MIN;
	uint32_t x336 = UINT32_MAX;
	uint32_t t65 = 614578U;

	t65 = (x333-((x334+x335)%x336));

	if (t65 != 32769U) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x345 = INT32_MIN;
	int64_t x346 = 500628097205LL;
	int32_t x347 = 277941;
	int32_t x348 = INT32_MIN;
	volatile int64_t t66 = 1519738776858LL;

	t66 = (x345-((x346+x347)%x348));

	if (t66 != -2412168810LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x349 = UINT16_MAX;
	volatile int64_t x350 = -1LL;
	int8_t x351 = INT8_MIN;
	uint8_t x352 = 1U;
	int64_t t67 = 10660406533LL;

	t67 = (x349-((x350+x351)%x352));

	if (t67 != 65535LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x353 = -1;
	int16_t x354 = INT16_MIN;
	int8_t x355 = INT8_MIN;
	uint16_t x356 = 28090U;
	volatile int32_t t68 = 4671;

	t68 = (x353-((x354+x355)%x356));

	if (t68 != 4805) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x357 = 4908U;
	static uint64_t x358 = UINT64_MAX;
	static int8_t x359 = 4;
	int32_t x360 = -424253;
	volatile uint64_t t69 = 170LLU;

	t69 = (x357-((x358+x359)%x360));

	if (t69 != 4905LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x361 = INT16_MIN;
	volatile int64_t x362 = -1LL;
	static volatile uint64_t x363 = 6523680084801307306LLU;
	uint32_t x364 = 391628U;
	volatile uint64_t t70 = 2261375668534868377LLU;

	t70 = (x361-((x362+x363)%x364));

	if (t70 != 18446744073709469347LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x369 = INT16_MIN;
	volatile int64_t x370 = 109628071188LL;
	static int16_t x371 = INT16_MAX;
	uint8_t x372 = 2U;
	volatile int64_t t71 = 46348LL;

	t71 = (x369-((x370+x371)%x372));

	if (t71 != -32769LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x373 = 3392502353LLU;
	int8_t x375 = INT8_MIN;
	int64_t x376 = INT64_MIN;
	uint64_t t72 = 1047710070028345LLU;

	t72 = (x373-((x374+x375)%x376));

	if (t72 != 18395930697641517412LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x377 = INT8_MIN;
	int16_t x378 = -1;
	int64_t x379 = -250512880947845LL;
	volatile uint64_t x380 = 155942770393420374LLU;
	volatile uint64_t t73 = 0LLU;

	t73 = (x377-((x378+x379)%x380));

	if (t73 != 18401497419304551850LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x381 = -1;
	uint32_t x382 = 228795897U;
	volatile int64_t x383 = 9453584891825LL;
	int8_t x384 = INT8_MIN;
	volatile int64_t t74 = -10LL;

	t74 = (x381-((x382+x383)%x384));

	if (t74 != -43LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x385 = UINT8_MAX;
	static uint16_t x386 = 14U;
	int32_t x388 = INT32_MAX;
	volatile int32_t t75 = -15;

	t75 = (x385-((x386+x387)%x388));

	if (t75 != 241) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x390 = 345;
	volatile uint64_t x391 = UINT64_MAX;
	volatile uint64_t t76 = 694236363736631824LLU;

	t76 = (x389-((x390+x391)%x392));

	if (t76 != 18446744073709551525LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x393 = INT16_MIN;
	uint64_t x395 = 330189076403LLU;
	volatile int16_t x396 = INT16_MIN;
	static uint64_t t77 = 1031079526707LLU;

	t77 = (x393-((x394+x395)%x396));

	if (t77 != 18446743743520442573LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x397 = -1;
	int64_t x398 = INT64_MIN;
	static uint8_t x399 = UINT8_MAX;
	int16_t x400 = INT16_MIN;
	volatile int64_t t78 = -901654549345066081LL;

	t78 = (x397-((x398+x399)%x400));

	if (t78 != 32512LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x405 = INT8_MIN;
	uint8_t x406 = 0U;
	uint16_t x407 = UINT16_MAX;
	uint64_t x408 = 8711307302930LLU;
	static uint64_t t79 = 3961492851LLU;

	t79 = (x405-((x406+x407)%x408));

	if (t79 != 18446744073709485953LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x413 = 2673616205338LLU;
	static volatile int16_t x414 = INT16_MAX;
	static int32_t x415 = INT32_MIN;
	volatile int8_t x416 = 7;
	uint64_t t80 = 10608294LLU;

	t80 = (x413-((x414+x415)%x416));

	if (t80 != 2673616205340LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x417 = -1;
	uint64_t x418 = 755LLU;
	int16_t x419 = INT16_MAX;
	volatile int16_t x420 = INT16_MIN;
	volatile uint64_t t81 = 741036476716320801LLU;

	t81 = (x417-((x418+x419)%x420));

	if (t81 != 18446744073709518093LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x421 = 1667U;
	uint32_t x423 = 586442U;
	volatile uint16_t x424 = 3U;
	static uint32_t t82 = 26995919U;

	t82 = (x421-((x422+x423)%x424));

	if (t82 != 1667U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x425 = -1;
	static int64_t x426 = INT64_MAX;

	t83 = (x425-((x426+x427)%x428));

	if (t83 != -255LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x429 = INT32_MAX;
	int16_t x431 = INT16_MAX;
	volatile int8_t x432 = -1;
	static int64_t t84 = -1219LL;

	t84 = (x429-((x430+x431)%x432));

	if (t84 != 2147483647LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x433 = INT8_MAX;
	int64_t x434 = -506818LL;
	volatile int16_t x435 = -1;
	int64_t x436 = INT64_MIN;
	static volatile int64_t t85 = -417366851218711777LL;

	t85 = (x433-((x434+x435)%x436));

	if (t85 != 506946LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x437 = 7;
	int32_t x438 = 0;
	volatile int32_t x439 = INT32_MIN;
	int64_t x440 = -135728910LL;
	int64_t t86 = -29728598877013268LL;

	t86 = (x437-((x438+x439)%x440));

	if (t86 != 111550005LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x442 = 6U;
	volatile int16_t x443 = 5;
	static volatile uint64_t x444 = 11955371301LLU;
	static volatile uint64_t t87 = 25LLU;

	t87 = (x441-((x442+x443)%x444));

	if (t87 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x445 = -30731893;
	int64_t x446 = 53LL;
	uint64_t x448 = 238819LLU;
	volatile uint64_t t88 = 121006669LLU;

	t88 = (x445-((x446+x447)%x448));

	if (t88 != 18446744073678819415LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x449 = INT32_MAX;
	volatile int8_t x450 = INT8_MAX;
	int64_t x451 = -3791962259LL;
	int16_t x452 = -1;
	int64_t t89 = 7429LL;

	t89 = (x449-((x450+x451)%x452));

	if (t89 != 2147483647LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x453 = -1;
	volatile uint32_t x454 = 3209782U;
	static int16_t x455 = INT16_MIN;
	volatile uint32_t t90 = 186902U;

	t90 = (x453-((x454+x455)%x456));

	if (t90 != 4291790281U) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x457 = -51337578476786882LL;
	volatile int32_t x458 = INT32_MIN;
	uint16_t x459 = 0U;
	uint16_t x460 = UINT16_MAX;
	volatile int64_t t91 = 37400717783983831LL;

	t91 = (x457-((x458+x459)%x460));

	if (t91 != -51337578476754114LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x461 = INT64_MAX;
	int8_t x463 = INT8_MAX;
	int64_t x464 = 101337LL;
	static int64_t t92 = 26285662733LL;

	t92 = (x461-((x462+x463)%x464));

	if (t92 != 9223372036854721018LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x466 = 1;
	int16_t x467 = -6240;
	uint16_t x468 = 1094U;

	t93 = (x465-((x466+x467)%x468));

	if (t93 != 3491332U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x469 = 3U;
	int16_t x470 = 1;
	uint8_t x472 = UINT8_MAX;

	t94 = (x469-((x470+x471)%x472));

	if (t94 != -69) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x473 = -1;
	static int8_t x474 = INT8_MIN;
	volatile int32_t x475 = -145779094;
	volatile int32_t t95 = 1;

	t95 = (x473-((x474+x475)%x476));

	if (t95 != 29381) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x477 = INT32_MAX;
	int16_t x478 = INT16_MAX;
	static uint32_t x479 = 27575109U;
	int8_t x480 = INT8_MAX;
	volatile uint32_t t96 = 3U;

	t96 = (x477-((x478+x479)%x480));

	if (t96 != 2147483539U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x482 = -1LL;
	uint8_t x483 = 0U;
	uint32_t x484 = UINT32_MAX;
	int64_t t97 = -6209729957LL;

	t97 = (x481-((x482+x483)%x484));

	if (t97 != 4294967296LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x485 = INT64_MAX;
	uint64_t x486 = UINT64_MAX;
	int32_t x487 = INT32_MIN;
	uint8_t x488 = 111U;
	volatile uint64_t t98 = 126623026743315233LLU;

	t98 = (x485-((x486+x487)%x488));

	if (t98 != 9223372036854775707LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x489 = 1;
	static int8_t x490 = INT8_MIN;
	int32_t x492 = INT32_MIN;

	t99 = (x489-((x490+x491)%x492));

	if (t99 != 18) { NG(); } else { ; }
	
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

