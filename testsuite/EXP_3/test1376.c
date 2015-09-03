#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = UINT32_MAX;
int8_t x8 = 0;
volatile uint16_t x11 = 18575U;
static int16_t x13 = -1;
static uint8_t x14 = 5U;
static uint64_t x23 = 33755400923728LLU;
static int64_t x30 = -1LL;
int64_t x31 = -1LL;
static uint16_t x35 = UINT16_MAX;
int32_t x43 = -1;
int32_t t10 = 0;
volatile uint16_t x50 = 720U;
static int32_t x65 = INT32_MIN;
int8_t x80 = INT8_MIN;
volatile int64_t x84 = INT64_MIN;
uint16_t x87 = 16423U;
int8_t x89 = -1;
int32_t x92 = INT32_MIN;
int64_t x101 = 11778288257083LL;
uint64_t x104 = 5100670583835LLU;
int64_t t24 = 16835LL;
static int8_t x108 = INT8_MAX;
static volatile uint64_t t25 = 4310416236325LLU;
int16_t x110 = -914;
uint16_t x113 = 6U;
int32_t x119 = -126116575;
int32_t t28 = 10792634;
int16_t x129 = INT16_MAX;
uint32_t x140 = UINT32_MAX;
int64_t x141 = INT64_MIN;
int16_t x157 = -1221;
volatile uint64_t x158 = UINT64_MAX;
volatile int16_t x172 = INT16_MIN;
volatile int16_t x173 = -1;
int16_t x176 = -1;
volatile uint64_t x180 = 480384431964LLU;
int16_t x185 = 4331;
int32_t x187 = -2;
int32_t x188 = -1;
int64_t x189 = -1LL;
static int32_t t44 = -46116;
uint64_t x206 = 3918LLU;
static int64_t t47 = -192LL;
uint64_t x215 = UINT64_MAX;
int8_t x218 = INT8_MIN;
uint32_t x222 = 2267646U;
static uint32_t x233 = UINT32_MAX;
static uint16_t x244 = 110U;
int8_t x257 = -1;
int64_t t56 = -47033530341906LL;
uint32_t x266 = UINT32_MAX;
int64_t x267 = INT64_MIN;
static uint32_t t57 = 601U;
uint32_t x275 = 3768U;
static volatile int16_t x281 = -1;
volatile uint32_t x282 = UINT32_MAX;
volatile int16_t x286 = -1;
int16_t x287 = INT16_MIN;
uint64_t x289 = 24282LLU;
static int16_t x291 = INT16_MIN;
int32_t x293 = -210659408;
static uint64_t x295 = 337LLU;
uint32_t x296 = 1006118U;
volatile int32_t x299 = -145637539;
static int8_t x300 = INT8_MAX;
volatile int64_t t65 = -477005LL;
volatile int64_t x309 = -1LL;
int64_t t69 = -63483539169409LL;
int64_t t72 = -3127769032471499958LL;
uint32_t x333 = UINT32_MAX;
volatile uint32_t x346 = 1U;
volatile int64_t t75 = 0LL;
static uint16_t x350 = UINT16_MAX;
uint32_t x363 = UINT32_MAX;
int8_t x364 = INT8_MIN;
int32_t t79 = 125450311;
static volatile uint16_t x365 = UINT16_MAX;
int8_t x369 = 3;
int64_t x372 = INT64_MAX;
static int32_t t82 = -1966;
static int8_t x378 = -1;
int16_t x379 = -8174;
uint64_t x382 = 1602558438351918LLU;
uint64_t t84 = 180LLU;
static uint64_t x388 = 35734LLU;
int64_t x391 = INT64_MAX;
static int64_t x392 = -1LL;
volatile int64_t t86 = 7211699489679LL;
int32_t x395 = INT32_MIN;
static int32_t x397 = -1;
uint64_t x399 = 17LLU;
int32_t x400 = -71994;
int32_t t88 = -516396;
uint64_t x401 = 14636837953458LLU;
int64_t x412 = 18LL;
volatile uint8_t x414 = 33U;
volatile int16_t x416 = INT16_MAX;
volatile int32_t x421 = -1;
uint64_t x423 = UINT64_MAX;
volatile int16_t x424 = -3;
int32_t t94 = -205199340;
static uint8_t x427 = UINT8_MAX;
static int16_t x428 = -1;
volatile int32_t t95 = -1363468;
int16_t x429 = -955;
int8_t x440 = 53;
static int32_t t98 = 37890052;


void f0(void) {
	int64_t x2 = -1LL;
	int32_t x3 = INT32_MIN;
	volatile int64_t x4 = 85160720649610823LL;
	volatile int64_t t0 = 275129815573762LL;

	t0 = ((x1-x2)&(x3<x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	int16_t x6 = -1;
	volatile int32_t x7 = -1;
	int32_t t1 = -1;

	t1 = ((x5-x6)&(x7<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 118382314956467824LL;
	int32_t x10 = -1;
	int8_t x12 = INT8_MAX;
	static int64_t t2 = 0LL;

	t2 = ((x9-x10)&(x11<x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x15 = 2;
	volatile uint8_t x16 = 9U;
	volatile int32_t t3 = 10282;

	t3 = ((x13-x14)&(x15<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x17 = 53U;
	uint16_t x18 = UINT16_MAX;
	volatile int64_t x19 = INT64_MIN;
	uint32_t x20 = 0U;
	volatile int32_t t4 = 83189127;

	t4 = ((x17-x18)&(x19<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = -2;
	static volatile int16_t x22 = 2253;
	int32_t x24 = 352;
	int32_t t5 = -641094;

	t5 = ((x21-x22)&(x23<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = -1;
	static uint16_t x26 = UINT16_MAX;
	uint64_t x27 = 7493462LLU;
	int32_t x28 = INT32_MIN;
	int32_t t6 = -6588887;

	t6 = ((x25-x26)&(x27<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 4369186657257033353LLU;
	int8_t x32 = -1;
	static volatile uint64_t t7 = 165662733646376LLU;

	t7 = ((x29-x30)&(x31<x32));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = -1;
	int64_t x34 = -1LL;
	volatile int64_t x36 = -1LL;
	volatile int64_t t8 = -136315830194505LL;

	t8 = ((x33-x34)&(x35<x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x37 = 2429U;
	uint64_t x38 = 127885405LLU;
	volatile uint64_t x39 = UINT64_MAX;
	volatile uint8_t x40 = UINT8_MAX;
	uint64_t t9 = 817218LLU;

	t9 = ((x37-x38)&(x39<x40));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	int32_t x42 = -1;
	int64_t x44 = -537LL;

	t10 = ((x41-x42)&(x43<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x45 = 5654400728504LLU;
	int16_t x46 = INT16_MAX;
	int8_t x47 = 1;
	int16_t x48 = -39;
	volatile uint64_t t11 = 7173765LLU;

	t11 = ((x45-x46)&(x47<x48));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x49 = 5218U;
	volatile int64_t x51 = 1741323675152699LL;
	static uint64_t x52 = 398132152091306330LLU;
	int32_t t12 = -4548;

	t12 = ((x49-x50)&(x51<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint32_t x53 = 2012020081U;
	uint8_t x54 = 1U;
	int64_t x55 = INT64_MIN;
	uint8_t x56 = 23U;
	volatile uint32_t t13 = 49116U;

	t13 = ((x53-x54)&(x55<x56));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	int64_t x58 = INT64_MIN;
	int8_t x59 = -1;
	uint8_t x60 = UINT8_MAX;
	int64_t t14 = -89572LL;

	t14 = ((x57-x58)&(x59<x60));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x66 = 15451123794403LLU;
	int32_t x67 = -74748;
	uint32_t x68 = 8U;
	volatile uint64_t t15 = 19318326739LLU;

	t15 = ((x65-x66)&(x67<x68));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x69 = INT8_MIN;
	int64_t x70 = INT64_MIN;
	static uint16_t x71 = 0U;
	static int32_t x72 = INT32_MIN;
	static int64_t t16 = 796LL;

	t16 = ((x69-x70)&(x71<x72));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = UINT64_MAX;
	volatile int8_t x74 = -23;
	volatile int32_t x75 = INT32_MAX;
	uint16_t x76 = UINT16_MAX;
	static uint64_t t17 = 178625LLU;

	t17 = ((x73-x74)&(x75<x76));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = -59008LL;
	int32_t x78 = -1;
	int8_t x79 = -1;
	int64_t t18 = 1116628750073154LL;

	t18 = ((x77-x78)&(x79<x80));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x81 = 132971933249LLU;
	static uint16_t x82 = 314U;
	int8_t x83 = -17;
	static volatile uint64_t t19 = 215790LLU;

	t19 = ((x81-x82)&(x83<x84));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x85 = 15U;
	uint16_t x86 = 486U;
	int32_t x88 = -1;
	volatile int32_t t20 = 23571976;

	t20 = ((x85-x86)&(x87<x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x90 = -163LL;
	static int64_t x91 = INT64_MIN;
	static volatile int64_t t21 = 34258047572LL;

	t21 = ((x89-x90)&(x91<x92));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = -385746532529072678LL;
	volatile int16_t x94 = INT16_MAX;
	int32_t x95 = INT32_MIN;
	int16_t x96 = INT16_MIN;
	volatile int64_t t22 = 21906733599561271LL;

	t22 = ((x93-x94)&(x95<x96));

	if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x97 = INT64_MIN;
	uint64_t x98 = 8045963417973699172LLU;
	int8_t x99 = INT8_MAX;
	int32_t x100 = 167;
	uint64_t t23 = 4288781283LLU;

	t23 = ((x97-x98)&(x99<x100));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x102 = UINT32_MAX;
	static uint32_t x103 = 21U;

	t24 = ((x101-x102)&(x103<x104));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x105 = UINT64_MAX;
	uint16_t x106 = 1572U;
	int64_t x107 = 3169718698LL;

	t25 = ((x105-x106)&(x107<x108));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x109 = -2998472790LL;
	int16_t x111 = INT16_MIN;
	static uint16_t x112 = 1161U;
	static int64_t t26 = -3719770199848331515LL;

	t26 = ((x109-x110)&(x111<x112));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x114 = 9;
	int32_t x115 = 108138401;
	static uint8_t x116 = UINT8_MAX;
	volatile int32_t t27 = 945;

	t27 = ((x113-x114)&(x115<x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x117 = -306;
	static volatile uint8_t x118 = UINT8_MAX;
	volatile int8_t x120 = INT8_MIN;

	t28 = ((x117-x118)&(x119<x120));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x121 = 23151U;
	static uint64_t x122 = UINT64_MAX;
	int64_t x123 = INT64_MIN;
	uint64_t x124 = UINT64_MAX;
	uint64_t t29 = 1615259523LLU;

	t29 = ((x121-x122)&(x123<x124));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x125 = 81U;
	int32_t x126 = INT32_MAX;
	int32_t x127 = -105451804;
	uint16_t x128 = UINT16_MAX;
	volatile uint32_t t30 = 204129U;

	t30 = ((x125-x126)&(x127<x128));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x130 = -2101251746345803020LL;
	uint8_t x131 = 36U;
	uint64_t x132 = 672120559972284707LLU;
	int64_t t31 = 48930987861LL;

	t31 = ((x129-x130)&(x131<x132));

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = 21;
	static int8_t x138 = -1;
	int32_t x139 = INT32_MIN;
	int32_t t32 = 60838;

	t32 = ((x137-x138)&(x139<x140));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x142 = INT16_MIN;
	uint8_t x143 = 2U;
	int8_t x144 = INT8_MIN;
	volatile int64_t t33 = 29441385736763521LL;

	t33 = ((x141-x142)&(x143<x144));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x149 = INT16_MIN;
	static int8_t x150 = -1;
	int8_t x151 = INT8_MIN;
	int64_t x152 = INT64_MIN;
	volatile int32_t t34 = 87;

	t34 = ((x149-x150)&(x151<x152));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x159 = 51582LLU;
	static int16_t x160 = INT16_MIN;
	volatile uint64_t t35 = 22450906841LLU;

	t35 = ((x157-x158)&(x159<x160));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x161 = -485;
	volatile uint16_t x162 = UINT16_MAX;
	int8_t x163 = -1;
	static uint32_t x164 = 267577009U;
	volatile int32_t t36 = -13248971;

	t36 = ((x161-x162)&(x163<x164));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x169 = UINT64_MAX;
	volatile int64_t x170 = -3484468LL;
	int64_t x171 = INT64_MAX;
	static volatile uint64_t t37 = 157018589837033LLU;

	t37 = ((x169-x170)&(x171<x172));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x174 = UINT64_MAX;
	uint32_t x175 = UINT32_MAX;
	uint64_t t38 = 1642674097778860LLU;

	t38 = ((x173-x174)&(x175<x176));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x177 = 9;
	volatile int16_t x178 = 860;
	int8_t x179 = INT8_MAX;
	volatile int32_t t39 = -7;

	t39 = ((x177-x178)&(x179<x180));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x181 = INT16_MIN;
	static int16_t x182 = -626;
	volatile uint64_t x183 = 11195016297673LLU;
	static volatile int16_t x184 = INT16_MIN;
	static int32_t t40 = -10765782;

	t40 = ((x181-x182)&(x183<x184));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x186 = 20U;
	int32_t t41 = -300;

	t41 = ((x185-x186)&(x187<x188));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x190 = UINT8_MAX;
	int32_t x191 = INT32_MAX;
	static uint64_t x192 = 44642LLU;
	int64_t t42 = -12945356LL;

	t42 = ((x189-x190)&(x191<x192));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x193 = 974021946643098LLU;
	int8_t x194 = INT8_MAX;
	int16_t x195 = 0;
	volatile uint32_t x196 = 58643719U;
	uint64_t t43 = 17466850211LLU;

	t43 = ((x193-x194)&(x195<x196));

	if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x197 = -404;
	uint8_t x198 = 20U;
	static int32_t x199 = -1;
	int16_t x200 = INT16_MIN;

	t44 = ((x197-x198)&(x199<x200));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x201 = 127390588;
	uint64_t x202 = 8262LLU;
	int64_t x203 = 10680055334185614LL;
	static int32_t x204 = 577;
	uint64_t t45 = 156992LLU;

	t45 = ((x201-x202)&(x203<x204));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x205 = 17476352LLU;
	uint16_t x207 = 4934U;
	int32_t x208 = -1;
	uint64_t t46 = 631LLU;

	t46 = ((x205-x206)&(x207<x208));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x209 = 109U;
	int64_t x210 = -15762333981447930LL;
	static int16_t x211 = 0;
	int16_t x212 = -1;

	t47 = ((x209-x210)&(x211<x212));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x213 = -304410126730LL;
	static volatile int64_t x214 = INT64_MIN;
	int8_t x216 = INT8_MAX;
	volatile int64_t t48 = -10602851768175LL;

	t48 = ((x213-x214)&(x215<x216));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x217 = INT32_MIN;
	static volatile int8_t x219 = -1;
	static uint8_t x220 = 77U;
	volatile int32_t t49 = 28204426;

	t49 = ((x217-x218)&(x219<x220));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x221 = UINT16_MAX;
	volatile int64_t x223 = INT64_MIN;
	int32_t x224 = 206716;
	static volatile uint32_t t50 = 16696625U;

	t50 = ((x221-x222)&(x223<x224));

	if (t50 != 1U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x234 = -6551;
	int8_t x235 = INT8_MIN;
	int64_t x236 = 230584LL;
	uint32_t t51 = 5U;

	t51 = ((x233-x234)&(x235<x236));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x241 = INT8_MAX;
	volatile uint32_t x242 = UINT32_MAX;
	int16_t x243 = INT16_MIN;
	volatile uint32_t t52 = 1891U;

	t52 = ((x241-x242)&(x243<x244));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x245 = 55U;
	int32_t x246 = -1;
	volatile int8_t x247 = INT8_MIN;
	int16_t x248 = -1;
	int32_t t53 = 1619147;

	t53 = ((x245-x246)&(x247<x248));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x249 = 5;
	uint8_t x250 = 94U;
	static volatile uint32_t x251 = 127802U;
	int64_t x252 = 136436991957LL;
	static int32_t t54 = -2616145;

	t54 = ((x249-x250)&(x251<x252));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x253 = UINT64_MAX;
	uint64_t x254 = 667980LLU;
	int64_t x255 = -128949616851014LL;
	uint64_t x256 = UINT64_MAX;
	uint64_t t55 = 4894308491LLU;

	t55 = ((x253-x254)&(x255<x256));

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x258 = INT64_MAX;
	static int64_t x259 = -1LL;
	int8_t x260 = INT8_MIN;

	t56 = ((x257-x258)&(x259<x260));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x265 = INT32_MIN;
	static int64_t x268 = 1831019115577293206LL;

	t57 = ((x265-x266)&(x267<x268));

	if (t57 != 1U) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x269 = 0LL;
	int64_t x270 = INT64_MAX;
	static int32_t x271 = INT32_MAX;
	uint8_t x272 = 1U;
	int64_t t58 = -91714399282LL;

	t58 = ((x269-x270)&(x271<x272));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x273 = UINT32_MAX;
	int64_t x274 = 25872053LL;
	static int16_t x276 = 7;
	volatile int64_t t59 = 17712957114489LL;

	t59 = ((x273-x274)&(x275<x276));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x277 = 60576LL;
	int64_t x278 = -632LL;
	static int8_t x279 = INT8_MIN;
	int8_t x280 = INT8_MAX;
	volatile int64_t t60 = -19483LL;

	t60 = ((x277-x278)&(x279<x280));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x283 = 1;
	static int16_t x284 = 4636;
	uint32_t t61 = 1U;

	t61 = ((x281-x282)&(x283<x284));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x285 = 0;
	int32_t x288 = INT32_MIN;
	int32_t t62 = -36958743;

	t62 = ((x285-x286)&(x287<x288));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x290 = INT16_MIN;
	static int32_t x292 = INT32_MAX;
	uint64_t t63 = 100114788992LLU;

	t63 = ((x289-x290)&(x291<x292));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x294 = INT8_MIN;
	static int32_t t64 = -687;

	t64 = ((x293-x294)&(x295<x296));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x297 = -1;
	volatile int64_t x298 = INT64_MAX;

	t65 = ((x297-x298)&(x299<x300));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x301 = 19;
	int8_t x302 = INT8_MIN;
	int16_t x303 = 2499;
	volatile int16_t x304 = 1;
	int32_t t66 = -92;

	t66 = ((x301-x302)&(x303<x304));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x305 = INT64_MIN;
	volatile uint64_t x306 = 1LLU;
	int16_t x307 = INT16_MAX;
	int64_t x308 = INT64_MIN;
	volatile uint64_t t67 = 958269598610784LLU;

	t67 = ((x305-x306)&(x307<x308));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x310 = INT16_MAX;
	static int64_t x311 = -1LL;
	uint16_t x312 = UINT16_MAX;
	int64_t t68 = -19864919208709LL;

	t68 = ((x309-x310)&(x311<x312));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x317 = 1007U;
	int64_t x318 = 478LL;
	int64_t x319 = INT64_MIN;
	volatile int32_t x320 = -1;

	t69 = ((x317-x318)&(x319<x320));

	if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x321 = 479746333613LL;
	static uint16_t x322 = 0U;
	static int32_t x323 = -1;
	int64_t x324 = INT64_MAX;
	int64_t t70 = -2458077606LL;

	t70 = ((x321-x322)&(x323<x324));

	if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x325 = -1;
	int8_t x326 = INT8_MIN;
	int16_t x327 = INT16_MIN;
	volatile uint32_t x328 = 89U;
	volatile int32_t t71 = 2;

	t71 = ((x325-x326)&(x327<x328));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x329 = -1LL;
	volatile uint32_t x330 = 370848U;
	volatile uint32_t x331 = 14949963U;
	volatile int8_t x332 = INT8_MIN;

	t72 = ((x329-x330)&(x331<x332));

	if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x334 = 1989LL;
	int32_t x335 = INT32_MIN;
	volatile uint32_t x336 = UINT32_MAX;
	volatile int64_t t73 = 485832376LL;

	t73 = ((x333-x334)&(x335<x336));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x341 = 855LLU;
	static int16_t x342 = -1;
	volatile int64_t x343 = -1LL;
	static int64_t x344 = -999183LL;
	uint64_t t74 = 12895426126832459LLU;

	t74 = ((x341-x342)&(x343<x344));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x345 = 63437751230LL;
	int16_t x347 = 3656;
	static uint64_t x348 = 43907563916441165LLU;

	t75 = ((x345-x346)&(x347<x348));

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x349 = INT8_MIN;
	volatile uint64_t x351 = 746LLU;
	volatile uint8_t x352 = 0U;
	int32_t t76 = 1;

	t76 = ((x349-x350)&(x351<x352));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x353 = 668263LLU;
	int32_t x354 = -1;
	int32_t x355 = INT32_MIN;
	uint8_t x356 = 18U;
	static volatile uint64_t t77 = 1092115199581311LLU;

	t77 = ((x353-x354)&(x355<x356));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x357 = 639U;
	uint64_t x358 = 55036702345LLU;
	int8_t x359 = 0;
	static uint16_t x360 = 1012U;
	static volatile uint64_t t78 = 2899027692LLU;

	t78 = ((x357-x358)&(x359<x360));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x361 = 18U;
	int8_t x362 = INT8_MIN;

	t79 = ((x361-x362)&(x363<x364));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x366 = -113243LL;
	volatile uint16_t x367 = 288U;
	uint8_t x368 = 71U;
	volatile int64_t t80 = -1LL;

	t80 = ((x365-x366)&(x367<x368));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x370 = -1;
	uint8_t x371 = 2U;
	volatile int32_t t81 = 3863;

	t81 = ((x369-x370)&(x371<x372));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x373 = -802935;
	int8_t x374 = INT8_MIN;
	static uint64_t x375 = 1692886LLU;
	static int16_t x376 = INT16_MAX;

	t82 = ((x373-x374)&(x375<x376));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x377 = -1LL;
	int32_t x380 = -6;
	int64_t t83 = 2864176484052LL;

	t83 = ((x377-x378)&(x379<x380));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x381 = INT8_MIN;
	int16_t x383 = -1;
	volatile int32_t x384 = -1;

	t84 = ((x381-x382)&(x383<x384));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x385 = INT16_MAX;
	volatile int64_t x386 = -954407719LL;
	volatile int16_t x387 = INT16_MAX;
	static volatile int64_t t85 = -418292677LL;

	t85 = ((x385-x386)&(x387<x388));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x389 = -758104967521476LL;
	uint8_t x390 = 6U;

	t86 = ((x389-x390)&(x391<x392));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x393 = 0;
	uint8_t x394 = UINT8_MAX;
	int8_t x396 = 0;
	int32_t t87 = -646;

	t87 = ((x393-x394)&(x395<x396));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x398 = INT16_MIN;

	t88 = ((x397-x398)&(x399<x400));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x402 = -13;
	static volatile int32_t x403 = -3344789;
	uint8_t x404 = UINT8_MAX;
	uint64_t t89 = 573372346445899854LLU;

	t89 = ((x401-x402)&(x403<x404));

	if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x405 = 4;
	volatile int16_t x406 = 1;
	uint8_t x407 = 3U;
	volatile int64_t x408 = -1LL;
	static int32_t t90 = -983;

	t90 = ((x405-x406)&(x407<x408));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x409 = -1;
	int64_t x410 = -1LL;
	uint8_t x411 = 1U;
	volatile int64_t t91 = 139616LL;

	t91 = ((x409-x410)&(x411<x412));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x413 = -1;
	volatile int16_t x415 = INT16_MIN;
	int32_t t92 = 2;

	t92 = ((x413-x414)&(x415<x416));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x417 = INT16_MAX;
	uint64_t x418 = 10819999341107537LLU;
	static int8_t x419 = -1;
	int16_t x420 = 0;
	uint64_t t93 = 63256626402LLU;

	t93 = ((x417-x418)&(x419<x420));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x422 = 107U;

	t94 = ((x421-x422)&(x423<x424));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x425 = 0;
	static int16_t x426 = -31;

	t95 = ((x425-x426)&(x427<x428));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x430 = -45;
	uint64_t x431 = UINT64_MAX;
	uint16_t x432 = 2498U;
	int32_t t96 = 154031899;

	t96 = ((x429-x430)&(x431<x432));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x433 = 1;
	volatile int8_t x434 = INT8_MIN;
	int8_t x435 = INT8_MIN;
	int16_t x436 = -1;
	int32_t t97 = 3261;

	t97 = ((x433-x434)&(x435<x436));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x437 = INT8_MIN;
	int32_t x438 = 85289;
	int32_t x439 = 2886;

	t98 = ((x437-x438)&(x439<x440));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x449 = UINT32_MAX;
	static volatile uint32_t x450 = 53906U;
	int16_t x451 = 89;
	static uint8_t x452 = 10U;
	uint32_t t99 = 264U;

	t99 = ((x449-x450)&(x451<x452));

	if (t99 != 0U) { NG(); } else { ; }
	
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

