#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x3 = 4273;
int32_t x8 = -1;
volatile int32_t x20 = -11351;
volatile uint64_t x22 = UINT64_MAX;
int64_t x24 = -1083354023375LL;
int32_t x25 = 58217;
static int8_t x26 = INT8_MAX;
static volatile int32_t t6 = -1032026;
volatile int16_t x31 = -13055;
int32_t t7 = 2047732;
uint64_t t8 = 0LLU;
int32_t t9 = 99;
int16_t x41 = INT16_MIN;
static int16_t x46 = 9755;
int32_t x57 = 59804071;
int8_t x60 = INT8_MAX;
static int8_t x67 = INT8_MAX;
int64_t x78 = 0LL;
static int16_t x79 = INT16_MIN;
int64_t t19 = -9184LL;
static int32_t x81 = INT32_MIN;
volatile int32_t t20 = 202;
static uint8_t x85 = 18U;
int64_t t21 = -2948046791684629LL;
static uint8_t x89 = UINT8_MAX;
static uint8_t x90 = UINT8_MAX;
int64_t t23 = 112927746841629103LL;
int8_t x97 = 0;
static volatile int64_t t28 = -1001LL;
int64_t x117 = INT64_MIN;
volatile int16_t x120 = INT16_MIN;
int16_t x123 = -1;
uint64_t x127 = 3568631042523578LLU;
uint16_t x128 = 0U;
uint64_t t31 = 16636722LLU;
static volatile uint64_t x133 = UINT64_MAX;
int32_t x136 = -1;
uint8_t x137 = 2U;
volatile int64_t t34 = 5LL;
uint16_t x142 = 30676U;
static uint16_t x143 = UINT16_MAX;
int64_t x145 = -6906066321LL;
int32_t x147 = INT32_MIN;
uint32_t x153 = 3026U;
int64_t x154 = INT64_MIN;
volatile uint16_t x160 = 22U;
volatile int32_t t39 = 3908;
volatile int32_t t40 = -1;
uint32_t t41 = 254463287U;
volatile uint32_t t42 = 8756899U;
int64_t x177 = INT64_MIN;
int8_t x178 = 7;
uint64_t x188 = UINT64_MAX;
uint16_t x193 = UINT16_MAX;
volatile uint32_t x195 = 4U;
static volatile uint16_t x201 = 61U;
static int32_t t51 = -38020957;
uint32_t x212 = UINT32_MAX;
int16_t x213 = -6;
uint8_t x221 = UINT8_MAX;
volatile int32_t t55 = 19688;
int32_t t56 = 29651512;
volatile uint16_t x230 = UINT16_MAX;
volatile int64_t t58 = -13623587LL;
static int8_t x240 = 16;
volatile int32_t t59 = 15489;
uint8_t x241 = UINT8_MAX;
int64_t x242 = INT64_MIN;
uint64_t x243 = UINT64_MAX;
static int64_t x248 = INT64_MIN;
uint32_t x249 = UINT32_MAX;
volatile uint32_t x250 = UINT32_MAX;
int64_t x252 = INT64_MIN;
static int32_t t63 = 114;
int16_t x257 = -1;
volatile int64_t t64 = -9389657LL;
static uint64_t x262 = 439259602LLU;
uint64_t x263 = UINT64_MAX;
uint32_t x270 = UINT32_MAX;
int32_t x276 = INT32_MIN;
int32_t x282 = -1;
volatile int16_t x284 = -6180;
volatile uint8_t x290 = 7U;
static int8_t x294 = -30;
uint64_t x307 = UINT64_MAX;
int64_t x318 = -1LL;
static int16_t x320 = -1;
int32_t x324 = -1;
static uint8_t x326 = 5U;
static int32_t x331 = -1;
int32_t x336 = -1;
int32_t x337 = 872;
static int32_t t84 = 491;
int32_t x344 = INT32_MIN;
int64_t x347 = INT64_MAX;
int64_t x349 = 400515379393LL;
int32_t x351 = -1842583;
int8_t x352 = 6;
static int64_t t87 = 843922LL;
int16_t x353 = -1;
int32_t x354 = 53053;
static uint64_t x358 = 22913203042778109LLU;
static int8_t x360 = INT8_MIN;
static volatile int16_t x361 = INT16_MIN;
uint64_t x362 = UINT64_MAX;
uint8_t x363 = 0U;
uint64_t x365 = UINT64_MAX;
static uint32_t x367 = UINT32_MAX;
uint8_t x372 = 15U;
volatile int64_t t93 = 8778765236252LL;
int64_t x379 = -1LL;
static int8_t x397 = INT8_MAX;
uint8_t x399 = 5U;
volatile uint64_t t98 = 2185524246603661978LLU;
uint32_t t99 = 1518549539U;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int16_t x2 = -1;
	volatile int64_t x4 = -1LL;
	volatile int32_t t0 = 2178273;

	t0 = ((x1^x2)+(x3<x4));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x5 = INT16_MIN;
	static uint8_t x6 = 9U;
	volatile uint8_t x7 = 13U;
	static int32_t t1 = 25200944;

	t1 = ((x5^x6)+(x7<x8));

	if (t1 != -32759) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int32_t x10 = INT32_MAX;
	uint16_t x11 = 15U;
	int64_t x12 = INT64_MIN;
	volatile int32_t t2 = 21583;

	t2 = ((x9^x10)+(x11<x12));

	if (t2 != -2147450881) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int64_t x14 = -1LL;
	int32_t x15 = 50;
	uint16_t x16 = 30412U;
	volatile int64_t t3 = 576LL;

	t3 = ((x13^x14)+(x15<x16));

	if (t3 != 2147483648LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 2320552232257631LLU;
	uint8_t x18 = UINT8_MAX;
	uint64_t x19 = UINT64_MAX;
	static uint64_t t4 = 513LLU;

	t4 = ((x17^x18)+(x19<x20));

	if (t4 != 2320552232257696LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x21 = -1;
	int64_t x23 = INT64_MIN;
	volatile uint64_t t5 = 8809406241324599LLU;

	t5 = ((x21^x22)+(x23<x24));

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x27 = INT64_MIN;
	uint8_t x28 = 4U;

	t6 = ((x25^x26)+(x27<x28));

	if (t6 != 58135) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	int32_t x30 = 14;
	int32_t x32 = -1;

	t7 = ((x29^x30)+(x31<x32));

	if (t7 != -2147483633) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	uint64_t x34 = 111840LLU;
	int64_t x35 = INT64_MAX;
	static uint32_t x36 = 104880U;

	t8 = ((x33^x34)+(x35<x36));

	if (t8 != 18446744073709439775LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = -1;
	static int8_t x38 = INT8_MIN;
	int8_t x39 = -1;
	int64_t x40 = -1266636LL;

	t9 = ((x37^x38)+(x39<x40));

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x42 = -1;
	int32_t x43 = -1;
	int8_t x44 = INT8_MIN;
	volatile int32_t t10 = 272747;

	t10 = ((x41^x42)+(x43<x44));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 7118LLU;
	static int8_t x47 = INT8_MIN;
	static volatile int16_t x48 = INT16_MIN;
	uint64_t t11 = 67LLU;

	t11 = ((x45^x46)+(x47<x48));

	if (t11 != 15829LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 2864654812685765709LL;
	int16_t x50 = INT16_MAX;
	volatile int64_t x51 = INT64_MAX;
	static int16_t x52 = INT16_MAX;
	volatile int64_t t12 = -819639092LL;

	t12 = ((x49^x50)+(x51<x52));

	if (t12 != 2864654812685792178LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = UINT64_MAX;
	uint32_t x54 = 15222U;
	int64_t x55 = INT64_MIN;
	int16_t x56 = -1;
	volatile uint64_t t13 = 5313112791LLU;

	t13 = ((x53^x54)+(x55<x56));

	if (t13 != 18446744073709536394LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x58 = INT32_MAX;
	volatile int32_t x59 = INT32_MIN;
	volatile int32_t t14 = -29862543;

	t14 = ((x57^x58)+(x59<x60));

	if (t14 != 2087679577) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 0U;
	static volatile int32_t x62 = INT32_MIN;
	static volatile int64_t x63 = -1LL;
	int8_t x64 = 2;
	int32_t t15 = -11532815;

	t15 = ((x61^x62)+(x63<x64));

	if (t15 != -2147483647) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = UINT32_MAX;
	int8_t x66 = 1;
	volatile int64_t x68 = INT64_MIN;
	volatile uint32_t t16 = 7657U;

	t16 = ((x65^x66)+(x67<x68));

	if (t16 != 4294967294U) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int32_t x69 = -1;
	volatile int8_t x70 = INT8_MIN;
	static int16_t x71 = INT16_MIN;
	uint8_t x72 = 1U;
	static int32_t t17 = 3;

	t17 = ((x69^x70)+(x71<x72));

	if (t17 != 128) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = UINT64_MAX;
	uint64_t x74 = 10772LLU;
	int64_t x75 = INT64_MIN;
	uint32_t x76 = 63603846U;
	uint64_t t18 = 399979LLU;

	t18 = ((x73^x74)+(x75<x76));

	if (t18 != 18446744073709540844LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x77 = INT16_MIN;
	int64_t x80 = 5580062884LL;

	t19 = ((x77^x78)+(x79<x80));

	if (t19 != -32767LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x82 = -224;
	int8_t x83 = -1;
	volatile int32_t x84 = -1;

	t20 = ((x81^x82)+(x83<x84));

	if (t20 != 2147483424) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = 3866958751474207LL;
	int8_t x87 = -1;
	uint8_t x88 = 19U;

	t21 = ((x85^x86)+(x87<x88));

	if (t21 != 3866958751474190LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x91 = UINT16_MAX;
	uint16_t x92 = 54U;
	int32_t t22 = 73;

	t22 = ((x89^x90)+(x91<x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -450062LL;
	int16_t x94 = INT16_MAX;
	uint64_t x95 = 8485LLU;
	uint8_t x96 = 26U;

	t23 = ((x93^x94)+(x95<x96));

	if (t23 != -434675LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x98 = 0U;
	int8_t x99 = 12;
	static int16_t x100 = 30;
	volatile uint32_t t24 = 753U;

	t24 = ((x97^x98)+(x99<x100));

	if (t24 != 1U) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 11784U;
	static uint64_t x102 = UINT64_MAX;
	uint8_t x103 = 1U;
	int8_t x104 = INT8_MAX;
	static volatile uint64_t t25 = 79136295LLU;

	t25 = ((x101^x102)+(x103<x104));

	if (t25 != 18446744073709539832LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MAX;
	int64_t x106 = -1LL;
	static int16_t x107 = -7282;
	static volatile int32_t x108 = -1;
	volatile int64_t t26 = -36350504196LL;

	t26 = ((x105^x106)+(x107<x108));

	if (t26 != -2147483647LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = INT8_MAX;
	volatile int16_t x110 = INT16_MIN;
	static uint32_t x111 = UINT32_MAX;
	static int32_t x112 = INT32_MAX;
	int32_t t27 = -4538474;

	t27 = ((x109^x110)+(x111<x112));

	if (t27 != -32641) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	static int64_t x114 = 57438939456LL;
	int32_t x115 = INT32_MAX;
	int8_t x116 = INT8_MIN;

	t28 = ((x113^x114)+(x115<x116));

	if (t28 != -57438951104LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x118 = -108167718;
	int8_t x119 = INT8_MIN;
	int64_t t29 = -50833609108271LL;

	t29 = ((x117^x118)+(x119<x120));

	if (t29 != 9223372036746608090LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MAX;
	static int64_t x122 = -1LL;
	int8_t x124 = -3;
	volatile int64_t t30 = 1645935123037LL;

	t30 = ((x121^x122)+(x123<x124));

	if (t30 != -128LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = 0U;
	volatile uint64_t x126 = 22593720070425LLU;

	t31 = ((x125^x126)+(x127<x128));

	if (t31 != 22593720070425LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -1LL;
	uint16_t x130 = UINT16_MAX;
	static volatile uint32_t x131 = UINT32_MAX;
	volatile int32_t x132 = INT32_MIN;
	volatile int64_t t32 = -8449LL;

	t32 = ((x129^x130)+(x131<x132));

	if (t32 != -65536LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x134 = INT64_MIN;
	static uint8_t x135 = UINT8_MAX;
	static uint64_t t33 = 60958723218LLU;

	t33 = ((x133^x134)+(x135<x136));

	if (t33 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x138 = INT64_MIN;
	volatile int16_t x139 = 21;
	int8_t x140 = INT8_MIN;

	t34 = ((x137^x138)+(x139<x140));

	if (t34 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 949U;
	uint32_t x144 = 56185490U;
	volatile uint32_t t35 = 189159U;

	t35 = ((x141^x142)+(x143<x144));

	if (t35 != 29794U) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x146 = -248;
	uint8_t x148 = 2U;
	volatile int64_t t36 = -70967859LL;

	t36 = ((x145^x146)+(x147<x148));

	if (t36 != 6906066280LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x149 = 15U;
	volatile int8_t x150 = 1;
	static uint32_t x151 = UINT32_MAX;
	volatile int32_t x152 = -168;
	volatile int32_t t37 = 3613;

	t37 = ((x149^x150)+(x151<x152));

	if (t37 != 14) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x155 = INT8_MIN;
	uint64_t x156 = 4261476589LLU;
	volatile int64_t t38 = 17604312729LL;

	t38 = ((x153^x154)+(x155<x156));

	if (t38 != -9223372036854772782LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x157 = -1;
	int8_t x158 = -1;
	int32_t x159 = 3;

	t39 = ((x157^x158)+(x159<x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -1;
	volatile int32_t x162 = -1992239;
	static volatile int16_t x163 = INT16_MIN;
	int32_t x164 = -25964750;

	t40 = ((x161^x162)+(x163<x164));

	if (t40 != 1992238) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 6U;
	volatile uint32_t x166 = UINT32_MAX;
	int16_t x167 = -1;
	int32_t x168 = -118030;

	t41 = ((x165^x166)+(x167<x168));

	if (t41 != 4294967289U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x169 = UINT32_MAX;
	int32_t x170 = 27518470;
	int8_t x171 = -1;
	int32_t x172 = -1;

	t42 = ((x169^x170)+(x171<x172));

	if (t42 != 4267448825U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MIN;
	volatile int32_t x174 = INT32_MIN;
	int32_t x175 = -1383867;
	static uint64_t x176 = 2661LLU;
	int32_t t43 = -6412158;

	t43 = ((x173^x174)+(x175<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x179 = INT16_MAX;
	int64_t x180 = -3655LL;
	volatile int64_t t44 = -1135214258LL;

	t44 = ((x177^x178)+(x179<x180));

	if (t44 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = 48;
	int64_t x182 = INT64_MAX;
	int16_t x183 = 1;
	int16_t x184 = -591;
	volatile int64_t t45 = -2LL;

	t45 = ((x181^x182)+(x183<x184));

	if (t45 != 9223372036854775759LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x185 = 27;
	int32_t x186 = 194905;
	uint16_t x187 = 12709U;
	volatile int32_t t46 = 0;

	t46 = ((x185^x186)+(x187<x188));

	if (t46 != 194883) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x189 = INT16_MIN;
	int64_t x190 = 1800LL;
	uint8_t x191 = UINT8_MAX;
	uint32_t x192 = UINT32_MAX;
	volatile int64_t t47 = -6986LL;

	t47 = ((x189^x190)+(x191<x192));

	if (t47 != -30967LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x194 = INT16_MIN;
	int32_t x196 = INT32_MAX;
	static int32_t t48 = -3;

	t48 = ((x193^x194)+(x195<x196));

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 11649U;
	volatile uint32_t x198 = 315641U;
	int16_t x199 = INT16_MAX;
	int32_t x200 = INT32_MAX;
	volatile uint32_t t49 = 1796U;

	t49 = ((x197^x198)+(x199<x200));

	if (t49 != 327033U) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x202 = INT64_MIN;
	uint32_t x203 = UINT32_MAX;
	static int8_t x204 = INT8_MIN;
	volatile int64_t t50 = -4144182230463252844LL;

	t50 = ((x201^x202)+(x203<x204));

	if (t50 != -9223372036854775747LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = INT8_MAX;
	int8_t x206 = 1;
	int64_t x207 = -11551751817LL;
	int8_t x208 = INT8_MIN;

	t51 = ((x205^x206)+(x207<x208));

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MAX;
	static int8_t x210 = INT8_MIN;
	uint16_t x211 = 1U;
	volatile int32_t t52 = -1317;

	t52 = ((x209^x210)+(x211<x212));

	if (t52 != -2147483520) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x214 = -1LL;
	uint64_t x215 = UINT64_MAX;
	static volatile int64_t x216 = -5315204377487LL;
	volatile int64_t t53 = 4196451154230970717LL;

	t53 = ((x213^x214)+(x215<x216));

	if (t53 != 5LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 6U;
	static uint64_t x218 = UINT64_MAX;
	volatile int64_t x219 = INT64_MIN;
	int8_t x220 = INT8_MIN;
	static uint64_t t54 = 680447447749LLU;

	t54 = ((x217^x218)+(x219<x220));

	if (t54 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x222 = INT32_MAX;
	volatile int32_t x223 = INT32_MAX;
	static int16_t x224 = INT16_MAX;

	t55 = ((x221^x222)+(x223<x224));

	if (t55 != 2147483392) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MAX;
	static uint16_t x226 = 608U;
	int8_t x227 = -16;
	static uint16_t x228 = 215U;

	t56 = ((x225^x226)+(x227<x228));

	if (t56 != 544) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -1LL;
	int8_t x231 = INT8_MIN;
	volatile int32_t x232 = -13;
	int64_t t57 = -3455LL;

	t57 = ((x229^x230)+(x231<x232));

	if (t57 != -65535LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = 1;
	volatile int64_t x234 = 74474LL;
	int64_t x235 = -1LL;
	uint32_t x236 = 39U;

	t58 = ((x233^x234)+(x235<x236));

	if (t58 != 74476LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MAX;
	int8_t x238 = INT8_MIN;
	uint16_t x239 = 906U;

	t59 = ((x237^x238)+(x239<x240));

	if (t59 != -2147483521) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x244 = INT32_MIN;
	int64_t t60 = -885392198LL;

	t60 = ((x241^x242)+(x243<x244));

	if (t60 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -1;
	static int32_t x246 = INT32_MIN;
	uint16_t x247 = UINT16_MAX;
	volatile int32_t t61 = INT32_MAX;

	t61 = ((x245^x246)+(x247<x248));

	if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x251 = INT8_MAX;
	uint32_t t62 = 2U;

	t62 = ((x249^x250)+(x251<x252));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x253 = INT8_MIN;
	volatile uint16_t x254 = 1U;
	int8_t x255 = INT8_MIN;
	static volatile int64_t x256 = INT64_MIN;

	t63 = ((x253^x254)+(x255<x256));

	if (t63 != -127) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int64_t x258 = INT64_MAX;
	int64_t x259 = -317168LL;
	int64_t x260 = -60LL;

	t64 = ((x257^x258)+(x259<x260));

	if (t64 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = 2576U;
	uint16_t x264 = 20930U;
	uint64_t t65 = 2LLU;

	t65 = ((x261^x262)+(x263<x264));

	if (t65 != 439262146LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MAX;
	static uint16_t x266 = 1569U;
	volatile uint16_t x267 = 0U;
	uint16_t x268 = UINT16_MAX;
	int32_t t66 = -3351;

	t66 = ((x265^x266)+(x267<x268));

	if (t66 != 2147482079) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = 422447;
	uint32_t x271 = 48980529U;
	int32_t x272 = 3;
	static uint32_t t67 = 64344U;

	t67 = ((x269^x270)+(x271<x272));

	if (t67 != 4294544848U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 226888338LLU;
	int64_t x274 = INT64_MIN;
	uint32_t x275 = 7660U;
	volatile uint64_t t68 = 1LLU;

	t68 = ((x273^x274)+(x275<x276));

	if (t68 != 9223372037081664147LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x277 = 668362827706LLU;
	volatile int64_t x278 = -1LL;
	int16_t x279 = INT16_MAX;
	volatile uint64_t x280 = 1242744529LLU;
	uint64_t t69 = 4803864782954075LLU;

	t69 = ((x277^x278)+(x279<x280));

	if (t69 != 18446743405346723910LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -1;
	uint8_t x283 = 12U;
	volatile int32_t t70 = -26;

	t70 = ((x281^x282)+(x283<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = UINT64_MAX;
	int32_t x286 = INT32_MIN;
	int8_t x287 = -1;
	static int8_t x288 = INT8_MIN;
	volatile uint64_t t71 = 298008379LLU;

	t71 = ((x285^x286)+(x287<x288));

	if (t71 != 2147483647LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = 380545209LLU;
	volatile int64_t x291 = -1LL;
	uint8_t x292 = 5U;
	uint64_t t72 = 63LLU;

	t72 = ((x289^x290)+(x291<x292));

	if (t72 != 380545215LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = -7;
	int8_t x295 = 0;
	uint8_t x296 = 7U;
	int32_t t73 = -2;

	t73 = ((x293^x294)+(x295<x296));

	if (t73 != 28) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = 0;
	volatile int32_t x298 = -21;
	int64_t x299 = INT64_MAX;
	static int64_t x300 = INT64_MIN;
	volatile int32_t t74 = -234574480;

	t74 = ((x297^x298)+(x299<x300));

	if (t74 != -21) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x301 = -2009LL;
	int8_t x302 = INT8_MIN;
	uint32_t x303 = 1008U;
	int16_t x304 = -26;
	volatile int64_t t75 = -2821343286028424LL;

	t75 = ((x301^x302)+(x303<x304));

	if (t75 != 1960LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MIN;
	volatile uint64_t x306 = 223537767530039445LLU;
	int8_t x308 = -1;
	uint64_t t76 = 1104294584111267LLU;

	t76 = ((x305^x306)+(x307<x308));

	if (t76 != 9446909804384815253LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MIN;
	int32_t x310 = 2680;
	uint64_t x311 = UINT64_MAX;
	volatile uint8_t x312 = 92U;
	static volatile int64_t t77 = 12303595904927LL;

	t77 = ((x309^x310)+(x311<x312));

	if (t77 != -9223372036854773128LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = 1U;
	static int32_t x314 = -1;
	volatile int64_t x315 = 1LL;
	volatile uint16_t x316 = UINT16_MAX;
	static volatile int32_t t78 = 1206;

	t78 = ((x313^x314)+(x315<x316));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MIN;
	volatile int16_t x319 = INT16_MAX;
	int64_t t79 = -15911751LL;

	t79 = ((x317^x318)+(x319<x320));

	if (t79 != 32767LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x321 = INT32_MIN;
	uint32_t x322 = UINT32_MAX;
	uint32_t x323 = UINT32_MAX;
	volatile uint32_t t80 = 43893U;

	t80 = ((x321^x322)+(x323<x324));

	if (t80 != 2147483647U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x325 = UINT16_MAX;
	int32_t x327 = -1;
	int16_t x328 = INT16_MIN;
	volatile int32_t t81 = -53482366;

	t81 = ((x325^x326)+(x327<x328));

	if (t81 != 65530) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -1;
	int32_t x330 = -1;
	static uint32_t x332 = 117U;
	volatile int32_t t82 = 1365571;

	t82 = ((x329^x330)+(x331<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = 0;
	int8_t x334 = -1;
	static uint8_t x335 = 11U;
	volatile int32_t t83 = -3607;

	t83 = ((x333^x334)+(x335<x336));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x338 = 15195U;
	volatile uint8_t x339 = 15U;
	int16_t x340 = 1169;

	t84 = ((x337^x338)+(x339<x340));

	if (t84 != 14388) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MIN;
	int64_t x342 = INT64_MIN;
	int8_t x343 = -10;
	int64_t t85 = 13870148486993805LL;

	t85 = ((x341^x342)+(x343<x344));

	if (t85 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = 83067LL;
	int8_t x346 = INT8_MAX;
	uint32_t x348 = 13048912U;
	volatile int64_t t86 = 3LL;

	t86 = ((x345^x346)+(x347<x348));

	if (t86 != 82948LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x350 = INT64_MIN;

	t87 = ((x349^x350)+(x351<x352));

	if (t87 != -9223371636339396414LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x355 = INT32_MIN;
	int16_t x356 = -1;
	int32_t t88 = -2;

	t88 = ((x353^x354)+(x355<x356));

	if (t88 != -53053) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x357 = 235844392U;
	uint32_t x359 = 123U;
	volatile uint64_t t89 = 771407180036807138LLU;

	t89 = ((x357^x358)+(x359<x360));

	if (t89 != 22913203277744342LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x364 = 1LLU;
	volatile uint64_t t90 = 36562889777855554LLU;

	t90 = ((x361^x362)+(x363<x364));

	if (t90 != 32768LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x366 = INT32_MIN;
	int32_t x368 = -1;
	uint64_t t91 = 28534440307405658LLU;

	t91 = ((x365^x366)+(x367<x368));

	if (t91 != 2147483647LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MIN;
	int32_t x370 = -1;
	volatile int32_t x371 = -1;
	volatile int32_t t92 = -3004;

	t92 = ((x369^x370)+(x371<x372));

	if (t92 != 32768) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = UINT8_MAX;
	volatile int64_t x374 = INT64_MIN;
	int8_t x375 = INT8_MIN;
	uint16_t x376 = 2474U;

	t93 = ((x373^x374)+(x375<x376));

	if (t93 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = UINT16_MAX;
	volatile int8_t x378 = INT8_MAX;
	static int32_t x380 = INT32_MAX;
	static volatile int32_t t94 = -327;

	t94 = ((x377^x378)+(x379<x380));

	if (t94 != 65409) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x381 = 114U;
	uint8_t x382 = UINT8_MAX;
	uint8_t x383 = 1U;
	volatile uint64_t x384 = UINT64_MAX;
	uint32_t t95 = 25U;

	t95 = ((x381^x382)+(x383<x384));

	if (t95 != 142U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = 376;
	int8_t x386 = INT8_MAX;
	static int16_t x387 = INT16_MIN;
	uint16_t x388 = 1U;
	volatile int32_t t96 = 162240;

	t96 = ((x385^x386)+(x387<x388));

	if (t96 != 264) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x393 = -1;
	uint16_t x394 = UINT16_MAX;
	int16_t x395 = -1;
	uint32_t x396 = UINT32_MAX;
	static int32_t t97 = -25636299;

	t97 = ((x393^x394)+(x395<x396));

	if (t97 != -65536) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x398 = UINT64_MAX;
	volatile int64_t x400 = INT64_MIN;

	t98 = ((x397^x398)+(x399<x400));

	if (t98 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x401 = INT16_MIN;
	uint32_t x402 = UINT32_MAX;
	int64_t x403 = -1LL;
	volatile int32_t x404 = INT32_MAX;

	t99 = ((x401^x402)+(x403<x404));

	if (t99 != 32768U) { NG(); } else { ; }
	
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

