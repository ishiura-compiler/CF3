#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
int32_t t0 = 1016146516;
int16_t x21 = INT16_MAX;
uint16_t x24 = 553U;
volatile uint16_t x28 = UINT16_MAX;
int32_t x29 = INT32_MIN;
volatile int8_t x34 = INT8_MAX;
int32_t x41 = -1;
int8_t x42 = INT8_MAX;
volatile int64_t x43 = -1LL;
volatile int64_t x46 = INT64_MIN;
volatile int32_t t8 = 776198784;
static uint64_t x58 = 5278535514389758788LLU;
int8_t x67 = INT8_MIN;
uint16_t x75 = 1742U;
int64_t t12 = 19292955LL;
int32_t x78 = -102834;
uint64_t x79 = UINT64_MAX;
volatile int32_t t13 = 4158784;
uint16_t x88 = UINT16_MAX;
volatile uint8_t x95 = UINT8_MAX;
uint32_t t16 = 23U;
static volatile int8_t x110 = INT8_MIN;
uint16_t x113 = 545U;
uint16_t x115 = 1U;
uint32_t t20 = 1691883023U;
uint32_t x127 = UINT32_MAX;
uint8_t x128 = UINT8_MAX;
volatile int16_t x132 = 120;
int64_t x133 = INT64_MAX;
volatile int16_t x136 = INT16_MIN;
int64_t t23 = -113245590LL;
volatile int64_t t24 = -5LL;
uint8_t x144 = 22U;
uint64_t x158 = 14360584570434849LLU;
uint8_t x172 = 7U;
uint64_t t30 = 15349676LLU;
int64_t x180 = -23LL;
int16_t x193 = INT16_MIN;
volatile int8_t x196 = 11;
int32_t x200 = INT32_MIN;
static uint8_t x202 = UINT8_MAX;
uint8_t x217 = UINT8_MAX;
int64_t x219 = INT64_MIN;
int64_t x233 = INT64_MIN;
int8_t x241 = INT8_MAX;
int8_t x243 = 14;
uint16_t x250 = UINT16_MAX;
int32_t t46 = 0;
int64_t x278 = 2058201597218LL;
int64_t x288 = INT64_MAX;
int64_t x296 = 96LL;
static int64_t t52 = 109LL;
uint64_t x301 = 1573460650792LLU;
int64_t t56 = -17921928LL;
static int16_t x316 = 482;
static uint8_t x318 = 5U;
volatile uint64_t t59 = 370LLU;
int32_t x330 = 499990;
static int32_t x336 = 625;
uint16_t x343 = 15U;
static volatile int32_t x361 = INT32_MAX;
int32_t x363 = -1;
uint64_t t66 = 1546211345435557LLU;
uint8_t x369 = 4U;
int8_t x370 = INT8_MAX;
int32_t x373 = INT32_MIN;
volatile int64_t x378 = INT64_MIN;
static int64_t x379 = -401649LL;
int64_t t69 = 7747464LL;
static int32_t t71 = 18;
static uint16_t x393 = 62U;
int8_t x394 = INT8_MIN;
static int32_t x396 = -80247179;
int32_t t72 = -576472;
uint32_t x397 = 26U;
uint32_t x398 = 7335U;
static volatile uint32_t t73 = 60U;
static int32_t x404 = -473903;
volatile int32_t x410 = -65072948;
static volatile uint64_t t76 = 6LLU;
static int64_t x419 = 309780864253LL;
uint32_t x422 = UINT32_MAX;
static int8_t x427 = INT8_MAX;
int8_t x438 = INT8_MAX;
uint64_t x439 = 7LLU;
volatile uint32_t t81 = 6351U;
int32_t x443 = INT32_MIN;
int32_t t82 = 653801;
int8_t x450 = INT8_MIN;
uint16_t x454 = UINT16_MAX;
volatile int32_t t84 = 62609;
int16_t x467 = 0;
static uint16_t x469 = UINT16_MAX;
int8_t x470 = INT8_MAX;
uint8_t x481 = UINT8_MAX;
volatile int32_t t91 = -16572;
int8_t x492 = 1;
uint32_t t92 = 1901465306U;
static uint64_t x495 = 7537322275344352161LLU;
volatile int64_t t93 = 13LL;
int32_t x500 = INT32_MIN;
static int16_t x501 = INT16_MAX;
volatile int32_t t95 = -18330;
int32_t x507 = -55;
uint32_t x508 = 7196U;
uint32_t x516 = 466915U;
uint32_t t99 = 403973212U;


void f0(void) {
	static int32_t x2 = INT32_MIN;
	uint8_t x3 = 6U;
	int8_t x4 = 0;

	t0 = ((x1/x2)<<(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x22 = 23420538;
	volatile int32_t x23 = -1;
	volatile int32_t t1 = 1057834;

	t1 = ((x21/x22)<<(x23<x24));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x25 = INT16_MIN;
	int64_t x26 = INT64_MIN;
	int8_t x27 = INT8_MIN;
	static volatile int64_t t2 = 127255LL;

	t2 = ((x25/x26)<<(x27<x28));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x30 = 3858832700088LL;
	static uint64_t x31 = 38057515741385750LLU;
	static uint32_t x32 = 136958U;
	volatile int64_t t3 = 358324665818LL;

	t3 = ((x29/x30)<<(x31<x32));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x33 = INT32_MAX;
	static volatile int32_t x35 = 845902;
	static int16_t x36 = INT16_MIN;
	volatile int32_t t4 = 6;

	t4 = ((x33/x34)<<(x35<x36));

	if (t4 != 16909320) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x37 = -1;
	volatile uint32_t x38 = 14324708U;
	volatile int64_t x39 = 14258LL;
	int64_t x40 = INT64_MIN;
	uint32_t t5 = 268031461U;

	t5 = ((x37/x38)<<(x39<x40));

	if (t5 != 299U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x44 = INT8_MAX;
	int32_t t6 = 21;

	t6 = ((x41/x42)<<(x43<x44));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x45 = INT32_MIN;
	int32_t x47 = INT32_MAX;
	volatile uint64_t x48 = UINT64_MAX;
	static volatile int64_t t7 = -283317146236220414LL;

	t7 = ((x45/x46)<<(x47<x48));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x53 = -1;
	int16_t x54 = -1;
	int64_t x55 = INT64_MAX;
	int64_t x56 = -249686400LL;

	t8 = ((x53/x54)<<(x55<x56));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x57 = -1;
	int8_t x59 = -1;
	static int64_t x60 = INT64_MIN;
	uint64_t t9 = 467707369622125283LLU;

	t9 = ((x57/x58)<<(x59<x60));

	if (t9 != 3LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x61 = -1;
	uint16_t x62 = UINT16_MAX;
	uint16_t x63 = UINT16_MAX;
	int64_t x64 = INT64_MIN;
	volatile int32_t t10 = -96;

	t10 = ((x61/x62)<<(x63<x64));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x65 = 13261264432047812LLU;
	int16_t x66 = INT16_MAX;
	int32_t x68 = INT32_MAX;
	volatile uint64_t t11 = 3799951516LLU;

	t11 = ((x65/x66)<<(x67<x68));

	if (t11 != 809428048466LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x73 = -1;
	volatile int64_t x74 = -1LL;
	int32_t x76 = INT32_MAX;

	t12 = ((x73/x74)<<(x75<x76));

	if (t12 != 2LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x77 = INT16_MIN;
	int64_t x80 = 29LL;

	t13 = ((x77/x78)<<(x79<x80));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x81 = UINT16_MAX;
	int64_t x82 = INT64_MIN;
	int8_t x83 = 13;
	int32_t x84 = -1090;
	int64_t t14 = -26248LL;

	t14 = ((x81/x82)<<(x83<x84));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint32_t x85 = 1523U;
	volatile uint8_t x86 = UINT8_MAX;
	static int64_t x87 = -1LL;
	uint32_t t15 = 46162U;

	t15 = ((x85/x86)<<(x87<x88));

	if (t15 != 10U) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x93 = 492533779U;
	int8_t x94 = INT8_MAX;
	uint16_t x96 = UINT16_MAX;

	t16 = ((x93/x94)<<(x95<x96));

	if (t16 != 7756436U) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x97 = INT32_MIN;
	int16_t x98 = INT16_MIN;
	static volatile uint32_t x99 = 1642471U;
	int32_t x100 = -1;
	volatile int32_t t17 = -1;

	t17 = ((x97/x98)<<(x99<x100));

	if (t17 != 131072) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x109 = -2;
	int32_t x111 = -1;
	static uint64_t x112 = 25072160206LLU;
	int32_t t18 = -32787510;

	t18 = ((x109/x110)<<(x111<x112));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x114 = INT32_MIN;
	int8_t x116 = -1;
	volatile int32_t t19 = -77769;

	t19 = ((x113/x114)<<(x115<x116));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x117 = UINT32_MAX;
	static uint32_t x118 = 1372U;
	volatile int16_t x119 = INT16_MIN;
	int64_t x120 = INT64_MAX;

	t20 = ((x117/x118)<<(x119<x120));

	if (t20 != 6260884U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x125 = 15784554U;
	int32_t x126 = -1;
	uint32_t t21 = 7658U;

	t21 = ((x125/x126)<<(x127<x128));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x129 = INT64_MAX;
	volatile uint8_t x130 = 30U;
	int32_t x131 = INT32_MIN;
	volatile int64_t t22 = -152379LL;

	t22 = ((x129/x130)<<(x131<x132));

	if (t22 != 614891469123651720LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x134 = INT8_MAX;
	static int32_t x135 = -364230134;

	t23 = ((x133/x134)<<(x135<x136));

	if (t23 != 145249953336295682LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x137 = INT8_MIN;
	int64_t x138 = -1LL;
	volatile uint64_t x139 = 428408200098LLU;
	volatile int8_t x140 = -5;

	t24 = ((x137/x138)<<(x139<x140));

	if (t24 != 256LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x141 = -1;
	volatile uint16_t x142 = UINT16_MAX;
	int64_t x143 = INT64_MAX;
	int32_t t25 = 227;

	t25 = ((x141/x142)<<(x143<x144));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x149 = UINT8_MAX;
	volatile uint32_t x150 = UINT32_MAX;
	int8_t x151 = -1;
	int32_t x152 = -297;
	static uint32_t t26 = 11577U;

	t26 = ((x149/x150)<<(x151<x152));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x153 = -89444969853083722LL;
	int16_t x154 = -7830;
	int16_t x155 = 1;
	volatile uint16_t x156 = 14U;
	int64_t t27 = -22372077579LL;

	t27 = ((x153/x154)<<(x155<x156));

	if (t27 != 22846735594656LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x157 = -1;
	uint8_t x159 = UINT8_MAX;
	int64_t x160 = INT64_MIN;
	volatile uint64_t t28 = 3738251866487LLU;

	t28 = ((x157/x158)<<(x159<x160));

	if (t28 != 1284LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x165 = INT16_MAX;
	uint8_t x166 = 4U;
	static volatile uint32_t x167 = 1358794U;
	int64_t x168 = INT64_MIN;
	static int32_t t29 = 126725794;

	t29 = ((x165/x166)<<(x167<x168));

	if (t29 != 8191) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x169 = INT16_MIN;
	volatile uint64_t x170 = 274584975987352059LLU;
	static int16_t x171 = INT16_MAX;

	t30 = ((x169/x170)<<(x171<x172));

	if (t30 != 67LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x173 = INT16_MIN;
	volatile int32_t x174 = -44;
	int32_t x175 = INT32_MIN;
	volatile uint8_t x176 = 1U;
	volatile int32_t t31 = -443;

	t31 = ((x173/x174)<<(x175<x176));

	if (t31 != 1488) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x177 = -1LL;
	int8_t x178 = INT8_MIN;
	int32_t x179 = -1;
	volatile int64_t t32 = -63451517089797LL;

	t32 = ((x177/x178)<<(x179<x180));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x181 = INT64_MAX;
	volatile uint64_t x182 = 1LLU;
	int16_t x183 = -1260;
	volatile int16_t x184 = 36;
	volatile uint64_t t33 = 713633LLU;

	t33 = ((x181/x182)<<(x183<x184));

	if (t33 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x194 = INT32_MIN;
	volatile uint16_t x195 = UINT16_MAX;
	static volatile int32_t t34 = -17125;

	t34 = ((x193/x194)<<(x195<x196));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x197 = INT64_MAX;
	volatile uint16_t x198 = UINT16_MAX;
	volatile uint64_t x199 = UINT64_MAX;
	volatile int64_t t35 = -81981610676824LL;

	t35 = ((x197/x198)<<(x199<x200));

	if (t35 != 140739635871744LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x201 = 529049U;
	int64_t x203 = -1LL;
	int64_t x204 = 26712147875640LL;
	uint32_t t36 = 37003707U;

	t36 = ((x201/x202)<<(x203<x204));

	if (t36 != 4148U) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x209 = 1586564214960LL;
	volatile uint32_t x210 = UINT32_MAX;
	uint8_t x211 = 0U;
	int64_t x212 = INT64_MIN;
	int64_t t37 = 170386458705LL;

	t37 = ((x209/x210)<<(x211<x212));

	if (t37 != 369LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x213 = INT16_MIN;
	static uint32_t x214 = 70885U;
	static int32_t x215 = -1;
	int8_t x216 = INT8_MAX;
	volatile uint32_t t38 = 959196U;

	t38 = ((x213/x214)<<(x215<x216));

	if (t38 != 121180U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x218 = 1538946062LL;
	int16_t x220 = INT16_MAX;
	int64_t t39 = 10LL;

	t39 = ((x217/x218)<<(x219<x220));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x225 = INT64_MIN;
	int32_t x226 = -572618119;
	int16_t x227 = -72;
	volatile int16_t x228 = -1;
	int64_t t40 = 196528361873281LL;

	t40 = ((x225/x226)<<(x227<x228));

	if (t40 != 32214740438LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x229 = UINT8_MAX;
	uint8_t x230 = 1U;
	int16_t x231 = INT16_MIN;
	volatile int64_t x232 = INT64_MIN;
	volatile int32_t t41 = 183063800;

	t41 = ((x229/x230)<<(x231<x232));

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x234 = -63;
	int16_t x235 = 0;
	int16_t x236 = INT16_MAX;
	int64_t t42 = -170LL;

	t42 = ((x233/x234)<<(x235<x236));

	if (t42 != 292805461487453200LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x242 = INT16_MAX;
	volatile int64_t x244 = INT64_MIN;
	int32_t t43 = -798363972;

	t43 = ((x241/x242)<<(x243<x244));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x245 = UINT64_MAX;
	int64_t x246 = 1497174041643LL;
	static int8_t x247 = -1;
	static int32_t x248 = INT32_MIN;
	uint64_t t44 = 93079945831656LLU;

	t44 = ((x245/x246)<<(x247<x248));

	if (t44 != 12321041LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x249 = 470U;
	int16_t x251 = -1;
	static int32_t x252 = INT32_MAX;
	uint32_t t45 = 882330U;

	t45 = ((x249/x250)<<(x251<x252));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x257 = 5U;
	uint8_t x258 = UINT8_MAX;
	int64_t x259 = 2560306935906778167LL;
	int64_t x260 = -1LL;

	t46 = ((x257/x258)<<(x259<x260));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x261 = UINT32_MAX;
	static uint32_t x262 = 297U;
	static volatile int64_t x263 = INT64_MAX;
	static uint64_t x264 = 192265LLU;
	uint32_t t47 = 1010U;

	t47 = ((x261/x262)<<(x263<x264));

	if (t47 != 14461169U) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int16_t x269 = 952;
	int32_t x270 = INT32_MIN;
	int32_t x271 = -1;
	int8_t x272 = INT8_MAX;
	int32_t t48 = -23720;

	t48 = ((x269/x270)<<(x271<x272));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x277 = INT8_MIN;
	volatile uint32_t x279 = 282U;
	static volatile int8_t x280 = INT8_MIN;
	static volatile int64_t t49 = 142223152270LL;

	t49 = ((x277/x278)<<(x279<x280));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x281 = 15U;
	uint64_t x282 = UINT64_MAX;
	int8_t x283 = INT8_MIN;
	int32_t x284 = INT32_MAX;
	static uint64_t t50 = 2LLU;

	t50 = ((x281/x282)<<(x283<x284));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x285 = INT8_MIN;
	int16_t x286 = -1;
	int64_t x287 = INT64_MAX;
	int32_t t51 = -6;

	t51 = ((x285/x286)<<(x287<x288));

	if (t51 != 128) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x293 = -40LL;
	int64_t x294 = INT64_MAX;
	volatile int8_t x295 = -1;

	t52 = ((x293/x294)<<(x295<x296));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x297 = -1;
	volatile int32_t x298 = 3958374;
	int16_t x299 = 3690;
	uint8_t x300 = 7U;
	static volatile int32_t t53 = 0;

	t53 = ((x297/x298)<<(x299<x300));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x302 = INT8_MIN;
	int8_t x303 = INT8_MIN;
	uint8_t x304 = 6U;
	uint64_t t54 = 119928747222LLU;

	t54 = ((x301/x302)<<(x303<x304));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x305 = -1;
	int8_t x306 = INT8_MIN;
	int8_t x307 = -7;
	int64_t x308 = INT64_MAX;
	volatile int32_t t55 = 183337883;

	t55 = ((x305/x306)<<(x307<x308));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x309 = -1LL;
	volatile int32_t x310 = -1;
	static volatile int32_t x311 = INT32_MAX;
	int16_t x312 = -117;

	t56 = ((x309/x310)<<(x311<x312));

	if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x313 = INT16_MIN;
	uint32_t x314 = 5816115U;
	volatile int32_t x315 = 208;
	volatile uint32_t t57 = 6767623U;

	t57 = ((x313/x314)<<(x315<x316));

	if (t57 != 1476U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x317 = 1U;
	int16_t x319 = INT16_MAX;
	uint8_t x320 = 2U;
	static int32_t t58 = -15657736;

	t58 = ((x317/x318)<<(x319<x320));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x321 = 5212130301LLU;
	volatile int64_t x322 = INT64_MAX;
	int64_t x323 = 80638176LL;
	int8_t x324 = INT8_MAX;

	t59 = ((x321/x322)<<(x323<x324));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x329 = UINT64_MAX;
	int8_t x331 = INT8_MAX;
	uint32_t x332 = 7846862U;
	volatile uint64_t t60 = 274268811LLU;

	t60 = ((x329/x330)<<(x331<x332));

	if (t60 != 73788452063878LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x333 = -1;
	static int8_t x334 = INT8_MIN;
	int32_t x335 = -1;
	int32_t t61 = 125;

	t61 = ((x333/x334)<<(x335<x336));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x341 = -99698441121046LL;
	int64_t x342 = INT64_MIN;
	int32_t x344 = INT32_MAX;
	int64_t t62 = -278LL;

	t62 = ((x341/x342)<<(x343<x344));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x345 = INT32_MIN;
	static int32_t x346 = -32611;
	uint64_t x347 = UINT64_MAX;
	int8_t x348 = -1;
	int32_t t63 = -95610;

	t63 = ((x345/x346)<<(x347<x348));

	if (t63 != 65851) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x349 = 10558LLU;
	int8_t x350 = -1;
	static int16_t x351 = INT16_MIN;
	static volatile int64_t x352 = INT64_MIN;
	volatile uint64_t t64 = 462957364247151354LLU;

	t64 = ((x349/x350)<<(x351<x352));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x362 = 2194669523LL;
	volatile int64_t x364 = INT64_MIN;
	volatile int64_t t65 = -484662836977LL;

	t65 = ((x361/x362)<<(x363<x364));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x365 = INT16_MIN;
	uint64_t x366 = UINT64_MAX;
	uint32_t x367 = 24266889U;
	uint32_t x368 = UINT32_MAX;

	t66 = ((x365/x366)<<(x367<x368));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x371 = 213;
	int8_t x372 = INT8_MIN;
	static volatile int32_t t67 = 185;

	t67 = ((x369/x370)<<(x371<x372));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x374 = INT16_MIN;
	static int64_t x375 = -1LL;
	static uint64_t x376 = UINT64_MAX;
	int32_t t68 = 3;

	t68 = ((x373/x374)<<(x375<x376));

	if (t68 != 65536) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x377 = INT16_MIN;
	uint8_t x380 = 0U;

	t69 = ((x377/x378)<<(x379<x380));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x385 = 17829;
	int16_t x386 = 46;
	volatile uint32_t x387 = 9415U;
	int8_t x388 = INT8_MIN;
	volatile int32_t t70 = -88043735;

	t70 = ((x385/x386)<<(x387<x388));

	if (t70 != 774) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x389 = 3336U;
	volatile int16_t x390 = INT16_MIN;
	int32_t x391 = 172;
	static int8_t x392 = INT8_MAX;

	t71 = ((x389/x390)<<(x391<x392));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x395 = -1LL;

	t72 = ((x393/x394)<<(x395<x396));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x399 = INT32_MIN;
	int16_t x400 = 13349;

	t73 = ((x397/x398)<<(x399<x400));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x401 = INT8_MIN;
	static uint16_t x402 = UINT16_MAX;
	uint32_t x403 = UINT32_MAX;
	volatile int32_t t74 = -6;

	t74 = ((x401/x402)<<(x403<x404));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x409 = UINT64_MAX;
	uint32_t x411 = UINT32_MAX;
	int8_t x412 = 1;
	volatile uint64_t t75 = 285573097505114235LLU;

	t75 = ((x409/x410)<<(x411<x412));

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x413 = 57LLU;
	uint16_t x414 = 15542U;
	volatile int8_t x415 = -1;
	int64_t x416 = -1LL;

	t76 = ((x413/x414)<<(x415<x416));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x417 = 2U;
	volatile uint8_t x418 = 101U;
	volatile int64_t x420 = -849766LL;
	int32_t t77 = -40134797;

	t77 = ((x417/x418)<<(x419<x420));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x421 = INT32_MAX;
	int32_t x423 = -1;
	static uint32_t x424 = 390295937U;
	uint32_t t78 = 8998U;

	t78 = ((x421/x422)<<(x423<x424));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x425 = 2936U;
	uint8_t x426 = 87U;
	static int8_t x428 = -1;
	volatile int32_t t79 = -185613223;

	t79 = ((x425/x426)<<(x427<x428));

	if (t79 != 33) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x429 = 59;
	int16_t x430 = INT16_MAX;
	volatile uint16_t x431 = 1U;
	uint8_t x432 = 29U;
	int32_t t80 = -1043012887;

	t80 = ((x429/x430)<<(x431<x432));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x437 = UINT32_MAX;
	uint8_t x440 = 7U;

	t81 = ((x437/x438)<<(x439<x440));

	if (t81 != 33818640U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x441 = INT32_MAX;
	volatile int32_t x442 = INT32_MIN;
	int32_t x444 = INT32_MIN;

	t82 = ((x441/x442)<<(x443<x444));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x449 = -1;
	int16_t x451 = -4016;
	int8_t x452 = INT8_MAX;
	int32_t t83 = 597;

	t83 = ((x449/x450)<<(x451<x452));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x453 = -1;
	volatile uint64_t x455 = UINT64_MAX;
	int16_t x456 = -7;

	t84 = ((x453/x454)<<(x455<x456));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x457 = 0U;
	static uint64_t x458 = 878652271961326244LLU;
	int32_t x459 = 1;
	int8_t x460 = -1;
	uint64_t t85 = 69LLU;

	t85 = ((x457/x458)<<(x459<x460));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x465 = INT8_MIN;
	static uint32_t x466 = 104408U;
	int16_t x468 = 4;
	volatile uint32_t t86 = 12946410U;

	t86 = ((x465/x466)<<(x467<x468));

	if (t86 != 82272U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x471 = INT8_MIN;
	int16_t x472 = INT16_MAX;
	int32_t t87 = 4;

	t87 = ((x469/x470)<<(x471<x472));

	if (t87 != 1032) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x473 = UINT16_MAX;
	int32_t x474 = INT32_MAX;
	int16_t x475 = INT16_MIN;
	int16_t x476 = INT16_MIN;
	int32_t t88 = 1096;

	t88 = ((x473/x474)<<(x475<x476));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x477 = 65U;
	int8_t x478 = INT8_MAX;
	static int16_t x479 = INT16_MIN;
	int64_t x480 = 41791950889758451LL;
	int32_t t89 = 9373;

	t89 = ((x477/x478)<<(x479<x480));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x482 = 6344U;
	int8_t x483 = -1;
	volatile int16_t x484 = -34;
	int32_t t90 = 366;

	t90 = ((x481/x482)<<(x483<x484));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x485 = 2U;
	static int32_t x486 = INT32_MAX;
	int16_t x487 = INT16_MIN;
	int8_t x488 = -1;

	t91 = ((x485/x486)<<(x487<x488));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x489 = INT8_MIN;
	uint32_t x490 = 9226454U;
	static int64_t x491 = INT64_MIN;

	t92 = ((x489/x490)<<(x491<x492));

	if (t92 != 930U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x493 = -1;
	int64_t x494 = 16105931701977117LL;
	static uint64_t x496 = UINT64_MAX;

	t93 = ((x493/x494)<<(x495<x496));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x497 = 2;
	uint8_t x498 = 1U;
	volatile int32_t x499 = 174447;
	static volatile int32_t t94 = -515833373;

	t94 = ((x497/x498)<<(x499<x500));

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x502 = INT32_MIN;
	static int8_t x503 = INT8_MIN;
	static int64_t x504 = INT64_MAX;

	t95 = ((x501/x502)<<(x503<x504));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x505 = -1LL;
	uint16_t x506 = UINT16_MAX;
	volatile int64_t t96 = 14089941LL;

	t96 = ((x505/x506)<<(x507<x508));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x509 = 22U;
	uint64_t x510 = 16671135581963587LLU;
	static uint16_t x511 = UINT16_MAX;
	uint8_t x512 = 1U;
	uint64_t t97 = 3268771LLU;

	t97 = ((x509/x510)<<(x511<x512));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x513 = 87;
	int16_t x514 = INT16_MAX;
	volatile int64_t x515 = INT64_MAX;
	volatile int32_t t98 = -587635;

	t98 = ((x513/x514)<<(x515<x516));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x517 = 66U;
	uint32_t x518 = 4U;
	int8_t x519 = -12;
	volatile uint16_t x520 = 332U;

	t99 = ((x517/x518)<<(x519<x520));

	if (t99 != 32U) { NG(); } else { ; }
	
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

