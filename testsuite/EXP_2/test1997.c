#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x10 = 200220603;
int64_t x11 = INT64_MIN;
int8_t x12 = 3;
int32_t t5 = -12552184;
volatile uint16_t x29 = 1U;
int64_t x32 = -1LL;
int8_t x34 = INT8_MIN;
static int32_t x48 = 1333846;
int8_t x53 = 40;
int16_t x60 = -13;
volatile int32_t t14 = -926937;
uint16_t x63 = 940U;
volatile uint32_t x72 = 8U;
volatile int32_t t17 = -18332;
static int32_t x73 = INT32_MIN;
int32_t x82 = -98458;
static volatile int32_t t20 = 76;
uint32_t x88 = UINT32_MAX;
uint16_t x92 = 12858U;
int64_t x94 = INT64_MIN;
volatile int8_t x96 = -1;
int64_t x106 = INT64_MIN;
int32_t t27 = -1;
static int8_t x115 = INT8_MAX;
uint64_t x117 = UINT64_MAX;
int8_t x119 = 9;
volatile int32_t x131 = INT32_MIN;
int64_t x136 = -1LL;
volatile int16_t x140 = INT16_MIN;
int8_t x151 = INT8_MIN;
static int8_t x157 = INT8_MIN;
int32_t x163 = -1;
int8_t x167 = INT8_MIN;
int32_t t46 = 65519084;
uint32_t x190 = 815128U;
int32_t x191 = INT32_MIN;
int8_t x192 = -14;
int8_t x195 = INT8_MAX;
uint64_t x196 = 506068859LLU;
int8_t x213 = INT8_MAX;
static int32_t t53 = 51;
volatile int32_t x218 = -1;
volatile uint64_t x221 = 245LLU;
static int8_t x226 = -2;
uint64_t x241 = 177476916141053LLU;
int16_t x246 = 2;
volatile uint8_t x247 = UINT8_MAX;
volatile int32_t t61 = -2;
static volatile int32_t x252 = -1;
int32_t t63 = -889043;
uint32_t x260 = 14U;
int32_t x262 = INT32_MIN;
volatile int32_t t65 = 1259;
static volatile int32_t t67 = -246174932;
volatile uint8_t x275 = UINT8_MAX;
int32_t t68 = -133;
static volatile int8_t x278 = -4;
volatile int8_t x284 = 0;
volatile uint16_t x285 = 88U;
uint64_t x288 = 284469941604385540LLU;
volatile uint16_t x289 = 23U;
uint16_t x297 = UINT16_MAX;
int32_t x300 = -1;
int32_t t75 = 172646276;
volatile int32_t t77 = -5708;
int16_t x335 = INT16_MIN;
int32_t x338 = INT32_MIN;
static int16_t x340 = INT16_MAX;
volatile uint16_t x349 = UINT16_MAX;
static uint64_t x354 = 1358220642903480LLU;
int64_t x361 = -1LL;
volatile int8_t x362 = INT8_MIN;
int16_t x364 = INT16_MIN;
uint16_t x367 = 11714U;
int32_t x369 = INT32_MIN;
volatile int32_t t92 = -25826;
int32_t t93 = 71989;
int64_t x378 = -1LL;
int32_t x379 = INT32_MIN;
volatile int16_t x381 = -1;
static int8_t x387 = 4;
int32_t t96 = -5;
int32_t t97 = -20;


void f0(void) {
	static int64_t x1 = 8049520047673LL;
	int64_t x2 = INT64_MAX;
	volatile int32_t x3 = INT32_MIN;
	int64_t x4 = INT64_MAX;
	int32_t t0 = -3332;

	t0 = ((x1&(x2|x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	static int64_t x6 = 1377926813202325LL;
	volatile int8_t x7 = INT8_MIN;
	uint8_t x8 = 14U;
	int32_t t1 = 301886;

	t1 = ((x5&(x6|x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	volatile int32_t t2 = 168;

	t2 = ((x9&(x10|x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MAX;
	volatile uint8_t x14 = UINT8_MAX;
	int32_t x15 = INT32_MIN;
	int8_t x16 = INT8_MIN;
	static volatile int32_t t3 = -30160497;

	t3 = ((x13&(x14|x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 8;
	volatile int64_t x18 = 2303757951838LL;
	int16_t x19 = -52;
	uint8_t x20 = 29U;
	volatile int32_t t4 = 75872;

	t4 = ((x17&(x18|x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -498043682146325LL;
	static int32_t x22 = INT32_MAX;
	static volatile uint16_t x23 = 1513U;
	volatile uint8_t x24 = 62U;

	t5 = ((x21&(x22|x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	static uint16_t x26 = UINT16_MAX;
	int64_t x27 = INT64_MAX;
	static int16_t x28 = INT16_MAX;
	volatile int32_t t6 = -107;

	t6 = ((x25&(x26|x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x30 = 1686LLU;
	int32_t x31 = 427824158;
	int32_t t7 = 93;

	t7 = ((x29&(x30|x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	int64_t x35 = -106534582202LL;
	static volatile int64_t x36 = -205939436LL;
	volatile int32_t t8 = -912;

	t8 = ((x33&(x34|x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = INT32_MAX;
	uint32_t x38 = UINT32_MAX;
	uint16_t x39 = UINT16_MAX;
	uint32_t x40 = 44720387U;
	volatile int32_t t9 = 27693;

	t9 = ((x37&(x38|x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x41 = 9655531LLU;
	int8_t x42 = 6;
	int16_t x43 = -3;
	int16_t x44 = -1;
	volatile int32_t t10 = -12488;

	t10 = ((x41&(x42|x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = UINT32_MAX;
	static volatile int8_t x46 = INT8_MIN;
	volatile int64_t x47 = INT64_MIN;
	static volatile int32_t t11 = -1;

	t11 = ((x45&(x46|x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	int8_t x50 = INT8_MAX;
	int16_t x51 = 135;
	static uint16_t x52 = 207U;
	int32_t t12 = 599248453;

	t12 = ((x49&(x50|x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x54 = INT64_MIN;
	uint64_t x55 = 29121561427LLU;
	uint8_t x56 = 5U;
	volatile int32_t t13 = -516037;

	t13 = ((x53&(x54|x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	volatile uint8_t x58 = UINT8_MAX;
	static int64_t x59 = -1LL;

	t14 = ((x57&(x58|x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x61 = UINT32_MAX;
	int16_t x62 = INT16_MIN;
	int32_t x64 = INT32_MIN;
	volatile int32_t t15 = 44358942;

	t15 = ((x61&(x62|x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x65 = 34379952978436779LLU;
	static volatile int32_t x66 = INT32_MIN;
	int64_t x67 = INT64_MIN;
	int64_t x68 = -4565344525822800169LL;
	volatile int32_t t16 = -38996501;

	t16 = ((x65&(x66|x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x69 = 3U;
	uint32_t x70 = UINT32_MAX;
	static volatile int64_t x71 = INT64_MIN;

	t17 = ((x69&(x70|x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x74 = 14144U;
	static uint32_t x75 = UINT32_MAX;
	int8_t x76 = INT8_MAX;
	int32_t t18 = -328;

	t18 = ((x73&(x74|x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = -1;
	volatile int32_t x78 = -1;
	volatile int16_t x79 = INT16_MIN;
	volatile uint32_t x80 = 22995182U;
	int32_t t19 = 780209;

	t19 = ((x77&(x78|x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = INT8_MIN;
	int16_t x83 = INT16_MIN;
	int32_t x84 = 5591667;

	t20 = ((x81&(x82|x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MAX;
	static uint16_t x86 = UINT16_MAX;
	uint64_t x87 = UINT64_MAX;
	static volatile int32_t t21 = -4448628;

	t21 = ((x85&(x86|x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	static int8_t x90 = -1;
	int32_t x91 = -1;
	int32_t t22 = 573112;

	t22 = ((x89&(x90|x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 7072U;
	int8_t x95 = -1;
	int32_t t23 = 889040;

	t23 = ((x93&(x94|x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x97 = INT32_MAX;
	uint16_t x98 = 1U;
	static int8_t x99 = 15;
	volatile int8_t x100 = INT8_MIN;
	static int32_t t24 = -40;

	t24 = ((x97&(x98|x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x101 = 233070U;
	volatile int8_t x102 = INT8_MIN;
	static int64_t x103 = -1LL;
	volatile uint16_t x104 = 45U;
	int32_t t25 = -866;

	t25 = ((x101&(x102|x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x105 = INT16_MAX;
	volatile int16_t x107 = -429;
	volatile int16_t x108 = INT16_MIN;
	int32_t t26 = -7974;

	t26 = ((x105&(x106|x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	uint16_t x110 = 70U;
	volatile uint32_t x111 = UINT32_MAX;
	static uint16_t x112 = UINT16_MAX;

	t27 = ((x109&(x110|x111))==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -1;
	volatile int16_t x114 = INT16_MAX;
	uint32_t x116 = UINT32_MAX;
	volatile int32_t t28 = -885;

	t28 = ((x113&(x114|x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x118 = 37LLU;
	int64_t x120 = -1LL;
	volatile int32_t t29 = 26;

	t29 = ((x117&(x118|x119))==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x121 = -1;
	static int64_t x122 = -1LL;
	int64_t x123 = -1LL;
	uint64_t x124 = 5752602799611690LLU;
	volatile int32_t t30 = 607339;

	t30 = ((x121&(x122|x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = INT16_MAX;
	volatile int64_t x126 = -139316721926879LL;
	int8_t x127 = INT8_MIN;
	uint32_t x128 = 0U;
	static int32_t t31 = -138;

	t31 = ((x125&(x126|x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x129 = INT16_MIN;
	int16_t x130 = INT16_MIN;
	int16_t x132 = -1;
	int32_t t32 = -28551;

	t32 = ((x129&(x130|x131))==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	uint64_t x134 = 27616861LLU;
	int32_t x135 = -1;
	volatile int32_t t33 = 57;

	t33 = ((x133&(x134|x135))==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 853U;
	int64_t x138 = 2LL;
	int64_t x139 = INT64_MIN;
	int32_t t34 = -8094;

	t34 = ((x137&(x138|x139))==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x141 = 0;
	uint32_t x142 = UINT32_MAX;
	uint8_t x143 = 26U;
	static int32_t x144 = INT32_MIN;
	volatile int32_t t35 = 101;

	t35 = ((x141&(x142|x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MAX;
	uint16_t x146 = 359U;
	int64_t x147 = -1LL;
	static volatile int64_t x148 = INT64_MIN;
	volatile int32_t t36 = 462;

	t36 = ((x145&(x146|x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MAX;
	volatile int64_t x150 = -1LL;
	uint64_t x152 = UINT64_MAX;
	volatile int32_t t37 = 687144;

	t37 = ((x149&(x150|x151))==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = -3817573825784452485LL;
	int16_t x154 = -1;
	static volatile uint32_t x155 = 54U;
	int8_t x156 = INT8_MIN;
	volatile int32_t t38 = -15633038;

	t38 = ((x153&(x154|x155))==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x158 = UINT32_MAX;
	static uint64_t x159 = 2LLU;
	volatile uint64_t x160 = UINT64_MAX;
	static int32_t t39 = 3423010;

	t39 = ((x157&(x158|x159))==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	uint16_t x162 = UINT16_MAX;
	static int32_t x164 = INT32_MIN;
	volatile int32_t t40 = -4072640;

	t40 = ((x161&(x162|x163))==x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x165 = INT32_MIN;
	volatile int8_t x166 = -1;
	uint64_t x168 = 55108695158LLU;
	int32_t t41 = -15;

	t41 = ((x165&(x166|x167))==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	int8_t x170 = -27;
	int8_t x171 = INT8_MAX;
	static int32_t x172 = INT32_MAX;
	int32_t t42 = -1852361;

	t42 = ((x169&(x170|x171))==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x173 = 96LLU;
	int16_t x174 = INT16_MIN;
	int8_t x175 = INT8_MIN;
	int64_t x176 = -137944933321191LL;
	int32_t t43 = 201818591;

	t43 = ((x173&(x174|x175))==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = UINT8_MAX;
	int32_t x178 = INT32_MAX;
	uint32_t x179 = 8205457U;
	volatile int32_t x180 = -1;
	static volatile int32_t t44 = 43;

	t44 = ((x177&(x178|x179))==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = 1;
	int64_t x182 = -1LL;
	volatile int16_t x183 = INT16_MIN;
	static volatile int32_t x184 = -1;
	int32_t t45 = -496857471;

	t45 = ((x181&(x182|x183))==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 872577537115LLU;
	uint32_t x186 = 258740854U;
	uint16_t x187 = UINT16_MAX;
	volatile int64_t x188 = INT64_MIN;

	t46 = ((x185&(x186|x187))==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x189 = INT32_MAX;
	volatile int32_t t47 = -516344940;

	t47 = ((x189&(x190|x191))==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 641U;
	int32_t x194 = INT32_MIN;
	volatile int32_t t48 = -7;

	t48 = ((x193&(x194|x195))==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 29U;
	uint16_t x198 = UINT16_MAX;
	static uint64_t x199 = UINT64_MAX;
	uint8_t x200 = UINT8_MAX;
	volatile int32_t t49 = 0;

	t49 = ((x197&(x198|x199))==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x201 = 130061220U;
	static volatile int64_t x202 = INT64_MAX;
	int8_t x203 = -9;
	uint64_t x204 = 1230689571807LLU;
	static int32_t t50 = -361;

	t50 = ((x201&(x202|x203))==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 49964200320LLU;
	int64_t x206 = 137560889572LL;
	uint16_t x207 = UINT16_MAX;
	int32_t x208 = INT32_MAX;
	static int32_t t51 = 948182;

	t51 = ((x205&(x206|x207))==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x209 = 2;
	static int8_t x210 = -1;
	static uint32_t x211 = UINT32_MAX;
	static uint32_t x212 = 815417U;
	int32_t t52 = -632;

	t52 = ((x209&(x210|x211))==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x214 = INT32_MIN;
	volatile uint32_t x215 = 122U;
	int16_t x216 = INT16_MAX;

	t53 = ((x213&(x214|x215))==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	uint32_t x219 = 19801U;
	int64_t x220 = INT64_MAX;
	static int32_t t54 = -47059;

	t54 = ((x217&(x218|x219))==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x222 = INT8_MAX;
	static volatile int8_t x223 = -1;
	int16_t x224 = INT16_MAX;
	volatile int32_t t55 = -15994;

	t55 = ((x221&(x222|x223))==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MAX;
	volatile int32_t x227 = INT32_MAX;
	int16_t x228 = -1;
	volatile int32_t t56 = -5920274;

	t56 = ((x225&(x226|x227))==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int64_t x229 = 46538987206307LL;
	int64_t x230 = -1LL;
	int32_t x231 = -1;
	volatile uint64_t x232 = 22460302880LLU;
	static volatile int32_t t57 = 456146;

	t57 = ((x229&(x230|x231))==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x233 = INT64_MAX;
	uint64_t x234 = 1LLU;
	uint32_t x235 = 419327103U;
	volatile int8_t x236 = INT8_MIN;
	static int32_t t58 = -315279;

	t58 = ((x233&(x234|x235))==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = 71890890164103LLU;
	int16_t x238 = -1;
	static uint16_t x239 = UINT16_MAX;
	int16_t x240 = INT16_MIN;
	volatile int32_t t59 = 187726;

	t59 = ((x237&(x238|x239))==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x242 = INT32_MAX;
	int8_t x243 = -1;
	volatile uint16_t x244 = 23U;
	int32_t t60 = 4251;

	t60 = ((x241&(x242|x243))==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x245 = 898627170779996886LL;
	uint32_t x248 = 1885036330U;

	t61 = ((x245&(x246|x247))==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MIN;
	int32_t x250 = 3;
	static int64_t x251 = -25065LL;
	static int32_t t62 = -51375;

	t62 = ((x249&(x250|x251))==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = 1301U;
	volatile int16_t x254 = 903;
	static int64_t x255 = 244310591LL;
	int64_t x256 = INT64_MIN;

	t63 = ((x253&(x254|x255))==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x257 = 5838341U;
	int16_t x258 = 1;
	int64_t x259 = -1646046632LL;
	int32_t t64 = -837127;

	t64 = ((x257&(x258|x259))==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 101U;
	int64_t x263 = INT64_MAX;
	volatile int32_t x264 = 74897574;

	t65 = ((x261&(x262|x263))==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint64_t x265 = 1LLU;
	int32_t x266 = INT32_MAX;
	volatile uint64_t x267 = UINT64_MAX;
	static int32_t x268 = 8341;
	static volatile int32_t t66 = 258544366;

	t66 = ((x265&(x266|x267))==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x269 = INT8_MIN;
	static int8_t x270 = 3;
	static int32_t x271 = INT32_MIN;
	uint32_t x272 = 0U;

	t67 = ((x269&(x270|x271))==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 84U;
	uint64_t x274 = 3480630650593874LLU;
	int32_t x276 = -15964;

	t68 = ((x273&(x274|x275))==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = 0U;
	volatile int64_t x279 = -1LL;
	volatile int64_t x280 = INT64_MIN;
	int32_t t69 = -331319;

	t69 = ((x277&(x278|x279))==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x281 = INT32_MIN;
	int32_t x282 = 97529;
	int64_t x283 = -12449417967695407LL;
	volatile int32_t t70 = -38;

	t70 = ((x281&(x282|x283))==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x286 = INT32_MIN;
	static int64_t x287 = 1405082LL;
	volatile int32_t t71 = 817;

	t71 = ((x285&(x286|x287))==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x290 = 1700645LL;
	uint32_t x291 = UINT32_MAX;
	static uint8_t x292 = UINT8_MAX;
	int32_t t72 = -212670;

	t72 = ((x289&(x290|x291))==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = UINT32_MAX;
	int32_t x294 = INT32_MAX;
	static uint16_t x295 = 406U;
	uint32_t x296 = UINT32_MAX;
	int32_t t73 = 9398688;

	t73 = ((x293&(x294|x295))==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x298 = 5871048LL;
	static int64_t x299 = -1LL;
	volatile int32_t t74 = -55;

	t74 = ((x297&(x298|x299))==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = 0U;
	volatile uint64_t x302 = 1478442761LLU;
	int8_t x303 = -1;
	static int64_t x304 = -6765LL;

	t75 = ((x301&(x302|x303))==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = 5601059900066LLU;
	volatile int64_t x306 = INT64_MIN;
	int32_t x307 = -1613683;
	int64_t x308 = 873086847549281969LL;
	int32_t t76 = -282679935;

	t76 = ((x305&(x306|x307))==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x309 = INT64_MIN;
	static int8_t x310 = -1;
	uint64_t x311 = 3697883341615892848LLU;
	int8_t x312 = INT8_MIN;

	t77 = ((x309&(x310|x311))==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = -1;
	uint32_t x314 = 8509U;
	int8_t x315 = -37;
	uint64_t x316 = 56827185121933LLU;
	volatile int32_t t78 = -77;

	t78 = ((x313&(x314|x315))==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = 1;
	int16_t x318 = -1;
	static int64_t x319 = 6992LL;
	volatile int16_t x320 = INT16_MAX;
	volatile int32_t t79 = -15;

	t79 = ((x317&(x318|x319))==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = 139U;
	volatile uint8_t x322 = UINT8_MAX;
	uint16_t x323 = UINT16_MAX;
	static uint64_t x324 = UINT64_MAX;
	static volatile int32_t t80 = -45;

	t80 = ((x321&(x322|x323))==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MAX;
	int32_t x326 = INT32_MAX;
	int16_t x327 = -1;
	static volatile int32_t x328 = INT32_MAX;
	static volatile int32_t t81 = -64;

	t81 = ((x325&(x326|x327))==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = -1;
	uint8_t x330 = 0U;
	int8_t x331 = INT8_MAX;
	int32_t x332 = INT32_MIN;
	int32_t t82 = 15;

	t82 = ((x329&(x330|x331))==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MAX;
	int64_t x334 = INT64_MAX;
	uint16_t x336 = UINT16_MAX;
	int32_t t83 = 92722610;

	t83 = ((x333&(x334|x335))==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = 571825303728440677LL;
	int64_t x339 = -3896389LL;
	static int32_t t84 = -303701;

	t84 = ((x337&(x338|x339))==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x341 = UINT32_MAX;
	uint64_t x342 = UINT64_MAX;
	int64_t x343 = INT64_MIN;
	static int8_t x344 = INT8_MIN;
	volatile int32_t t85 = 2017253;

	t85 = ((x341&(x342|x343))==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = 36;
	int64_t x346 = INT64_MAX;
	volatile int64_t x347 = -5349900887LL;
	int8_t x348 = INT8_MAX;
	volatile int32_t t86 = -7;

	t86 = ((x345&(x346|x347))==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x350 = 10;
	uint16_t x351 = 11U;
	static uint8_t x352 = 3U;
	int32_t t87 = 8199659;

	t87 = ((x349&(x350|x351))==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = 120082LLU;
	volatile int16_t x355 = -1;
	static int32_t x356 = INT32_MAX;
	int32_t t88 = 212341339;

	t88 = ((x353&(x354|x355))==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MIN;
	static int64_t x358 = INT64_MIN;
	int8_t x359 = -32;
	int64_t x360 = INT64_MIN;
	volatile int32_t t89 = -253541;

	t89 = ((x357&(x358|x359))==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x363 = -1;
	static volatile int32_t t90 = -248498;

	t90 = ((x361&(x362|x363))==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x365 = INT32_MAX;
	int8_t x366 = 4;
	uint64_t x368 = 53959LLU;
	int32_t t91 = -1;

	t91 = ((x365&(x366|x367))==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x370 = -1;
	uint64_t x371 = 3402LLU;
	static int32_t x372 = -1;

	t92 = ((x369&(x370|x371))==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MAX;
	int8_t x374 = -1;
	int64_t x375 = INT64_MIN;
	volatile int16_t x376 = -1;

	t93 = ((x373&(x374|x375))==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = 499841;
	int8_t x380 = 4;
	volatile int32_t t94 = 955373000;

	t94 = ((x377&(x378|x379))==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x382 = INT8_MIN;
	volatile int64_t x383 = INT64_MIN;
	int32_t x384 = INT32_MIN;
	int32_t t95 = 5154;

	t95 = ((x381&(x382|x383))==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 38508964LLU;
	int16_t x386 = -1;
	int8_t x388 = -20;

	t96 = ((x385&(x386|x387))==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x389 = INT32_MIN;
	uint16_t x390 = 1342U;
	int16_t x391 = 0;
	volatile int64_t x392 = 1137LL;

	t97 = ((x389&(x390|x391))==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 0U;
	int64_t x394 = -761547584002LL;
	static int64_t x395 = 801345236229681LL;
	int16_t x396 = INT16_MIN;
	volatile int32_t t98 = 3342;

	t98 = ((x393&(x394|x395))==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = UINT32_MAX;
	int32_t x398 = -270840364;
	int8_t x399 = -1;
	static int64_t x400 = INT64_MIN;
	static int32_t t99 = 187268965;

	t99 = ((x397&(x398|x399))==x400);

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

