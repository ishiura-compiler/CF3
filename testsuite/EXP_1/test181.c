#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 2634828990365LLU;
int32_t x3 = INT32_MAX;
int8_t x9 = 31;
int64_t x11 = -122LL;
uint32_t x21 = UINT32_MAX;
static uint16_t x22 = 4U;
int32_t x23 = -172893;
uint64_t x25 = 374499026744560907LLU;
volatile uint8_t x35 = UINT8_MAX;
int16_t x37 = -1;
static int32_t x38 = -1;
static volatile int32_t x43 = -1;
uint8_t x52 = UINT8_MAX;
static int64_t x59 = -1LL;
int16_t x67 = 25;
volatile int64_t t12 = 1081075048093LL;
volatile int64_t t14 = -1LL;
static uint64_t x82 = 1896683947033311LLU;
uint8_t x83 = 49U;
int32_t x88 = 1;
int64_t x102 = -1LL;
static int64_t x103 = INT64_MIN;
static volatile int64_t t20 = 18683770069057995LL;
uint64_t x109 = 60710720053LLU;
uint32_t x111 = 2428689U;
volatile uint64_t t21 = 23225066LLU;
volatile int32_t x113 = -75;
static int64_t x115 = INT64_MAX;
int8_t x127 = INT8_MIN;
int32_t x129 = INT32_MIN;
volatile int64_t t27 = 1072640583131LL;
int32_t x158 = 4137434;
volatile int32_t x163 = -56365834;
int64_t t32 = 15392417440LL;
int8_t x166 = -1;
uint8_t x172 = UINT8_MAX;
static volatile uint64_t t35 = 25378768897937068LLU;
volatile uint16_t x178 = UINT16_MAX;
int8_t x183 = -1;
static int16_t x184 = -1;
int8_t x185 = 0;
static volatile int16_t x187 = -312;
volatile int32_t t38 = -366703;
uint32_t x192 = 1514U;
uint32_t t39 = 209837U;
uint32_t x211 = UINT32_MAX;
int64_t x212 = INT64_MIN;
volatile int8_t x214 = INT8_MAX;
int32_t t43 = 864097;
int64_t x220 = INT64_MIN;
uint16_t x230 = UINT16_MAX;
int8_t x235 = INT8_MAX;
volatile int16_t x236 = -616;
volatile uint64_t x239 = 1793285LLU;
uint32_t t49 = 300200393U;
static volatile uint64_t t50 = UINT64_MAX;
uint16_t x250 = 913U;
int8_t x252 = INT8_MIN;
volatile uint32_t x253 = UINT32_MAX;
int32_t x254 = -1;
static volatile uint32_t x255 = UINT32_MAX;
int32_t x258 = INT32_MIN;
int16_t x259 = -1;
volatile int32_t x271 = INT32_MIN;
static volatile int32_t t55 = -43901607;
uint64_t x284 = 11041774483LLU;
volatile uint64_t t57 = 18650176LLU;
int16_t x285 = 522;
volatile int16_t x294 = -1;
static int16_t x296 = -1;
static volatile uint64_t x299 = 396LLU;
volatile uint32_t x302 = 4U;
int64_t t64 = 816616LL;
static uint64_t x318 = 133LLU;
int64_t x343 = 16929703061804696LL;
volatile int8_t x357 = INT8_MIN;
volatile int32_t x359 = -803549;
uint32_t x361 = UINT32_MAX;
static uint16_t x362 = 2U;
uint16_t x366 = 2005U;
volatile int32_t t74 = 0;
uint8_t x377 = UINT8_MAX;
int16_t x378 = -1;
int32_t x379 = 970;
int16_t x416 = -5;
uint16_t x419 = 616U;
static int16_t x422 = 6229;
volatile int32_t t87 = 17683;
int64_t t91 = 718910601722637LL;
static volatile int16_t x470 = INT16_MAX;
volatile int32_t x471 = 800;
static uint16_t x473 = 7771U;
static volatile int64_t t95 = 951795LL;
int16_t x482 = 30;
static volatile uint64_t t97 = 245695LLU;
int8_t x489 = INT8_MIN;
uint64_t x490 = 47LLU;
volatile uint16_t x491 = 14U;


void f0(void) {
	int64_t x2 = 302240533399828LL;
	uint8_t x4 = 0U;
	uint64_t t0 = 184174306753LLU;

	t0 = (((x1-x2)+x3)|x4);

	if (t0 != 18446444470152625800LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x10 = 756U;
	int64_t x12 = INT64_MIN;
	int64_t t1 = -3892798769860619725LL;

	t1 = (((x9-x10)+x11)|x12);

	if (t1 != -847LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x17 = UINT8_MAX;
	static uint64_t x18 = UINT64_MAX;
	int8_t x19 = INT8_MIN;
	uint16_t x20 = UINT16_MAX;
	static volatile uint64_t t2 = 661747768704LLU;

	t2 = (((x17-x18)+x19)|x20);

	if (t2 != 65535LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x24 = 136;
	volatile uint32_t t3 = 475U;

	t3 = (((x21-x22)+x23)|x24);

	if (t3 != 4294794398U) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x26 = 44U;
	volatile int8_t x27 = -35;
	volatile int32_t x28 = INT32_MIN;
	volatile uint64_t t4 = 2915743590752557LLU;

	t4 = (((x25-x26)+x27)|x28);

	if (t4 != 18446744073471970492LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x33 = 0U;
	int64_t x34 = INT64_MAX;
	volatile int64_t x36 = -1LL;
	volatile int64_t t5 = 36LL;

	t5 = (((x33-x34)+x35)|x36);

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x39 = 1LLU;
	volatile uint32_t x40 = 910360494U;
	uint64_t t6 = 1951LLU;

	t6 = (((x37-x38)+x39)|x40);

	if (t6 != 910360495LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x41 = -796;
	volatile uint8_t x42 = 36U;
	uint32_t x44 = UINT32_MAX;
	uint32_t t7 = UINT32_MAX;

	t7 = (((x41-x42)+x43)|x44);

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x49 = INT32_MAX;
	volatile int64_t x50 = -1LL;
	static uint64_t x51 = 0LLU;
	volatile uint64_t t8 = 10LLU;

	t8 = (((x49-x50)+x51)|x52);

	if (t8 != 2147483903LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x53 = INT8_MIN;
	uint32_t x54 = 7121U;
	volatile int16_t x55 = INT16_MIN;
	int32_t x56 = -6069;
	uint32_t t9 = 221U;

	t9 = (((x53-x54)+x55)|x56);

	if (t9 != 4294962159U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x57 = INT16_MIN;
	static int32_t x58 = 814085905;
	static int64_t x60 = INT64_MIN;
	static volatile int64_t t10 = -64625145311036LL;

	t10 = (((x57-x58)+x59)|x60);

	if (t10 != -814118674LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x65 = 812509632298LLU;
	int16_t x66 = INT16_MIN;
	uint16_t x68 = UINT16_MAX;
	volatile uint64_t t11 = 220144388168051394LLU;

	t11 = (((x65-x66)+x67)|x68);

	if (t11 != 812509691903LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x69 = -15;
	uint32_t x70 = 33290U;
	static int64_t x71 = -1LL;
	static int8_t x72 = INT8_MAX;

	t12 = (((x69-x70)+x71)|x72);

	if (t12 != 4294934015LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x73 = 4U;
	int16_t x74 = INT16_MAX;
	volatile uint8_t x75 = 71U;
	uint16_t x76 = 5U;
	static int32_t t13 = 6513;

	t13 = (((x73-x74)+x75)|x76);

	if (t13 != -32691) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x77 = 14785U;
	uint8_t x78 = 60U;
	static int64_t x79 = 1335LL;
	uint16_t x80 = UINT16_MAX;

	t14 = (((x77-x78)+x79)|x80);

	if (t14 != 65535LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x81 = UINT8_MAX;
	int64_t x84 = -1LL;
	uint64_t t15 = UINT64_MAX;

	t15 = (((x81-x82)+x83)|x84);

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x85 = 45877LLU;
	uint16_t x86 = 15U;
	int32_t x87 = 9783;
	volatile uint64_t t16 = 2921129472374274LLU;

	t16 = (((x85-x86)+x87)|x88);

	if (t16 != 55645LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint32_t x89 = UINT32_MAX;
	uint8_t x90 = UINT8_MAX;
	uint8_t x91 = 0U;
	int8_t x92 = INT8_MIN;
	volatile uint32_t t17 = 17U;

	t17 = (((x89-x90)+x91)|x92);

	if (t17 != 4294967168U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x93 = UINT8_MAX;
	uint64_t x94 = UINT64_MAX;
	uint8_t x95 = UINT8_MAX;
	uint16_t x96 = 7169U;
	volatile uint64_t t18 = 148LLU;

	t18 = (((x93-x94)+x95)|x96);

	if (t18 != 7679LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x97 = -1LL;
	int8_t x98 = INT8_MIN;
	int64_t x99 = -1LL;
	int32_t x100 = INT32_MIN;
	volatile int64_t t19 = 2059116LL;

	t19 = (((x97-x98)+x99)|x100);

	if (t19 != -2147483522LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x101 = -1;
	int64_t x104 = 693035429LL;

	t20 = (((x101-x102)+x103)|x104);

	if (t20 != -9223372036161740379LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x110 = 830;
	int32_t x112 = INT32_MIN;

	t21 = (((x109-x110)+x111)|x112);

	if (t21 != 18446744072145673736LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x114 = 1;
	volatile uint16_t x116 = UINT16_MAX;
	static int64_t t22 = INT64_MAX;

	t22 = (((x113-x114)+x115)|x116);

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x121 = INT8_MAX;
	int16_t x122 = 23;
	static int8_t x123 = INT8_MAX;
	static int8_t x124 = INT8_MIN;
	static int32_t t23 = -11;

	t23 = (((x121-x122)+x123)|x124);

	if (t23 != -25) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x125 = -1;
	uint16_t x126 = UINT16_MAX;
	int64_t x128 = -154198368946LL;
	int64_t t24 = -825LL;

	t24 = (((x125-x126)+x127)|x128);

	if (t24 != -50LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x130 = 557978864638006LLU;
	int32_t x131 = 196375;
	uint64_t x132 = UINT64_MAX;
	volatile uint64_t t25 = UINT64_MAX;

	t25 = (((x129-x130)+x131)|x132);

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x133 = -10284;
	static uint64_t x134 = 535295607LLU;
	int64_t x135 = 573511679104316LL;
	static int64_t x136 = INT64_MIN;
	volatile uint64_t t26 = 19775111984LLU;

	t26 = (((x133-x134)+x135)|x136);

	if (t26 != 9223945547998574233LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x137 = -1;
	int16_t x138 = INT16_MIN;
	static int64_t x139 = INT64_MIN;
	int32_t x140 = -1;

	t27 = (((x137-x138)+x139)|x140);

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x141 = 1;
	int16_t x142 = INT16_MIN;
	uint64_t x143 = 98286LLU;
	static int16_t x144 = INT16_MIN;
	static volatile uint64_t t28 = 227690631LLU;

	t28 = (((x141-x142)+x143)|x144);

	if (t28 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x149 = 323257U;
	uint64_t x150 = 1LLU;
	volatile int32_t x151 = INT32_MIN;
	int16_t x152 = 123;
	volatile uint64_t t29 = 890377772661LLU;

	t29 = (((x149-x150)+x151)|x152);

	if (t29 != 18446744071562391291LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x153 = INT32_MAX;
	uint64_t x154 = 6LLU;
	int32_t x155 = INT32_MAX;
	int8_t x156 = -1;
	static uint64_t t30 = UINT64_MAX;

	t30 = (((x153-x154)+x155)|x156);

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x157 = INT16_MIN;
	volatile uint8_t x159 = UINT8_MAX;
	volatile uint32_t x160 = UINT32_MAX;
	uint32_t t31 = UINT32_MAX;

	t31 = (((x157-x158)+x159)|x160);

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x161 = 9U;
	volatile int64_t x162 = -1220LL;
	int8_t x164 = -1;

	t32 = (((x161-x162)+x163)|x164);

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x165 = 11661U;
	volatile int64_t x167 = 4LL;
	int64_t x168 = INT64_MAX;
	int64_t t33 = INT64_MAX;

	t33 = (((x165-x166)+x167)|x168);

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x169 = INT32_MIN;
	static uint64_t x170 = 166046624785205LLU;
	static uint16_t x171 = 481U;
	static uint64_t t34 = 977633749LLU;

	t34 = (((x169-x170)+x171)|x172);

	if (t34 != 18446578024937283327LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x173 = 420900768254LLU;
	static uint64_t x174 = UINT64_MAX;
	int16_t x175 = 49;
	int16_t x176 = INT16_MIN;

	t35 = (((x173-x174)+x175)|x176);

	if (t35 != 18446744073709521456LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x177 = 984912856LLU;
	static int8_t x179 = INT8_MIN;
	static uint64_t x180 = UINT64_MAX;
	uint64_t t36 = UINT64_MAX;

	t36 = (((x177-x178)+x179)|x180);

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x181 = 2U;
	uint16_t x182 = UINT16_MAX;
	static int32_t t37 = 5366170;

	t37 = (((x181-x182)+x183)|x184);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x186 = 26;
	int16_t x188 = 1;

	t38 = (((x185-x186)+x187)|x188);

	if (t38 != -337) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x189 = 0;
	uint16_t x190 = 628U;
	int32_t x191 = 384;

	t39 = (((x189-x190)+x191)|x192);

	if (t39 != 4294967278U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x193 = -1150361LL;
	static uint8_t x194 = 10U;
	static int64_t x195 = INT64_MAX;
	static volatile int32_t x196 = -208;
	volatile int64_t t40 = -12710253205873423LL;

	t40 = (((x193-x194)+x195)|x196);

	if (t40 != -132LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x197 = INT16_MAX;
	int64_t x198 = 174LL;
	int16_t x199 = INT16_MIN;
	static uint32_t x200 = 213786095U;
	volatile int64_t t41 = 1925738LL;

	t41 = (((x197-x198)+x199)|x200);

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x209 = -1392357LL;
	int16_t x210 = INT16_MAX;
	int64_t t42 = -1347313894403LL;

	t42 = (((x209-x210)+x211)|x212);

	if (t42 != -9223372032561233637LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x213 = INT16_MIN;
	int8_t x215 = 31;
	int32_t x216 = INT32_MIN;

	t43 = (((x213-x214)+x215)|x216);

	if (t43 != -32864) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x217 = -3;
	int8_t x218 = -1;
	volatile uint32_t x219 = 133285U;
	int64_t t44 = -7860986134LL;

	t44 = (((x217-x218)+x219)|x220);

	if (t44 != -9223372036854642525LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x221 = -1LL;
	static uint32_t x222 = UINT32_MAX;
	volatile int8_t x223 = -1;
	static int16_t x224 = -1;
	volatile int64_t t45 = 2037895436LL;

	t45 = (((x221-x222)+x223)|x224);

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x229 = 27U;
	int64_t x231 = -1LL;
	volatile int32_t x232 = -1;
	volatile int64_t t46 = -55298814267945546LL;

	t46 = (((x229-x230)+x231)|x232);

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x233 = INT16_MIN;
	static uint64_t x234 = 5403808359048280LLU;
	static volatile uint64_t t47 = 3550081768802505712LLU;

	t47 = (((x233-x234)+x235)|x236);

	if (t47 != 18446744073709551039LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x237 = 0U;
	static int8_t x238 = INT8_MAX;
	volatile int64_t x240 = INT64_MIN;
	uint64_t t48 = 27871LLU;

	t48 = (((x237-x238)+x239)|x240);

	if (t48 != 9223372036856568966LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x241 = 1U;
	int16_t x242 = INT16_MIN;
	int8_t x243 = -1;
	uint8_t x244 = 0U;

	t49 = (((x241-x242)+x243)|x244);

	if (t49 != 32768U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x245 = 54;
	int8_t x246 = INT8_MIN;
	int64_t x247 = -1LL;
	uint64_t x248 = UINT64_MAX;

	t50 = (((x245-x246)+x247)|x248);

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x249 = 0;
	int8_t x251 = -3;
	static volatile int32_t t51 = 2194790;

	t51 = (((x249-x250)+x251)|x252);

	if (t51 != -20) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x256 = UINT8_MAX;
	uint32_t t52 = UINT32_MAX;

	t52 = (((x253-x254)+x255)|x256);

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x257 = INT8_MIN;
	uint16_t x260 = 90U;
	volatile int32_t t53 = 10;

	t53 = (((x257-x258)+x259)|x260);

	if (t53 != 2147483519) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x269 = INT32_MAX;
	uint32_t x270 = 28U;
	int64_t x272 = -1LL;
	int64_t t54 = -1374629761261752768LL;

	t54 = (((x269-x270)+x271)|x272);

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x273 = 17U;
	static int8_t x274 = -1;
	int8_t x275 = INT8_MIN;
	static int16_t x276 = -1;

	t55 = (((x273-x274)+x275)|x276);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x277 = UINT8_MAX;
	uint16_t x278 = 0U;
	uint16_t x279 = 664U;
	int32_t x280 = 1525;
	static volatile int32_t t56 = 1746071;

	t56 = (((x277-x278)+x279)|x280);

	if (t56 != 2039) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x281 = INT64_MIN;
	int32_t x282 = INT32_MIN;
	static volatile int16_t x283 = INT16_MIN;

	t57 = (((x281-x282)+x283)|x284);

	if (t57 != 9223372049739651987LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x286 = -1;
	uint32_t x287 = 108904U;
	int16_t x288 = -1;
	volatile uint32_t t58 = UINT32_MAX;

	t58 = (((x285-x286)+x287)|x288);

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x289 = -1;
	volatile int64_t x290 = INT64_MAX;
	uint64_t x291 = 548669608832LLU;
	volatile int32_t x292 = -11138;
	volatile uint64_t t59 = 128706669347LLU;

	t59 = (((x289-x290)+x291)|x292);

	if (t59 != 18446744073709541374LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x293 = INT16_MIN;
	int8_t x295 = -6;
	static int32_t t60 = -17;

	t60 = (((x293-x294)+x295)|x296);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x297 = 4U;
	uint64_t x298 = UINT64_MAX;
	volatile int16_t x300 = INT16_MAX;
	volatile uint64_t t61 = 112767846713446LLU;

	t61 = (((x297-x298)+x299)|x300);

	if (t61 != 32767LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x301 = -1;
	int16_t x303 = INT16_MIN;
	int32_t x304 = -1;
	uint32_t t62 = UINT32_MAX;

	t62 = (((x301-x302)+x303)|x304);

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x305 = UINT8_MAX;
	int32_t x306 = -1;
	int8_t x307 = INT8_MAX;
	static uint16_t x308 = UINT16_MAX;
	int32_t t63 = -28179474;

	t63 = (((x305-x306)+x307)|x308);

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x309 = 487106U;
	volatile int32_t x310 = 163113;
	int64_t x311 = INT64_MIN;
	static int16_t x312 = -2340;

	t64 = (((x309-x310)+x311)|x312);

	if (t64 != -2083LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x313 = -1;
	int16_t x314 = -3;
	uint64_t x315 = 7LLU;
	static volatile int32_t x316 = -1;
	volatile uint64_t t65 = UINT64_MAX;

	t65 = (((x313-x314)+x315)|x316);

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x317 = INT8_MIN;
	static int8_t x319 = INT8_MIN;
	static int32_t x320 = 123;
	uint64_t t66 = 61901LLU;

	t66 = (((x317-x318)+x319)|x320);

	if (t66 != 18446744073709551227LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x333 = INT16_MIN;
	static int64_t x334 = 2368139159759238552LL;
	int32_t x335 = INT32_MIN;
	int32_t x336 = -1;
	volatile int64_t t67 = 58599736LL;

	t67 = (((x333-x334)+x335)|x336);

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x341 = -1;
	volatile uint64_t x342 = 2834433080538LLU;
	uint32_t x344 = 45U;
	uint64_t t68 = 4209704763948357295LLU;

	t68 = (((x341-x342)+x343)|x344);

	if (t68 != 16926868628724157LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x345 = INT32_MAX;
	static int16_t x346 = INT16_MAX;
	int32_t x347 = INT32_MIN;
	int16_t x348 = -1;
	volatile int32_t t69 = -8609;

	t69 = (((x345-x346)+x347)|x348);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x353 = -463162260LL;
	uint16_t x354 = UINT16_MAX;
	static uint16_t x355 = UINT16_MAX;
	static volatile int16_t x356 = 4633;
	static volatile int64_t t70 = 145LL;

	t70 = (((x353-x354)+x355)|x356);

	if (t70 != -463161731LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x358 = 7;
	int16_t x360 = INT16_MIN;
	volatile int32_t t71 = 539;

	t71 = (((x357-x358)+x359)|x360);

	if (t71 != -17252) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x363 = UINT64_MAX;
	int32_t x364 = INT32_MIN;
	static volatile uint64_t t72 = 231122434LLU;

	t72 = (((x361-x362)+x363)|x364);

	if (t72 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x365 = UINT32_MAX;
	uint64_t x367 = UINT64_MAX;
	volatile uint64_t x368 = 3842407017LLU;
	uint64_t t73 = 51966886LLU;

	t73 = (((x365-x366)+x367)|x368);

	if (t73 != 4294965865LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x369 = INT32_MIN;
	int32_t x370 = -12851;
	static int32_t x371 = -1;
	volatile int16_t x372 = -1;

	t74 = (((x369-x370)+x371)|x372);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x373 = INT64_MIN;
	int64_t x374 = INT64_MIN;
	int8_t x375 = 3;
	uint32_t x376 = UINT32_MAX;
	static int64_t t75 = 135LL;

	t75 = (((x373-x374)+x375)|x376);

	if (t75 != 4294967295LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x380 = 0U;
	static int32_t t76 = -2112;

	t76 = (((x377-x378)+x379)|x380);

	if (t76 != 1226) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x385 = INT16_MIN;
	int64_t x386 = -1LL;
	int8_t x387 = INT8_MIN;
	int8_t x388 = 3;
	volatile int64_t t77 = 14226102LL;

	t77 = (((x385-x386)+x387)|x388);

	if (t77 != -32893LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x389 = UINT8_MAX;
	int64_t x390 = 1609375510380209003LL;
	uint32_t x391 = UINT32_MAX;
	int8_t x392 = INT8_MAX;
	int64_t t78 = 7LL;

	t78 = (((x389-x390)+x391)|x392);

	if (t78 != -1609375506085241345LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x393 = 20988907746062802LLU;
	uint32_t x394 = UINT32_MAX;
	int32_t x395 = INT32_MAX;
	int16_t x396 = INT16_MIN;
	uint64_t t79 = 1731405859026545LLU;

	t79 = (((x393-x394)+x395)|x396);

	if (t79 != 18446744073709547986LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x401 = -1LL;
	static volatile int32_t x402 = 3561083;
	int32_t x403 = INT32_MAX;
	int16_t x404 = -38;
	static int64_t t80 = 3834827LL;

	t80 = (((x401-x402)+x403)|x404);

	if (t80 != -37LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x409 = -1;
	uint32_t x410 = 57988343U;
	int64_t x411 = -50792069783076LL;
	volatile int32_t x412 = 48194;
	volatile int64_t t81 = 236LL;

	t81 = (((x409-x410)+x411)|x412);

	if (t81 != -50787832759066LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x413 = UINT64_MAX;
	uint64_t x414 = 62351307LLU;
	int16_t x415 = INT16_MIN;
	static volatile uint64_t t82 = UINT64_MAX;

	t82 = (((x413-x414)+x415)|x416);

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x417 = UINT32_MAX;
	static int16_t x418 = -1;
	static uint16_t x420 = UINT16_MAX;
	static volatile uint32_t t83 = 797709U;

	t83 = (((x417-x418)+x419)|x420);

	if (t83 != 65535U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x421 = 1178LLU;
	static uint16_t x423 = UINT16_MAX;
	uint64_t x424 = UINT64_MAX;
	volatile uint64_t t84 = UINT64_MAX;

	t84 = (((x421-x422)+x423)|x424);

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x425 = UINT64_MAX;
	static uint32_t x426 = 1U;
	static uint64_t x427 = UINT64_MAX;
	uint32_t x428 = 230637027U;
	uint64_t t85 = UINT64_MAX;

	t85 = (((x425-x426)+x427)|x428);

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x429 = UINT32_MAX;
	uint32_t x430 = 4545835U;
	uint64_t x431 = 52233910532961204LLU;
	int64_t x432 = INT64_MIN;
	volatile uint64_t t86 = 126707898270550LLU;

	t86 = (((x429-x430)+x431)|x432);

	if (t86 != 9275605951678158472LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x437 = 0;
	int16_t x438 = -16376;
	int16_t x439 = -10038;
	int8_t x440 = -1;

	t87 = (((x437-x438)+x439)|x440);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x441 = -11890;
	int32_t x442 = INT32_MIN;
	static int8_t x443 = -1;
	static uint64_t x444 = 140629935446662LLU;
	uint64_t t88 = 202757LLU;

	t88 = (((x441-x442)+x443)|x444);

	if (t88 != 140630114163599LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x445 = INT8_MIN;
	int64_t x446 = INT64_MIN;
	int16_t x447 = -1;
	static uint16_t x448 = UINT16_MAX;
	volatile int64_t t89 = INT64_MAX;

	t89 = (((x445-x446)+x447)|x448);

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x453 = UINT16_MAX;
	int16_t x454 = INT16_MIN;
	uint16_t x455 = 28406U;
	volatile int64_t x456 = -1LL;
	volatile int64_t t90 = -133969154926039LL;

	t90 = (((x453-x454)+x455)|x456);

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x457 = INT16_MIN;
	static int64_t x458 = -1LL;
	int16_t x459 = INT16_MIN;
	int64_t x460 = INT64_MIN;

	t91 = (((x457-x458)+x459)|x460);

	if (t91 != -65535LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x461 = INT32_MIN;
	int8_t x462 = -1;
	static int8_t x463 = -1;
	int64_t x464 = INT64_MAX;
	volatile int64_t t92 = 1962693LL;

	t92 = (((x461-x462)+x463)|x464);

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x465 = 4067941;
	int64_t x466 = INT64_MAX;
	uint32_t x467 = UINT32_MAX;
	int16_t x468 = 7767;
	volatile int64_t t93 = -878357960195622598LL;

	t93 = (((x465-x466)+x467)|x468);

	if (t93 != -9223372032555737481LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x469 = INT32_MAX;
	uint32_t x472 = 686U;
	volatile uint32_t t94 = 412U;

	t94 = (((x469-x470)+x471)|x472);

	if (t94 != 2147451822U) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x474 = -9789;
	int64_t x475 = 12229747LL;
	uint32_t x476 = 136U;

	t95 = (((x473-x474)+x475)|x476);

	if (t95 != 12247435LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x477 = UINT8_MAX;
	volatile int64_t x478 = INT64_MAX;
	volatile int8_t x479 = 3;
	volatile int64_t x480 = -3456LL;
	int64_t t96 = 28320858LL;

	t96 = (((x477-x478)+x479)|x480);

	if (t96 != -3197LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x481 = UINT64_MAX;
	static uint64_t x483 = 1321125270843966367LLU;
	static int16_t x484 = INT16_MIN;

	t97 = (((x481-x482)+x483)|x484);

	if (t97 != 18446744073709536128LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x485 = 129706226844LLU;
	volatile int8_t x486 = 6;
	static int64_t x487 = INT64_MIN;
	static int8_t x488 = INT8_MAX;
	volatile uint64_t t98 = 15263989LLU;

	t98 = (((x485-x486)+x487)|x488);

	if (t98 != 9223372166561002751LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x492 = -1LL;
	volatile uint64_t t99 = UINT64_MAX;

	t99 = (((x489-x490)+x491)|x492);

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

