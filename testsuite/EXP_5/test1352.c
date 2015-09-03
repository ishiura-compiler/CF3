#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -339000;
volatile int8_t x5 = INT8_MIN;
volatile uint16_t x9 = UINT16_MAX;
static uint16_t x16 = UINT16_MAX;
uint8_t x17 = UINT8_MAX;
volatile uint32_t x22 = 16103773U;
uint8_t x32 = 55U;
int64_t t7 = -42101739261678150LL;
uint64_t x39 = 43LLU;
static uint64_t t10 = 1532137078371998LLU;
int64_t x48 = INT64_MAX;
volatile int16_t x59 = 0;
int64_t x61 = INT64_MAX;
int64_t x62 = INT64_MAX;
int16_t x64 = INT16_MAX;
int64_t t15 = -78LL;
volatile int64_t x66 = INT64_MIN;
static volatile int32_t t16 = -1420766;
int16_t x69 = INT16_MIN;
int16_t x72 = -1;
volatile int32_t t18 = 3684850;
int16_t x78 = INT16_MIN;
volatile uint32_t x82 = 9970U;
uint64_t x83 = UINT64_MAX;
static int32_t t20 = -464;
int64_t x85 = 1LL;
int16_t x89 = INT16_MIN;
volatile int32_t t22 = 1;
int32_t x94 = INT32_MIN;
uint16_t x95 = UINT16_MAX;
volatile uint64_t x108 = 130690LLU;
static int32_t x115 = -1;
uint32_t x117 = 4152U;
volatile int32_t t30 = -45;
static uint32_t x125 = 31U;
static uint32_t t31 = 22U;
int16_t x135 = -11;
int16_t x136 = INT16_MIN;
static volatile int8_t x141 = 63;
int16_t x142 = -114;
int8_t x148 = INT8_MAX;
volatile int32_t x149 = 21184;
static int16_t x151 = 45;
int32_t t37 = 2;
int64_t x159 = 115530086656LL;
int64_t t39 = INT64_MIN;
uint8_t x173 = 0U;
int16_t x177 = 220;
int32_t x181 = 1;
int8_t x182 = INT8_MAX;
static int64_t x183 = -5723082734051032LL;
static int16_t x186 = -7504;
uint16_t x191 = UINT16_MAX;
volatile uint64_t t48 = 1063876085926LLU;
uint64_t x197 = 17417829693189263LLU;
static int32_t x200 = -1;
static int32_t t50 = -2;
int64_t x208 = -1LL;
static volatile int64_t t51 = -3487LL;
int8_t x211 = INT8_MIN;
static uint32_t t53 = 2784U;
static volatile uint32_t x224 = 1879U;
int16_t x225 = INT16_MAX;
volatile int64_t t58 = 243517LL;
static volatile int8_t x242 = INT8_MIN;
int8_t x247 = INT8_MAX;
int64_t x252 = -16251LL;
int32_t x256 = INT32_MIN;
int64_t x257 = INT64_MIN;
int16_t x265 = INT16_MIN;
int32_t t66 = 2294;
static int16_t x274 = INT16_MIN;
int64_t x285 = INT64_MIN;
static int64_t x288 = -1LL;
volatile int32_t x293 = INT32_MIN;
int32_t t73 = INT32_MAX;
static volatile int32_t x304 = 741407;
static volatile int8_t x315 = 12;
int64_t x316 = 532166621123831300LL;
volatile uint16_t x319 = UINT16_MAX;
static int16_t x320 = INT16_MAX;
static volatile int16_t x324 = 3478;
volatile int32_t x333 = -1;
int8_t x343 = -1;
static int64_t t85 = -1315079177911576LL;
volatile int32_t t86 = -3235;
static uint64_t x349 = 7518LLU;
int64_t x350 = INT64_MIN;
static int64_t x355 = INT64_MIN;
volatile int8_t x361 = INT8_MIN;
static int64_t x365 = INT64_MIN;
static int64_t x370 = INT64_MIN;
volatile uint32_t t92 = 1U;
int16_t x375 = INT16_MAX;
volatile uint64_t x378 = 17674480267225LLU;
uint8_t x380 = 7U;
uint64_t x388 = UINT64_MAX;
int32_t x391 = INT32_MIN;
int16_t x398 = INT16_MAX;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	int32_t x2 = INT32_MAX;
	int8_t x3 = INT8_MIN;
	volatile int16_t x4 = INT16_MIN;

	t0 = (x1^((x2==x3)^x4));

	if (t0 != 32640) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = 476148873;
	static volatile uint32_t x7 = 3168348U;
	uint16_t x8 = UINT16_MAX;
	int32_t t1 = 454377794;

	t1 = (x5^((x6==x7)^x8));

	if (t1 != -65409) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x10 = 2U;
	int8_t x11 = -1;
	uint64_t x12 = 72911505391726175LLU;
	volatile uint64_t t2 = 3131855850LLU;

	t2 = (x9^((x10==x11)^x12));

	if (t2 != 72911505391702432LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 165641050777LL;
	uint8_t x14 = UINT8_MAX;
	static uint64_t x15 = 105045385288423LLU;
	static volatile int64_t t3 = 107332900LL;

	t3 = (x13^((x14==x15)^x16));

	if (t3 != 165641004390LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x18 = -78;
	int16_t x19 = INT16_MIN;
	volatile int16_t x20 = 13161;
	volatile int32_t t4 = -21;

	t4 = (x17^((x18==x19)^x20));

	if (t4 != 13206) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 29100432U;
	int8_t x23 = INT8_MAX;
	int8_t x24 = INT8_MIN;
	volatile uint32_t t5 = 1170U;

	t5 = (x21^((x22==x23)^x24));

	if (t5 != 4265866768U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = -36;
	int8_t x26 = INT8_MIN;
	volatile uint64_t x27 = 3406519416377308LLU;
	int64_t x28 = INT64_MIN;
	int64_t t6 = 94905LL;

	t6 = (x25^((x26==x27)^x28));

	if (t6 != 9223372036854775772LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	uint8_t x30 = 16U;
	volatile uint16_t x31 = 252U;

	t7 = (x29^((x30==x31)^x32));

	if (t7 != -9223372036854775753LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x33 = 16948U;
	int32_t x34 = INT32_MIN;
	static uint64_t x35 = UINT64_MAX;
	volatile int32_t x36 = -1;
	int32_t t8 = 4;

	t8 = (x33^((x34==x35)^x36));

	if (t8 != -16949) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = 32269056439LL;
	uint64_t x38 = 125249LLU;
	int8_t x40 = INT8_MAX;
	int64_t t9 = 67146882153LL;

	t9 = (x37^((x38==x39)^x40));

	if (t9 != 32269056456LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = INT64_MIN;
	static int32_t x42 = INT32_MIN;
	static int16_t x43 = -1;
	volatile uint64_t x44 = UINT64_MAX;

	t10 = (x41^((x42==x43)^x44));

	if (t10 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	static uint16_t x46 = UINT16_MAX;
	int64_t x47 = -1LL;
	volatile int64_t t11 = INT64_MIN;

	t11 = (x45^((x46==x47)^x48));

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MAX;
	static volatile int16_t x50 = INT16_MAX;
	int16_t x51 = INT16_MIN;
	uint16_t x52 = UINT16_MAX;
	int32_t t12 = 5;

	t12 = (x49^((x50==x51)^x52));

	if (t12 != 32768) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = -16;
	uint8_t x54 = 44U;
	static int8_t x55 = -4;
	static volatile uint64_t x56 = 476LLU;
	uint64_t t13 = 1316LLU;

	t13 = (x53^((x54==x55)^x56));

	if (t13 != 18446744073709551148LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = UINT16_MAX;
	int16_t x58 = INT16_MIN;
	volatile uint32_t x60 = UINT32_MAX;
	volatile uint32_t t14 = 6919U;

	t14 = (x57^((x58==x59)^x60));

	if (t14 != 4294901760U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x63 = INT32_MIN;

	t15 = (x61^((x62==x63)^x64));

	if (t15 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = INT8_MAX;
	uint8_t x67 = 66U;
	uint8_t x68 = 7U;

	t16 = (x65^((x66==x67)^x68));

	if (t16 != 120) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x70 = INT8_MIN;
	static uint16_t x71 = UINT16_MAX;
	static volatile int32_t t17 = 508120;

	t17 = (x69^((x70==x71)^x72));

	if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	int8_t x74 = INT8_MIN;
	int64_t x75 = -1LL;
	uint8_t x76 = UINT8_MAX;

	t18 = (x73^((x74==x75)^x76));

	if (t18 != -32513) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = 6342;
	int32_t x79 = INT32_MIN;
	int64_t x80 = -1LL;
	int64_t t19 = 85851099LL;

	t19 = (x77^((x78==x79)^x80));

	if (t19 != -6343LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -1;
	int8_t x84 = 2;

	t20 = (x81^((x82==x83)^x84));

	if (t20 != -3) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x86 = 115U;
	int64_t x87 = 761383LL;
	volatile uint32_t x88 = 42407U;
	volatile int64_t t21 = 1504816385LL;

	t21 = (x85^((x86==x87)^x88));

	if (t21 != 42406LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x90 = INT64_MIN;
	static int8_t x91 = -1;
	static volatile int16_t x92 = -6347;

	t22 = (x89^((x90==x91)^x92));

	if (t22 != 26421) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MAX;
	static int8_t x96 = INT8_MIN;
	volatile int64_t t23 = -1602LL;

	t23 = (x93^((x94==x95)^x96));

	if (t23 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	int32_t x98 = INT32_MIN;
	volatile uint64_t x99 = 27783794251390502LLU;
	volatile int16_t x100 = INT16_MIN;
	int64_t t24 = -460LL;

	t24 = (x97^((x98==x99)^x100));

	if (t24 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 117U;
	int32_t x102 = 3004;
	int16_t x103 = INT16_MIN;
	int16_t x104 = 14484;
	int32_t t25 = 2;

	t25 = (x101^((x102==x103)^x104));

	if (t25 != 14561) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 5712U;
	static int32_t x106 = INT32_MIN;
	uint64_t x107 = UINT64_MAX;
	volatile uint64_t t26 = 400272362711338LLU;

	t26 = (x105^((x106==x107)^x108));

	if (t26 != 125138LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x109 = 2191U;
	int8_t x110 = INT8_MIN;
	static volatile int16_t x111 = INT16_MAX;
	static volatile int8_t x112 = 1;
	volatile int32_t t27 = 17867;

	t27 = (x109^((x110==x111)^x112));

	if (t27 != 2190) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = INT64_MAX;
	int32_t x114 = -1;
	int32_t x116 = -180522;
	volatile int64_t t28 = 16371433134LL;

	t28 = (x113^((x114==x115)^x116));

	if (t28 != -9223372036854595288LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = -1;
	int8_t x119 = -4;
	int16_t x120 = -89;
	volatile uint32_t t29 = 1618669U;

	t29 = (x117^((x118==x119)^x120));

	if (t29 != 4294963103U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = INT16_MIN;
	uint16_t x122 = UINT16_MAX;
	static volatile int16_t x123 = INT16_MIN;
	static volatile int16_t x124 = INT16_MIN;

	t30 = (x121^((x122==x123)^x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = -1;
	uint8_t x127 = 7U;
	uint8_t x128 = UINT8_MAX;

	t31 = (x125^((x126==x127)^x128));

	if (t31 != 224U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x129 = INT8_MIN;
	uint32_t x130 = 9U;
	static int16_t x131 = INT16_MIN;
	uint32_t x132 = UINT32_MAX;
	volatile uint32_t t32 = 373272U;

	t32 = (x129^((x130==x131)^x132));

	if (t32 != 127U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MAX;
	volatile int32_t x134 = INT32_MAX;
	static int64_t t33 = -1819647833LL;

	t33 = (x133^((x134==x135)^x136));

	if (t33 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x137 = 1;
	volatile int8_t x138 = -17;
	uint64_t x139 = UINT64_MAX;
	uint8_t x140 = 0U;
	int32_t t34 = -420;

	t34 = (x137^((x138==x139)^x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x143 = INT16_MAX;
	int8_t x144 = INT8_MIN;
	static volatile int32_t t35 = -1;

	t35 = (x141^((x142==x143)^x144));

	if (t35 != -65) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x145 = 158607541U;
	uint16_t x146 = 1U;
	static int8_t x147 = 4;
	uint32_t t36 = 0U;

	t36 = (x145^((x146==x147)^x148));

	if (t36 != 158607562U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x150 = -7674;
	int32_t x152 = INT32_MAX;

	t37 = (x149^((x150==x151)^x152));

	if (t37 != 2147462463) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = -1;
	uint16_t x154 = UINT16_MAX;
	int32_t x155 = INT32_MIN;
	int16_t x156 = INT16_MAX;
	volatile int32_t t38 = -28;

	t38 = (x153^((x154==x155)^x156));

	if (t38 != -32768) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x157 = INT64_MAX;
	static int64_t x158 = 23402191705465LL;
	int32_t x160 = -1;

	t39 = (x157^((x158==x159)^x160));

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 3403U;
	int32_t x162 = INT32_MIN;
	int16_t x163 = INT16_MIN;
	static volatile int64_t x164 = INT64_MAX;
	volatile int64_t t40 = 14994187LL;

	t40 = (x161^((x162==x163)^x164));

	if (t40 != 9223372036854772404LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = INT64_MIN;
	uint16_t x166 = UINT16_MAX;
	volatile uint16_t x167 = UINT16_MAX;
	static uint8_t x168 = 2U;
	static int64_t t41 = 0LL;

	t41 = (x165^((x166==x167)^x168));

	if (t41 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 103129688U;
	int64_t x170 = INT64_MIN;
	uint8_t x171 = UINT8_MAX;
	uint8_t x172 = UINT8_MAX;
	uint32_t t42 = 13480155U;

	t42 = (x169^((x170==x171)^x172));

	if (t42 != 103129767U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x174 = UINT8_MAX;
	int8_t x175 = -1;
	static int16_t x176 = INT16_MAX;
	static volatile int32_t t43 = 1723;

	t43 = (x173^((x174==x175)^x176));

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x178 = INT32_MIN;
	volatile uint64_t x179 = 27289218834484LLU;
	static int32_t x180 = 459913479;
	volatile int32_t t44 = 1;

	t44 = (x177^((x178==x179)^x180));

	if (t44 != 459913691) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x184 = -1640051677924890LL;
	int64_t t45 = -63LL;

	t45 = (x181^((x182==x183)^x184));

	if (t45 != -1640051677924889LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -1;
	volatile uint64_t x187 = 502151540LLU;
	uint32_t x188 = UINT32_MAX;
	static uint32_t t46 = 59855530U;

	t46 = (x185^((x186==x187)^x188));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	int16_t x190 = INT16_MAX;
	int8_t x192 = 63;
	volatile int32_t t47 = 98615306;

	t47 = (x189^((x190==x191)^x192));

	if (t47 != -65) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = 57200;
	int8_t x194 = 28;
	static volatile int16_t x195 = INT16_MAX;
	uint64_t x196 = 3260639804185237420LLU;

	t48 = (x193^((x194==x195)^x196));

	if (t48 != 3260639804185184476LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x198 = 6LL;
	static uint64_t x199 = UINT64_MAX;
	volatile uint64_t t49 = 1832303945LLU;

	t49 = (x197^((x198==x199)^x200));

	if (t49 != 18429326244016362352LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x201 = INT32_MIN;
	static int64_t x202 = 2LL;
	int32_t x203 = INT32_MIN;
	int32_t x204 = -96955;

	t50 = (x201^((x202==x203)^x204));

	if (t50 != 2147386693) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x205 = 529;
	static uint32_t x206 = 866U;
	static volatile uint64_t x207 = UINT64_MAX;

	t51 = (x205^((x206==x207)^x208));

	if (t51 != -530LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	int64_t x210 = -1LL;
	int32_t x212 = -1;
	static volatile int32_t t52 = 204766;

	t52 = (x209^((x210==x211)^x212));

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MAX;
	volatile int64_t x214 = INT64_MIN;
	volatile uint8_t x215 = 22U;
	uint32_t x216 = 9U;

	t53 = (x213^((x214==x215)^x216));

	if (t53 != 118U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x217 = 0LLU;
	uint64_t x218 = UINT64_MAX;
	volatile int16_t x219 = INT16_MIN;
	static uint64_t x220 = 70LLU;
	volatile uint64_t t54 = 5543196394LLU;

	t54 = (x217^((x218==x219)^x220));

	if (t54 != 70LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 311420104275182LLU;
	int8_t x222 = INT8_MIN;
	int32_t x223 = 12;
	static volatile uint64_t t55 = 536549434273LLU;

	t55 = (x221^((x222==x223)^x224));

	if (t55 != 311420104274873LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x226 = 1;
	static int32_t x227 = INT32_MIN;
	int16_t x228 = INT16_MAX;
	int32_t t56 = -7;

	t56 = (x225^((x226==x227)^x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MIN;
	uint32_t x230 = 492U;
	int8_t x231 = -1;
	volatile int32_t x232 = INT32_MIN;
	volatile int32_t t57 = 7054;

	t57 = (x229^((x230==x231)^x232));

	if (t57 != 2147450880) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MIN;
	uint8_t x234 = UINT8_MAX;
	uint8_t x235 = 63U;
	static volatile int16_t x236 = -3;

	t58 = (x233^((x234==x235)^x236));

	if (t58 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	static int64_t x238 = 216197491430604551LL;
	int8_t x239 = -1;
	int32_t x240 = -178607327;
	int32_t t59 = 45818620;

	t59 = (x237^((x238==x239)^x240));

	if (t59 != 178596641) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = UINT64_MAX;
	int16_t x243 = INT16_MIN;
	uint64_t x244 = 7273842871175885LLU;
	uint64_t t60 = 9126275682576775395LLU;

	t60 = (x241^((x242==x243)^x244));

	if (t60 != 18439470230838375730LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x245 = INT32_MIN;
	uint8_t x246 = UINT8_MAX;
	volatile uint8_t x248 = 107U;
	int32_t t61 = 11230;

	t61 = (x245^((x246==x247)^x248));

	if (t61 != -2147483541) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x249 = -572;
	uint8_t x250 = 6U;
	int16_t x251 = INT16_MIN;
	int64_t t62 = 415804908884157LL;

	t62 = (x249^((x250==x251)^x252));

	if (t62 != 15681LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x253 = UINT8_MAX;
	volatile int32_t x254 = INT32_MIN;
	static uint16_t x255 = UINT16_MAX;
	int32_t t63 = -13491857;

	t63 = (x253^((x254==x255)^x256));

	if (t63 != -2147483393) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x258 = UINT8_MAX;
	volatile int8_t x259 = 31;
	int64_t x260 = 11143LL;
	int64_t t64 = -3LL;

	t64 = (x257^((x258==x259)^x260));

	if (t64 != -9223372036854764665LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	int16_t x262 = 1;
	int64_t x263 = -8761688610424870LL;
	static int8_t x264 = INT8_MAX;
	int32_t t65 = -311832;

	t65 = (x261^((x262==x263)^x264));

	if (t65 != -2147483521) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x266 = INT64_MIN;
	uint16_t x267 = UINT16_MAX;
	volatile int16_t x268 = -1;

	t66 = (x265^((x266==x267)^x268));

	if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x269 = -120141102;
	volatile uint8_t x270 = 34U;
	volatile int32_t x271 = INT32_MIN;
	int8_t x272 = INT8_MAX;
	static volatile int32_t t67 = 664816953;

	t67 = (x269^((x270==x271)^x272));

	if (t67 != -120141139) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = 197354;
	int64_t x275 = 1397390830LL;
	volatile int16_t x276 = -1;
	volatile int32_t t68 = -6708946;

	t68 = (x273^((x274==x275)^x276));

	if (t68 != -197355) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = -11410;
	uint64_t x278 = 63269827400LLU;
	int16_t x279 = 1;
	int64_t x280 = 33776657877245LL;
	volatile int64_t t69 = -1371226791255LL;

	t69 = (x277^((x278==x279)^x280));

	if (t69 != -33776657884269LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = 0U;
	uint32_t x282 = 120805U;
	volatile int8_t x283 = INT8_MAX;
	volatile int64_t x284 = -423419114984LL;
	volatile int64_t t70 = 774LL;

	t70 = (x281^((x282==x283)^x284));

	if (t70 != -423419114984LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x286 = 138U;
	static int64_t x287 = INT64_MIN;
	static volatile int64_t t71 = INT64_MAX;

	t71 = (x285^((x286==x287)^x288));

	if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x289 = INT16_MIN;
	uint8_t x290 = 1U;
	int32_t x291 = 104279990;
	static int32_t x292 = INT32_MAX;
	int32_t t72 = -65767;

	t72 = (x289^((x290==x291)^x292));

	if (t72 != -2147450881) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x294 = INT64_MAX;
	volatile int64_t x295 = 185520133659638LL;
	int32_t x296 = -1;

	t73 = (x293^((x294==x295)^x296));

	if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x297 = 61;
	int32_t x298 = INT32_MIN;
	int8_t x299 = INT8_MIN;
	int64_t x300 = 1LL;
	static volatile int64_t t74 = -356897234711241731LL;

	t74 = (x297^((x298==x299)^x300));

	if (t74 != 60LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = 116U;
	int32_t x302 = INT32_MIN;
	int8_t x303 = INT8_MAX;
	int32_t t75 = -154018097;

	t75 = (x301^((x302==x303)^x304));

	if (t75 != 741483) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x305 = INT64_MIN;
	static int32_t x306 = 174;
	uint32_t x307 = 26299146U;
	int64_t x308 = INT64_MAX;
	int64_t t76 = -533299700479584LL;

	t76 = (x305^((x306==x307)^x308));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MIN;
	volatile int16_t x310 = -1;
	int64_t x311 = 14373645893619LL;
	volatile int32_t x312 = -16798082;
	static volatile int64_t t77 = 4633441LL;

	t77 = (x309^((x310==x311)^x312));

	if (t77 != 9223372036837977726LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MAX;
	uint8_t x314 = 60U;
	int64_t t78 = 129163773LL;

	t78 = (x313^((x314==x315)^x316));

	if (t78 != 532166621123831419LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = -1;
	static uint8_t x318 = 3U;
	volatile int32_t t79 = -1671;

	t79 = (x317^((x318==x319)^x320));

	if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 3410U;
	volatile uint64_t x322 = UINT64_MAX;
	int8_t x323 = INT8_MAX;
	volatile int32_t t80 = -100;

	t80 = (x321^((x322==x323)^x324));

	if (t80 != 196) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x325 = INT16_MIN;
	uint64_t x326 = 463LLU;
	static int8_t x327 = 1;
	volatile uint16_t x328 = 23116U;
	int32_t t81 = 4169404;

	t81 = (x325^((x326==x327)^x328));

	if (t81 != -9652) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x329 = INT16_MAX;
	static int16_t x330 = 15;
	static volatile uint32_t x331 = 0U;
	volatile int8_t x332 = -1;
	volatile int32_t t82 = -146;

	t82 = (x329^((x330==x331)^x332));

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x334 = -1;
	int8_t x335 = -1;
	static int16_t x336 = INT16_MIN;
	int32_t t83 = -907175;

	t83 = (x333^((x334==x335)^x336));

	if (t83 != 32766) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = -1;
	uint8_t x338 = 5U;
	static uint8_t x339 = 15U;
	int16_t x340 = -1;
	int32_t t84 = -3805985;

	t84 = (x337^((x338==x339)^x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x341 = 317333LL;
	volatile int8_t x342 = INT8_MAX;
	int64_t x344 = INT64_MIN;

	t85 = (x341^((x342==x343)^x344));

	if (t85 != -9223372036854458475LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = -1;
	int64_t x346 = -1LL;
	volatile int64_t x347 = INT64_MIN;
	uint16_t x348 = UINT16_MAX;

	t86 = (x345^((x346==x347)^x348));

	if (t86 != -65536) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x351 = -1;
	uint32_t x352 = 3299U;
	static volatile uint64_t t87 = 23LLU;

	t87 = (x349^((x350==x351)^x352));

	if (t87 != 4541LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x353 = 108U;
	uint16_t x354 = 4698U;
	volatile uint8_t x356 = 19U;
	uint32_t t88 = 1931U;

	t88 = (x353^((x354==x355)^x356));

	if (t88 != 127U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = -200;
	volatile uint64_t x358 = UINT64_MAX;
	int64_t x359 = -900576047455062732LL;
	uint64_t x360 = UINT64_MAX;
	volatile uint64_t t89 = 4LLU;

	t89 = (x357^((x358==x359)^x360));

	if (t89 != 199LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x362 = UINT32_MAX;
	static uint8_t x363 = 6U;
	int32_t x364 = -1;
	int32_t t90 = -13942;

	t90 = (x361^((x362==x363)^x364));

	if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x366 = 15305LLU;
	int16_t x367 = INT16_MIN;
	int32_t x368 = INT32_MIN;
	static int64_t t91 = -24510883392200LL;

	t91 = (x365^((x366==x367)^x368));

	if (t91 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	int64_t x371 = INT64_MAX;
	static volatile uint32_t x372 = 242U;

	t92 = (x369^((x370==x371)^x372));

	if (t92 != 4294967154U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = -127;
	int64_t x374 = -899LL;
	static uint16_t x376 = UINT16_MAX;
	volatile int32_t t93 = 65930339;

	t93 = (x373^((x374==x375)^x376));

	if (t93 != -65410) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MAX;
	int8_t x379 = INT8_MIN;
	int32_t t94 = 1508;

	t94 = (x377^((x378==x379)^x380));

	if (t94 != 2147483640) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x381 = -129233445;
	int16_t x382 = -21;
	uint32_t x383 = UINT32_MAX;
	int64_t x384 = -171LL;
	static int64_t t95 = 3883687427155395LL;

	t95 = (x381^((x382==x383)^x384));

	if (t95 != 129233550LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = -1;
	int8_t x386 = 62;
	int64_t x387 = 1008851915LL;
	uint64_t t96 = 1LLU;

	t96 = (x385^((x386==x387)^x388));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = 14U;
	static int8_t x390 = 7;
	static int8_t x392 = -25;
	static volatile int32_t t97 = 49723;

	t97 = (x389^((x390==x391)^x392));

	if (t97 != -23) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 865969553779189LLU;
	int32_t x394 = 19;
	int64_t x395 = -1LL;
	static int64_t x396 = INT64_MAX;
	uint64_t t98 = 867LLU;

	t98 = (x393^((x394==x395)^x396));

	if (t98 != 9222506067300996618LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x397 = 1105822977633417492LLU;
	uint64_t x399 = UINT64_MAX;
	int64_t x400 = INT64_MIN;
	volatile uint64_t t99 = 5029984LLU;

	t99 = (x397^((x398==x399)^x400));

	if (t99 != 10329195014488193300LLU) { NG(); } else { ; }
	
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

