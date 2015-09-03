#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = INT32_MAX;
volatile int32_t x4 = INT32_MIN;
volatile int64_t t1 = 3240721550143613LL;
uint32_t x11 = 2U;
volatile int64_t t2 = -6590459764LL;
uint32_t x16 = 96U;
uint8_t x17 = UINT8_MAX;
static int16_t x20 = -643;
static int8_t x22 = INT8_MAX;
uint64_t t5 = UINT64_MAX;
volatile uint16_t x25 = 1U;
int16_t x26 = -1;
int32_t x27 = -5;
volatile int32_t t6 = -6781284;
int8_t x30 = INT8_MIN;
static int32_t x33 = -1531563;
uint32_t x39 = 336122952U;
int64_t x41 = INT64_MIN;
static uint64_t t10 = 852043921LLU;
volatile uint64_t t13 = 796720LLU;
volatile uint32_t x61 = 11U;
int64_t x81 = -1LL;
int32_t x87 = -1;
static uint32_t x94 = UINT32_MAX;
uint64_t x96 = 841LLU;
static int8_t x98 = INT8_MIN;
int32_t x100 = INT32_MIN;
uint16_t x103 = 22U;
int8_t x114 = INT8_MIN;
uint16_t x115 = 2U;
volatile int8_t x116 = INT8_MAX;
int32_t t26 = 377255;
int64_t x123 = -1LL;
static int64_t x126 = -1LL;
int32_t x129 = INT32_MAX;
static volatile int32_t x132 = -5277;
static uint32_t x136 = UINT32_MAX;
static int32_t x142 = -20915;
volatile uint64_t t32 = 374884082894823LLU;
int64_t x146 = INT64_MIN;
volatile int32_t x147 = -330;
int64_t x153 = INT64_MAX;
uint32_t x156 = 808819U;
volatile uint64_t x163 = 66LLU;
uint32_t x164 = UINT32_MAX;
volatile uint32_t x169 = 176U;
int64_t x183 = INT64_MIN;
volatile int64_t x189 = INT64_MIN;
uint8_t x190 = 1U;
int32_t x192 = -1;
volatile int8_t x193 = INT8_MIN;
int64_t x197 = INT64_MAX;
volatile uint64_t t43 = 4851300LLU;
volatile uint32_t t46 = 0U;
volatile int32_t t48 = -16009231;
int32_t x232 = 1563199;
uint64_t x233 = UINT64_MAX;
int8_t x245 = INT8_MIN;
uint64_t x250 = UINT64_MAX;
uint16_t x251 = UINT16_MAX;
uint32_t t55 = 545141605U;
uint8_t x259 = UINT8_MAX;
static volatile int64_t x265 = INT64_MAX;
int8_t x273 = 1;
volatile int32_t x278 = -1;
uint8_t x282 = 59U;
int64_t x283 = INT64_MAX;
int32_t x284 = -7253859;
int16_t x290 = -59;
static volatile int16_t x292 = INT16_MIN;
int64_t x293 = INT64_MIN;
uint64_t x294 = UINT64_MAX;
uint64_t x296 = 7226900277LLU;
uint16_t x297 = 31227U;
int8_t x305 = -1;
volatile int32_t x306 = INT32_MIN;
static uint32_t x312 = UINT32_MAX;
static int32_t x315 = INT32_MIN;
volatile int64_t t69 = 33070152416LL;
int8_t x319 = INT8_MIN;
int64_t t72 = 3528525914LL;
int64_t x334 = INT64_MIN;
int64_t x337 = 980LL;
uint8_t x346 = 19U;
int8_t x347 = -51;
static int16_t x348 = INT16_MIN;
volatile int32_t x352 = INT32_MIN;
volatile int32_t t77 = -42;
uint64_t x354 = 494553702712LLU;
int64_t x356 = INT64_MIN;
static volatile uint8_t x359 = 113U;
volatile int64_t t79 = 82282124803749LL;
uint64_t x363 = UINT64_MAX;
uint8_t x365 = UINT8_MAX;
uint64_t t81 = 142132LLU;
int64_t x371 = -1LL;
volatile int64_t t82 = -11LL;
static int16_t x373 = -669;
volatile int8_t x385 = INT8_MIN;
volatile int32_t x386 = INT32_MIN;
volatile int32_t x389 = INT32_MIN;
int32_t x392 = -58;
int16_t x395 = 41;
int64_t x398 = -1LL;
static uint64_t x416 = 88LLU;
static int64_t x428 = INT64_MAX;
int8_t x433 = 1;
int16_t x436 = INT16_MAX;
int32_t x437 = INT32_MIN;
uint32_t t98 = 18133U;


void f0(void) {
	int64_t x1 = INT64_MIN;
	static uint32_t x3 = 5U;
	int64_t t0 = -717LL;

	t0 = (x1^(x2-(x3/x4)));

	if (t0 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	int64_t x6 = -1LL;
	static volatile int8_t x7 = -1;
	uint16_t x8 = 218U;

	t1 = (x5^(x6-(x7/x8)));

	if (t1 != -65536LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int64_t x10 = -1LL;
	volatile int8_t x12 = -1;

	t2 = (x9^(x10-(x11/x12)));

	if (t2 != 127LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 415948U;
	int32_t x14 = INT32_MAX;
	int32_t x15 = INT32_MAX;
	uint32_t t3 = 97646U;

	t3 = (x13^(x14-(x15/x16)));

	if (t3 != 2125263462U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = 221764949;
	volatile int32_t x19 = INT32_MAX;
	static int32_t t4 = 1012262;

	t4 = (x17^(x18-(x19/x20)));

	if (t4 != 225104799) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x21 = INT8_MIN;
	int32_t x23 = 224869;
	uint64_t x24 = UINT64_MAX;

	t5 = (x21^(x22-(x23/x24)));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x28 = 3U;

	t6 = (x25^(x26-(x27/x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 124787843;
	volatile uint64_t x31 = 1022385614175805LLU;
	static volatile int64_t x32 = INT64_MIN;
	volatile uint64_t t7 = 232LLU;

	t7 = (x29^(x30-(x31/x32)));

	if (t7 != 18446744073584763651LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x34 = 4590509913309252140LLU;
	static volatile int16_t x35 = -1;
	int64_t x36 = INT64_MIN;
	uint64_t t8 = 730LLU;

	t8 = (x33^(x34-(x35/x36)));

	if (t8 != 13856234160401525625LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = INT32_MAX;
	volatile int32_t x38 = 219421;
	int64_t x40 = INT64_MAX;
	int64_t t9 = -4462928886LL;

	t9 = (x37^(x38-(x39/x40)));

	if (t9 != 2147264226LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x42 = UINT64_MAX;
	int8_t x43 = 1;
	int8_t x44 = INT8_MIN;

	t10 = (x41^(x42-(x43/x44)));

	if (t10 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	volatile int16_t x46 = -14;
	uint8_t x47 = 2U;
	int64_t x48 = INT64_MAX;
	volatile int64_t t11 = 5058190154LL;

	t11 = (x45^(x46-(x47/x48)));

	if (t11 != 9223372036854775794LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = INT16_MAX;
	static int16_t x50 = -1;
	int16_t x51 = INT16_MIN;
	uint16_t x52 = 3U;
	int32_t t12 = -5;

	t12 = (x49^(x50-(x51/x52)));

	if (t12 != 21846) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = INT8_MAX;
	volatile int64_t x54 = INT64_MIN;
	int32_t x55 = -316973377;
	uint64_t x56 = UINT64_MAX;

	t13 = (x53^(x54-(x55/x56)));

	if (t13 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x57 = 1U;
	volatile int64_t x58 = INT64_MIN;
	int16_t x59 = INT16_MIN;
	static int16_t x60 = INT16_MAX;
	volatile int64_t t14 = INT64_MIN;

	t14 = (x57^(x58-(x59/x60)));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x62 = -1;
	int16_t x63 = 62;
	int64_t x64 = -1LL;
	volatile int64_t t15 = -752313723044LL;

	t15 = (x61^(x62-(x63/x64)));

	if (t15 != 54LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	int8_t x66 = -1;
	int32_t x67 = -710595;
	volatile uint16_t x68 = 7U;
	volatile int32_t t16 = 1;

	t16 = (x65^(x66-(x67/x68)));

	if (t16 != -127864) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -57LL;
	static int32_t x70 = -1;
	volatile int8_t x71 = INT8_MAX;
	uint32_t x72 = UINT32_MAX;
	int64_t t17 = -734601318264LL;

	t17 = (x69^(x70-(x71/x72)));

	if (t17 != -4294967240LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x77 = UINT64_MAX;
	static uint16_t x78 = 3302U;
	int32_t x79 = -1;
	uint32_t x80 = 40U;
	static volatile uint64_t t18 = 156LLU;

	t18 = (x77^(x78-(x79/x80)));

	if (t18 != 18446744069521955199LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x82 = 7;
	uint32_t x83 = 408246U;
	int16_t x84 = INT16_MIN;
	volatile int64_t t19 = 1675118070LL;

	t19 = (x81^(x82-(x83/x84)));

	if (t19 != -8LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = -1;
	int64_t x86 = INT64_MIN;
	static volatile int64_t x88 = -318821LL;
	static volatile int64_t t20 = INT64_MAX;

	t20 = (x85^(x86-(x87/x88)));

	if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MIN;
	uint64_t x90 = UINT64_MAX;
	static uint32_t x91 = 2135728579U;
	uint64_t x92 = UINT64_MAX;
	volatile uint64_t t21 = 53513663458169702LLU;

	t21 = (x89^(x90-(x91/x92)));

	if (t21 != 127LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = INT16_MAX;
	int32_t x95 = INT32_MIN;
	volatile uint64_t t22 = 8324030051LLU;

	t22 = (x93^(x94-(x95/x96)));

	if (t22 != 18424809780654253697LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = INT32_MIN;
	int64_t x99 = INT64_MAX;
	volatile int64_t t23 = -393553949595LL;

	t23 = (x97^(x98-(x99/x100)));

	if (t23 != -2147483777LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = -176LL;
	int16_t x102 = INT16_MAX;
	volatile uint64_t x104 = 6437722955LLU;
	volatile uint64_t t24 = 9748666LLU;

	t24 = (x101^(x102-(x103/x104)));

	if (t24 != 18446744073709519023LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = -1LL;
	volatile int16_t x106 = -1841;
	int64_t x107 = 2106189354034692053LL;
	volatile int16_t x108 = INT16_MIN;
	volatile int64_t t25 = 1385574710LL;

	t25 = (x105^(x106-(x107/x108)));

	if (t25 != -64275798155956LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x113 = 1U;

	t26 = (x113^(x114-(x115/x116)));

	if (t26 != -127) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x121 = 26526U;
	int32_t x122 = INT32_MIN;
	static int32_t x124 = INT32_MIN;
	int64_t t27 = 7123LL;

	t27 = (x121^(x122-(x123/x124)));

	if (t27 != -2147457122LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x125 = INT32_MIN;
	static int64_t x127 = INT64_MIN;
	volatile int16_t x128 = INT16_MIN;
	int64_t t28 = 224LL;

	t28 = (x125^(x126-(x127/x128)));

	if (t28 != 281477124194303LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x130 = 1545774824202559LLU;
	int8_t x131 = 15;
	uint64_t t29 = 26LLU;

	t29 = (x129^(x130-(x131/x132)));

	if (t29 != 1545774847712960LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = INT32_MIN;
	int64_t x134 = INT64_MIN;
	uint8_t x135 = UINT8_MAX;
	static int64_t t30 = 256854106353LL;

	t30 = (x133^(x134-(x135/x136)));

	if (t30 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x137 = -1;
	uint16_t x138 = 45U;
	volatile uint16_t x139 = UINT16_MAX;
	uint32_t x140 = 369U;
	static uint32_t t31 = 1883602U;

	t31 = (x137^(x138-(x139/x140)));

	if (t31 != 131U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x141 = -1;
	static int8_t x143 = INT8_MAX;
	uint64_t x144 = UINT64_MAX;

	t32 = (x141^(x142-(x143/x144)));

	if (t32 != 20914LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x145 = UINT8_MAX;
	uint64_t x148 = 1267562254659179188LLU;
	uint64_t t33 = 3696978329LLU;

	t33 = (x145^(x146-(x147/x148)));

	if (t33 != 9223372036854775565LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x149 = -1;
	int8_t x150 = INT8_MIN;
	static int16_t x151 = -1;
	int64_t x152 = INT64_MIN;
	int64_t t34 = -1304LL;

	t34 = (x149^(x150-(x151/x152)));

	if (t34 != 127LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x154 = 2;
	int16_t x155 = -1;
	volatile int64_t t35 = -7658343LL;

	t35 = (x153^(x154-(x155/x156)));

	if (t35 != 9223372032559813819LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x161 = 405130169938496LLU;
	int16_t x162 = -5091;
	uint64_t t36 = 318726299528515LLU;

	t36 = (x161^(x162-(x163/x164)));

	if (t36 != 18446338943539617373LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x165 = UINT8_MAX;
	static volatile uint32_t x166 = 31U;
	int64_t x167 = -1LL;
	static int8_t x168 = -1;
	volatile int64_t t37 = -224055815LL;

	t37 = (x165^(x166-(x167/x168)));

	if (t37 != 225LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x170 = 3;
	volatile uint16_t x171 = UINT16_MAX;
	uint64_t x172 = UINT64_MAX;
	static uint64_t t38 = 1220761245LLU;

	t38 = (x169^(x170-(x171/x172)));

	if (t38 != 179LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x181 = INT16_MIN;
	int8_t x182 = INT8_MIN;
	int64_t x184 = -5095415153141LL;
	int64_t t39 = -132495026982LL;

	t39 = (x181^(x182-(x183/x184)));

	if (t39 != 1826989LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x185 = INT16_MIN;
	int32_t x186 = 13613;
	volatile int64_t x187 = -1LL;
	int16_t x188 = INT16_MIN;
	volatile int64_t t40 = -490198605LL;

	t40 = (x185^(x186-(x187/x188)));

	if (t40 != -19155LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x191 = UINT32_MAX;
	volatile int64_t t41 = INT64_MIN;

	t41 = (x189^(x190-(x191/x192)));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x194 = INT32_MIN;
	uint32_t x195 = UINT32_MAX;
	uint8_t x196 = 2U;
	uint32_t t42 = 10U;

	t42 = (x193^(x194-(x195/x196)));

	if (t42 != 4294967169U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x198 = 4U;
	static uint64_t x199 = 48929380573512LLU;
	int8_t x200 = INT8_MIN;

	t43 = (x197^(x198-(x199/x200)));

	if (t43 != 9223372036854775803LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x209 = 1418;
	int8_t x210 = INT8_MAX;
	static volatile int16_t x211 = -8;
	uint32_t x212 = UINT32_MAX;
	volatile uint32_t t44 = 301442U;

	t44 = (x209^(x210-(x211/x212)));

	if (t44 != 1525U) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x213 = -1496;
	int32_t x214 = -1;
	volatile uint8_t x215 = 41U;
	volatile int32_t x216 = INT32_MIN;
	int32_t t45 = -74;

	t45 = (x213^(x214-(x215/x216)));

	if (t45 != 1495) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x217 = UINT32_MAX;
	uint16_t x218 = 3U;
	int16_t x219 = -1;
	int16_t x220 = INT16_MAX;

	t46 = (x217^(x218-(x219/x220)));

	if (t46 != 4294967292U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x221 = INT64_MAX;
	int64_t x222 = -1LL;
	int32_t x223 = -1;
	volatile int64_t x224 = -1LL;
	volatile int64_t t47 = 102218145LL;

	t47 = (x221^(x222-(x223/x224)));

	if (t47 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x225 = -23;
	volatile int16_t x226 = -1;
	volatile int32_t x227 = 0;
	int32_t x228 = INT32_MIN;

	t48 = (x225^(x226-(x227/x228)));

	if (t48 != 22) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x229 = INT8_MAX;
	int16_t x230 = INT16_MIN;
	static int8_t x231 = INT8_MAX;
	static int32_t t49 = -28064669;

	t49 = (x229^(x230-(x231/x232)));

	if (t49 != -32641) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x234 = UINT16_MAX;
	static uint32_t x235 = UINT32_MAX;
	volatile int32_t x236 = INT32_MIN;
	uint64_t t50 = 1436846920319599LLU;

	t50 = (x233^(x234-(x235/x236)));

	if (t50 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x237 = 0U;
	int16_t x238 = -1;
	uint16_t x239 = UINT16_MAX;
	int8_t x240 = INT8_MIN;
	volatile int32_t t51 = 11066750;

	t51 = (x237^(x238-(x239/x240)));

	if (t51 != 510) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x241 = UINT16_MAX;
	int32_t x242 = -1;
	int16_t x243 = INT16_MIN;
	uint32_t x244 = 23166U;
	uint32_t t52 = 9U;

	t52 = (x241^(x242-(x243/x244)));

	if (t52 != 4294825014U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x246 = 96793U;
	uint64_t x247 = 1863454092249245696LLU;
	int64_t x248 = INT64_MIN;
	uint64_t t53 = 248911132309178583LLU;

	t53 = (x245^(x246-(x247/x248)));

	if (t53 != 18446744073709454745LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x249 = 400;
	volatile int32_t x252 = INT32_MAX;
	volatile uint64_t t54 = 44405087162LLU;

	t54 = (x249^(x250-(x251/x252)));

	if (t54 != 18446744073709551215LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x253 = 8580U;
	static uint32_t x254 = 936062U;
	uint16_t x255 = 1U;
	volatile uint16_t x256 = UINT16_MAX;

	t55 = (x253^(x254-(x255/x256)));

	if (t55 != 944634U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x257 = INT64_MIN;
	int16_t x258 = INT16_MIN;
	int32_t x260 = INT32_MAX;
	static volatile int64_t t56 = 28392335767LL;

	t56 = (x257^(x258-(x259/x260)));

	if (t56 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x261 = -1LL;
	static volatile int32_t x262 = INT32_MIN;
	int16_t x263 = 6193;
	int32_t x264 = INT32_MAX;
	volatile int64_t t57 = -301842486522216LL;

	t57 = (x261^(x262-(x263/x264)));

	if (t57 != 2147483647LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x266 = INT16_MIN;
	int64_t x267 = -1LL;
	uint64_t x268 = 9LLU;
	uint64_t t58 = 19538LLU;

	t58 = (x265^(x266-(x267/x268)));

	if (t58 != 11273010267266980976LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x269 = 3U;
	int32_t x270 = 403835078;
	int8_t x271 = INT8_MAX;
	int16_t x272 = INT16_MIN;
	volatile int32_t t59 = 216753;

	t59 = (x269^(x270-(x271/x272)));

	if (t59 != 403835077) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x274 = 428U;
	static int32_t x275 = -309377;
	static int16_t x276 = INT16_MIN;
	uint32_t t60 = 1U;

	t60 = (x273^(x274-(x275/x276)));

	if (t60 != 418U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x277 = INT64_MAX;
	static int16_t x279 = INT16_MIN;
	int32_t x280 = 9635973;
	volatile int64_t t61 = INT64_MIN;

	t61 = (x277^(x278-(x279/x280)));

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint16_t x281 = 26U;
	int64_t t62 = 41841LL;

	t62 = (x281^(x282-(x283/x284)));

	if (t62 != 1271512451109LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x289 = 2U;
	volatile int8_t x291 = -1;
	static int32_t t63 = -603630;

	t63 = (x289^(x290-(x291/x292)));

	if (t63 != -57) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x295 = 2551154073886034LLU;
	uint64_t t64 = 1235934490LLU;

	t64 = (x293^(x294-(x295/x296)));

	if (t64 != 9223372036854422799LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x298 = -1469633775931LL;
	volatile int8_t x299 = 0;
	uint16_t x300 = UINT16_MAX;
	static int64_t t65 = -121083149219495408LL;

	t65 = (x297^(x298-(x299/x300)));

	if (t65 != -1469633769666LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x301 = 12229U;
	uint16_t x302 = UINT16_MAX;
	int16_t x303 = INT16_MIN;
	static int64_t x304 = 246991952060LL;
	volatile int64_t t66 = 5929127LL;

	t66 = (x301^(x302-(x303/x304)));

	if (t66 != 53306LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x307 = 26138LL;
	int32_t x308 = INT32_MAX;
	volatile int64_t t67 = -177264680070515744LL;

	t67 = (x305^(x306-(x307/x308)));

	if (t67 != 2147483647LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x309 = -1;
	uint32_t x310 = UINT32_MAX;
	int16_t x311 = INT16_MIN;
	uint32_t t68 = 1236U;

	t68 = (x309^(x310-(x311/x312)));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int64_t x313 = -3889LL;
	int32_t x314 = INT32_MAX;
	int64_t x316 = -1LL;

	t69 = (x313^(x314-(x315/x316)));

	if (t69 != 3888LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x317 = INT32_MIN;
	static int64_t x318 = INT64_MIN;
	uint16_t x320 = UINT16_MAX;
	int64_t t70 = -1119LL;

	t70 = (x317^(x318-(x319/x320)));

	if (t70 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x325 = INT16_MAX;
	static int64_t x326 = 4023156LL;
	static uint64_t x327 = 78392681597367214LLU;
	volatile int32_t x328 = INT32_MIN;
	uint64_t t71 = 63LLU;

	t71 = (x325^(x326-(x327/x328)));

	if (t71 != 4005003LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x329 = INT32_MAX;
	volatile int64_t x330 = INT64_MAX;
	int8_t x331 = INT8_MAX;
	static int64_t x332 = INT64_MAX;

	t72 = (x329^(x330-(x331/x332)));

	if (t72 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x333 = -1LL;
	volatile int64_t x335 = 1LL;
	int32_t x336 = INT32_MAX;
	int64_t t73 = INT64_MAX;

	t73 = (x333^(x334-(x335/x336)));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x338 = INT16_MIN;
	static int16_t x339 = -1;
	uint16_t x340 = 95U;
	volatile int64_t t74 = -1LL;

	t74 = (x337^(x338-(x339/x340)));

	if (t74 != -31788LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x341 = INT64_MIN;
	int32_t x342 = INT32_MIN;
	static uint64_t x343 = 607743835533LLU;
	static uint32_t x344 = 1969949U;
	volatile uint64_t t75 = 3043LLU;

	t75 = (x341^(x342-(x343/x344)));

	if (t75 != 9223372034706983653LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x345 = UINT64_MAX;
	uint64_t t76 = 9571834LLU;

	t76 = (x345^(x346-(x347/x348)));

	if (t76 != 18446744073709551596LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x349 = 4001;
	static uint8_t x350 = 3U;
	int32_t x351 = INT32_MIN;

	t77 = (x349^(x350-(x351/x352)));

	if (t77 != 4003) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x353 = -1LL;
	int16_t x355 = INT16_MIN;
	volatile uint64_t t78 = 43022LLU;

	t78 = (x353^(x354-(x355/x356)));

	if (t78 != 18446743579155848903LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x357 = INT16_MIN;
	int64_t x358 = -37LL;
	int64_t x360 = INT64_MIN;

	t79 = (x357^(x358-(x359/x360)));

	if (t79 != 32731LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x361 = -1;
	volatile int8_t x362 = INT8_MAX;
	uint64_t x364 = UINT64_MAX;
	static volatile uint64_t t80 = 259026883379339LLU;

	t80 = (x361^(x362-(x363/x364)));

	if (t80 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x366 = UINT16_MAX;
	uint64_t x367 = UINT64_MAX;
	static int64_t x368 = 1LL;

	t81 = (x365^(x366-(x367/x368)));

	if (t81 != 65791LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x369 = UINT32_MAX;
	int8_t x370 = 25;
	volatile int8_t x372 = INT8_MIN;

	t82 = (x369^(x370-(x371/x372)));

	if (t82 != 4294967270LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x374 = -21;
	static int8_t x375 = INT8_MAX;
	static int8_t x376 = INT8_MIN;
	int32_t t83 = -960;

	t83 = (x373^(x374-(x375/x376)));

	if (t83 != 648) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x377 = INT16_MAX;
	int64_t x378 = 3015037857364551LL;
	static int32_t x379 = INT32_MIN;
	int64_t x380 = 32LL;
	static volatile int64_t t84 = 15992674829534123LL;

	t84 = (x377^(x378-(x379/x380)));

	if (t84 != 3015037924443576LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x387 = 416U;
	int16_t x388 = INT16_MIN;
	volatile uint32_t t85 = 24517452U;

	t85 = (x385^(x386-(x387/x388)));

	if (t85 != 2147483520U) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x390 = UINT64_MAX;
	volatile int64_t x391 = 6714319LL;
	volatile uint64_t t86 = 90LLU;

	t86 = (x389^(x390-(x391/x392)));

	if (t86 != 18446744071562183731LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x393 = -1;
	static uint64_t x394 = UINT64_MAX;
	int32_t x396 = INT32_MIN;
	uint64_t t87 = 4294LLU;

	t87 = (x393^(x394-(x395/x396)));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x397 = INT32_MIN;
	int64_t x399 = -1LL;
	int16_t x400 = INT16_MIN;
	static int64_t t88 = -30418LL;

	t88 = (x397^(x398-(x399/x400)));

	if (t88 != 2147483647LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x401 = INT8_MIN;
	uint8_t x402 = 28U;
	static volatile int16_t x403 = -1;
	uint16_t x404 = UINT16_MAX;
	int32_t t89 = 162;

	t89 = (x401^(x402-(x403/x404)));

	if (t89 != -100) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x405 = INT64_MIN;
	int8_t x406 = -1;
	uint16_t x407 = 405U;
	uint32_t x408 = 14852388U;
	static volatile int64_t t90 = 29915820235714754LL;

	t90 = (x405^(x406-(x407/x408)));

	if (t90 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x409 = INT64_MAX;
	int32_t x410 = INT32_MIN;
	uint16_t x411 = 6U;
	int16_t x412 = INT16_MIN;
	volatile int64_t t91 = 362460719LL;

	t91 = (x409^(x410-(x411/x412)));

	if (t91 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x413 = INT64_MIN;
	int16_t x414 = INT16_MIN;
	int8_t x415 = -2;
	uint64_t t92 = 71060801564188426LLU;

	t92 = (x413^(x414-(x415/x416)));

	if (t92 != 9013749945108043590LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x417 = 21;
	int32_t x418 = -1;
	int64_t x419 = 287658366596LL;
	static uint16_t x420 = UINT16_MAX;
	int64_t t93 = 4047LL;

	t93 = (x417^(x418-(x419/x420)));

	if (t93 != -4389405LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x421 = 1;
	volatile int32_t x422 = -1;
	static uint8_t x423 = 7U;
	uint64_t x424 = UINT64_MAX;
	uint64_t t94 = 5191627LLU;

	t94 = (x421^(x422-(x423/x424)));

	if (t94 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x425 = 7U;
	uint32_t x426 = 12356U;
	int8_t x427 = INT8_MIN;
	int64_t t95 = 45176419882LL;

	t95 = (x425^(x426-(x427/x428)));

	if (t95 != 12355LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x429 = INT8_MIN;
	int32_t x430 = INT32_MIN;
	uint16_t x431 = 161U;
	static uint32_t x432 = 78U;
	uint32_t t96 = 133945893U;

	t96 = (x429^(x430-(x431/x432)));

	if (t96 != 2147483774U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x434 = UINT64_MAX;
	volatile uint16_t x435 = 2125U;
	volatile uint64_t t97 = 476925737265LLU;

	t97 = (x433^(x434-(x435/x436)));

	if (t97 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x438 = 13;
	static uint32_t x439 = UINT32_MAX;
	int32_t x440 = INT32_MIN;

	t98 = (x437^(x438-(x439/x440)));

	if (t98 != 2147483660U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x441 = INT16_MIN;
	static int32_t x442 = -661115;
	uint8_t x443 = 0U;
	uint64_t x444 = 92387LLU;
	volatile uint64_t t99 = 1522507703918LLU;

	t99 = (x441^(x442-(x443/x444)));

	if (t99 != 682373LLU) { NG(); } else { ; }
	
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

