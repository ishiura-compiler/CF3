#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = 90U;
uint32_t x5 = 4U;
uint16_t x8 = UINT16_MAX;
volatile int32_t t2 = -8618050;
static int16_t x14 = INT16_MIN;
uint32_t x19 = 4U;
uint64_t x28 = 1380LLU;
int32_t x29 = INT32_MAX;
uint8_t x30 = UINT8_MAX;
uint16_t x32 = 1U;
volatile int8_t x33 = INT8_MIN;
int64_t x41 = 952749003545LL;
static uint32_t x44 = 9U;
volatile int32_t t10 = 233838;
int8_t x45 = 6;
static uint8_t x49 = 3U;
volatile uint64_t x55 = 150556549892LLU;
volatile int16_t x56 = INT16_MAX;
static int16_t x58 = -1;
static int64_t x60 = INT64_MAX;
int32_t t14 = 22829;
uint64_t x63 = UINT64_MAX;
volatile uint32_t x66 = 5055002U;
int8_t x73 = -4;
volatile int8_t x75 = INT8_MAX;
int16_t x76 = -1;
volatile uint16_t x77 = 8048U;
volatile uint16_t x83 = UINT16_MAX;
int32_t t21 = -608119;
int64_t x91 = -1LL;
int32_t t22 = 1;
int32_t x96 = 20197;
uint64_t x98 = 24219LLU;
int32_t t24 = 13;
static int32_t x102 = INT32_MAX;
volatile int32_t t27 = 59644;
uint8_t x117 = UINT8_MAX;
uint64_t x123 = 4863LLU;
volatile int32_t t30 = 250930;
int32_t t31 = -3359505;
volatile int16_t x134 = INT16_MIN;
int16_t x156 = -846;
int8_t x159 = INT8_MIN;
int8_t x160 = -1;
int32_t t41 = 201923;
static int32_t x174 = 42;
uint16_t x177 = 2U;
int8_t x182 = 18;
volatile int32_t t46 = -464;
uint32_t x193 = 85999U;
volatile int8_t x194 = INT8_MIN;
uint32_t x200 = 1376U;
volatile int32_t x209 = -1;
uint32_t x210 = UINT32_MAX;
int16_t x214 = 1376;
int32_t x215 = INT32_MAX;
static int32_t t54 = 2932;
int16_t x221 = INT16_MAX;
uint32_t x224 = UINT32_MAX;
static int32_t x227 = 607;
static uint32_t x233 = UINT32_MAX;
int32_t t59 = -43081475;
int64_t x250 = INT64_MAX;
int64_t x253 = INT64_MIN;
int16_t x256 = -1;
static volatile int32_t t63 = -9826;
static volatile uint64_t x261 = UINT64_MAX;
volatile int32_t t65 = -26401221;
uint64_t x271 = 188871067594971LLU;
int32_t x272 = -31;
volatile int32_t t67 = 3016870;
static int32_t x275 = INT32_MAX;
volatile int8_t x276 = INT8_MAX;
static int16_t x278 = -1;
int8_t x280 = INT8_MIN;
uint8_t x282 = UINT8_MAX;
int16_t x286 = -1;
int8_t x287 = 0;
int64_t x288 = INT64_MIN;
volatile int8_t x292 = INT8_MAX;
int32_t x295 = INT32_MAX;
uint64_t x297 = 57LLU;
static int16_t x299 = 9674;
int32_t x300 = INT32_MIN;
static volatile int32_t x306 = INT32_MIN;
int8_t x313 = -11;
static int16_t x319 = 0;
static volatile int32_t t80 = -24496690;
int32_t t81 = -11003302;
int32_t x329 = 783868;
static volatile uint8_t x331 = 68U;
int64_t x334 = -6102864LL;
uint32_t x335 = 44859354U;
int32_t x338 = INT32_MAX;
volatile int32_t t85 = 32;
int32_t t87 = -20;
volatile uint8_t x358 = 7U;
int64_t x361 = -1LL;
volatile int16_t x362 = 8;
volatile int32_t x364 = INT32_MIN;
int16_t x368 = 1;
int16_t x369 = 1;
int32_t x383 = INT32_MIN;
int64_t x388 = INT64_MIN;
volatile int32_t t96 = 0;
int16_t x399 = INT16_MIN;
int32_t t99 = 17791384;


void f0(void) {
	int32_t x1 = INT32_MAX;
	volatile uint32_t x3 = 162500221U;
	volatile uint64_t x4 = 10LLU;
	volatile int32_t t0 = 100;

	t0 = ((x1&x2)<(x3^x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = -9LL;
	uint16_t x7 = 5U;
	int32_t t1 = 9784339;

	t1 = ((x5&x6)<(x7^x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint16_t x9 = 1018U;
	int64_t x10 = INT64_MAX;
	static volatile uint16_t x11 = 5081U;
	uint8_t x12 = 2U;

	t2 = ((x9&x10)<(x11^x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 1738;
	static int32_t x15 = 33867819;
	int64_t x16 = INT64_MIN;
	volatile int32_t t3 = 35120365;

	t3 = ((x13&x14)<(x15^x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	static uint32_t x18 = 80U;
	int16_t x20 = INT16_MIN;
	int32_t t4 = 1;

	t4 = ((x17&x18)<(x19^x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x21 = 373476716LLU;
	static int8_t x22 = -1;
	volatile int16_t x23 = 506;
	static uint32_t x24 = UINT32_MAX;
	static int32_t t5 = 23;

	t5 = ((x21&x22)<(x23^x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 0;
	int8_t x26 = -1;
	int32_t x27 = 0;
	static int32_t t6 = -952394;

	t6 = ((x25&x26)<(x27^x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x31 = 70U;
	int32_t t7 = 140376;

	t7 = ((x29&x30)<(x31^x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = -4754512451409LL;
	int8_t x35 = INT8_MIN;
	static int64_t x36 = INT64_MIN;
	volatile int32_t t8 = 27192537;

	t8 = ((x33&x34)<(x35^x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = UINT64_MAX;
	int64_t x38 = 378378461712308LL;
	static volatile uint64_t x39 = 4693686014696LLU;
	static int64_t x40 = 1013646348536168LL;
	static int32_t t9 = 6546090;

	t9 = ((x37&x38)<(x39^x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x42 = INT16_MIN;
	volatile uint64_t x43 = 28743658308LLU;

	t10 = ((x41&x42)<(x43^x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x46 = UINT8_MAX;
	uint32_t x47 = 14641753U;
	int64_t x48 = 27950LL;
	int32_t t11 = -10;

	t11 = ((x45&x46)<(x47^x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x50 = INT16_MIN;
	volatile int8_t x51 = 0;
	int8_t x52 = 32;
	volatile int32_t t12 = 44;

	t12 = ((x49&x50)<(x51^x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	int8_t x54 = INT8_MIN;
	int32_t t13 = 2;

	t13 = ((x53&x54)<(x55^x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 2947902851LLU;
	static int16_t x59 = INT16_MIN;

	t14 = ((x57&x58)<(x59^x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	static int16_t x62 = -53;
	static int8_t x64 = INT8_MAX;
	volatile int32_t t15 = 1;

	t15 = ((x61&x62)<(x63^x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = UINT16_MAX;
	uint8_t x67 = 0U;
	int8_t x68 = -1;
	static int32_t t16 = -22503008;

	t16 = ((x65&x66)<(x67^x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 97U;
	int16_t x70 = INT16_MAX;
	int64_t x71 = INT64_MIN;
	static uint8_t x72 = 60U;
	volatile int32_t t17 = -2094208;

	t17 = ((x69&x70)<(x71^x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x74 = 230441133395522LLU;
	static volatile int32_t t18 = -2;

	t18 = ((x73&x74)<(x75^x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x78 = INT64_MAX;
	volatile int16_t x79 = INT16_MIN;
	int16_t x80 = INT16_MIN;
	volatile int32_t t19 = 79615;

	t19 = ((x77&x78)<(x79^x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = INT32_MIN;
	int64_t x82 = INT64_MIN;
	uint64_t x84 = 145025183032926LLU;
	volatile int32_t t20 = -74;

	t20 = ((x81&x82)<(x83^x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 619677255081330LLU;
	volatile int64_t x86 = INT64_MIN;
	volatile int64_t x87 = INT64_MIN;
	int16_t x88 = INT16_MIN;

	t21 = ((x85&x86)<(x87^x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	volatile int8_t x90 = -7;
	int16_t x92 = INT16_MIN;

	t22 = ((x89&x90)<(x91^x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = INT8_MIN;
	static int8_t x94 = -1;
	int8_t x95 = -4;
	int32_t t23 = -494299341;

	t23 = ((x93&x94)<(x95^x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = -112;
	volatile uint16_t x99 = UINT16_MAX;
	int8_t x100 = -1;

	t24 = ((x97&x98)<(x99^x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x101 = INT32_MIN;
	volatile uint8_t x103 = 30U;
	volatile uint8_t x104 = UINT8_MAX;
	static volatile int32_t t25 = -39564;

	t25 = ((x101&x102)<(x103^x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -1;
	int8_t x106 = INT8_MAX;
	uint16_t x107 = UINT16_MAX;
	int32_t x108 = -16378;
	int32_t t26 = 60691;

	t26 = ((x105&x106)<(x107^x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	int16_t x110 = INT16_MIN;
	volatile uint32_t x111 = 127442U;
	int64_t x112 = -1LL;

	t27 = ((x109&x110)<(x111^x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	uint64_t x114 = 21916293LLU;
	uint32_t x115 = 34U;
	uint16_t x116 = 0U;
	int32_t t28 = -10315620;

	t28 = ((x113&x114)<(x115^x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x118 = 483;
	int8_t x119 = -1;
	int8_t x120 = -4;
	volatile int32_t t29 = 430273579;

	t29 = ((x117&x118)<(x119^x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x121 = INT32_MIN;
	int64_t x122 = INT64_MIN;
	static volatile int64_t x124 = INT64_MIN;

	t30 = ((x121&x122)<(x123^x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x125 = 3U;
	int16_t x126 = INT16_MIN;
	volatile uint8_t x127 = UINT8_MAX;
	volatile int16_t x128 = 3377;

	t31 = ((x125&x126)<(x127^x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x129 = 4;
	static volatile int16_t x130 = INT16_MIN;
	int64_t x131 = 56LL;
	uint16_t x132 = UINT16_MAX;
	int32_t t32 = 751242;

	t32 = ((x129&x130)<(x131^x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -1;
	int32_t x135 = INT32_MIN;
	uint8_t x136 = 120U;
	static volatile int32_t t33 = 119175567;

	t33 = ((x133&x134)<(x135^x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x137 = 460U;
	int64_t x138 = -1LL;
	int64_t x139 = INT64_MAX;
	static volatile int8_t x140 = INT8_MIN;
	volatile int32_t t34 = 410;

	t34 = ((x137&x138)<(x139^x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	uint8_t x142 = 1U;
	static uint32_t x143 = 11025U;
	uint8_t x144 = UINT8_MAX;
	static int32_t t35 = -7227;

	t35 = ((x141&x142)<(x143^x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MAX;
	volatile uint64_t x146 = UINT64_MAX;
	volatile int16_t x147 = -1;
	uint32_t x148 = UINT32_MAX;
	int32_t t36 = 42053071;

	t36 = ((x145&x146)<(x147^x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -30;
	uint32_t x150 = UINT32_MAX;
	int64_t x151 = -1LL;
	volatile int16_t x152 = 3434;
	static int32_t t37 = 2;

	t37 = ((x149&x150)<(x151^x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x153 = INT16_MIN;
	int8_t x154 = -1;
	volatile uint8_t x155 = UINT8_MAX;
	volatile int32_t t38 = -239334405;

	t38 = ((x153&x154)<(x155^x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x157 = INT16_MIN;
	volatile int32_t x158 = INT32_MIN;
	int32_t t39 = -1087;

	t39 = ((x157&x158)<(x159^x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = -15;
	int8_t x162 = 1;
	uint16_t x163 = 31U;
	uint16_t x164 = UINT16_MAX;
	int32_t t40 = 45;

	t40 = ((x161&x162)<(x163^x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 703663462695LLU;
	volatile uint32_t x166 = UINT32_MAX;
	static volatile int8_t x167 = 10;
	static volatile int32_t x168 = -1;

	t41 = ((x165&x166)<(x167^x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = INT32_MIN;
	int64_t x170 = -154LL;
	static int64_t x171 = INT64_MAX;
	int8_t x172 = -1;
	volatile int32_t t42 = 0;

	t42 = ((x169&x170)<(x171^x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = 51;
	uint32_t x175 = 83641903U;
	int16_t x176 = INT16_MAX;
	int32_t t43 = -4712;

	t43 = ((x173&x174)<(x175^x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x178 = -1;
	uint8_t x179 = 0U;
	int32_t x180 = 761004168;
	int32_t t44 = 3924519;

	t44 = ((x177&x178)<(x179^x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MIN;
	static volatile int16_t x183 = INT16_MIN;
	volatile int8_t x184 = INT8_MIN;
	static volatile int32_t t45 = -29;

	t45 = ((x181&x182)<(x183^x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -12708;
	int8_t x186 = 0;
	volatile uint64_t x187 = 33LLU;
	static uint64_t x188 = 7653512641823116771LLU;

	t46 = ((x185&x186)<(x187^x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x189 = -1;
	int64_t x190 = -598896972252949LL;
	static volatile int32_t x191 = 1;
	int8_t x192 = -1;
	int32_t t47 = 19;

	t47 = ((x189&x190)<(x191^x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x195 = UINT8_MAX;
	static uint64_t x196 = 714195294LLU;
	int32_t t48 = 70681;

	t48 = ((x193&x194)<(x195^x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = UINT16_MAX;
	uint32_t x198 = UINT32_MAX;
	int16_t x199 = INT16_MIN;
	static volatile int32_t t49 = -46403374;

	t49 = ((x197&x198)<(x199^x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MIN;
	static int16_t x202 = 1;
	uint16_t x203 = 15U;
	volatile int32_t x204 = INT32_MAX;
	volatile int32_t t50 = -614037;

	t50 = ((x201&x202)<(x203^x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = 8U;
	static volatile int64_t x206 = INT64_MAX;
	uint32_t x207 = UINT32_MAX;
	static int8_t x208 = -1;
	int32_t t51 = 1026848;

	t51 = ((x205&x206)<(x207^x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x211 = -1;
	static int8_t x212 = INT8_MIN;
	volatile int32_t t52 = -670;

	t52 = ((x209&x210)<(x211^x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MIN;
	volatile uint32_t x216 = 43026626U;
	int32_t t53 = 2200;

	t53 = ((x213&x214)<(x215^x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = 2;
	volatile int64_t x218 = -1LL;
	static int16_t x219 = INT16_MAX;
	static int8_t x220 = 3;

	t54 = ((x217&x218)<(x219^x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x222 = 136U;
	int64_t x223 = 58599LL;
	int32_t t55 = 0;

	t55 = ((x221&x222)<(x223^x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = 381539;
	int32_t x226 = INT32_MIN;
	int64_t x228 = INT64_MAX;
	static int32_t t56 = 31528014;

	t56 = ((x225&x226)<(x227^x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MAX;
	int8_t x230 = 0;
	int16_t x231 = -3;
	int64_t x232 = INT64_MIN;
	int32_t t57 = 20205;

	t57 = ((x229&x230)<(x231^x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x234 = 520847U;
	int64_t x235 = -1LL;
	int16_t x236 = INT16_MIN;
	volatile int32_t t58 = 3;

	t58 = ((x233&x234)<(x235^x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = 220U;
	int32_t x238 = INT32_MAX;
	uint8_t x239 = 0U;
	int32_t x240 = INT32_MAX;

	t59 = ((x237&x238)<(x239^x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x241 = INT64_MAX;
	static volatile uint16_t x242 = UINT16_MAX;
	uint16_t x243 = 33U;
	volatile int8_t x244 = INT8_MIN;
	int32_t t60 = 25212478;

	t60 = ((x241&x242)<(x243^x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	int16_t x246 = -1;
	int64_t x247 = -1LL;
	int32_t x248 = INT32_MIN;
	int32_t t61 = 11871;

	t61 = ((x245&x246)<(x247^x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	static int8_t x251 = INT8_MAX;
	int8_t x252 = -18;
	static volatile int32_t t62 = -8630150;

	t62 = ((x249&x250)<(x251^x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x254 = INT16_MAX;
	volatile uint64_t x255 = UINT64_MAX;

	t63 = ((x253&x254)<(x255^x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = 6U;
	uint16_t x258 = UINT16_MAX;
	int8_t x259 = -1;
	uint64_t x260 = UINT64_MAX;
	int32_t t64 = 4184;

	t64 = ((x257&x258)<(x259^x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x262 = INT8_MIN;
	int8_t x263 = -1;
	int64_t x264 = INT64_MIN;

	t65 = ((x261&x262)<(x263^x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x265 = INT32_MIN;
	static uint32_t x266 = UINT32_MAX;
	uint16_t x267 = 167U;
	volatile int8_t x268 = -8;
	int32_t t66 = 3734;

	t66 = ((x265&x266)<(x267^x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = 16U;
	volatile int32_t x270 = -1;

	t67 = ((x269&x270)<(x271^x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x273 = -1;
	int8_t x274 = 0;
	volatile int32_t t68 = -10521847;

	t68 = ((x273&x274)<(x275^x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x277 = 47U;
	int32_t x279 = INT32_MIN;
	int32_t t69 = 16045;

	t69 = ((x277&x278)<(x279^x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = 19330721U;
	int64_t x283 = -1LL;
	static int64_t x284 = -301672620320205418LL;
	static int32_t t70 = 23611;

	t70 = ((x281&x282)<(x283^x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x285 = -5;
	int32_t t71 = -20279905;

	t71 = ((x285&x286)<(x287^x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MAX;
	int64_t x290 = INT64_MIN;
	int64_t x291 = INT64_MAX;
	volatile int32_t t72 = 1688692;

	t72 = ((x289&x290)<(x291^x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = UINT32_MAX;
	uint64_t x294 = 394678303978LLU;
	static int8_t x296 = INT8_MIN;
	int32_t t73 = 3;

	t73 = ((x293&x294)<(x295^x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x298 = UINT16_MAX;
	volatile int32_t t74 = -44440;

	t74 = ((x297&x298)<(x299^x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = -2767;
	int16_t x302 = -1264;
	int64_t x303 = INT64_MIN;
	static int16_t x304 = INT16_MIN;
	static volatile int32_t t75 = 7241482;

	t75 = ((x301&x302)<(x303^x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x305 = -1;
	static int8_t x307 = -1;
	int32_t x308 = INT32_MAX;
	volatile int32_t t76 = -550542852;

	t76 = ((x305&x306)<(x307^x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x309 = INT16_MAX;
	static volatile uint64_t x310 = UINT64_MAX;
	volatile int16_t x311 = 231;
	int16_t x312 = -1;
	volatile int32_t t77 = -1063657171;

	t77 = ((x309&x310)<(x311^x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x314 = 603533U;
	volatile uint8_t x315 = 0U;
	static uint32_t x316 = 1828U;
	int32_t t78 = -22;

	t78 = ((x313&x314)<(x315^x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x317 = 15U;
	static int32_t x318 = -1;
	static int64_t x320 = 3LL;
	volatile int32_t t79 = 1;

	t79 = ((x317&x318)<(x319^x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;
	int64_t x322 = 30736LL;
	int32_t x323 = 30263;
	int16_t x324 = 133;

	t80 = ((x321&x322)<(x323^x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x325 = 5U;
	volatile int8_t x326 = 0;
	volatile int16_t x327 = -1;
	volatile uint8_t x328 = 1U;

	t81 = ((x325&x326)<(x327^x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x330 = 5;
	uint8_t x332 = UINT8_MAX;
	volatile int32_t t82 = 104;

	t82 = ((x329&x330)<(x331^x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = 6U;
	int32_t x336 = INT32_MIN;
	int32_t t83 = 209021;

	t83 = ((x333&x334)<(x335^x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MIN;
	int32_t x339 = -35;
	int32_t x340 = INT32_MAX;
	volatile int32_t t84 = -228589;

	t84 = ((x337&x338)<(x339^x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = 2;
	volatile int16_t x342 = -1;
	int64_t x343 = INT64_MIN;
	int8_t x344 = INT8_MAX;

	t85 = ((x341&x342)<(x343^x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = -1;
	int32_t x346 = INT32_MIN;
	int16_t x347 = INT16_MAX;
	volatile uint64_t x348 = UINT64_MAX;
	static volatile int32_t t86 = 468283;

	t86 = ((x345&x346)<(x347^x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x349 = INT32_MIN;
	volatile int16_t x350 = INT16_MAX;
	uint8_t x351 = 8U;
	static uint32_t x352 = 277U;

	t87 = ((x349&x350)<(x351^x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	int64_t x354 = -1LL;
	volatile int8_t x355 = INT8_MAX;
	volatile int32_t x356 = INT32_MIN;
	int32_t t88 = 251861913;

	t88 = ((x353&x354)<(x355^x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x357 = INT64_MAX;
	static uint16_t x359 = UINT16_MAX;
	static int8_t x360 = -1;
	volatile int32_t t89 = -400;

	t89 = ((x357&x358)<(x359^x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x363 = INT16_MIN;
	int32_t t90 = 943;

	t90 = ((x361&x362)<(x363^x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -1LL;
	uint32_t x366 = 1U;
	int64_t x367 = 1LL;
	int32_t t91 = -41881614;

	t91 = ((x365&x366)<(x367^x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x370 = -1;
	int8_t x371 = INT8_MAX;
	static int64_t x372 = 4LL;
	static int32_t t92 = -13825271;

	t92 = ((x369&x370)<(x371^x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	uint32_t x374 = UINT32_MAX;
	volatile int16_t x375 = -1;
	static int8_t x376 = -12;
	static int32_t t93 = 952233;

	t93 = ((x373&x374)<(x375^x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = 13;
	uint16_t x378 = 416U;
	int64_t x379 = -1LL;
	int8_t x380 = -1;
	volatile int32_t t94 = 503606365;

	t94 = ((x377&x378)<(x379^x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = UINT8_MAX;
	int32_t x382 = INT32_MIN;
	int8_t x384 = INT8_MIN;
	volatile int32_t t95 = -1414011;

	t95 = ((x381&x382)<(x383^x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = -1;
	static int64_t x386 = INT64_MIN;
	uint32_t x387 = 946121U;

	t96 = ((x385&x386)<(x387^x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x389 = 19737342202LLU;
	int32_t x390 = -1;
	uint64_t x391 = UINT64_MAX;
	int8_t x392 = -1;
	volatile int32_t t97 = -2538137;

	t97 = ((x389&x390)<(x391^x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MIN;
	uint64_t x394 = 10LLU;
	int32_t x395 = INT32_MAX;
	uint8_t x396 = 2U;
	volatile int32_t t98 = -2826;

	t98 = ((x393&x394)<(x395^x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = -479;
	uint8_t x398 = 106U;
	int8_t x400 = INT8_MIN;

	t99 = ((x397&x398)<(x399^x400));

	if (t99 != 1) { NG(); } else { ; }
	
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

