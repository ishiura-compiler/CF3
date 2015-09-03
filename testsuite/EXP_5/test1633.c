#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x7 = INT32_MAX;
int16_t x10 = 4;
int32_t t3 = -458;
volatile int16_t x24 = INT16_MIN;
int32_t t5 = -6710133;
uint32_t x29 = 3U;
volatile uint64_t x30 = 89LLU;
volatile uint64_t x33 = 855LLU;
volatile int8_t x34 = -1;
volatile int32_t x37 = INT32_MAX;
int16_t x48 = INT16_MAX;
static volatile int8_t x49 = -1;
uint32_t x51 = 840248U;
static volatile int32_t x52 = -768641095;
volatile int32_t t13 = -43083146;
uint64_t x59 = 2082134305LLU;
int32_t t17 = -2196549;
int16_t x73 = -2;
int8_t x74 = -47;
static uint8_t x79 = UINT8_MAX;
static uint16_t x82 = 9735U;
volatile int32_t t20 = -425;
static int16_t x94 = INT16_MIN;
static int16_t x98 = -1;
int16_t x99 = 145;
static uint16_t x106 = 1U;
int32_t t26 = 26;
static int64_t x110 = 31877036347LL;
int8_t x112 = 60;
int8_t x114 = -1;
int8_t x116 = 4;
volatile uint32_t x117 = 166069468U;
int64_t x118 = 3LL;
volatile int32_t t29 = -474295889;
volatile uint32_t x122 = UINT32_MAX;
volatile int32_t x124 = INT32_MIN;
static uint32_t x127 = 93U;
static int8_t x133 = INT8_MIN;
int16_t x142 = INT16_MIN;
int16_t x143 = 7;
volatile int32_t t36 = 6487;
int16_t x156 = INT16_MIN;
volatile int32_t t38 = -9178;
int8_t x157 = INT8_MIN;
int32_t t39 = 178;
volatile int8_t x166 = INT8_MIN;
static volatile uint16_t x168 = 5458U;
int32_t t41 = -1941;
uint16_t x169 = 1U;
uint32_t x171 = 35U;
int32_t t42 = -210955;
static int64_t x173 = INT64_MAX;
int16_t x175 = -648;
int16_t x176 = -173;
int64_t x183 = 58532970675917321LL;
volatile uint16_t x195 = 7750U;
int8_t x204 = INT8_MAX;
int8_t x205 = -1;
static volatile uint32_t x206 = 26789U;
volatile int32_t x216 = -1;
int32_t t53 = -14;
volatile int8_t x217 = 1;
volatile int64_t x222 = INT64_MIN;
volatile int16_t x229 = INT16_MIN;
static volatile int64_t x231 = 4376441482291596LL;
static volatile int32_t t57 = -3195922;
static volatile uint8_t x238 = UINT8_MAX;
int32_t x247 = INT32_MIN;
static volatile int8_t x252 = INT8_MAX;
volatile int32_t t63 = 22;
int32_t x260 = 82507945;
uint32_t x261 = 1663689639U;
int16_t x262 = INT16_MIN;
int32_t t65 = 42045;
uint16_t x265 = UINT16_MAX;
int64_t x267 = INT64_MAX;
uint8_t x272 = 19U;
int32_t t67 = -12;
static volatile int16_t x275 = 0;
volatile int32_t t68 = -5200428;
volatile int8_t x286 = INT8_MIN;
int32_t x288 = -1;
static volatile uint8_t x289 = UINT8_MAX;
int16_t x291 = -7856;
volatile int64_t x301 = 2539710860579714LL;
static volatile int16_t x305 = -1;
volatile int32_t t76 = 0;
int16_t x309 = INT16_MAX;
int64_t x311 = -228601LL;
uint16_t x313 = UINT16_MAX;
int16_t x314 = -13934;
int32_t x315 = INT32_MIN;
int32_t x321 = INT32_MAX;
uint16_t x324 = UINT16_MAX;
int32_t t80 = 3229;
uint16_t x326 = 8U;
static int32_t x328 = 16092;
uint16_t x329 = UINT16_MAX;
int8_t x330 = INT8_MIN;
static volatile int64_t x332 = -76631634LL;
int32_t t83 = -33293711;
int64_t x339 = -1LL;
uint8_t x341 = 1U;
static uint16_t x342 = 0U;
volatile int32_t x348 = INT32_MAX;
int32_t t86 = -3;
volatile int16_t x349 = 25;
volatile uint64_t x355 = 626LLU;
uint8_t x356 = 1U;
uint64_t x357 = 13702627890368235LLU;
int32_t t89 = -825629;
volatile int32_t t90 = 652;
volatile int64_t x366 = -1LL;
static int32_t t91 = 1;
int32_t t92 = 6;
uint32_t x374 = UINT32_MAX;
volatile int32_t t93 = 17099450;
int64_t x379 = INT64_MIN;
volatile uint16_t x380 = UINT16_MAX;
int64_t x381 = INT64_MIN;
uint16_t x388 = UINT16_MAX;
int32_t t96 = -1049;
int32_t t99 = 4447;


void f0(void) {
	uint16_t x1 = 16066U;
	static int8_t x2 = -5;
	volatile int64_t x3 = INT64_MAX;
	uint32_t x4 = 94914317U;
	volatile int32_t t0 = -629342;

	t0 = (x1==((x2<=x3)<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	volatile int16_t x6 = INT16_MIN;
	int16_t x8 = INT16_MIN;
	static volatile int32_t t1 = -746;

	t1 = (x5==((x6<=x7)<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	int32_t x11 = INT32_MIN;
	volatile int16_t x12 = INT16_MIN;
	static int32_t t2 = 32705055;

	t2 = (x9==((x10<=x11)<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MIN;
	static int8_t x14 = -1;
	volatile uint64_t x15 = 246036548274LLU;
	int32_t x16 = INT32_MAX;

	t3 = (x13==((x14<=x15)<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 448089LL;
	static int32_t x18 = INT32_MIN;
	uint16_t x19 = 314U;
	volatile int8_t x20 = 1;
	int32_t t4 = 427850364;

	t4 = (x17==((x18<=x19)<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 93U;
	int8_t x22 = INT8_MIN;
	volatile int64_t x23 = INT64_MIN;

	t5 = (x21==((x22<=x23)<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -8062;
	uint8_t x26 = 2U;
	int16_t x27 = 175;
	int16_t x28 = INT16_MIN;
	static volatile int32_t t6 = -22104122;

	t6 = (x25==((x26<=x27)<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x31 = INT8_MAX;
	int64_t x32 = INT64_MAX;
	volatile int32_t t7 = -5764;

	t7 = (x29==((x30<=x31)<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x35 = 1727U;
	int8_t x36 = INT8_MAX;
	int32_t t8 = -2190362;

	t8 = (x33==((x34<=x35)<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = INT64_MIN;
	volatile int32_t x39 = -1;
	uint8_t x40 = UINT8_MAX;
	volatile int32_t t9 = -58795184;

	t9 = (x37==((x38<=x39)<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x41 = INT32_MAX;
	int8_t x42 = 50;
	uint8_t x43 = 4U;
	uint16_t x44 = UINT16_MAX;
	int32_t t10 = 92657857;

	t10 = (x41==((x42<=x43)<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1;
	int16_t x46 = 10210;
	int16_t x47 = INT16_MIN;
	volatile int32_t t11 = 0;

	t11 = (x45==((x46<=x47)<x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x50 = UINT64_MAX;
	volatile int32_t t12 = 1;

	t12 = (x49==((x50<=x51)<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = UINT32_MAX;
	static int64_t x54 = 1268829020LL;
	int64_t x55 = -1LL;
	static int8_t x56 = -1;

	t13 = (x53==((x54<=x55)<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	static int16_t x58 = INT16_MIN;
	uint64_t x60 = 1119278556287357077LLU;
	int32_t t14 = -15;

	t14 = (x57==((x58<=x59)<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	int8_t x62 = 7;
	int64_t x63 = -1LL;
	static uint16_t x64 = 14U;
	int32_t t15 = -1849085;

	t15 = (x61==((x62<=x63)<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	uint32_t x66 = 1145378U;
	uint64_t x67 = 541422258321LLU;
	static uint32_t x68 = 99892U;
	int32_t t16 = -259016177;

	t16 = (x65==((x66<=x67)<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -1;
	int8_t x70 = 0;
	uint8_t x71 = UINT8_MAX;
	static uint64_t x72 = 319467LLU;

	t17 = (x69==((x70<=x71)<x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x75 = 70202488020869536LL;
	static uint16_t x76 = UINT16_MAX;
	static int32_t t18 = -211;

	t18 = (x73==((x74<=x75)<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint16_t x77 = 125U;
	uint16_t x78 = UINT16_MAX;
	static int32_t x80 = INT32_MAX;
	int32_t t19 = 429871744;

	t19 = (x77==((x78<=x79)<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = 31;
	int32_t x83 = -1;
	uint64_t x84 = 12580742265LLU;

	t20 = (x81==((x82<=x83)<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = 374097223LL;
	static int32_t x86 = -1;
	volatile int64_t x87 = -1LL;
	uint64_t x88 = 119LLU;
	int32_t t21 = -1;

	t21 = (x85==((x86<=x87)<x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -1;
	uint64_t x90 = 95997693LLU;
	static volatile int64_t x91 = -731693271361087310LL;
	volatile uint16_t x92 = UINT16_MAX;
	static volatile int32_t t22 = 474;

	t22 = (x89==((x90<=x91)<x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 7963008345481660LLU;
	volatile int32_t x95 = INT32_MIN;
	static int8_t x96 = 48;
	volatile int32_t t23 = -28602105;

	t23 = (x93==((x94<=x95)<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 83U;
	uint8_t x100 = 28U;
	static volatile int32_t t24 = -1;

	t24 = (x97==((x98<=x99)<x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 5348U;
	volatile int8_t x102 = INT8_MIN;
	int16_t x103 = INT16_MIN;
	int64_t x104 = INT64_MIN;
	volatile int32_t t25 = 95517790;

	t25 = (x101==((x102<=x103)<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -1443643332145LL;
	int8_t x107 = -1;
	int8_t x108 = -2;

	t26 = (x105==((x106<=x107)<x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x109 = UINT32_MAX;
	volatile uint8_t x111 = UINT8_MAX;
	int32_t t27 = 969234;

	t27 = (x109==((x110<=x111)<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	int8_t x115 = -1;
	int32_t t28 = 268702825;

	t28 = (x113==((x114<=x115)<x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x119 = 5U;
	int32_t x120 = INT32_MIN;

	t29 = (x117==((x118<=x119)<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x121 = -2;
	int16_t x123 = 198;
	volatile int32_t t30 = -1;

	t30 = (x121==((x122<=x123)<x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x125 = 6287;
	volatile uint64_t x126 = 11112LLU;
	int32_t x128 = INT32_MIN;
	volatile int32_t t31 = 68898888;

	t31 = (x125==((x126<=x127)<x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = UINT16_MAX;
	int16_t x130 = INT16_MAX;
	static int64_t x131 = 1173LL;
	int64_t x132 = 22LL;
	volatile int32_t t32 = 1559;

	t32 = (x129==((x130<=x131)<x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x134 = INT8_MIN;
	int32_t x135 = -1;
	uint32_t x136 = 1U;
	int32_t t33 = 886870;

	t33 = (x133==((x134<=x135)<x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x137 = INT32_MAX;
	volatile uint8_t x138 = 0U;
	volatile int8_t x139 = INT8_MIN;
	static int16_t x140 = INT16_MIN;
	volatile int32_t t34 = 3878857;

	t34 = (x137==((x138<=x139)<x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MAX;
	static uint32_t x144 = UINT32_MAX;
	volatile int32_t t35 = -262144594;

	t35 = (x141==((x142<=x143)<x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -15;
	volatile int64_t x146 = -1LL;
	int8_t x147 = -1;
	int16_t x148 = -111;

	t36 = (x145==((x146<=x147)<x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x149 = 59U;
	int32_t x150 = INT32_MIN;
	uint16_t x151 = 1U;
	int16_t x152 = INT16_MAX;
	int32_t t37 = 58505;

	t37 = (x149==((x150<=x151)<x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	uint16_t x154 = UINT16_MAX;
	volatile int64_t x155 = INT64_MAX;

	t38 = (x153==((x154<=x155)<x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x158 = UINT8_MAX;
	int64_t x159 = 1LL;
	uint32_t x160 = 33592072U;

	t39 = (x157==((x158<=x159)<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 2354U;
	volatile uint64_t x162 = UINT64_MAX;
	int8_t x163 = -1;
	static volatile int16_t x164 = INT16_MIN;
	int32_t t40 = -630414;

	t40 = (x161==((x162<=x163)<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 710U;
	int8_t x167 = INT8_MAX;

	t41 = (x165==((x166<=x167)<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint32_t x170 = 19U;
	int32_t x172 = 98730163;

	t42 = (x169==((x170<=x171)<x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x174 = INT16_MIN;
	int32_t t43 = 30354;

	t43 = (x173==((x174<=x175)<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MAX;
	static int16_t x178 = INT16_MIN;
	volatile int64_t x179 = INT64_MAX;
	uint32_t x180 = UINT32_MAX;
	volatile int32_t t44 = 969;

	t44 = (x177==((x178<=x179)<x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -1;
	uint8_t x182 = UINT8_MAX;
	int16_t x184 = INT16_MAX;
	int32_t t45 = -257456886;

	t45 = (x181==((x182<=x183)<x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = INT32_MIN;
	int16_t x186 = INT16_MIN;
	volatile uint8_t x187 = 14U;
	static volatile int16_t x188 = 13607;
	int32_t t46 = 10305;

	t46 = (x185==((x186<=x187)<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint16_t x189 = UINT16_MAX;
	int16_t x190 = -1;
	int64_t x191 = INT64_MIN;
	int64_t x192 = INT64_MIN;
	int32_t t47 = -19605;

	t47 = (x189==((x190<=x191)<x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -1;
	int32_t x194 = -58281822;
	volatile int32_t x196 = INT32_MAX;
	int32_t t48 = 230;

	t48 = (x193==((x194<=x195)<x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MIN;
	static int16_t x198 = -1;
	uint64_t x199 = 3119389834519445283LLU;
	int8_t x200 = INT8_MIN;
	int32_t t49 = -931;

	t49 = (x197==((x198<=x199)<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = 59LLU;
	volatile int64_t x202 = INT64_MIN;
	uint64_t x203 = 125LLU;
	static volatile int32_t t50 = -173;

	t50 = (x201==((x202<=x203)<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x207 = INT32_MAX;
	volatile int32_t x208 = -1;
	int32_t t51 = -2697;

	t51 = (x205==((x206<=x207)<x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = -33;
	int8_t x210 = INT8_MIN;
	int64_t x211 = INT64_MAX;
	int16_t x212 = -1;
	volatile int32_t t52 = -182962;

	t52 = (x209==((x210<=x211)<x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = -1972749587081906LL;
	int32_t x214 = INT32_MAX;
	static int64_t x215 = INT64_MIN;

	t53 = (x213==((x214<=x215)<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x218 = 5U;
	int64_t x219 = -1075170079LL;
	uint64_t x220 = UINT64_MAX;
	static volatile int32_t t54 = -8;

	t54 = (x217==((x218<=x219)<x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	static volatile int64_t x223 = 0LL;
	static int8_t x224 = INT8_MIN;
	volatile int32_t t55 = -1308;

	t55 = (x221==((x222<=x223)<x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = 3740U;
	int64_t x226 = 2795770371LL;
	int32_t x227 = 3858956;
	int64_t x228 = -141054854527LL;
	volatile int32_t t56 = 25;

	t56 = (x225==((x226<=x227)<x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x230 = INT32_MIN;
	volatile uint8_t x232 = UINT8_MAX;

	t57 = (x229==((x230<=x231)<x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x233 = -79;
	volatile int64_t x234 = -1LL;
	int64_t x235 = -4268LL;
	int16_t x236 = INT16_MIN;
	volatile int32_t t58 = -46;

	t58 = (x233==((x234<=x235)<x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x237 = 3;
	int64_t x239 = INT64_MIN;
	volatile uint64_t x240 = 138885127648435LLU;
	static int32_t t59 = 7570715;

	t59 = (x237==((x238<=x239)<x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -38333;
	static uint16_t x242 = UINT16_MAX;
	int64_t x243 = 358636119909LL;
	uint32_t x244 = 334U;
	static int32_t t60 = 60;

	t60 = (x241==((x242<=x243)<x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -271488496917183LL;
	volatile int32_t x246 = -1;
	int64_t x248 = INT64_MAX;
	volatile int32_t t61 = 2;

	t61 = (x245==((x246<=x247)<x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 10U;
	static uint8_t x250 = 41U;
	int8_t x251 = INT8_MAX;
	int32_t t62 = 254;

	t62 = (x249==((x250<=x251)<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x253 = -1LL;
	int16_t x254 = INT16_MIN;
	uint64_t x255 = 844LLU;
	int8_t x256 = -3;

	t63 = (x253==((x254<=x255)<x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = -1;
	int64_t x258 = INT64_MIN;
	static int32_t x259 = INT32_MAX;
	volatile int32_t t64 = -16248;

	t64 = (x257==((x258<=x259)<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x263 = 28243U;
	int64_t x264 = -1LL;

	t65 = (x261==((x262<=x263)<x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x266 = INT64_MIN;
	uint32_t x268 = 6074241U;
	static int32_t t66 = -105;

	t66 = (x265==((x266<=x267)<x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x269 = INT64_MIN;
	static volatile int32_t x270 = -1;
	volatile int64_t x271 = INT64_MAX;

	t67 = (x269==((x270<=x271)<x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x273 = -1LL;
	int64_t x274 = -85392838LL;
	static uint16_t x276 = 2U;

	t68 = (x273==((x274<=x275)<x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	int8_t x278 = INT8_MAX;
	int32_t x279 = -1;
	int16_t x280 = -1;
	volatile int32_t t69 = 185611256;

	t69 = (x277==((x278<=x279)<x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MIN;
	int8_t x282 = -13;
	int64_t x283 = 708669069043LL;
	static uint8_t x284 = 28U;
	volatile int32_t t70 = -122964775;

	t70 = (x281==((x282<=x283)<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	uint64_t x287 = UINT64_MAX;
	int32_t t71 = 141;

	t71 = (x285==((x286<=x287)<x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x290 = INT32_MAX;
	static int32_t x292 = -4559524;
	static int32_t t72 = 1022;

	t72 = (x289==((x290<=x291)<x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x293 = INT64_MIN;
	uint8_t x294 = UINT8_MAX;
	int32_t x295 = INT32_MAX;
	volatile int64_t x296 = INT64_MIN;
	volatile int32_t t73 = -23;

	t73 = (x293==((x294<=x295)<x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x297 = INT8_MIN;
	static int8_t x298 = INT8_MIN;
	static int16_t x299 = INT16_MIN;
	static volatile int8_t x300 = INT8_MIN;
	volatile int32_t t74 = 1;

	t74 = (x297==((x298<=x299)<x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x302 = INT64_MIN;
	int32_t x303 = -1;
	volatile uint32_t x304 = 422634320U;
	int32_t t75 = 4;

	t75 = (x301==((x302<=x303)<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x306 = INT16_MIN;
	static int16_t x307 = INT16_MIN;
	int16_t x308 = -12167;

	t76 = (x305==((x306<=x307)<x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x310 = 2U;
	int64_t x312 = 37447367840521107LL;
	static volatile int32_t t77 = -4888184;

	t77 = (x309==((x310<=x311)<x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x316 = INT32_MIN;
	static int32_t t78 = -28780340;

	t78 = (x313==((x314<=x315)<x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 43319392U;
	int8_t x318 = INT8_MAX;
	uint16_t x319 = 1U;
	int64_t x320 = -1LL;
	volatile int32_t t79 = 773195910;

	t79 = (x317==((x318<=x319)<x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x322 = UINT16_MAX;
	static volatile int64_t x323 = -192107938004LL;

	t80 = (x321==((x322<=x323)<x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x325 = INT16_MAX;
	static volatile uint32_t x327 = 129U;
	volatile int32_t t81 = 13;

	t81 = (x325==((x326<=x327)<x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x331 = INT32_MIN;
	volatile int32_t t82 = -265057064;

	t82 = (x329==((x330<=x331)<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = UINT64_MAX;
	uint16_t x334 = 339U;
	static uint64_t x335 = 79972750331413LLU;
	int32_t x336 = INT32_MIN;

	t83 = (x333==((x334<=x335)<x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x337 = -1;
	int64_t x338 = -33499412842623789LL;
	int8_t x340 = INT8_MAX;
	static int32_t t84 = -117;

	t84 = (x337==((x338<=x339)<x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x343 = UINT64_MAX;
	volatile uint32_t x344 = 130844878U;
	int32_t t85 = 65716;

	t85 = (x341==((x342<=x343)<x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x345 = 1;
	int16_t x346 = INT16_MAX;
	static int16_t x347 = INT16_MIN;

	t86 = (x345==((x346<=x347)<x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x350 = 241094782767695053LLU;
	static volatile int64_t x351 = -1LL;
	static int32_t x352 = -47572;
	int32_t t87 = -13179;

	t87 = (x349==((x350<=x351)<x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	uint16_t x354 = 107U;
	volatile int32_t t88 = 103385;

	t88 = (x353==((x354<=x355)<x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x358 = -11;
	uint16_t x359 = 465U;
	int64_t x360 = INT64_MIN;

	t89 = (x357==((x358<=x359)<x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MIN;
	int64_t x362 = 19485LL;
	static int16_t x363 = INT16_MIN;
	int16_t x364 = 941;

	t90 = (x361==((x362<=x363)<x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x365 = INT32_MIN;
	uint8_t x367 = 0U;
	int32_t x368 = INT32_MAX;

	t91 = (x365==((x366<=x367)<x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = 1;
	uint32_t x370 = 423675085U;
	int64_t x371 = INT64_MIN;
	volatile int32_t x372 = INT32_MIN;

	t92 = (x369==((x370<=x371)<x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint64_t x373 = 1645LLU;
	uint64_t x375 = UINT64_MAX;
	int32_t x376 = -1;

	t93 = (x373==((x374<=x375)<x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	uint8_t x378 = UINT8_MAX;
	volatile int32_t t94 = 224;

	t94 = (x377==((x378<=x379)<x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x382 = -23;
	volatile uint8_t x383 = 15U;
	static int32_t x384 = INT32_MIN;
	static volatile int32_t t95 = 166;

	t95 = (x381==((x382<=x383)<x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = 465061LL;
	static int8_t x386 = INT8_MIN;
	volatile uint64_t x387 = UINT64_MAX;

	t96 = (x385==((x386<=x387)<x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MIN;
	volatile int16_t x390 = INT16_MAX;
	uint32_t x391 = UINT32_MAX;
	int16_t x392 = -1;
	int32_t t97 = -6789;

	t97 = (x389==((x390<=x391)<x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x393 = -73997;
	static uint64_t x394 = 8111LLU;
	int32_t x395 = 159531;
	uint16_t x396 = 0U;
	static volatile int32_t t98 = 263513108;

	t98 = (x393==((x394<=x395)<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	int16_t x398 = -1;
	volatile int16_t x399 = -1;
	uint8_t x400 = 0U;

	t99 = (x397==((x398<=x399)<x400));

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

