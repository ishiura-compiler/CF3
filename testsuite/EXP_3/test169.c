#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x5 = 66U;
int8_t x7 = -23;
int32_t x16 = 121;
uint16_t x17 = 1621U;
uint32_t x20 = 1925063557U;
volatile uint32_t t3 = 1582500262U;
int64_t t4 = -1946LL;
int16_t x33 = INT16_MAX;
volatile int64_t x34 = INT64_MAX;
int32_t x36 = INT32_MAX;
int32_t x48 = INT32_MIN;
uint16_t x54 = 24U;
static uint64_t t12 = 298701812648031LLU;
volatile uint8_t x59 = 2U;
int32_t x64 = 59;
int32_t t14 = 23;
static int16_t x65 = 11325;
int16_t x74 = 3;
int32_t x75 = INT32_MIN;
uint64_t x77 = 838066920031LLU;
uint8_t x78 = 4U;
uint8_t x83 = 1U;
int32_t x89 = INT32_MAX;
int16_t x96 = 205;
int32_t x98 = -1;
uint8_t x99 = 12U;
volatile int32_t x134 = INT32_MIN;
volatile uint64_t t31 = 8111133582329386897LLU;
uint64_t t32 = 269279968173133LLU;
volatile uint64_t x145 = 286LLU;
static int8_t x146 = INT8_MIN;
int8_t x151 = -25;
uint8_t x153 = 2U;
int32_t x155 = -1;
int8_t x156 = 7;
int32_t t35 = 1;
int32_t x162 = INT32_MIN;
static volatile uint64_t t39 = 25822LLU;
uint64_t x173 = 9095LLU;
int8_t x178 = -9;
uint16_t x189 = 1U;
uint64_t x195 = UINT64_MAX;
int16_t x217 = 1;
static int64_t x218 = INT64_MIN;
int16_t x222 = INT16_MAX;
uint64_t t49 = 6660566229485558LLU;
int64_t x232 = 379786760LL;
uint8_t x237 = 66U;
static int16_t x246 = INT16_MIN;
int64_t x248 = INT64_MIN;
volatile int64_t t57 = -8746LL;
int16_t x274 = -60;
int8_t x276 = INT8_MIN;
uint16_t x282 = 987U;
uint32_t x287 = 236438U;
volatile int32_t x294 = -1;
uint16_t x296 = 9U;
volatile uint64_t t64 = 4LLU;
volatile int8_t x305 = -1;
static int32_t x308 = -2496;
static int16_t x317 = INT16_MAX;
uint64_t x327 = 94945048380191LLU;
uint32_t x332 = UINT32_MAX;
static uint32_t t70 = 56U;
volatile uint32_t x338 = UINT32_MAX;
uint32_t x341 = UINT32_MAX;
static volatile int8_t x342 = 0;
int16_t x347 = INT16_MIN;
volatile int8_t x348 = 0;
int64_t t74 = -7112437087209LL;
uint64_t x356 = 1004176LLU;
int64_t x359 = INT64_MIN;
int8_t x363 = INT8_MAX;
volatile int64_t t77 = -1LL;
uint64_t x365 = 228111709493LLU;
volatile uint64_t t78 = 1151538632996406165LLU;
volatile int32_t x372 = -1;
int32_t x373 = INT32_MIN;
static int64_t x374 = INT64_MAX;
static volatile int32_t x383 = -1;
uint8_t x386 = 14U;
volatile uint32_t t83 = 7641U;
int32_t t84 = -7617;
int16_t x398 = -1;
volatile int32_t t86 = 3358;
static uint64_t x402 = 4114LLU;
uint16_t x410 = 175U;
int32_t x418 = INT32_MAX;
static volatile int8_t x425 = -35;
int32_t x426 = -1;
static int8_t x430 = 1;
uint32_t x445 = UINT32_MAX;
int8_t x446 = 0;
int16_t x447 = INT16_MIN;
volatile uint32_t t97 = 138198U;
uint32_t x454 = 62013201U;


void f0(void) {
	uint8_t x1 = 88U;
	uint32_t x2 = 50417U;
	int32_t x3 = INT32_MIN;
	int16_t x4 = 10;
	uint32_t t0 = 28109561U;

	t0 = ((x1^x2)^(x3+x4));

	if (t0 != 2147533987U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = -1;
	int64_t x8 = INT64_MAX;
	int64_t t1 = 7737572770030LL;

	t1 = ((x5^x6)^(x7+x8));

	if (t1 != -9223372036854775723LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x13 = 194432083LL;
	static volatile int8_t x14 = -5;
	int8_t x15 = -1;
	int64_t t2 = 11313382238172839LL;

	t2 = ((x13^x14)^(x15+x16));

	if (t2 != -194432048LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x18 = INT16_MIN;
	uint16_t x19 = 457U;

	t3 = ((x17^x18)^(x19+x20));

	if (t3 != 2369889051U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = -13515928LL;
	uint16_t x22 = UINT16_MAX;
	int64_t x23 = 7402217104364LL;
	int32_t x24 = INT32_MAX;

	t4 = ((x21^x22)^(x23+x24));

	if (t4 != -7404360802436LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = 1;
	static int32_t x26 = INT32_MIN;
	uint32_t x27 = UINT32_MAX;
	static uint64_t x28 = 1LLU;
	uint64_t t5 = 3549496LLU;

	t5 = ((x25^x26)^(x27+x28));

	if (t5 != 18446744067267100673LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x29 = 1472;
	volatile int64_t x30 = 2275LL;
	volatile uint16_t x31 = UINT16_MAX;
	int16_t x32 = 1937;
	int64_t t6 = 14LL;

	t6 = ((x29^x30)^(x31+x32));

	if (t6 != 68275LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x35 = INT32_MIN;
	int64_t t7 = 35962551217951451LL;

	t7 = ((x33^x34)^(x35+x36));

	if (t7 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = -1;
	volatile int64_t x38 = INT64_MAX;
	uint64_t x39 = UINT64_MAX;
	static int16_t x40 = INT16_MIN;
	volatile uint64_t t8 = 54940607LLU;

	t8 = ((x37^x38)^(x39+x40));

	if (t8 != 9223372036854743039LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = 26463411LLU;
	static uint8_t x42 = 17U;
	int32_t x43 = -641533321;
	static int32_t x44 = -911365;
	uint64_t t9 = 335444627825345961LLU;

	t9 = ((x41^x42)^(x43+x44));

	if (t9 != 18446744073041010384LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = 29;
	int64_t x46 = -2327381725291686976LL;
	uint32_t x47 = UINT32_MAX;
	static int64_t t10 = -261851146LL;

	t10 = ((x45^x46)^(x47+x48));

	if (t10 != -2327381726340371422LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = 3766U;
	int32_t x50 = 5393;
	int16_t x51 = 1;
	volatile int64_t x52 = INT64_MIN;
	int64_t t11 = 508880903192756549LL;

	t11 = ((x49^x50)^(x51+x52));

	if (t11 != -9223372036854768730LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x53 = 513291123177LL;
	uint64_t x55 = UINT64_MAX;
	volatile int8_t x56 = INT8_MIN;

	t12 = ((x53^x54)^(x55+x56));

	if (t12 != 18446743560418428558LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = UINT64_MAX;
	volatile int32_t x58 = 254;
	static int32_t x60 = INT32_MIN;
	uint64_t t13 = 61LLU;

	t13 = ((x57^x58)^(x59+x60));

	if (t13 != 2147483395LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x61 = 38U;
	static int8_t x62 = INT8_MIN;
	volatile int32_t x63 = -1;

	t14 = ((x61^x62)^(x63+x64));

	if (t14 != -100) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x66 = INT32_MIN;
	int64_t x67 = 2457694945LL;
	int8_t x68 = INT8_MAX;
	volatile int64_t t15 = 1263650260058LL;

	t15 = ((x65^x66)^(x67+x68));

	if (t15 != -3984760995LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x69 = 1698;
	volatile int8_t x70 = INT8_MAX;
	uint8_t x71 = 1U;
	int32_t x72 = INT32_MIN;
	int32_t t16 = -2;

	t16 = ((x69^x70)^(x71+x72));

	if (t16 != -2147481892) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = INT64_MIN;
	static uint32_t x76 = UINT32_MAX;
	int64_t t17 = 110784713983LL;

	t17 = ((x73^x74)^(x75+x76));

	if (t17 != -9223372034707292164LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x79 = INT16_MIN;
	static int16_t x80 = -1;
	uint64_t t18 = 30728745LLU;

	t18 = ((x77^x78)^(x79+x80));

	if (t18 != 18446743235642598820LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x81 = 3917U;
	volatile int32_t x82 = INT32_MAX;
	uint8_t x84 = 2U;
	uint32_t t19 = 6U;

	t19 = ((x81^x82)^(x83+x84));

	if (t19 != 2147479729U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = INT64_MIN;
	int8_t x86 = INT8_MIN;
	int8_t x87 = -47;
	int8_t x88 = -1;
	volatile int64_t t20 = -11LL;

	t20 = ((x85^x86)^(x87+x88));

	if (t20 != -9223372036854775728LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x90 = 2872LLU;
	static volatile uint32_t x91 = 488U;
	int16_t x92 = INT16_MIN;
	static volatile uint64_t t21 = 37LLU;

	t21 = ((x89^x90)^(x91+x92));

	if (t21 != 2147513647LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = INT8_MAX;
	static uint16_t x94 = UINT16_MAX;
	int16_t x95 = -1;
	int32_t t22 = 22793049;

	t22 = ((x93^x94)^(x95+x96));

	if (t22 != 65356) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x97 = 32733LLU;
	int64_t x100 = INT64_MIN;
	volatile uint64_t t23 = 2146LLU;

	t23 = ((x97^x98)^(x99+x100));

	if (t23 != 9223372036854743086LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x101 = 1;
	uint64_t x102 = 21913428905LLU;
	volatile int8_t x103 = -14;
	volatile int8_t x104 = INT8_MAX;
	volatile uint64_t t24 = 2109341474544LLU;

	t24 = ((x101^x102)^(x103+x104));

	if (t24 != 21913428953LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = 40463363387682LL;
	volatile uint8_t x110 = 1U;
	uint64_t x111 = 7329488931LLU;
	int64_t x112 = -1LL;
	volatile uint64_t t25 = 321793955276409LLU;

	t25 = ((x109^x110)^(x111+x112));

	if (t25 != 40461422661889LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = 0;
	static int64_t x114 = 2LL;
	uint16_t x115 = 0U;
	uint64_t x116 = 41006232944LLU;
	volatile uint64_t t26 = 5080636596995254LLU;

	t26 = ((x113^x114)^(x115+x116));

	if (t26 != 41006232946LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x117 = UINT64_MAX;
	int16_t x118 = -1;
	static uint32_t x119 = UINT32_MAX;
	static int32_t x120 = INT32_MIN;
	volatile uint64_t t27 = 96537202975515LLU;

	t27 = ((x117^x118)^(x119+x120));

	if (t27 != 2147483647LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = INT8_MIN;
	static uint8_t x122 = 4U;
	int32_t x123 = INT32_MIN;
	int16_t x124 = 5499;
	static int32_t t28 = -54;

	t28 = ((x121^x122)^(x123+x124));

	if (t28 != 2147478271) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = INT16_MAX;
	int64_t x126 = -1LL;
	uint32_t x127 = 211214250U;
	static int16_t x128 = -1;
	volatile int64_t t29 = -225572LL;

	t29 = ((x125^x126)^(x127+x128));

	if (t29 != -211198039LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x129 = INT64_MAX;
	volatile int64_t x130 = -1LL;
	static volatile uint64_t x131 = 4117LLU;
	volatile int16_t x132 = 7272;
	volatile uint64_t t30 = 1270306409284LLU;

	t30 = ((x129^x130)^(x131+x132));

	if (t30 != 9223372036854787197LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = INT8_MIN;
	uint64_t x135 = 2LLU;
	int32_t x136 = INT32_MAX;

	t31 = ((x133^x134)^(x135+x136));

	if (t31 != 4294967169LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x141 = INT16_MIN;
	uint64_t x142 = 2256771935205412291LLU;
	volatile int64_t x143 = -59776164363764LL;
	static int64_t x144 = -1LL;

	t32 = ((x141^x142)^(x143+x144));

	if (t32 != 2256756704059838408LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x147 = 272892638;
	volatile uint16_t x148 = UINT16_MAX;
	volatile uint64_t t33 = 780116378934LLU;

	t33 = ((x145^x146)^(x147+x148));

	if (t33 != 18446744073436593219LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x149 = UINT32_MAX;
	int8_t x150 = INT8_MAX;
	static int32_t x152 = -22262;
	volatile uint32_t t34 = 0U;

	t34 = ((x149^x150)^(x151+x152));

	if (t34 != 22385U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x154 = INT32_MIN;

	t35 = ((x153^x154)^(x155+x156));

	if (t35 != -2147483644) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x157 = UINT8_MAX;
	static volatile uint16_t x158 = 85U;
	int32_t x159 = 1;
	int8_t x160 = -2;
	static volatile int32_t t36 = 3921222;

	t36 = ((x157^x158)^(x159+x160));

	if (t36 != -171) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x161 = INT8_MAX;
	uint32_t x163 = UINT32_MAX;
	volatile uint8_t x164 = 1U;
	volatile uint32_t t37 = 2524375U;

	t37 = ((x161^x162)^(x163+x164));

	if (t37 != 2147483775U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x165 = INT8_MAX;
	volatile int16_t x166 = INT16_MIN;
	volatile int64_t x167 = INT64_MIN;
	int32_t x168 = INT32_MAX;
	int64_t t38 = 3LL;

	t38 = ((x165^x166)^(x167+x168));

	if (t38 != 9223372034707324800LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x169 = INT16_MIN;
	volatile uint8_t x170 = 2U;
	int16_t x171 = INT16_MAX;
	static uint64_t x172 = 113726489LLU;

	t39 = ((x169^x170)^(x171+x172));

	if (t39 != 18446744073595802650LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x174 = UINT64_MAX;
	uint32_t x175 = UINT32_MAX;
	volatile int32_t x176 = INT32_MAX;
	volatile uint64_t t40 = 53899815019155LLU;

	t40 = ((x173^x174)^(x175+x176));

	if (t40 != 18446744071562077062LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x177 = -1656983413403LL;
	int16_t x179 = -1;
	uint32_t x180 = 148U;
	int64_t t41 = -626394750LL;

	t41 = ((x177^x178)^(x179+x180));

	if (t41 != 1656983413249LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x185 = 997;
	static int8_t x186 = -1;
	int8_t x187 = INT8_MIN;
	int8_t x188 = INT8_MIN;
	static volatile int32_t t42 = 3894403;

	t42 = ((x185^x186)^(x187+x188));

	if (t42 != 794) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x190 = 235174581;
	uint32_t x191 = 69559U;
	volatile int64_t x192 = 3LL;
	static volatile int64_t t43 = -11888221147LL;

	t43 = ((x189^x190)^(x191+x192));

	if (t43 != 235238670LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x193 = INT64_MAX;
	int8_t x194 = 1;
	int8_t x196 = 3;
	uint64_t t44 = 840LLU;

	t44 = ((x193^x194)^(x195+x196));

	if (t44 != 9223372036854775804LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x197 = -2104;
	volatile int32_t x198 = INT32_MAX;
	static uint64_t x199 = 4486LLU;
	int64_t x200 = 25691490982607851LL;
	uint64_t t45 = 6455595780349785736LLU;

	t45 = ((x197^x198)^(x199+x200));

	if (t45 != 18421052583860028742LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x209 = -6;
	uint32_t x210 = UINT32_MAX;
	int16_t x211 = INT16_MIN;
	static uint64_t x212 = UINT64_MAX;
	volatile uint64_t t46 = 6835758703LLU;

	t46 = ((x209^x210)^(x211+x212));

	if (t46 != 18446744073709518842LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x213 = -1;
	volatile int8_t x214 = INT8_MIN;
	volatile uint64_t x215 = UINT64_MAX;
	static uint32_t x216 = 35729U;
	static volatile uint64_t t47 = 3105810LLU;

	t47 = ((x213^x214)^(x215+x216));

	if (t47 != 35823LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x219 = -1;
	static int16_t x220 = -1;
	static int64_t t48 = INT64_MAX;

	t48 = ((x217^x218)^(x219+x220));

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x221 = -1;
	uint64_t x223 = 39076462LLU;
	static uint64_t x224 = UINT64_MAX;

	t49 = ((x221^x222)^(x223+x224));

	if (t49 != 18446744073670476397LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x225 = 10654240851LLU;
	static uint32_t x226 = UINT32_MAX;
	int32_t x227 = INT32_MAX;
	int64_t x228 = 85802076076LL;
	uint64_t t50 = 98771475430LLU;

	t50 = ((x225^x226)^(x227+x228));

	if (t50 != 98763728903LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x229 = INT32_MAX;
	uint64_t x230 = 1719508936202LLU;
	static volatile int8_t x231 = -1;
	volatile uint64_t t51 = 81371180859LLU;

	t51 = ((x229^x230)^(x231+x232));

	if (t51 != 1718857551858LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x233 = -3611;
	uint64_t x234 = UINT64_MAX;
	uint32_t x235 = UINT32_MAX;
	static uint32_t x236 = 30591571U;
	volatile uint64_t t52 = 1560504366038LLU;

	t52 = ((x233^x234)^(x235+x236));

	if (t52 != 30590024LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x238 = -1;
	static int64_t x239 = 150429079058504LL;
	static volatile uint32_t x240 = 441070U;
	int64_t t53 = -1LL;

	t53 = ((x237^x238)^(x239+x240));

	if (t53 != -150429079499637LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x241 = UINT64_MAX;
	static int64_t x242 = -1LL;
	int32_t x243 = INT32_MAX;
	static int8_t x244 = INT8_MIN;
	uint64_t t54 = 19183006691754LLU;

	t54 = ((x241^x242)^(x243+x244));

	if (t54 != 2147483519LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x245 = 12726145;
	int32_t x247 = 12;
	int64_t t55 = 0LL;

	t55 = ((x245^x246)^(x247+x248));

	if (t55 != 9223372036842041229LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x249 = 9;
	static volatile int16_t x250 = -1;
	static int16_t x251 = INT16_MAX;
	int16_t x252 = INT16_MAX;
	volatile int32_t t56 = -757;

	t56 = ((x249^x250)^(x251+x252));

	if (t56 != -65528) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x261 = INT16_MIN;
	int64_t x262 = -3LL;
	uint8_t x263 = 1U;
	uint16_t x264 = UINT16_MAX;

	t57 = ((x261^x262)^(x263+x264));

	if (t57 != 98301LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x273 = -1;
	int16_t x275 = INT16_MAX;
	static volatile int32_t t58 = -35917;

	t58 = ((x273^x274)^(x275+x276));

	if (t58 != 32580) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x277 = INT32_MAX;
	uint32_t x278 = 6U;
	volatile uint64_t x279 = 11632600609LLU;
	static int16_t x280 = INT16_MIN;
	volatile uint64_t t59 = 37800183568924LLU;

	t59 = ((x277^x278)^(x279+x280));

	if (t59 != 11989752280LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x281 = 1U;
	uint32_t x283 = 3982723U;
	uint16_t x284 = UINT16_MAX;
	static uint32_t t60 = 105U;

	t60 = ((x281^x282)^(x283+x284));

	if (t60 != 4048472U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x285 = -1;
	int64_t x286 = 8202650396277LL;
	volatile int64_t x288 = INT64_MIN;
	static volatile int64_t t61 = 68407534387LL;

	t61 = ((x285^x286)^(x287+x288));

	if (t61 != 9223363834204144156LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x289 = INT64_MIN;
	int16_t x290 = -6;
	uint32_t x291 = UINT32_MAX;
	volatile uint32_t x292 = UINT32_MAX;
	int64_t t62 = 55926575069144124LL;

	t62 = ((x289^x290)^(x291+x292));

	if (t62 != 9223372032559808516LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x293 = 35U;
	int16_t x295 = INT16_MIN;
	static volatile int32_t t63 = 478;

	t63 = ((x293^x294)^(x295+x296));

	if (t63 != 32725) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x297 = 14366409LL;
	static uint64_t x298 = 94052398LLU;
	uint64_t x299 = 427418757373LLU;
	int8_t x300 = -30;

	t64 = ((x297^x298)^(x299+x300));

	if (t64 != 427372625464LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x301 = 2818566LL;
	int8_t x302 = INT8_MIN;
	int16_t x303 = -1;
	uint16_t x304 = 6207U;
	int64_t t65 = -44485698041726028LL;

	t65 = ((x301^x302)^(x303+x304));

	if (t65 != -2824776LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x306 = INT16_MIN;
	int16_t x307 = -74;
	int32_t t66 = -3556990;

	t66 = ((x305^x306)^(x307+x308));

	if (t66 != -30199) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x318 = 1865U;
	int8_t x319 = INT8_MAX;
	volatile uint8_t x320 = 113U;
	int32_t t67 = 0;

	t67 = ((x317^x318)^(x319+x320));

	if (t67 != 30790) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x325 = INT32_MAX;
	volatile int64_t x326 = 6346935LL;
	uint16_t x328 = 46U;
	uint64_t t68 = 1566266953LLU;

	t68 = ((x325^x326)^(x327+x328));

	if (t68 != 94946199528453LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x329 = UINT32_MAX;
	int32_t x330 = -1;
	int16_t x331 = INT16_MIN;
	static uint32_t t69 = 8681527U;

	t69 = ((x329^x330)^(x331+x332));

	if (t69 != 4294934527U) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x333 = INT32_MIN;
	int32_t x334 = INT32_MAX;
	uint32_t x335 = 32417273U;
	int16_t x336 = INT16_MIN;

	t70 = ((x333^x334)^(x335+x336));

	if (t70 != 4262582790U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x337 = INT32_MIN;
	volatile uint64_t x339 = 161758LLU;
	static int64_t x340 = -381LL;
	uint64_t t71 = 58LLU;

	t71 = ((x337^x338)^(x339+x340));

	if (t71 != 2147322270LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x343 = -1LL;
	volatile int64_t x344 = INT64_MAX;
	int64_t t72 = -90844816868893LL;

	t72 = ((x341^x342)^(x343+x344));

	if (t72 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x345 = INT64_MIN;
	uint64_t x346 = UINT64_MAX;
	volatile uint64_t t73 = 113374LLU;

	t73 = ((x345^x346)^(x347+x348));

	if (t73 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x349 = INT32_MIN;
	static int32_t x350 = INT32_MIN;
	int64_t x351 = 2807923567779210583LL;
	int16_t x352 = INT16_MAX;

	t74 = ((x349^x350)^(x351+x352));

	if (t74 != 2807923567779243350LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x353 = INT16_MIN;
	int16_t x354 = INT16_MIN;
	static uint16_t x355 = 2U;
	volatile uint64_t t75 = 503361889147LLU;

	t75 = ((x353^x354)^(x355+x356));

	if (t75 != 1004178LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x357 = INT8_MIN;
	int8_t x358 = 15;
	uint64_t x360 = 281463776954LLU;
	static volatile uint64_t t76 = 2355696899340325981LLU;

	t76 = ((x357^x358)^(x359+x360));

	if (t76 != 9223371755390998837LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x361 = INT32_MIN;
	int64_t x362 = -170082613711LL;
	uint8_t x364 = 6U;

	t77 = ((x361^x362)^(x363+x364));

	if (t77 != 171367286452LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x366 = INT64_MAX;
	uint8_t x367 = 1U;
	volatile uint64_t x368 = 9130LLU;

	t78 = ((x365^x366)^(x367+x368));

	if (t78 != 9223371808743074145LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x369 = INT32_MAX;
	volatile int32_t x370 = INT32_MIN;
	int32_t x371 = INT32_MAX;
	int32_t t79 = 6863;

	t79 = ((x369^x370)^(x371+x372));

	if (t79 != -2147483647) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x375 = -1;
	volatile int16_t x376 = INT16_MIN;
	volatile int64_t t80 = 25LL;

	t80 = ((x373^x374)^(x375+x376));

	if (t80 != 9223372034707324928LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x377 = INT32_MIN;
	uint16_t x378 = 1U;
	static uint32_t x379 = UINT32_MAX;
	int16_t x380 = INT16_MIN;
	static uint32_t t81 = 24485014U;

	t81 = ((x377^x378)^(x379+x380));

	if (t81 != 2147450878U) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x381 = 1454U;
	uint32_t x382 = 83283U;
	uint64_t x384 = 37326046634172LLU;
	static uint64_t t82 = 1746297452LLU;

	t82 = ((x381^x382)^(x383+x384));

	if (t82 != 37326046715974LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x385 = 291U;
	uint8_t x387 = UINT8_MAX;
	int8_t x388 = -29;

	t83 = ((x385^x386)^(x387+x388));

	if (t83 != 463U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x389 = INT8_MIN;
	int32_t x390 = -1;
	int16_t x391 = INT16_MAX;
	volatile uint16_t x392 = 4142U;

	t84 = ((x389^x390)^(x391+x392));

	if (t84 != 36946) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x393 = 21U;
	static uint16_t x394 = UINT16_MAX;
	volatile int64_t x395 = -3471843318376LL;
	static int32_t x396 = INT32_MAX;
	volatile int64_t t85 = -14225357538LL;

	t85 = ((x393^x394)^(x395+x396));

	if (t85 != -3469695788419LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x397 = INT16_MIN;
	uint8_t x399 = 3U;
	volatile int16_t x400 = -1;

	t86 = ((x397^x398)^(x399+x400));

	if (t86 != 32765) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x401 = -1615373798LL;
	uint16_t x403 = 0U;
	int64_t x404 = INT64_MIN;
	uint64_t t87 = 2953141263071945922LLU;

	t87 = ((x401^x402)^(x403+x404));

	if (t87 != 9223372035239397896LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x409 = INT8_MIN;
	uint64_t x411 = UINT64_MAX;
	int64_t x412 = INT64_MIN;
	uint64_t t88 = 44393663995786359LLU;

	t88 = ((x409^x410)^(x411+x412));

	if (t88 != 9223372036854776016LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x413 = INT8_MAX;
	volatile int32_t x414 = 615761;
	static volatile int16_t x415 = INT16_MIN;
	int32_t x416 = 31;
	volatile int32_t t89 = -9;

	t89 = ((x413^x414)^(x415+x416));

	if (t89 != -596687) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x417 = 199773693U;
	uint8_t x419 = UINT8_MAX;
	volatile int8_t x420 = INT8_MIN;
	volatile uint32_t t90 = 11062241U;

	t90 = ((x417^x418)^(x419+x420));

	if (t90 != 1947710077U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x421 = 2708U;
	int8_t x422 = -3;
	volatile int64_t x423 = -1LL;
	volatile int64_t x424 = INT64_MAX;
	int64_t t91 = -7161784588621LL;

	t91 = ((x421^x422)^(x423+x424));

	if (t91 != -9223372036854773097LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x427 = 418U;
	uint16_t x428 = 230U;
	static int32_t t92 = 7404700;

	t92 = ((x425^x426)^(x427+x428));

	if (t92 != 682) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x429 = INT32_MIN;
	volatile uint8_t x431 = UINT8_MAX;
	int32_t x432 = INT32_MIN;
	int32_t t93 = 0;

	t93 = ((x429^x430)^(x431+x432));

	if (t93 != 254) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x433 = 1U;
	int16_t x434 = INT16_MIN;
	uint32_t x435 = UINT32_MAX;
	uint64_t x436 = 87LLU;
	static uint64_t t94 = 1606014919759868LLU;

	t94 = ((x433^x434)^(x435+x436));

	if (t94 != 8589901911LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x437 = 7U;
	int64_t x438 = -1LL;
	int16_t x439 = -14;
	int8_t x440 = INT8_MIN;
	volatile int64_t t95 = -6LL;

	t95 = ((x437^x438)^(x439+x440));

	if (t95 != 138LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x441 = 2556347;
	int64_t x442 = -1LL;
	uint8_t x443 = UINT8_MAX;
	uint32_t x444 = 14273U;
	static volatile int64_t t96 = 28468171648LL;

	t96 = ((x441^x442)^(x443+x444));

	if (t96 != -2570620LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x448 = 1;

	t97 = ((x445^x446)^(x447+x448));

	if (t97 != 32766U) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint32_t x449 = 216U;
	int64_t x450 = -1LL;
	volatile int8_t x451 = INT8_MAX;
	volatile int64_t x452 = -1054664674LL;
	int64_t t98 = 3544LL;

	t98 = ((x449^x450)^(x451+x452));

	if (t98 != 1054664634LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x453 = -34542092592764421LL;
	int8_t x455 = INT8_MAX;
	uint8_t x456 = UINT8_MAX;
	int64_t t99 = -2991453993LL;

	t99 = ((x453^x454)^(x455+x456));

	if (t99 != -34542092570617964LL) { NG(); } else { ; }
	
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

