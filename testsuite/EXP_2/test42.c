#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t1 = 3112902LL;
int16_t x9 = INT16_MAX;
int16_t x18 = 4527;
int32_t t3 = -1714919;
static volatile int64_t x22 = INT64_MIN;
uint64_t x24 = UINT64_MAX;
uint64_t t4 = 57028150050812LLU;
volatile uint32_t t5 = 15U;
uint32_t x34 = 10612U;
volatile int16_t x40 = INT16_MIN;
volatile int16_t x44 = INT16_MIN;
static int8_t x53 = INT8_MIN;
int64_t x54 = -1LL;
uint32_t x63 = 105740914U;
uint32_t x70 = 2881U;
volatile int32_t t16 = -9143;
uint32_t x101 = 1973023U;
int64_t x104 = INT64_MIN;
static uint64_t t22 = 8536LLU;
int16_t x110 = 4281;
int64_t x121 = 1355995LL;
int16_t x131 = 33;
int64_t x144 = INT64_MIN;
volatile uint64_t t30 = 31LLU;
static volatile int64_t x150 = 9967248656691091LL;
int32_t x152 = INT32_MIN;
static int8_t x156 = 6;
int64_t x163 = INT64_MIN;
uint8_t x164 = 3U;
volatile int16_t x165 = -1;
int16_t x169 = INT16_MAX;
static uint64_t x172 = UINT64_MAX;
static int64_t t38 = -56349061054LL;
static uint32_t x181 = 490421595U;
volatile int8_t x192 = INT8_MIN;
int8_t x193 = -1;
volatile uint16_t x196 = 12583U;
int16_t x205 = 15169;
volatile uint16_t x208 = 16837U;
int16_t x210 = INT16_MAX;
volatile uint64_t t47 = 2685688002844702LLU;
uint64_t x244 = 666LLU;
uint64_t t52 = 158996832320LLU;
int8_t x270 = 3;
uint16_t x271 = UINT16_MAX;
static volatile uint32_t t59 = 5783U;
uint64_t x275 = UINT64_MAX;
volatile uint64_t t60 = 14038LLU;
static int32_t x286 = 1438;
uint64_t t62 = 31394525892234LLU;
static uint64_t x291 = 25131095641744LLU;
int16_t x299 = INT16_MIN;
uint32_t x303 = UINT32_MAX;
int32_t x318 = 0;
int8_t x320 = INT8_MIN;
volatile int32_t t68 = 433337;
int8_t x346 = INT8_MAX;
uint16_t x353 = UINT16_MAX;
int8_t x366 = -21;
volatile int32_t x367 = 1846;
uint32_t x371 = 44533U;
int16_t x372 = INT16_MIN;
volatile uint32_t x379 = 15816410U;
int8_t x388 = INT8_MIN;
uint32_t x397 = UINT32_MAX;
int64_t x403 = -1LL;
volatile uint64_t t84 = 4084LLU;
volatile int32_t x406 = -1;
volatile int64_t x420 = INT64_MIN;
int8_t x426 = INT8_MAX;
int32_t t93 = 25624;
static int16_t x451 = INT16_MIN;
int8_t x454 = INT8_MAX;
uint64_t t95 = 777985LLU;
int64_t x459 = INT64_MIN;
int8_t x464 = INT8_MAX;
volatile uint16_t x476 = UINT16_MAX;
uint64_t t99 = 277097880470108673LLU;


void f0(void) {
	int8_t x1 = -1;
	int8_t x2 = 5;
	volatile int32_t x3 = INT32_MIN;
	int64_t x4 = 206340591050869410LL;
	static volatile int64_t t0 = -48704379LL;

	t0 = ((x1/(x2+x3))*x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int64_t x6 = 1262719726LL;
	volatile int64_t x7 = INT64_MIN;
	int32_t x8 = -582939;

	t1 = ((x5/(x6+x7))*x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x10 = 638383084U;
	int8_t x11 = -1;
	static int64_t x12 = -1LL;
	volatile int64_t t2 = 6205177LL;

	t2 = ((x9/(x10+x11))*x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = 57U;
	uint8_t x19 = 0U;
	volatile uint8_t x20 = 122U;

	t3 = ((x17/(x18+x19))*x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MIN;
	int8_t x23 = INT8_MAX;

	t4 = ((x21/(x22+x23))*x24);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x25 = INT8_MAX;
	volatile uint32_t x26 = 2027461U;
	int16_t x27 = -1;
	static int32_t x28 = -471555;

	t5 = ((x25/(x26+x27))*x28);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x29 = UINT64_MAX;
	static int16_t x30 = INT16_MAX;
	static volatile uint64_t x31 = 5LLU;
	uint32_t x32 = UINT32_MAX;
	static uint64_t t6 = 662162195169999LLU;

	t6 = ((x29/(x30+x31))*x32);

	if (t6 != 35461517730120704LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x33 = INT64_MIN;
	static uint64_t x35 = 292LLU;
	volatile int8_t x36 = -1;
	static volatile uint64_t t7 = 5758LLU;

	t7 = ((x33/(x34+x35))*x36);

	if (t7 != 18445898203199935441LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x37 = 6492;
	volatile uint8_t x38 = 42U;
	int64_t x39 = -1LL;
	int64_t t8 = -19577568313972LL;

	t8 = ((x37/(x38+x39))*x40);

	if (t8 != -5177344LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MAX;
	volatile int16_t x42 = INT16_MAX;
	static uint32_t x43 = 118U;
	uint32_t t9 = 1735U;

	t9 = ((x41/(x42+x43))*x44);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = INT32_MIN;
	volatile int8_t x46 = -1;
	int16_t x47 = INT16_MAX;
	volatile int8_t x48 = 2;
	volatile int32_t t10 = -21;

	t10 = ((x45/(x46+x47))*x48);

	if (t10 != -131080) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = 32172U;
	uint8_t x50 = 1U;
	static uint8_t x51 = 5U;
	int16_t x52 = INT16_MIN;
	static volatile int32_t t11 = 1;

	t11 = ((x49/(x50+x51))*x52);

	if (t11 != -175702016) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x55 = -240;
	volatile int16_t x56 = -1;
	static volatile int64_t t12 = 354552406LL;

	t12 = ((x53/(x54+x55))*x56);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x61 = 8LLU;
	volatile int64_t x62 = -118256052LL;
	int32_t x64 = INT32_MIN;
	volatile uint64_t t13 = 115136LLU;

	t13 = ((x61/(x62+x63))*x64);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = -1;
	int64_t x66 = -1LL;
	uint32_t x67 = 29U;
	static volatile int8_t x68 = INT8_MIN;
	volatile int64_t t14 = -31816LL;

	t14 = ((x65/(x66+x67))*x68);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x69 = 2691983542610LLU;
	int16_t x71 = INT16_MIN;
	uint8_t x72 = UINT8_MAX;
	uint64_t t15 = 10419200124536LLU;

	t15 = ((x69/(x70+x71))*x72);

	if (t15 != 159630LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = -388078777;
	int16_t x74 = INT16_MIN;
	static int16_t x75 = -1;
	volatile int8_t x76 = 1;

	t16 = ((x73/(x74+x75))*x76);

	if (t16 != 11842) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = INT32_MIN;
	static uint8_t x78 = 0U;
	int16_t x79 = INT16_MIN;
	uint16_t x80 = 196U;
	volatile int32_t t17 = 27590244;

	t17 = ((x77/(x78+x79))*x80);

	if (t17 != 12845056) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x81 = 11457U;
	int8_t x82 = INT8_MIN;
	volatile uint64_t x83 = UINT64_MAX;
	int8_t x84 = INT8_MIN;
	uint64_t t18 = 4640015339LLU;

	t18 = ((x81/(x82+x83))*x84);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x85 = 15349U;
	static volatile int32_t x86 = INT32_MIN;
	uint16_t x87 = 57U;
	int64_t x88 = INT64_MIN;
	int64_t t19 = 49522541814LL;

	t19 = ((x85/(x86+x87))*x88);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = INT32_MAX;
	uint32_t x94 = 162U;
	int64_t x95 = INT64_MIN;
	int16_t x96 = INT16_MIN;
	static int64_t t20 = 44562671LL;

	t20 = ((x93/(x94+x95))*x96);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x102 = 1U;
	int32_t x103 = INT32_MIN;
	int64_t t21 = -58LL;

	t21 = ((x101/(x102+x103))*x104);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x105 = 38;
	uint64_t x106 = 100LLU;
	int64_t x107 = INT64_MAX;
	int64_t x108 = INT64_MIN;

	t22 = ((x105/(x106+x107))*x108);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x109 = 423U;
	static int8_t x111 = INT8_MAX;
	int32_t x112 = INT32_MIN;
	volatile int32_t t23 = 44143171;

	t23 = ((x109/(x110+x111))*x112);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x113 = INT16_MIN;
	int8_t x114 = -7;
	uint32_t x115 = 112U;
	static int8_t x116 = -8;
	static volatile uint32_t t24 = 676U;

	t24 = ((x113/(x114+x115))*x116);

	if (t24 != 3967734192U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x122 = 12353224651322LLU;
	int8_t x123 = INT8_MIN;
	uint8_t x124 = 1U;
	uint64_t t25 = 1831506592969516768LLU;

	t25 = ((x121/(x122+x123))*x124);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x125 = -5486;
	int64_t x126 = INT64_MAX;
	volatile int8_t x127 = 0;
	uint64_t x128 = UINT64_MAX;
	volatile uint64_t t26 = 352531717158679957LLU;

	t26 = ((x125/(x126+x127))*x128);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x129 = -15;
	int16_t x130 = 268;
	volatile int8_t x132 = INT8_MIN;
	int32_t t27 = -1239949;

	t27 = ((x129/(x130+x131))*x132);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x133 = 63409U;
	uint8_t x134 = 3U;
	uint32_t x135 = UINT32_MAX;
	volatile int16_t x136 = INT16_MIN;
	uint32_t t28 = 2139850U;

	t28 = ((x133/(x134+x135))*x136);

	if (t28 != 3256090624U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x137 = -1LL;
	int8_t x138 = -1;
	int8_t x139 = 33;
	int8_t x140 = -3;
	int64_t t29 = -66212436858389785LL;

	t29 = ((x137/(x138+x139))*x140);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x141 = -14;
	static uint64_t x142 = 126513479821758222LLU;
	int64_t x143 = -1LL;

	t30 = ((x141/(x142+x143))*x144);

	if (t30 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x149 = INT64_MIN;
	int32_t x151 = INT32_MIN;
	static volatile int64_t t31 = 366LL;

	t31 = ((x149/(x150+x151))*x152);

	if (t31 != 1986422374400LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x153 = UINT32_MAX;
	volatile int32_t x154 = -1;
	int32_t x155 = 21775;
	volatile uint32_t t32 = 41414024U;

	t32 = ((x153/(x154+x155))*x156);

	if (t32 != 1183512U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x157 = INT16_MIN;
	static uint32_t x158 = 4302521U;
	static volatile int16_t x159 = 87;
	uint32_t x160 = 127071584U;
	static volatile uint32_t t33 = 5U;

	t33 = ((x157/(x158+x159))*x160);

	if (t33 != 2263389248U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x161 = 4LLU;
	uint8_t x162 = 16U;
	uint64_t t34 = 5198358464165271LLU;

	t34 = ((x161/(x162+x163))*x164);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x166 = UINT64_MAX;
	int8_t x167 = 0;
	int64_t x168 = -1LL;
	volatile uint64_t t35 = UINT64_MAX;

	t35 = ((x165/(x166+x167))*x168);

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x170 = INT8_MIN;
	volatile uint8_t x171 = UINT8_MAX;
	uint64_t t36 = 362987772044LLU;

	t36 = ((x169/(x170+x171))*x172);

	if (t36 != 18446744073709551358LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x173 = UINT32_MAX;
	uint32_t x174 = 9091U;
	volatile int8_t x175 = INT8_MAX;
	int64_t x176 = -327014LL;
	int64_t t37 = -388619860913980LL;

	t37 = ((x173/(x174+x175))*x176);

	if (t37 != -152366287048LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x177 = UINT32_MAX;
	int64_t x178 = INT64_MIN;
	uint16_t x179 = 174U;
	int8_t x180 = INT8_MIN;

	t38 = ((x177/(x178+x179))*x180);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x182 = -61053231844114353LL;
	static int16_t x183 = -1;
	static int8_t x184 = INT8_MIN;
	int64_t t39 = -1689687766905LL;

	t39 = ((x181/(x182+x183))*x184);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x185 = -10637LL;
	int16_t x186 = INT16_MAX;
	int32_t x187 = -82;
	uint8_t x188 = 1U;
	volatile int64_t t40 = 61583939589020870LL;

	t40 = ((x185/(x186+x187))*x188);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x189 = INT16_MIN;
	static int64_t x190 = -1LL;
	volatile uint16_t x191 = 7169U;
	volatile int64_t t41 = 810824LL;

	t41 = ((x189/(x190+x191))*x192);

	if (t41 != 512LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x194 = -10297;
	uint8_t x195 = UINT8_MAX;
	static volatile int32_t t42 = 463513406;

	t42 = ((x193/(x194+x195))*x196);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x197 = INT8_MAX;
	static int32_t x198 = -1;
	static volatile int8_t x199 = INT8_MIN;
	int32_t x200 = -373414249;
	volatile int32_t t43 = -34;

	t43 = ((x197/(x198+x199))*x200);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x201 = INT32_MIN;
	int8_t x202 = -3;
	uint16_t x203 = UINT16_MAX;
	static uint64_t x204 = 532LLU;
	uint64_t t44 = 8507LLU;

	t44 = ((x201/(x202+x203))*x204);

	if (t44 != 18446744073692117976LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x206 = 2;
	static volatile uint32_t x207 = 82525860U;
	uint32_t t45 = 101023894U;

	t45 = ((x205/(x206+x207))*x208);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x209 = INT32_MAX;
	static int8_t x211 = 1;
	int64_t x212 = -1LL;
	volatile int64_t t46 = -2157834009549132LL;

	t46 = ((x209/(x210+x211))*x212);

	if (t46 != -65535LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x213 = 844212565742970937LL;
	static int8_t x214 = 3;
	int64_t x215 = -1LL;
	uint64_t x216 = 538477448255051LLU;

	t47 = ((x213/(x214+x215))*x216);

	if (t47 != 8926636986979314740LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x221 = INT64_MIN;
	int64_t x222 = INT64_MIN;
	uint64_t x223 = 314409LLU;
	static int32_t x224 = -615437310;
	volatile uint64_t t48 = 217792139607946694LLU;

	t48 = ((x221/(x222+x223))*x224);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x225 = 14U;
	uint16_t x226 = UINT16_MAX;
	volatile int64_t x227 = -1LL;
	int8_t x228 = INT8_MIN;
	volatile int64_t t49 = 2208210LL;

	t49 = ((x225/(x226+x227))*x228);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x229 = UINT32_MAX;
	static volatile uint16_t x230 = 118U;
	uint8_t x231 = UINT8_MAX;
	int32_t x232 = INT32_MIN;
	volatile uint32_t t50 = 296080444U;

	t50 = ((x229/(x230+x231))*x232);

	if (t50 != 2147483648U) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x237 = -1;
	volatile uint64_t x238 = 95LLU;
	uint16_t x239 = 0U;
	uint64_t x240 = UINT64_MAX;
	uint64_t t51 = 622108609120413913LLU;

	t51 = ((x237/(x238+x239))*x240);

	if (t51 != 18252567820302082652LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x241 = INT8_MIN;
	int8_t x242 = -1;
	uint32_t x243 = 146532U;

	t52 = ((x241/(x242+x243))*x244);

	if (t52 != 19520460LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x245 = INT64_MIN;
	static int32_t x246 = INT32_MIN;
	int32_t x247 = 691;
	static uint64_t x248 = 2386227LLU;
	uint64_t t53 = 74918LLU;

	t53 = ((x245/(x246+x247))*x248);

	if (t53 != 10248770223597906LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x249 = INT16_MIN;
	int16_t x250 = INT16_MIN;
	int32_t x251 = -1;
	uint8_t x252 = UINT8_MAX;
	int32_t t54 = -1642;

	t54 = ((x249/(x250+x251))*x252);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x253 = 23789370;
	static volatile int32_t x254 = 101973724;
	int16_t x255 = INT16_MIN;
	static volatile uint64_t x256 = 13LLU;
	volatile uint64_t t55 = 9176LLU;

	t55 = ((x253/(x254+x255))*x256);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x257 = UINT64_MAX;
	int64_t x258 = INT64_MAX;
	static volatile int64_t x259 = INT64_MIN;
	static volatile int32_t x260 = INT32_MIN;
	volatile uint64_t t56 = 173824749461655688LLU;

	t56 = ((x257/(x258+x259))*x260);

	if (t56 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x261 = INT32_MIN;
	volatile uint64_t x262 = UINT64_MAX;
	static uint64_t x263 = 17291966686263094LLU;
	int8_t x264 = -1;
	volatile uint64_t t57 = 1062LLU;

	t57 = ((x261/(x262+x263))*x264);

	if (t57 != 18446744073709550550LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x265 = -1;
	volatile int8_t x266 = INT8_MAX;
	int8_t x267 = -9;
	int8_t x268 = INT8_MIN;
	int32_t t58 = -27552846;

	t58 = ((x265/(x266+x267))*x268);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x269 = 110285U;
	int8_t x272 = INT8_MIN;

	t59 = ((x269/(x270+x271))*x272);

	if (t59 != 4294967168U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x273 = INT8_MAX;
	uint16_t x274 = UINT16_MAX;
	int32_t x276 = INT32_MIN;

	t60 = ((x273/(x274+x275))*x276);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x277 = INT32_MAX;
	static uint32_t x278 = UINT32_MAX;
	int64_t x279 = -1LL;
	int16_t x280 = 1276;
	int64_t t61 = -1527807399478LL;

	t61 = ((x277/(x278+x279))*x280);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x285 = -1;
	int16_t x287 = -10526;
	uint64_t x288 = 9321LLU;

	t62 = ((x285/(x286+x287))*x288);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x289 = -13LL;
	volatile int16_t x290 = -383;
	uint8_t x292 = 5U;
	uint64_t t63 = 53345084LLU;

	t63 = ((x289/(x290+x291))*x292);

	if (t63 != 3670100LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x297 = 10U;
	static int64_t x298 = -271LL;
	uint64_t x300 = 7396205121LLU;
	uint64_t t64 = 13633785LLU;

	t64 = ((x297/(x298+x299))*x300);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x301 = -60500660LL;
	uint16_t x302 = 14630U;
	static int16_t x304 = INT16_MIN;
	static volatile int64_t t65 = 4000726LL;

	t65 = ((x301/(x302+x303))*x304);

	if (t65 != 135495680LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x313 = -11;
	int8_t x314 = -1;
	int64_t x315 = -1794979905031879LL;
	int64_t x316 = -36881031LL;
	volatile int64_t t66 = -50722477LL;

	t66 = ((x313/(x314+x315))*x316);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x317 = 51722434;
	int16_t x319 = INT16_MIN;
	int32_t t67 = 3;

	t67 = ((x317/(x318+x319))*x320);

	if (t67 != 201984) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x325 = 30;
	static volatile int16_t x326 = -1309;
	int8_t x327 = -1;
	static volatile uint8_t x328 = UINT8_MAX;

	t68 = ((x325/(x326+x327))*x328);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x329 = UINT64_MAX;
	int8_t x330 = -54;
	int8_t x331 = INT8_MIN;
	static int32_t x332 = INT32_MIN;
	uint64_t t69 = 27094086341LLU;

	t69 = ((x329/(x330+x331))*x332);

	if (t69 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x333 = INT16_MIN;
	int64_t x334 = 46567513LL;
	static int64_t x335 = -403910247LL;
	int8_t x336 = INT8_MIN;
	static int64_t t70 = 120292523907102LL;

	t70 = ((x333/(x334+x335))*x336);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x337 = INT32_MIN;
	static volatile int64_t x338 = 4211271763444LL;
	int32_t x339 = INT32_MAX;
	int16_t x340 = INT16_MAX;
	int64_t t71 = 1LL;

	t71 = ((x337/(x338+x339))*x340);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x345 = 166;
	volatile int64_t x347 = 673390824683376638LL;
	int16_t x348 = -1;
	int64_t t72 = -73984757640814LL;

	t72 = ((x345/(x346+x347))*x348);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x349 = UINT16_MAX;
	uint8_t x350 = 2U;
	int64_t x351 = INT64_MIN;
	int64_t x352 = INT64_MAX;
	volatile int64_t t73 = -2LL;

	t73 = ((x349/(x350+x351))*x352);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x354 = INT8_MAX;
	int8_t x355 = INT8_MAX;
	int8_t x356 = 1;
	int32_t t74 = 110313;

	t74 = ((x353/(x354+x355))*x356);

	if (t74 != 258) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x357 = 12U;
	uint64_t x358 = 8465636298553LLU;
	static int32_t x359 = 1;
	uint16_t x360 = 1U;
	uint64_t t75 = 59875067555412LLU;

	t75 = ((x357/(x358+x359))*x360);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int32_t x365 = -233;
	int32_t x368 = INT32_MAX;
	volatile int32_t t76 = -115700;

	t76 = ((x365/(x366+x367))*x368);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x369 = 25;
	static int32_t x370 = -1;
	volatile uint32_t t77 = 1977U;

	t77 = ((x369/(x370+x371))*x372);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x377 = 13389427318LLU;
	static int8_t x378 = INT8_MIN;
	int16_t x380 = INT16_MIN;
	uint64_t t78 = 159771578826LLU;

	t78 = ((x377/(x378+x379))*x380);

	if (t78 != 18446744073681829888LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x381 = INT16_MIN;
	static int64_t x382 = INT64_MIN;
	uint64_t x383 = 83LLU;
	int8_t x384 = -1;
	uint64_t t79 = UINT64_MAX;

	t79 = ((x381/(x382+x383))*x384);

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint64_t x385 = 160112162962395770LLU;
	uint64_t x386 = 3140453972565215777LLU;
	int8_t x387 = -1;
	static uint64_t t80 = 21349333LLU;

	t80 = ((x385/(x386+x387))*x388);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x389 = 8384U;
	static int8_t x390 = INT8_MIN;
	int16_t x391 = INT16_MIN;
	int64_t x392 = 14LL;
	static int64_t t81 = -10037720815877LL;

	t81 = ((x389/(x390+x391))*x392);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x393 = UINT64_MAX;
	int8_t x394 = INT8_MAX;
	int64_t x395 = 24742075427952LL;
	uint8_t x396 = 102U;
	static uint64_t t82 = 214LLU;

	t82 = ((x393/(x394+x395))*x396);

	if (t82 != 76047222LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x398 = INT64_MIN;
	static int16_t x399 = 1;
	int64_t x400 = INT64_MIN;
	volatile int64_t t83 = -2674064189LL;

	t83 = ((x397/(x398+x399))*x400);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x401 = UINT64_MAX;
	uint32_t x402 = 8044787U;
	static int64_t x404 = INT64_MIN;

	t84 = ((x401/(x402+x403))*x404);

	if (t84 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x405 = 78992405296LL;
	int32_t x407 = -92754258;
	volatile int32_t x408 = INT32_MIN;
	volatile int64_t t85 = 713839509783075839LL;

	t85 = ((x405/(x406+x407))*x408);

	if (t85 != 1827508584448LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x409 = 13242764113657LLU;
	uint8_t x410 = 56U;
	static int8_t x411 = -27;
	volatile int16_t x412 = INT16_MAX;
	static volatile uint64_t t86 = 12844891546067754LLU;

	t86 = ((x409/(x410+x411))*x412);

	if (t86 != 14962953507285567LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x413 = -52;
	int32_t x414 = -1;
	static int32_t x415 = INT32_MAX;
	int64_t x416 = -125LL;
	volatile int64_t t87 = -1LL;

	t87 = ((x413/(x414+x415))*x416);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x417 = 60;
	uint32_t x418 = 13131395U;
	int64_t x419 = 2213LL;
	volatile int64_t t88 = 88786162286LL;

	t88 = ((x417/(x418+x419))*x420);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x421 = 0;
	int8_t x422 = -1;
	static volatile int16_t x423 = 2;
	int16_t x424 = -1;
	volatile int32_t t89 = -11998;

	t89 = ((x421/(x422+x423))*x424);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x425 = INT64_MIN;
	static int8_t x427 = INT8_MAX;
	int8_t x428 = INT8_MIN;
	int64_t t90 = -20276058545LL;

	t90 = ((x425/(x426+x427))*x428);

	if (t90 != 4647998506761461760LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x437 = UINT16_MAX;
	int8_t x438 = INT8_MIN;
	volatile uint8_t x439 = 26U;
	static uint16_t x440 = 5458U;
	int32_t t91 = 1;

	t91 = ((x437/(x438+x439))*x440);

	if (t91 != -3504036) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x441 = UINT16_MAX;
	uint16_t x442 = UINT16_MAX;
	int32_t x443 = INT32_MIN;
	int64_t x444 = INT64_MIN;
	static int64_t t92 = 569LL;

	t92 = ((x441/(x442+x443))*x444);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x445 = -4;
	volatile int16_t x446 = INT16_MAX;
	int16_t x447 = -9;
	int16_t x448 = INT16_MAX;

	t93 = ((x445/(x446+x447))*x448);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint32_t x449 = 9872U;
	int16_t x450 = 299;
	uint64_t x452 = UINT64_MAX;
	static volatile uint64_t t94 = 1564619579728595665LLU;

	t94 = ((x449/(x450+x451))*x452);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x453 = INT64_MIN;
	static uint64_t x455 = UINT64_MAX;
	int16_t x456 = INT16_MIN;

	t95 = ((x453/(x454+x455))*x456);

	if (t95 != 17861133150734647296LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x457 = 1;
	volatile int16_t x458 = INT16_MAX;
	int64_t x460 = INT64_MIN;
	volatile int64_t t96 = -25081LL;

	t96 = ((x457/(x458+x459))*x460);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x461 = 13;
	int16_t x462 = INT16_MAX;
	int16_t x463 = INT16_MIN;
	int32_t t97 = -1591152;

	t97 = ((x461/(x462+x463))*x464);

	if (t97 != -1651) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x469 = INT16_MIN;
	uint64_t x470 = 52359648329772118LLU;
	uint32_t x471 = 19302U;
	volatile int8_t x472 = -24;
	uint64_t t98 = 68LLU;

	t98 = ((x469/(x470+x471))*x472);

	if (t98 != 18446744073709543168LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x473 = INT16_MIN;
	int32_t x474 = INT32_MIN;
	uint64_t x475 = 557889997354LLU;

	t99 = ((x473/(x474+x475))*x476);

	if (t99 != 2175301223415LLU) { NG(); } else { ; }
	
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

