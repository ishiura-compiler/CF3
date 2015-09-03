#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x17 = 3U;
int32_t x18 = -7327506;
int64_t t5 = INT64_MIN;
volatile int32_t x26 = 217866;
int32_t t6 = -141243;
static uint32_t x29 = 6960U;
int64_t t8 = 2394LL;
uint32_t x39 = UINT32_MAX;
int16_t x40 = -1;
int16_t x44 = INT16_MIN;
uint16_t x45 = UINT16_MAX;
int64_t t11 = 0LL;
static int16_t x51 = -233;
static int16_t x54 = -1562;
uint64_t x55 = UINT64_MAX;
volatile int64_t x59 = INT64_MIN;
int16_t x62 = 508;
int16_t x63 = -6;
volatile uint16_t x66 = 196U;
int64_t x67 = -1LL;
uint64_t x72 = 2133LLU;
static int16_t x75 = -16;
int32_t t18 = 7;
int64_t x79 = 4453762185LL;
int32_t x85 = -239;
static volatile uint32_t x87 = 576061U;
int16_t x88 = INT16_MAX;
int16_t x96 = INT16_MAX;
int16_t x98 = 940;
int32_t x99 = INT32_MIN;
int64_t x107 = -1LL;
int64_t t26 = -25062085830LL;
static volatile uint64_t x112 = UINT64_MAX;
int32_t x114 = INT32_MIN;
uint64_t x121 = UINT64_MAX;
int32_t x123 = INT32_MAX;
uint64_t t30 = 2346LLU;
uint32_t x128 = UINT32_MAX;
volatile int64_t t32 = 487LL;
static int64_t x143 = -89508935847LL;
int64_t t35 = -258694108439529LL;
static volatile int64_t t36 = -37544580161449408LL;
volatile int16_t x149 = INT16_MAX;
volatile int64_t x158 = -1LL;
uint64_t x163 = 203LLU;
volatile int32_t x175 = 1139;
uint16_t x179 = 5U;
volatile int32_t t45 = -55508;
volatile uint64_t t46 = 3584837LLU;
static uint64_t x192 = 35179382415485LLU;
volatile int16_t x195 = -1;
static uint16_t x218 = UINT16_MAX;
int64_t x228 = -902LL;
uint32_t x235 = 24U;
uint64_t x239 = UINT64_MAX;
uint64_t t59 = 32114729694963910LLU;
int32_t x254 = 29201830;
static uint64_t t63 = 15339466561LLU;
uint16_t x262 = UINT16_MAX;
uint32_t x266 = UINT32_MAX;
int16_t x267 = INT16_MAX;
int32_t x268 = -1;
static uint32_t x274 = 22U;
uint16_t x275 = 3U;
static uint64_t x276 = 409048431489339LLU;
int8_t x278 = -1;
int8_t x279 = INT8_MIN;
int8_t x281 = -1;
int64_t x282 = INT64_MIN;
volatile uint64_t x287 = UINT64_MAX;
int16_t x289 = INT16_MIN;
int32_t x290 = 14672;
static int8_t x302 = -1;
static int8_t x310 = 3;
static volatile int16_t x312 = -1;
int32_t t76 = 25001;
int8_t x318 = INT8_MIN;
volatile int64_t t78 = INT64_MIN;
int64_t x323 = INT64_MIN;
volatile int64_t t81 = -44725330LL;
int64_t x333 = 60LL;
static int32_t x335 = INT32_MIN;
int64_t x344 = INT64_MAX;
uint16_t x346 = UINT16_MAX;
volatile int32_t t85 = -120115;
int16_t x363 = INT16_MAX;
uint64_t x364 = 1743LLU;
int32_t t90 = -86;
volatile uint64_t t91 = 6736836670LLU;
static uint64_t x373 = 4103954LLU;
volatile uint64_t t92 = 183574606LLU;
int8_t x386 = 0;
volatile int64_t t95 = -1540548LL;
volatile uint32_t x389 = UINT32_MAX;
int32_t x392 = INT32_MIN;
static int64_t x396 = INT64_MIN;
uint16_t x398 = 0U;
volatile int32_t x402 = INT32_MIN;


void f0(void) {
	int8_t x1 = INT8_MAX;
	uint32_t x2 = UINT32_MAX;
	uint64_t x3 = 12606071LLU;
	int64_t x4 = INT64_MIN;
	volatile uint64_t t0 = 636544LLU;

	t0 = (((x1|x2)/x3)^x4);

	if (t0 != 9223372036854776148LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MAX;
	uint8_t x6 = 10U;
	uint16_t x7 = 12498U;
	uint32_t x8 = 15U;
	volatile uint32_t t1 = 116676793U;

	t1 = (((x5|x6)/x7)^x8);

	if (t1 != 13U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	int8_t x10 = -1;
	uint8_t x11 = 1U;
	volatile int32_t x12 = 5;
	int32_t t2 = 37425194;

	t2 = (((x9|x10)/x11)^x12);

	if (t2 != -6) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	int8_t x14 = -1;
	int64_t x15 = 726607309010318LL;
	int32_t x16 = -1728712;
	static int64_t t3 = -486042392LL;

	t3 = (((x13|x14)/x15)^x16);

	if (t3 != -1728712LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x19 = 9584U;
	int32_t x20 = -209935;
	int32_t t4 = -288474453;

	t4 = (((x17|x18)/x19)^x20);

	if (t4 != 210677) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MIN;
	int16_t x22 = 124;
	int32_t x23 = INT32_MAX;
	int64_t x24 = INT64_MIN;

	t5 = (((x21|x22)/x23)^x24);

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	int16_t x27 = 381;
	static uint16_t x28 = 600U;

	t6 = (((x25|x26)/x27)^x28);

	if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = -3;
	static int8_t x31 = INT8_MIN;
	static uint64_t x32 = 14259110233406LLU;
	volatile uint64_t t7 = 109740033187LLU;

	t7 = (((x29|x30)/x31)^x32);

	if (t7 != 14259110233407LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	int64_t x34 = -1731825002621695LL;
	int16_t x35 = 113;
	int16_t x36 = INT16_MIN;

	t8 = (((x33|x34)/x35)^x36);

	if (t8 != 32671LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	int8_t x38 = -2;
	uint32_t t9 = UINT32_MAX;

	t9 = (((x37|x38)/x39)^x40);

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	uint64_t x42 = UINT64_MAX;
	uint8_t x43 = UINT8_MAX;
	static volatile uint64_t t10 = 19468415634934762LLU;

	t10 = (((x41|x42)/x43)^x44);

	if (t10 != 18374403900871442689LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x46 = INT64_MAX;
	int64_t x47 = 1410688127517185220LL;
	int64_t x48 = INT64_MAX;

	t11 = (((x45|x46)/x47)^x48);

	if (t11 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 412444342U;
	int8_t x50 = INT8_MIN;
	int64_t x52 = 3837923400470590LL;
	volatile int64_t t12 = -5060076LL;

	t12 = (((x49|x50)/x51)^x52);

	if (t12 != 3837923400470591LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MAX;
	int64_t x56 = INT64_MIN;
	volatile uint64_t t13 = 3LLU;

	t13 = (((x53|x54)/x55)^x56);

	if (t13 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 68534LLU;
	int16_t x58 = 126;
	uint64_t x60 = 142878LLU;
	volatile uint64_t t14 = 4320157367981002018LLU;

	t14 = (((x57|x58)/x59)^x60);

	if (t14 != 142878LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MAX;
	static int8_t x64 = -1;
	int32_t t15 = -43702889;

	t15 = (((x61|x62)/x63)^x64);

	if (t15 != 84) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = -5550LL;
	int32_t x68 = -178964181;
	static int64_t t16 = 172006851767LL;

	t16 = (((x65|x66)/x67)^x68);

	if (t16 != -178967551LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MAX;
	volatile int32_t x70 = INT32_MAX;
	static volatile int16_t x71 = -1;
	volatile uint64_t t17 = 1109382851427834150LLU;

	t17 = (((x69|x70)/x71)^x72);

	if (t17 != 18446744071562070100LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = INT8_MAX;
	int8_t x74 = INT8_MAX;
	int8_t x76 = 24;

	t18 = (((x73|x74)/x75)^x76);

	if (t18 != -31) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 2U;
	uint8_t x78 = UINT8_MAX;
	uint16_t x80 = 7U;
	volatile int64_t t19 = 114182LL;

	t19 = (((x77|x78)/x79)^x80);

	if (t19 != 7LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	uint32_t x82 = UINT32_MAX;
	static uint64_t x83 = 136LLU;
	int64_t x84 = INT64_MIN;
	volatile uint64_t t20 = 214LLU;

	t20 = (((x81|x82)/x83)^x84);

	if (t20 != 9223372036886356449LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = 38102116463LL;
	volatile int64_t t21 = -1LL;

	t21 = (((x85|x86)/x87)^x88);

	if (t21 != 32767LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = -425578LL;
	int64_t x90 = INT64_MIN;
	volatile int64_t x91 = 32845698LL;
	uint8_t x92 = 77U;
	static volatile int64_t t22 = -5204540LL;

	t22 = (((x89|x90)/x91)^x92);

	if (t22 != 77LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x93 = INT8_MIN;
	uint8_t x94 = 3U;
	static uint16_t x95 = UINT16_MAX;
	int32_t t23 = 6271201;

	t23 = (((x93|x94)/x95)^x96);

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = INT16_MAX;
	int8_t x100 = INT8_MIN;
	int32_t t24 = 4901;

	t24 = (((x97|x98)/x99)^x100);

	if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x101 = -1LL;
	int8_t x102 = INT8_MAX;
	uint64_t x103 = 17044922626590LLU;
	int64_t x104 = 56365LL;
	uint64_t t25 = 486237648955181017LLU;

	t25 = (((x101|x102)/x103)^x104);

	if (t25 != 1073071LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -1;
	int64_t x106 = -459773LL;
	uint32_t x108 = 10U;

	t26 = (((x105|x106)/x107)^x108);

	if (t26 != 11LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 5562189869508735232LLU;
	static volatile int32_t x110 = INT32_MAX;
	static int8_t x111 = -1;
	volatile uint64_t t27 = UINT64_MAX;

	t27 = (((x109|x110)/x111)^x112);

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 4U;
	int8_t x115 = INT8_MAX;
	uint16_t x116 = UINT16_MAX;
	uint32_t t28 = 179U;

	t28 = (((x113|x114)/x115)^x116);

	if (t28 != 16972791U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	uint8_t x118 = UINT8_MAX;
	static int8_t x119 = INT8_MIN;
	int8_t x120 = INT8_MIN;
	volatile int32_t t29 = -209505;

	t29 = (((x117|x118)/x119)^x120);

	if (t29 != -16777090) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x122 = 1062LLU;
	int8_t x124 = -1;

	t30 = (((x121|x122)/x123)^x124);

	if (t30 != 18446744065119617019LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x125 = INT16_MIN;
	uint16_t x126 = UINT16_MAX;
	uint32_t x127 = 56547659U;
	uint32_t t31 = 78U;

	t31 = (((x125|x126)/x127)^x128);

	if (t31 != 4294967220U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 19U;
	volatile uint32_t x130 = 10U;
	volatile int64_t x131 = -30945062LL;
	volatile uint8_t x132 = 20U;

	t32 = (((x129|x130)/x131)^x132);

	if (t32 != 20LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x133 = UINT32_MAX;
	int64_t x134 = -5851623419LL;
	uint8_t x135 = 47U;
	int16_t x136 = INT16_MAX;
	int64_t t33 = -7LL;

	t33 = (((x133|x134)/x135)^x136);

	if (t33 != -91364855LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = 914440;
	static volatile uint64_t x138 = UINT64_MAX;
	uint32_t x139 = 15737749U;
	int16_t x140 = 0;
	uint64_t t34 = 1494693LLU;

	t34 = (((x137|x138)/x139)^x140);

	if (t34 != 1172133579821LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = -1LL;
	volatile int64_t x142 = INT64_MAX;
	static int8_t x144 = 2;

	t35 = (((x141|x142)/x143)^x144);

	if (t35 != 2LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x145 = -761;
	static volatile uint16_t x146 = 21847U;
	int8_t x147 = 40;
	int64_t x148 = INT64_MIN;

	t36 = (((x145|x146)/x147)^x148);

	if (t36 != 9223372036854775791LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x150 = INT32_MIN;
	int16_t x151 = INT16_MAX;
	int16_t x152 = 2;
	int32_t t37 = -1;

	t37 = (((x149|x150)/x151)^x152);

	if (t37 != -65539) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = INT32_MIN;
	static int32_t x154 = INT32_MIN;
	static uint16_t x155 = 344U;
	uint16_t x156 = 5U;
	volatile int32_t t38 = 63;

	t38 = (((x153|x154)/x155)^x156);

	if (t38 != -6242682) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x157 = 19U;
	volatile uint64_t x159 = UINT64_MAX;
	int16_t x160 = -14;
	uint64_t t39 = 23181971014LLU;

	t39 = (((x157|x158)/x159)^x160);

	if (t39 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x161 = UINT16_MAX;
	uint64_t x162 = 2072907708830401LLU;
	int64_t x164 = -59368LL;
	volatile uint64_t t40 = 7781705413847334562LLU;

	t40 = (((x161|x162)/x163)^x164);

	if (t40 != 18446733862341550086LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x165 = -55;
	int16_t x166 = -1;
	uint64_t x167 = 260696842007LLU;
	int64_t x168 = INT64_MIN;
	volatile uint64_t t41 = 2962LLU;

	t41 = (((x165|x166)/x167)^x168);

	if (t41 != 9223372036925535177LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MAX;
	int8_t x170 = INT8_MIN;
	uint32_t x171 = UINT32_MAX;
	uint64_t x172 = UINT64_MAX;
	uint64_t t42 = UINT64_MAX;

	t42 = (((x169|x170)/x171)^x172);

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -338LL;
	int32_t x174 = 39327170;
	int16_t x176 = 577;
	volatile int64_t t43 = 260595989046289629LL;

	t43 = (((x173|x174)/x175)^x176);

	if (t43 != 577LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 7018U;
	int8_t x178 = INT8_MIN;
	static int32_t x180 = INT32_MAX;
	uint32_t t44 = 3421U;

	t44 = (((x177|x178)/x179)^x180);

	if (t44 != 1288490193U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -1;
	int16_t x182 = INT16_MIN;
	uint16_t x183 = UINT16_MAX;
	int8_t x184 = -1;

	t45 = (((x181|x182)/x183)^x184);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x185 = -44231385362712798LL;
	uint64_t x186 = 4990844446161LLU;
	volatile int8_t x187 = -1;
	uint32_t x188 = 15U;

	t46 = (((x185|x186)/x187)^x188);

	if (t46 != 15LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = -1;
	int8_t x190 = INT8_MIN;
	int16_t x191 = INT16_MIN;
	static uint64_t t47 = 196070LLU;

	t47 = (((x189|x190)/x191)^x192);

	if (t47 != 35179382415485LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x193 = INT16_MIN;
	uint32_t x194 = 140393U;
	uint8_t x196 = UINT8_MAX;
	static volatile uint32_t t48 = 212465U;

	t48 = (((x193|x194)/x195)^x196);

	if (t48 != 255U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = UINT64_MAX;
	int8_t x198 = INT8_MIN;
	uint32_t x199 = UINT32_MAX;
	volatile int8_t x200 = INT8_MIN;
	volatile uint64_t t49 = 616139052LLU;

	t49 = (((x197|x198)/x199)^x200);

	if (t49 != 18446744069414584193LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 7U;
	int16_t x202 = -309;
	int64_t x203 = INT64_MAX;
	int32_t x204 = -68915;
	int64_t t50 = -20554441846629136LL;

	t50 = (((x201|x202)/x203)^x204);

	if (t50 != -68915LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = UINT8_MAX;
	int32_t x206 = INT32_MIN;
	int8_t x207 = INT8_MIN;
	int64_t x208 = INT64_MIN;
	int64_t t51 = -2017281042624377759LL;

	t51 = (((x205|x206)/x207)^x208);

	if (t51 != -9223372036837998594LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x209 = 337172841409737LLU;
	int16_t x210 = -1;
	int64_t x211 = -1LL;
	uint8_t x212 = 34U;
	static volatile uint64_t t52 = 7LLU;

	t52 = (((x209|x210)/x211)^x212);

	if (t52 != 35LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x213 = 328U;
	int64_t x214 = -48LL;
	int16_t x215 = 74;
	uint8_t x216 = 23U;
	int64_t t53 = 2863206268426LL;

	t53 = (((x213|x214)/x215)^x216);

	if (t53 != 23LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 31U;
	int64_t x219 = INT64_MAX;
	static uint8_t x220 = UINT8_MAX;
	int64_t t54 = 892705394249812LL;

	t54 = (((x217|x218)/x219)^x220);

	if (t54 != 255LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 3U;
	int8_t x222 = -8;
	int16_t x223 = -1;
	int16_t x224 = INT16_MIN;
	static volatile int32_t t55 = 0;

	t55 = (((x221|x222)/x223)^x224);

	if (t55 != -32763) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = 8U;
	uint32_t x226 = 8221128U;
	uint64_t x227 = UINT64_MAX;
	static volatile uint64_t t56 = 103375LLU;

	t56 = (((x225|x226)/x227)^x228);

	if (t56 != 18446744073709550714LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = UINT16_MAX;
	int8_t x230 = INT8_MIN;
	uint8_t x231 = 123U;
	int64_t x232 = -245181LL;
	volatile int64_t t57 = -103247801LL;

	t57 = (((x229|x230)/x231)^x232);

	if (t57 != -245181LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -1;
	uint64_t x234 = UINT64_MAX;
	volatile int32_t x236 = -1;
	volatile uint64_t t58 = 71450376002983964LLU;

	t58 = (((x233|x234)/x235)^x236);

	if (t58 != 17678129737304986965LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = 51;
	int16_t x238 = INT16_MAX;
	int32_t x240 = -42;

	t59 = (((x237|x238)/x239)^x240);

	if (t59 != 18446744073709551574LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = -2040151098036199318LL;
	uint64_t x242 = 56063287LLU;
	volatile int32_t x243 = INT32_MIN;
	volatile int16_t x244 = INT16_MIN;
	uint64_t t60 = 3210165797606825090LLU;

	t60 = (((x241|x242)/x243)^x244);

	if (t60 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x249 = -1LL;
	int32_t x250 = INT32_MIN;
	volatile int32_t x251 = INT32_MAX;
	int8_t x252 = INT8_MIN;
	int64_t t61 = 1LL;

	t61 = (((x249|x250)/x251)^x252);

	if (t61 != -128LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x253 = -7;
	uint8_t x255 = UINT8_MAX;
	static volatile uint16_t x256 = UINT16_MAX;
	int32_t t62 = -211;

	t62 = (((x253|x254)/x255)^x256);

	if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x257 = INT16_MIN;
	int16_t x258 = INT16_MIN;
	volatile uint64_t x259 = UINT64_MAX;
	static int64_t x260 = -2945LL;

	t63 = (((x257|x258)/x259)^x260);

	if (t63 != 18446744073709548671LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x261 = 25032458U;
	int64_t x263 = INT64_MIN;
	int16_t x264 = INT16_MIN;
	static int64_t t64 = 3LL;

	t64 = (((x261|x262)/x263)^x264);

	if (t64 != -32768LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x265 = INT8_MAX;
	volatile uint32_t t65 = 1825U;

	t65 = (((x265|x266)/x267)^x268);

	if (t65 != 4294836219U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x269 = 1U;
	int32_t x270 = -1;
	int32_t x271 = INT32_MIN;
	int32_t x272 = 50;
	int32_t t66 = 418842770;

	t66 = (((x269|x270)/x271)^x272);

	if (t66 != 50) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x273 = INT32_MAX;
	volatile uint64_t t67 = 54LLU;

	t67 = (((x273|x274)/x275)^x276);

	if (t67 != 409049075997585LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x277 = -3;
	int64_t x280 = 1386002765919607LL;
	static volatile int64_t t68 = -71970503LL;

	t68 = (((x277|x278)/x279)^x280);

	if (t68 != 1386002765919607LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x283 = 50U;
	static int64_t x284 = INT64_MAX;
	static int64_t t69 = INT64_MAX;

	t69 = (((x281|x282)/x283)^x284);

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x285 = INT32_MAX;
	static int16_t x286 = INT16_MIN;
	static volatile uint8_t x288 = 0U;
	uint64_t t70 = 2394807993480133LLU;

	t70 = (((x285|x286)/x287)^x288);

	if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x291 = 14189;
	volatile uint32_t x292 = UINT32_MAX;
	static volatile uint32_t t71 = 160U;

	t71 = (((x289|x290)/x291)^x292);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x293 = 975;
	static int16_t x294 = -62;
	static int16_t x295 = INT16_MAX;
	int8_t x296 = -1;
	static volatile int32_t t72 = 198176492;

	t72 = (((x293|x294)/x295)^x296);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x297 = -1;
	static int8_t x298 = INT8_MAX;
	int64_t x299 = 7682658600LL;
	uint32_t x300 = 4095U;
	volatile int64_t t73 = -106049LL;

	t73 = (((x297|x298)/x299)^x300);

	if (t73 != 4095LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x301 = INT64_MIN;
	uint32_t x303 = 870713U;
	uint8_t x304 = UINT8_MAX;
	int64_t t74 = -2512439338LL;

	t74 = (((x301|x302)/x303)^x304);

	if (t74 != 255LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x305 = INT8_MIN;
	uint16_t x306 = UINT16_MAX;
	int32_t x307 = INT32_MIN;
	int8_t x308 = INT8_MIN;
	volatile int32_t t75 = 1429030;

	t75 = (((x305|x306)/x307)^x308);

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x309 = INT8_MAX;
	int16_t x311 = -1;

	t76 = (((x309|x310)/x311)^x312);

	if (t76 != 126) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x313 = UINT16_MAX;
	int8_t x314 = INT8_MAX;
	int8_t x315 = INT8_MAX;
	volatile uint32_t x316 = UINT32_MAX;
	uint32_t t77 = 407199U;

	t77 = (((x313|x314)/x315)^x316);

	if (t77 != 4294966779U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x317 = -1;
	int8_t x319 = INT8_MIN;
	int64_t x320 = INT64_MIN;

	t78 = (((x317|x318)/x319)^x320);

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x321 = -3662397;
	int64_t x322 = -189701508603412LL;
	static int32_t x324 = -51371571;
	int64_t t79 = 845LL;

	t79 = (((x321|x322)/x323)^x324);

	if (t79 != -51371571LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x325 = UINT32_MAX;
	static int16_t x326 = INT16_MAX;
	volatile int8_t x327 = INT8_MAX;
	int16_t x328 = INT16_MAX;
	uint32_t t80 = 15U;

	t80 = (((x325|x326)/x327)^x328);

	if (t80 != 33847279U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x329 = INT32_MAX;
	uint8_t x330 = UINT8_MAX;
	int64_t x331 = -1LL;
	static volatile int8_t x332 = -31;

	t81 = (((x329|x330)/x331)^x332);

	if (t81 != 2147483616LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x334 = 17;
	int8_t x336 = 16;
	int64_t t82 = -181755800388LL;

	t82 = (((x333|x334)/x335)^x336);

	if (t82 != 16LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x337 = -1;
	int8_t x338 = -1;
	int32_t x339 = -378343488;
	volatile int32_t x340 = INT32_MAX;
	volatile int32_t t83 = INT32_MAX;

	t83 = (((x337|x338)/x339)^x340);

	if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x341 = -1;
	uint32_t x342 = 167617U;
	int32_t x343 = INT32_MIN;
	int64_t t84 = -34014LL;

	t84 = (((x341|x342)/x343)^x344);

	if (t84 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x345 = INT8_MAX;
	int8_t x347 = INT8_MIN;
	int8_t x348 = INT8_MIN;

	t85 = (((x345|x346)/x347)^x348);

	if (t85 != 385) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x349 = INT8_MAX;
	static int32_t x350 = -1924;
	int8_t x351 = INT8_MIN;
	volatile int16_t x352 = INT16_MIN;
	static int32_t t86 = 792371646;

	t86 = (((x349|x350)/x351)^x352);

	if (t86 != -32753) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x353 = INT8_MAX;
	int16_t x354 = -1;
	int8_t x355 = 22;
	volatile int8_t x356 = INT8_MIN;
	volatile int32_t t87 = -1;

	t87 = (((x353|x354)/x355)^x356);

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x357 = 567567LLU;
	int8_t x358 = INT8_MIN;
	int8_t x359 = -1;
	static int16_t x360 = -1;
	static volatile uint64_t t88 = UINT64_MAX;

	t88 = (((x357|x358)/x359)^x360);

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x361 = INT32_MIN;
	int16_t x362 = INT16_MIN;
	uint64_t t89 = 14806521444LLU;

	t89 = (((x361|x362)/x363)^x364);

	if (t89 != 18446744073709549872LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x365 = 9;
	int16_t x366 = INT16_MIN;
	int16_t x367 = INT16_MAX;
	static uint8_t x368 = 10U;

	t90 = (((x365|x366)/x367)^x368);

	if (t90 != 10) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x369 = -2;
	int8_t x370 = -11;
	int16_t x371 = 1;
	uint64_t x372 = 3207008674LLU;

	t91 = (((x369|x370)/x371)^x372);

	if (t91 != 18446744070502542941LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x374 = INT64_MIN;
	uint64_t x375 = 56510785089141762LLU;
	int16_t x376 = INT16_MIN;

	t92 = (((x373|x374)/x375)^x376);

	if (t92 != 18446744073709519011LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x377 = UINT16_MAX;
	int32_t x378 = -1;
	static int32_t x379 = -14954534;
	int16_t x380 = INT16_MIN;
	int32_t t93 = -255;

	t93 = (((x377|x378)/x379)^x380);

	if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x381 = 123381147U;
	volatile uint8_t x382 = UINT8_MAX;
	int8_t x383 = INT8_MAX;
	int32_t x384 = INT32_MAX;
	static uint32_t t94 = 568003117U;

	t94 = (((x381|x382)/x383)^x384);

	if (t94 != 2146512142U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x385 = -12287217LL;
	static int32_t x387 = INT32_MIN;
	static int64_t x388 = -25705710501770987LL;

	t95 = (((x385|x386)/x387)^x388);

	if (t95 != -25705710501770987LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x390 = INT16_MAX;
	uint64_t x391 = UINT64_MAX;
	uint64_t t96 = 14697613786661724LLU;

	t96 = (((x389|x390)/x391)^x392);

	if (t96 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x393 = -1;
	static int16_t x394 = 4;
	int64_t x395 = 3678LL;
	volatile int64_t t97 = INT64_MIN;

	t97 = (((x393|x394)/x395)^x396);

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x397 = -1;
	uint64_t x399 = UINT64_MAX;
	static uint32_t x400 = UINT32_MAX;
	uint64_t t98 = 413365544144LLU;

	t98 = (((x397|x398)/x399)^x400);

	if (t98 != 4294967294LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x401 = -152;
	int8_t x403 = -1;
	int8_t x404 = -14;
	int32_t t99 = -56;

	t99 = (((x401|x402)/x403)^x404);

	if (t99 != -150) { NG(); } else { ; }
	
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

