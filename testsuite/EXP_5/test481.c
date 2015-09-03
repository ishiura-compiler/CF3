#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = INT8_MAX;
volatile int32_t x15 = -1;
volatile int64_t x16 = -5LL;
int64_t t3 = -4072376264307145LL;
int64_t x21 = -1LL;
static uint32_t x37 = UINT32_MAX;
int16_t x40 = INT16_MIN;
static volatile int8_t x42 = -39;
int16_t x43 = INT16_MIN;
static volatile int64_t t10 = 2452184515965399LL;
static int16_t x53 = -320;
static uint16_t x54 = 2U;
int16_t x55 = INT16_MIN;
int8_t x56 = -1;
int16_t x61 = -621;
int64_t x70 = 64062671025316755LL;
int8_t x71 = INT8_MAX;
volatile int64_t t14 = 851432117590877351LL;
uint16_t x75 = 782U;
static volatile int32_t x82 = -1;
static volatile uint64_t t17 = 265485LLU;
uint16_t x85 = UINT16_MAX;
uint64_t x95 = 89756286LLU;
volatile int32_t t22 = -140;
uint64_t x109 = 7262LLU;
volatile int8_t x112 = INT8_MIN;
volatile uint64_t x113 = UINT64_MAX;
uint8_t x126 = 9U;
int8_t x128 = -1;
volatile int16_t x131 = INT16_MAX;
int8_t x135 = 8;
uint16_t x140 = 533U;
uint64_t t29 = 11LLU;
volatile uint32_t t31 = 9505U;
int64_t x150 = 108124LL;
int64_t t33 = -136LL;
uint64_t x161 = 2605130066810926LLU;
volatile int32_t t37 = 105;
volatile int64_t x177 = INT64_MAX;
int64_t x183 = 88904319831570792LL;
uint8_t x184 = 9U;
static int8_t x190 = INT8_MIN;
uint32_t x191 = 395U;
int64_t t40 = 6811LL;
int32_t x194 = INT32_MIN;
volatile uint32_t x195 = 4913488U;
static uint8_t x198 = 12U;
int16_t x200 = -1;
volatile int64_t x202 = -1LL;
uint64_t x203 = UINT64_MAX;
static uint64_t t43 = 1219LLU;
static volatile uint32_t t44 = 253462939U;
volatile int32_t x211 = -1;
int16_t x221 = INT16_MIN;
int16_t x223 = INT16_MAX;
static int64_t x224 = -1108752259941180LL;
int32_t x249 = INT32_MIN;
static uint32_t x261 = UINT32_MAX;
int32_t x263 = -5438305;
uint64_t x270 = 14415553204914LLU;
uint32_t x271 = 22596U;
int64_t x278 = -81180LL;
int64_t t55 = -6308320884585773LL;
int16_t x282 = INT16_MAX;
static uint8_t x283 = UINT8_MAX;
int64_t t57 = -1164461031744LL;
uint8_t x307 = UINT8_MAX;
int32_t x319 = -1;
int16_t x322 = INT16_MIN;
int16_t x325 = -1;
uint64_t t63 = UINT64_MAX;
int8_t x342 = -1;
int8_t x344 = INT8_MIN;
static int64_t x348 = INT64_MAX;
int64_t x360 = 11727440644051LL;
int16_t x374 = INT16_MIN;
static int32_t x376 = -1;
int8_t x380 = -1;
int8_t x386 = -19;
volatile uint32_t x392 = 138U;
volatile uint32_t t76 = 1685141U;
static int64_t x396 = -1LL;
volatile uint64_t t77 = 8491186394911LLU;
static uint64_t x414 = UINT64_MAX;
int32_t x417 = INT32_MIN;
static int32_t x421 = 65960958;
int32_t x431 = 343967;
int32_t t85 = 719029728;
volatile int32_t x450 = 2937;
static volatile int8_t x452 = -1;
static volatile int16_t x458 = INT16_MAX;
uint8_t x466 = 1U;
volatile int16_t x481 = 0;
static int64_t t95 = -7865374LL;
static int32_t x489 = INT32_MIN;
volatile int16_t x501 = INT16_MAX;
int32_t x502 = -1;
int32_t x504 = 462542;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int16_t x2 = -2146;
	volatile uint32_t x3 = 2U;
	int8_t x4 = 0;
	int64_t t0 = INT64_MIN;

	t0 = (x1^((x2*x3)&x4));

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = 12493LL;
	int64_t x7 = -1LL;
	uint16_t x8 = 1U;
	int64_t t1 = -41975997875050LL;

	t1 = (x5^((x6*x7)&x8));

	if (t1 != 12492LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	int64_t x10 = 654286LL;
	int32_t x11 = INT32_MAX;
	int64_t x12 = INT64_MAX;
	volatile int64_t t2 = 6675LL;

	t2 = (x9^((x10*x11)&x12));

	if (t2 != 1405064191802317LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MAX;
	uint32_t x14 = UINT32_MAX;

	t3 = (x13^((x14*x15)&x16));

	if (t3 != 126LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	static int16_t x18 = -903;
	int16_t x19 = INT16_MIN;
	uint8_t x20 = UINT8_MAX;
	volatile int32_t t4 = -1;

	t4 = (x17^((x18*x19)&x20));

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = INT8_MIN;
	static int64_t x23 = -3785159660414331LL;
	int16_t x24 = INT16_MIN;
	int64_t t5 = 3746407LL;

	t5 = (x21^((x22*x23)&x24));

	if (t5 != -484500436533018625LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -13978;
	static int16_t x26 = INT16_MIN;
	uint8_t x27 = 7U;
	volatile uint64_t x28 = UINT64_MAX;
	uint64_t t6 = 4248771635LLU;

	t6 = (x25^((x26*x27)&x28));

	if (t6 != 215398LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x33 = INT32_MIN;
	volatile int16_t x34 = INT16_MIN;
	volatile int16_t x35 = INT16_MIN;
	int64_t x36 = INT64_MAX;
	volatile int64_t t7 = -22LL;

	t7 = (x33^((x34*x35)&x36));

	if (t7 != -1073741824LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x38 = 4344;
	int16_t x39 = INT16_MAX;
	uint32_t t8 = 1U;

	t8 = (x37^((x38*x39)&x40));

	if (t8 != 4152655871U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MIN;
	int8_t x44 = 1;
	int32_t t9 = -3165;

	t9 = (x41^((x42*x43)&x44));

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = INT64_MIN;
	int32_t x50 = -1;
	static volatile int16_t x51 = 4549;
	int16_t x52 = INT16_MAX;

	t10 = (x49^((x50*x51)&x52));

	if (t10 != -9223372036854747589LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t t11 = -19693;

	t11 = (x53^((x54*x55)&x56));

	if (t11 != 65216) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x57 = INT32_MAX;
	uint32_t x58 = 2U;
	uint32_t x59 = UINT32_MAX;
	int64_t x60 = -1LL;
	volatile int64_t t12 = -33LL;

	t12 = (x57^((x58*x59)&x60));

	if (t12 != 2147483649LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x62 = -1LL;
	int64_t x63 = INT64_MAX;
	uint32_t x64 = UINT32_MAX;
	volatile int64_t t13 = -220LL;

	t13 = (x61^((x62*x63)&x64));

	if (t13 != -622LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x69 = UINT32_MAX;
	uint32_t x72 = 3U;

	t14 = (x69^((x70*x71)&x72));

	if (t14 != 4294967294LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x73 = INT64_MAX;
	uint16_t x74 = UINT16_MAX;
	static int16_t x76 = INT16_MIN;
	volatile int64_t t15 = -5010592419LL;

	t15 = (x73^((x74*x75)&x76));

	if (t15 != 9223372036803559423LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = 182293072LL;
	int8_t x78 = -1;
	volatile uint64_t x79 = UINT64_MAX;
	volatile int64_t x80 = INT64_MIN;
	static volatile uint64_t t16 = 22243822752LLU;

	t16 = (x77^((x78*x79)&x80));

	if (t16 != 182293072LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x81 = 11LLU;
	volatile uint64_t x83 = UINT64_MAX;
	uint64_t x84 = UINT64_MAX;

	t17 = (x81^((x82*x83)&x84));

	if (t17 != 10LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x86 = -1;
	int8_t x87 = 0;
	int64_t x88 = INT64_MIN;
	volatile int64_t t18 = 0LL;

	t18 = (x85^((x86*x87)&x88));

	if (t18 != 65535LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x89 = -6605LL;
	uint32_t x90 = UINT32_MAX;
	int8_t x91 = INT8_MIN;
	uint16_t x92 = 0U;
	int64_t t19 = -1188813LL;

	t19 = (x89^((x90*x91)&x92));

	if (t19 != -6605LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x93 = 183686424684656LLU;
	int32_t x94 = -106;
	int32_t x96 = 4046;
	static uint64_t t20 = 2560763149803381288LLU;

	t20 = (x93^((x94*x95)&x96));

	if (t20 != 183686424686516LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x97 = 5U;
	int64_t x98 = -1LL;
	static volatile int32_t x99 = INT32_MAX;
	volatile int8_t x100 = INT8_MIN;
	volatile int64_t t21 = -265235613LL;

	t21 = (x97^((x98*x99)&x100));

	if (t21 != -2147483643LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint8_t x101 = UINT8_MAX;
	int8_t x102 = 3;
	int16_t x103 = -1;
	uint8_t x104 = 3U;

	t22 = (x101^((x102*x103)&x104));

	if (t22 != 254) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x110 = -1;
	uint32_t x111 = 39U;
	static volatile uint64_t t23 = 59625088657LLU;

	t23 = (x109^((x110*x111)&x112));

	if (t23 != 4294960094LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x114 = 9U;
	int16_t x115 = INT16_MIN;
	int8_t x116 = INT8_MIN;
	uint64_t t24 = 209LLU;

	t24 = (x113^((x114*x115)&x116));

	if (t24 != 18446744069414879231LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x117 = INT16_MIN;
	int64_t x118 = -741379LL;
	uint8_t x119 = 21U;
	int8_t x120 = 9;
	static volatile int64_t t25 = -20200LL;

	t25 = (x117^((x118*x119)&x120));

	if (t25 != -32767LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x125 = UINT32_MAX;
	volatile uint16_t x127 = 494U;
	static uint32_t t26 = 2551U;

	t26 = (x125^((x126*x127)&x128));

	if (t26 != 4294962849U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x129 = 1U;
	int8_t x130 = INT8_MAX;
	int8_t x132 = -1;
	int32_t t27 = -7184;

	t27 = (x129^((x130*x131)&x132));

	if (t27 != 4161408) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x133 = -508;
	static int8_t x134 = INT8_MAX;
	volatile uint64_t x136 = 13885438125LLU;
	static uint64_t t28 = 679572279088LLU;

	t28 = (x133^((x134*x135)&x136));

	if (t28 != 18446744073709551276LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x137 = UINT64_MAX;
	static volatile uint32_t x138 = 1511596U;
	int32_t x139 = -1;

	t29 = (x137^((x138*x139)&x140));

	if (t29 != 18446744073709551083LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x141 = -1;
	int8_t x142 = 2;
	uint32_t x143 = 5260678U;
	volatile int32_t x144 = -75542639;
	volatile uint32_t t30 = 47606U;

	t30 = (x141^((x142*x143)&x144));

	if (t30 != 4292867327U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x145 = 15U;
	int8_t x146 = INT8_MIN;
	uint32_t x147 = UINT32_MAX;
	volatile int8_t x148 = 24;

	t31 = (x145^((x146*x147)&x148));

	if (t31 != 15U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x149 = INT16_MAX;
	int16_t x151 = 97;
	int16_t x152 = INT16_MIN;
	volatile int64_t t32 = -138779894286939LL;

	t32 = (x149^((x150*x151)&x152));

	if (t32 != 10518527LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x153 = INT32_MAX;
	int64_t x154 = -1LL;
	int64_t x155 = -59913716060909LL;
	volatile int16_t x156 = 0;

	t33 = (x153^((x154*x155)&x156));

	if (t33 != 2147483647LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x157 = -17;
	static int64_t x158 = -1LL;
	int16_t x159 = -2;
	static int8_t x160 = INT8_MIN;
	volatile int64_t t34 = 830771884201LL;

	t34 = (x157^((x158*x159)&x160));

	if (t34 != -17LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x162 = 7025069052963966LLU;
	static int16_t x163 = -1;
	uint16_t x164 = UINT16_MAX;
	volatile uint64_t t35 = 1646738LLU;

	t35 = (x161^((x162*x163)&x164));

	if (t35 != 2605130066791340LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x165 = UINT16_MAX;
	int64_t x166 = -99423618808335962LL;
	volatile int32_t x167 = -1;
	int8_t x168 = INT8_MIN;
	int64_t t36 = -6939372867789439LL;

	t36 = (x165^((x166*x167)&x168));

	if (t36 != 99423618808295935LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x173 = -1;
	int16_t x174 = 15;
	static int16_t x175 = -1;
	uint16_t x176 = 4425U;

	t37 = (x173^((x174*x175)&x176));

	if (t37 != -4418) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x178 = INT16_MIN;
	uint16_t x179 = 7U;
	int16_t x180 = -1079;
	static int64_t t38 = 151482LL;

	t38 = (x177^((x178*x179)&x180));

	if (t38 != -9223372036854546433LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x181 = INT32_MIN;
	int16_t x182 = 1;
	int64_t t39 = 2527436785317641LL;

	t39 = (x181^((x182*x183)&x184));

	if (t39 != -2147483640LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x189 = 97LL;
	int8_t x192 = INT8_MAX;

	t40 = (x189^((x190*x191)&x192));

	if (t40 != 97LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x193 = INT16_MIN;
	int8_t x196 = 42;
	uint32_t t41 = 23U;

	t41 = (x193^((x194*x195)&x196));

	if (t41 != 4294934528U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x197 = INT8_MIN;
	volatile uint16_t x199 = UINT16_MAX;
	int32_t t42 = 24133120;

	t42 = (x197^((x198*x199)&x200));

	if (t42 != -786316) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x201 = INT16_MIN;
	uint16_t x204 = UINT16_MAX;

	t43 = (x201^((x202*x203)&x204));

	if (t43 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x205 = INT32_MAX;
	uint32_t x206 = UINT32_MAX;
	int8_t x207 = -1;
	volatile int16_t x208 = INT16_MIN;

	t44 = (x205^((x206*x207)&x208));

	if (t44 != 2147483647U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x209 = 15660U;
	static int16_t x210 = INT16_MIN;
	uint16_t x212 = 4972U;
	volatile int32_t t45 = -1;

	t45 = (x209^((x210*x211)&x212));

	if (t45 != 15660) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x213 = 0;
	uint8_t x214 = UINT8_MAX;
	static uint64_t x215 = 9LLU;
	int64_t x216 = -1LL;
	static uint64_t t46 = 23LLU;

	t46 = (x213^((x214*x215)&x216));

	if (t46 != 2295LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int16_t x222 = 2707;
	static int64_t t47 = -15LL;

	t47 = (x221^((x222*x223)&x224));

	if (t47 != -88083388LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x225 = INT16_MIN;
	static int64_t x226 = -1LL;
	uint8_t x227 = 2U;
	volatile int8_t x228 = -1;
	int64_t t48 = 16587LL;

	t48 = (x225^((x226*x227)&x228));

	if (t48 != 32766LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x233 = INT8_MIN;
	int64_t x234 = -1LL;
	int64_t x235 = -21423945375LL;
	uint8_t x236 = 12U;
	int64_t t49 = 58LL;

	t49 = (x233^((x234*x235)&x236));

	if (t49 != -116LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x250 = INT8_MIN;
	int8_t x251 = 0;
	int16_t x252 = INT16_MIN;
	int32_t t50 = INT32_MIN;

	t50 = (x249^((x250*x251)&x252));

	if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x253 = 75U;
	int8_t x254 = 0;
	volatile int64_t x255 = 846263LL;
	static int16_t x256 = INT16_MIN;
	int64_t t51 = 16LL;

	t51 = (x253^((x254*x255)&x256));

	if (t51 != 75LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x262 = 1;
	int64_t x264 = 94780715166347LL;
	static volatile int64_t t52 = 646378573621849678LL;

	t52 = (x261^((x262*x263)&x264));

	if (t52 != 94777671876468LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x269 = UINT16_MAX;
	int32_t x272 = -194832;
	volatile uint64_t t53 = 311351918717451771LLU;

	t53 = (x269^((x270*x271)&x272));

	if (t53 != 325733840218290623LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x273 = INT16_MIN;
	static volatile uint8_t x274 = 2U;
	int8_t x275 = INT8_MIN;
	static volatile int8_t x276 = INT8_MAX;
	static int32_t t54 = -174;

	t54 = (x273^((x274*x275)&x276));

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x277 = -10148992699LL;
	uint16_t x279 = UINT16_MAX;
	uint8_t x280 = UINT8_MAX;

	t55 = (x277^((x278*x279)&x280));

	if (t55 != -10148992679LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x281 = -13;
	volatile int64_t x284 = -83497895770LL;
	volatile int64_t t56 = 135902284LL;

	t56 = (x281^((x282*x283)&x284));

	if (t56 != -2308109LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x285 = UINT16_MAX;
	int32_t x286 = -1;
	volatile int16_t x287 = -368;
	int64_t x288 = INT64_MIN;

	t57 = (x285^((x286*x287)&x288));

	if (t57 != 65535LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x289 = 16127337U;
	int16_t x290 = INT16_MIN;
	int8_t x291 = INT8_MAX;
	volatile uint16_t x292 = 0U;
	uint32_t t58 = 300153241U;

	t58 = (x289^((x290*x291)&x292));

	if (t58 != 16127337U) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x293 = INT32_MIN;
	int32_t x294 = -142;
	int16_t x295 = -1;
	int64_t x296 = 6727059LL;
	int64_t t59 = -400804924046LL;

	t59 = (x293^((x294*x295)&x296));

	if (t59 != -2147483518LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x305 = 844731207785779003LL;
	volatile int32_t x306 = 2;
	int8_t x308 = INT8_MIN;
	volatile int64_t t60 = -220LL;

	t60 = (x305^((x306*x307)&x308));

	if (t60 != 844731207785778875LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x317 = 7;
	volatile uint16_t x318 = 9369U;
	uint64_t x320 = UINT64_MAX;
	volatile uint64_t t61 = 45842004511LLU;

	t61 = (x317^((x318*x319)&x320));

	if (t61 != 18446744073709542240LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x321 = INT8_MIN;
	uint32_t x323 = 6674227U;
	int8_t x324 = INT8_MIN;
	volatile uint32_t t62 = 1U;

	t62 = (x321^((x322*x323)&x324));

	if (t62 != 3952705408U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x326 = INT8_MIN;
	static uint64_t x327 = 2LLU;
	uint8_t x328 = 87U;

	t63 = (x325^((x326*x327)&x328));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x329 = -1LL;
	int32_t x330 = -1;
	static int64_t x331 = 636716LL;
	volatile int32_t x332 = INT32_MAX;
	static volatile int64_t t64 = -1573659756582LL;

	t64 = (x329^((x330*x331)&x332));

	if (t64 != -2146846933LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x341 = -1;
	uint32_t x343 = 1392560U;
	volatile uint32_t t65 = 8272549U;

	t65 = (x341^((x342*x343)&x344));

	if (t65 != 1392639U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x345 = -1855;
	int8_t x346 = INT8_MIN;
	static uint64_t x347 = 28LLU;
	uint64_t t66 = 37965582LLU;

	t66 = (x345^((x346*x347)&x348));

	if (t66 != 9223372036854778561LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x349 = -1;
	int64_t x350 = -1648637300520LL;
	static int8_t x351 = 2;
	static int8_t x352 = INT8_MIN;
	static int64_t t67 = 1588269162LL;

	t67 = (x349^((x350*x351)&x352));

	if (t67 != 3297274601087LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x357 = UINT32_MAX;
	static int32_t x358 = -1;
	uint8_t x359 = 3U;
	volatile int64_t t68 = 8510874116389641LL;

	t68 = (x357^((x358*x359)&x360));

	if (t68 != 11727375759406LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x361 = INT64_MIN;
	int8_t x362 = INT8_MIN;
	int64_t x363 = -1LL;
	volatile int8_t x364 = -1;
	volatile int64_t t69 = 3410127926LL;

	t69 = (x361^((x362*x363)&x364));

	if (t69 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x365 = -1;
	static uint16_t x366 = UINT16_MAX;
	uint16_t x367 = 1803U;
	volatile int16_t x368 = -147;
	volatile int32_t t70 = -654630;

	t70 = (x365^((x366*x367)&x368));

	if (t70 != -118159462) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x369 = INT64_MAX;
	volatile uint64_t x370 = UINT64_MAX;
	int64_t x371 = INT64_MIN;
	uint64_t x372 = UINT64_MAX;
	uint64_t t71 = UINT64_MAX;

	t71 = (x369^((x370*x371)&x372));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x373 = 7U;
	static volatile uint64_t x375 = 25928133577844LLU;
	volatile uint64_t t72 = 6017206768114316LLU;

	t72 = (x373^((x374*x375)&x376));

	if (t72 != 17597130992630759431LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x377 = INT32_MAX;
	static int8_t x378 = INT8_MIN;
	volatile int64_t x379 = -1LL;
	int64_t t73 = -225369793654LL;

	t73 = (x377^((x378*x379)&x380));

	if (t73 != 2147483519LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x381 = -27264LL;
	static int16_t x382 = -458;
	int8_t x383 = -9;
	int32_t x384 = INT32_MAX;
	volatile int64_t t74 = 2LL;

	t74 = (x381^((x382*x383)&x384));

	if (t74 != -31334LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x385 = INT16_MAX;
	int8_t x387 = INT8_MIN;
	static int64_t x388 = INT64_MIN;
	int64_t t75 = -13066423474487LL;

	t75 = (x385^((x386*x387)&x388));

	if (t75 != 32767LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x389 = 981U;
	volatile int16_t x390 = INT16_MIN;
	uint8_t x391 = 40U;

	t76 = (x389^((x390*x391)&x392));

	if (t76 != 981U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x393 = INT32_MIN;
	int8_t x394 = -12;
	uint64_t x395 = UINT64_MAX;

	t77 = (x393^((x394*x395)&x396));

	if (t77 != 18446744071562067980LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x397 = INT64_MIN;
	static uint64_t x398 = 508322804629511363LLU;
	uint32_t x399 = 1108420899U;
	int16_t x400 = INT16_MIN;
	static uint64_t t78 = 1041LLU;

	t78 = (x397^((x398*x399)&x400));

	if (t78 != 12319574767900688384LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x401 = 1;
	static int16_t x402 = -1;
	uint32_t x403 = 66U;
	int64_t x404 = INT64_MIN;
	volatile int64_t t79 = 10406LL;

	t79 = (x401^((x402*x403)&x404));

	if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x405 = UINT64_MAX;
	uint64_t x406 = 2895733211744374795LLU;
	uint8_t x407 = UINT8_MAX;
	int16_t x408 = -1;
	volatile uint64_t t80 = 968730227733767999LLU;

	t80 = (x405^((x406*x407)&x408));

	if (t80 != 17904538027276043530LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x413 = -1;
	uint32_t x415 = 15429U;
	uint8_t x416 = UINT8_MAX;
	uint64_t t81 = 192226LLU;

	t81 = (x413^((x414*x415)&x416));

	if (t81 != 18446744073709551428LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x418 = INT8_MIN;
	volatile uint64_t x419 = 1434556760760184963LLU;
	uint32_t x420 = UINT32_MAX;
	static uint64_t t82 = 407LLU;

	t82 = (x417^((x418*x419)&x420));

	if (t82 != 18446744073181576832LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x422 = -1;
	volatile int8_t x423 = -15;
	static int8_t x424 = INT8_MAX;
	static volatile int32_t t83 = 797733;

	t83 = (x421^((x422*x423)&x424));

	if (t83 != 65960945) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x425 = -79435326888361017LL;
	static uint32_t x426 = 88U;
	static uint32_t x427 = 43266U;
	int32_t x428 = 2751;
	volatile int64_t t84 = 329236547042LL;

	t84 = (x425^((x426*x427)&x428));

	if (t84 != -79435326888359049LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x429 = 0U;
	uint8_t x430 = UINT8_MAX;
	static int16_t x432 = -1;

	t85 = (x429^((x430*x431)&x432));

	if (t85 != 87711585) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x433 = UINT64_MAX;
	static uint64_t x434 = 15097056304019445LLU;
	uint16_t x435 = 880U;
	int16_t x436 = INT16_MAX;
	uint64_t t86 = 36766834136661LLU;

	t86 = (x433^((x434*x435)&x436));

	if (t86 != 18446744073709528527LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x441 = 6;
	uint32_t x442 = 1735U;
	int8_t x443 = -1;
	uint8_t x444 = UINT8_MAX;
	volatile uint32_t t87 = 14555134U;

	t87 = (x441^((x442*x443)&x444));

	if (t87 != 63U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x445 = 126360155U;
	int64_t x446 = 23012655LL;
	uint8_t x447 = 0U;
	int8_t x448 = -1;
	volatile int64_t t88 = 7326676667LL;

	t88 = (x445^((x446*x447)&x448));

	if (t88 != 126360155LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x449 = -1;
	int16_t x451 = INT16_MAX;
	static int32_t t89 = 415518874;

	t89 = (x449^((x450*x451)&x452));

	if (t89 != -96236680) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x457 = 52728276LLU;
	int8_t x459 = INT8_MAX;
	volatile int32_t x460 = INT32_MIN;
	volatile uint64_t t90 = 2368083242284946LLU;

	t90 = (x457^((x458*x459)&x460));

	if (t90 != 52728276LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x461 = 3901U;
	volatile uint8_t x462 = 34U;
	int8_t x463 = -1;
	int64_t x464 = INT64_MAX;
	volatile int64_t t91 = -26136136LL;

	t91 = (x461^((x462*x463)&x464));

	if (t91 != 9223372036854771939LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x465 = INT64_MAX;
	int64_t x467 = INT64_MIN;
	int8_t x468 = INT8_MIN;
	int64_t t92 = -43506478358LL;

	t92 = (x465^((x466*x467)&x468));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x469 = -1LL;
	static int8_t x470 = -1;
	int32_t x471 = INT32_MAX;
	uint32_t x472 = 4276U;
	int64_t t93 = 25181658412924599LL;

	t93 = (x469^((x470*x471)&x472));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x482 = -1LL;
	volatile uint32_t x483 = UINT32_MAX;
	uint16_t x484 = 0U;
	volatile int64_t t94 = 5021061LL;

	t94 = (x481^((x482*x483)&x484));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x485 = 181229566;
	uint32_t x486 = 4U;
	static int64_t x487 = -15540LL;
	int64_t x488 = 198LL;

	t95 = (x485^((x486*x487)&x488));

	if (t95 != 181229566LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x490 = 10;
	static int16_t x491 = 2369;
	static int64_t x492 = -1LL;
	static int64_t t96 = 679358814024LL;

	t96 = (x489^((x490*x491)&x492));

	if (t96 != -2147459958LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x493 = INT16_MIN;
	static uint32_t x494 = 11829U;
	static int32_t x495 = -1;
	int64_t x496 = 585331992131380321LL;
	volatile int64_t t97 = 11LL;

	t97 = (x493^((x494*x495)&x496));

	if (t97 != -2057961407LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x497 = 50;
	static int16_t x498 = INT16_MIN;
	int16_t x499 = -1;
	uint8_t x500 = 1U;
	int32_t t98 = -20;

	t98 = (x497^((x498*x499)&x500));

	if (t98 != 50) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x503 = INT16_MIN;
	int32_t t99 = 32112454;

	t99 = (x501^((x502*x503)&x504));

	if (t99 != 32767) { NG(); } else { ; }
	
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

