#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x2 = -30;
uint16_t x4 = 21U;
volatile int32_t t1 = 63602;
volatile uint16_t x14 = 1849U;
volatile int16_t x24 = INT16_MIN;
volatile int64_t t5 = 16668016836LL;
int16_t x27 = INT16_MIN;
uint32_t x28 = 250200U;
uint64_t t9 = 2LLU;
volatile int32_t x41 = 421101;
int8_t x47 = -5;
static volatile uint64_t x53 = UINT64_MAX;
int32_t x57 = INT32_MIN;
int32_t x59 = 8553;
static int32_t t15 = -224861;
volatile uint32_t t16 = 132U;
int32_t t18 = -21;
uint16_t x82 = UINT16_MAX;
static int32_t x83 = -1;
volatile int8_t x84 = INT8_MAX;
int8_t x87 = INT8_MAX;
int32_t t22 = -53;
int32_t x101 = -1;
int16_t x114 = INT16_MIN;
uint32_t x117 = UINT32_MAX;
volatile int64_t x118 = INT64_MIN;
volatile int64_t x123 = -1LL;
int64_t x124 = -16800025742LL;
uint32_t x138 = UINT32_MAX;
int8_t x150 = 6;
volatile int8_t x162 = -1;
int8_t x167 = -1;
int32_t x168 = 37052;
volatile int16_t x171 = INT16_MIN;
int32_t x175 = INT32_MAX;
static volatile int64_t x184 = INT64_MIN;
uint16_t x185 = 811U;
uint32_t x193 = UINT32_MAX;
uint32_t x196 = 9663U;
static volatile uint32_t t48 = 135472387U;
int8_t x208 = 15;
uint8_t x209 = UINT8_MAX;
volatile int32_t x225 = -19006119;
int8_t x230 = INT8_MIN;
static int64_t x231 = -1LL;
int16_t x236 = INT16_MIN;
volatile int32_t t58 = -27847509;
static uint32_t x241 = 103438U;
uint64_t t60 = 1832574353LLU;
volatile int64_t t63 = -4720270008502024LL;
volatile uint32_t x258 = UINT32_MAX;
uint16_t x262 = 1U;
volatile uint16_t x263 = 864U;
int32_t x272 = -1;
volatile int32_t x295 = -43;
int8_t x298 = 0;
volatile uint32_t t75 = 65990U;
static uint16_t x305 = 8U;
int64_t x313 = 16361970804714476LL;
int8_t x323 = -2;
static volatile int64_t x327 = -1LL;
uint32_t x328 = 2890634U;
volatile int32_t x337 = -1;
uint16_t x339 = UINT16_MAX;
uint8_t x341 = UINT8_MAX;
int16_t x345 = INT16_MAX;
volatile int64_t x358 = INT64_MIN;
uint32_t x361 = 33848U;
static uint32_t x369 = 0U;
int64_t x370 = -1LL;
int8_t x377 = 0;
int8_t x378 = INT8_MAX;
volatile int64_t t94 = 68695280877589726LL;
int32_t t95 = -151323;
int64_t x386 = 1025924702577654LL;
int8_t x388 = -1;
static volatile uint64_t t96 = 1546553511LLU;
static int32_t x392 = INT32_MIN;
int32_t x397 = 1910046;


void f0(void) {
	int8_t x1 = -3;
	volatile uint32_t x3 = 12907U;
	uint32_t t0 = 2046475U;

	t0 = (((x1==x2)+x3)^x4);

	if (t0 != 12926U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	int8_t x6 = INT8_MIN;
	int8_t x7 = -1;
	int8_t x8 = INT8_MIN;

	t1 = (((x5==x6)+x7)^x8);

	if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MIN;
	static uint8_t x10 = 7U;
	int64_t x11 = -87339154LL;
	int8_t x12 = INT8_MIN;
	int64_t t2 = 56828643LL;

	t2 = (((x9==x10)+x11)^x12);

	if (t2 != 87339246LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = 788U;
	int8_t x15 = 16;
	static int64_t x16 = INT64_MAX;
	volatile int64_t t3 = -1342547LL;

	t3 = (((x13==x14)+x15)^x16);

	if (t3 != 9223372036854775791LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 12U;
	int16_t x18 = -1;
	uint8_t x19 = 14U;
	int8_t x20 = INT8_MIN;
	static volatile int32_t t4 = 952347787;

	t4 = (((x17==x18)+x19)^x20);

	if (t4 != -114) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	int64_t x22 = INT64_MIN;
	int64_t x23 = -1LL;

	t5 = (((x21==x22)+x23)^x24);

	if (t5 != 32767LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = INT8_MAX;
	volatile uint64_t x26 = 2451320799311080884LLU;
	volatile uint32_t t6 = 10494960U;

	t6 = (((x25==x26)+x27)^x28);

	if (t6 != 4294725976U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	int32_t x30 = INT32_MAX;
	uint64_t x31 = UINT64_MAX;
	int16_t x32 = -1;
	volatile uint64_t t7 = 383413087523027270LLU;

	t7 = (((x29==x30)+x31)^x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = 3336084U;
	int64_t x34 = -1LL;
	int8_t x35 = -1;
	uint64_t x36 = 8161LLU;
	volatile uint64_t t8 = 2LLU;

	t8 = (((x33==x34)+x35)^x36);

	if (t8 != 18446744073709543454LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x37 = 283;
	int64_t x38 = INT64_MIN;
	volatile uint64_t x39 = UINT64_MAX;
	uint32_t x40 = UINT32_MAX;

	t9 = (((x37==x38)+x39)^x40);

	if (t9 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x42 = 1618U;
	int8_t x43 = INT8_MIN;
	static int16_t x44 = -1;
	int32_t t10 = 1935975;

	t10 = (((x41==x42)+x43)^x44);

	if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	uint16_t x46 = 1U;
	int32_t x48 = INT32_MAX;
	int32_t t11 = -2036;

	t11 = (((x45==x46)+x47)^x48);

	if (t11 != -2147483644) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 0U;
	int32_t x50 = 7986;
	uint64_t x51 = 253694867082411745LLU;
	int64_t x52 = INT64_MIN;
	uint64_t t12 = 40014037449872957LLU;

	t12 = (((x49==x50)+x51)^x52);

	if (t12 != 9477066903937187553LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x54 = 0;
	uint64_t x55 = 52683473524LLU;
	static volatile int16_t x56 = 0;
	uint64_t t13 = 19LLU;

	t13 = (((x53==x54)+x55)^x56);

	if (t13 != 52683473524LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = INT16_MIN;
	uint16_t x60 = 3896U;
	int32_t t14 = -27970;

	t14 = (((x57==x58)+x59)^x60);

	if (t14 != 11857) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = UINT16_MAX;
	int64_t x62 = -1961694157584386497LL;
	volatile int32_t x63 = 8959;
	uint8_t x64 = UINT8_MAX;

	t15 = (((x61==x62)+x63)^x64);

	if (t15 != 8704) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	int32_t x66 = INT32_MAX;
	volatile int32_t x67 = -1;
	uint32_t x68 = UINT32_MAX;

	t16 = (((x65==x66)+x67)^x68);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 119U;
	int32_t x70 = 0;
	uint16_t x71 = UINT16_MAX;
	uint16_t x72 = 4U;
	volatile int32_t t17 = 4;

	t17 = (((x69==x70)+x71)^x72);

	if (t17 != 65531) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = -1;
	uint32_t x74 = UINT32_MAX;
	uint8_t x75 = 6U;
	int8_t x76 = -1;

	t18 = (((x73==x74)+x75)^x76);

	if (t18 != -8) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 35LLU;
	static int32_t x78 = INT32_MIN;
	uint64_t x79 = 9542912437736LLU;
	static int16_t x80 = INT16_MIN;
	volatile uint64_t t19 = 18075277017LLU;

	t19 = (((x77==x78)+x79)^x80);

	if (t19 != 18446734530797137384LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -1;
	volatile int32_t t20 = 283;

	t20 = (((x81==x82)+x83)^x84);

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 5654U;
	int16_t x86 = INT16_MIN;
	static int8_t x88 = INT8_MIN;
	int32_t t21 = -1;

	t21 = (((x85==x86)+x87)^x88);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = UINT32_MAX;
	volatile int8_t x90 = -1;
	volatile int8_t x91 = INT8_MIN;
	int8_t x92 = INT8_MIN;

	t22 = (((x89==x90)+x91)^x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	int64_t x94 = INT64_MIN;
	uint16_t x95 = 7U;
	static uint64_t x96 = 511140739022615LLU;
	uint64_t t23 = 6LLU;

	t23 = (((x93==x94)+x95)^x96);

	if (t23 != 511140739022608LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = 294;
	static volatile int8_t x98 = -1;
	volatile uint8_t x99 = 12U;
	static int64_t x100 = INT64_MIN;
	int64_t t24 = -61390898032155LL;

	t24 = (((x97==x98)+x99)^x100);

	if (t24 != -9223372036854775796LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x102 = 102932304847584LLU;
	uint64_t x103 = 56866102158560LLU;
	uint8_t x104 = 11U;
	volatile uint64_t t25 = 293735519491LLU;

	t25 = (((x101==x102)+x103)^x104);

	if (t25 != 56866102158571LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = UINT16_MAX;
	uint32_t x106 = 63U;
	uint16_t x107 = 320U;
	static int8_t x108 = INT8_MIN;
	volatile int32_t t26 = 31098360;

	t26 = (((x105==x106)+x107)^x108);

	if (t26 != -320) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	int16_t x110 = INT16_MIN;
	uint32_t x111 = 10644944U;
	volatile int16_t x112 = 608;
	uint32_t t27 = 962U;

	t27 = (((x109==x110)+x111)^x112);

	if (t27 != 10645424U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 1U;
	volatile int64_t x115 = -56460403LL;
	int16_t x116 = -1;
	static int64_t t28 = -215355224LL;

	t28 = (((x113==x114)+x115)^x116);

	if (t28 != 56460402LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x119 = INT16_MAX;
	static volatile int8_t x120 = -1;
	static volatile int32_t t29 = 62;

	t29 = (((x117==x118)+x119)^x120);

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x121 = UINT32_MAX;
	static uint8_t x122 = 1U;
	int64_t t30 = 205452LL;

	t30 = (((x121==x122)+x123)^x124);

	if (t30 != 16800025741LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = 31U;
	int64_t x126 = -82784470028313LL;
	int8_t x127 = INT8_MIN;
	uint64_t x128 = 2044901260811445LLU;
	static volatile uint64_t t31 = 6048641515119183LLU;

	t31 = (((x125==x126)+x127)^x128);

	if (t31 != 18444699172448740149LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = INT32_MIN;
	static uint32_t x130 = 480280U;
	int32_t x131 = 29894;
	static volatile uint32_t x132 = 3480394U;
	volatile uint32_t t32 = 105944438U;

	t32 = (((x129==x130)+x131)^x132);

	if (t32 != 3501964U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	volatile int8_t x134 = -1;
	int32_t x135 = -1;
	int32_t x136 = -7;
	int32_t t33 = 304413910;

	t33 = (((x133==x134)+x135)^x136);

	if (t33 != 6) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	int16_t x139 = INT16_MAX;
	int32_t x140 = 1032849;
	int32_t t34 = 12071;

	t34 = (((x137==x138)+x139)^x140);

	if (t34 != 1031534) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x141 = -491044789317893LL;
	int64_t x142 = -1LL;
	int16_t x143 = 0;
	int16_t x144 = INT16_MIN;
	int32_t t35 = 1018;

	t35 = (((x141==x142)+x143)^x144);

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = 0;
	uint8_t x146 = 5U;
	int8_t x147 = -6;
	uint32_t x148 = 1977U;
	volatile uint32_t t36 = 10187U;

	t36 = (((x145==x146)+x147)^x148);

	if (t36 != 4294965315U) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x149 = INT64_MAX;
	static int64_t x151 = INT64_MIN;
	uint16_t x152 = 1U;
	static volatile int64_t t37 = -271676375508158LL;

	t37 = (((x149==x150)+x151)^x152);

	if (t37 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MIN;
	int8_t x154 = -1;
	static uint16_t x155 = UINT16_MAX;
	static uint8_t x156 = 26U;
	volatile int32_t t38 = 224;

	t38 = (((x153==x154)+x155)^x156);

	if (t38 != 65509) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -1222252;
	volatile uint16_t x158 = 5498U;
	int32_t x159 = -41774065;
	uint32_t x160 = 383224258U;
	static volatile uint32_t t39 = 3U;

	t39 = (((x157==x158)+x159)^x160);

	if (t39 != 3948223949U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	volatile int32_t x163 = INT32_MAX;
	int16_t x164 = -1;
	static int32_t t40 = INT32_MIN;

	t40 = (((x161==x162)+x163)^x164);

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MIN;
	int64_t x166 = INT64_MIN;
	volatile int32_t t41 = -223;

	t41 = (((x165==x166)+x167)^x168);

	if (t41 != -37053) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = UINT8_MAX;
	volatile uint64_t x170 = 1375182353345LLU;
	uint32_t x172 = 1876201279U;
	static volatile uint32_t t42 = 2822384U;

	t42 = (((x169==x170)+x171)^x172);

	if (t42 != 2418741055U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x173 = INT8_MAX;
	int16_t x174 = INT16_MIN;
	int16_t x176 = INT16_MIN;
	int32_t t43 = 5516758;

	t43 = (((x173==x174)+x175)^x176);

	if (t43 != -2147450881) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x177 = INT8_MIN;
	static uint8_t x178 = 53U;
	int64_t x179 = -1LL;
	uint32_t x180 = UINT32_MAX;
	int64_t t44 = -12902681809381163LL;

	t44 = (((x177==x178)+x179)^x180);

	if (t44 != -4294967296LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -61;
	volatile int64_t x182 = 4420031561152240308LL;
	int32_t x183 = -671392;
	volatile int64_t t45 = 4684752091362389LL;

	t45 = (((x181==x182)+x183)^x184);

	if (t45 != 9223372036854104416LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x186 = 268578877215LLU;
	uint64_t x187 = 21475583335LLU;
	volatile int16_t x188 = INT16_MIN;
	uint64_t t46 = 23828LLU;

	t46 = (((x185==x186)+x187)^x188);

	if (t46 != 18446744052233987431LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 15927U;
	volatile int16_t x190 = INT16_MAX;
	volatile uint64_t x191 = 1900452LLU;
	static uint16_t x192 = 3U;
	volatile uint64_t t47 = 16702148410193LLU;

	t47 = (((x189==x190)+x191)^x192);

	if (t47 != 1900455LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x194 = -75;
	static int16_t x195 = INT16_MIN;

	t48 = (((x193==x194)+x195)^x196);

	if (t48 != 4294944191U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MIN;
	static uint16_t x198 = UINT16_MAX;
	int16_t x199 = INT16_MIN;
	static int16_t x200 = INT16_MAX;
	int32_t t49 = 62654;

	t49 = (((x197==x198)+x199)^x200);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 5U;
	static volatile int16_t x202 = INT16_MIN;
	uint16_t x203 = 17697U;
	static volatile uint64_t x204 = 1874310595LLU;
	uint64_t t50 = 89024680269962411LLU;

	t50 = (((x201==x202)+x203)^x204);

	if (t50 != 1874325730LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x205 = 1U;
	static volatile int32_t x206 = INT32_MIN;
	uint16_t x207 = 79U;
	volatile int32_t t51 = 850588;

	t51 = (((x205==x206)+x207)^x208);

	if (t51 != 64) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x210 = INT64_MIN;
	int8_t x211 = -10;
	int32_t x212 = INT32_MAX;
	volatile int32_t t52 = 161;

	t52 = (((x209==x210)+x211)^x212);

	if (t52 != -2147483639) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -5;
	int16_t x214 = -1;
	int32_t x215 = -71;
	uint32_t x216 = 44630193U;
	uint32_t t53 = 2037081U;

	t53 = (((x213==x214)+x215)^x216);

	if (t53 != 4250337032U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = -4;
	uint8_t x218 = UINT8_MAX;
	uint32_t x219 = 325U;
	uint32_t x220 = 664385U;
	uint32_t t54 = 92U;

	t54 = (((x217==x218)+x219)^x220);

	if (t54 != 664068U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	int8_t x222 = INT8_MIN;
	int8_t x223 = INT8_MIN;
	uint16_t x224 = 3918U;
	volatile int32_t t55 = 50;

	t55 = (((x221==x222)+x223)^x224);

	if (t55 != -3890) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x226 = UINT16_MAX;
	volatile uint64_t x227 = 191472368114861LLU;
	int64_t x228 = INT64_MAX;
	uint64_t t56 = 562279425167040473LLU;

	t56 = (((x225==x226)+x227)^x228);

	if (t56 != 9223180564486660946LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MAX;
	uint32_t x232 = UINT32_MAX;
	static int64_t t57 = 2686649702963LL;

	t57 = (((x229==x230)+x231)^x232);

	if (t57 != -4294967296LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x233 = 128699805248LLU;
	volatile int8_t x234 = INT8_MAX;
	static int8_t x235 = 1;

	t58 = (((x233==x234)+x235)^x236);

	if (t58 != -32767) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x237 = UINT32_MAX;
	int64_t x238 = INT64_MAX;
	volatile int16_t x239 = -6189;
	int16_t x240 = INT16_MAX;
	int32_t t59 = 2;

	t59 = (((x237==x238)+x239)^x240);

	if (t59 != -26580) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x242 = INT32_MAX;
	uint64_t x243 = 14863925626LLU;
	volatile uint64_t x244 = 30LLU;

	t60 = (((x241==x242)+x243)^x244);

	if (t60 != 14863925604LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 131U;
	volatile int16_t x246 = INT16_MIN;
	static int16_t x247 = -733;
	volatile int8_t x248 = 1;
	static volatile int32_t t61 = 176040;

	t61 = (((x245==x246)+x247)^x248);

	if (t61 != -734) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = 2155802229800LLU;
	int32_t x250 = INT32_MIN;
	static int8_t x251 = 1;
	int64_t x252 = -12979047LL;
	int64_t t62 = 1261176299069352220LL;

	t62 = (((x249==x250)+x251)^x252);

	if (t62 != -12979048LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x253 = -3460;
	static int32_t x254 = INT32_MIN;
	int64_t x255 = -322901143573LL;
	volatile int16_t x256 = INT16_MAX;

	t63 = (((x253==x254)+x255)^x256);

	if (t63 != -322901118956LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	int64_t x259 = -1641976134LL;
	uint32_t x260 = 45841463U;
	volatile int64_t t64 = 243979935584822157LL;

	t64 = (((x257==x258)+x259)^x260);

	if (t64 != -1667624307LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MAX;
	static uint8_t x264 = 121U;
	int32_t t65 = 23;

	t65 = (((x261==x262)+x263)^x264);

	if (t65 != 793) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = UINT8_MAX;
	int32_t x266 = INT32_MAX;
	uint64_t x267 = 752LLU;
	int64_t x268 = -2453638LL;
	volatile uint64_t t66 = 3241382LLU;

	t66 = (((x265==x266)+x267)^x268);

	if (t66 != 18446744073707097482LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MAX;
	int16_t x270 = INT16_MIN;
	int8_t x271 = 12;
	static int32_t t67 = 81564;

	t67 = (((x269==x270)+x271)^x272);

	if (t67 != -13) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = UINT64_MAX;
	int16_t x274 = -327;
	uint64_t x275 = UINT64_MAX;
	uint32_t x276 = 6331U;
	uint64_t t68 = 90153767253167LLU;

	t68 = (((x273==x274)+x275)^x276);

	if (t68 != 18446744073709545284LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -1LL;
	uint64_t x278 = 1LLU;
	int8_t x279 = -1;
	int64_t x280 = INT64_MIN;
	int64_t t69 = INT64_MAX;

	t69 = (((x277==x278)+x279)^x280);

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = UINT8_MAX;
	int8_t x282 = 10;
	uint32_t x283 = 0U;
	volatile uint8_t x284 = 1U;
	volatile uint32_t t70 = 1327U;

	t70 = (((x281==x282)+x283)^x284);

	if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = 1;
	static int32_t x286 = INT32_MAX;
	volatile int16_t x287 = INT16_MAX;
	static volatile int32_t x288 = INT32_MAX;
	int32_t t71 = -25;

	t71 = (((x285==x286)+x287)^x288);

	if (t71 != 2147450880) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -1LL;
	int64_t x290 = INT64_MIN;
	static int8_t x291 = INT8_MIN;
	volatile uint32_t x292 = 9087U;
	static uint32_t t72 = 63U;

	t72 = (((x289==x290)+x291)^x292);

	if (t72 != 4294958335U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x293 = 239235640708LLU;
	volatile int32_t x294 = INT32_MAX;
	uint16_t x296 = 931U;
	volatile int32_t t73 = 735335;

	t73 = (((x293==x294)+x295)^x296);

	if (t73 != -906) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x297 = UINT16_MAX;
	int64_t x299 = 4400882468LL;
	int16_t x300 = INT16_MAX;
	int64_t t74 = -17149754480270LL;

	t74 = (((x297==x298)+x299)^x300);

	if (t74 != 4400897243LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x301 = -1LL;
	int32_t x302 = INT32_MAX;
	uint32_t x303 = 3080176U;
	int16_t x304 = INT16_MIN;

	t75 = (((x301==x302)+x303)^x304);

	if (t75 != 4291919856U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x306 = 51;
	int16_t x307 = INT16_MIN;
	int64_t x308 = 1919499LL;
	int64_t t76 = 97494726600957LL;

	t76 = (((x305==x306)+x307)^x308);

	if (t76 != -1914357LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x309 = 115U;
	int16_t x310 = -1;
	int64_t x311 = INT64_MIN;
	int32_t x312 = INT32_MIN;
	int64_t t77 = -261LL;

	t77 = (((x309==x310)+x311)^x312);

	if (t77 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x314 = 14206LLU;
	static int8_t x315 = INT8_MAX;
	static uint32_t x316 = 9949U;
	volatile uint32_t t78 = 82U;

	t78 = (((x313==x314)+x315)^x316);

	if (t78 != 9890U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x317 = 479U;
	static volatile uint32_t x318 = UINT32_MAX;
	int64_t x319 = INT64_MIN;
	static int32_t x320 = INT32_MIN;
	int64_t t79 = 2539774875150LL;

	t79 = (((x317==x318)+x319)^x320);

	if (t79 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x321 = INT8_MAX;
	static int32_t x322 = INT32_MIN;
	int32_t x324 = INT32_MIN;
	static volatile int32_t t80 = 122744;

	t80 = (((x321==x322)+x323)^x324);

	if (t80 != 2147483646) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = 249U;
	uint32_t x326 = 15707U;
	int64_t t81 = 40LL;

	t81 = (((x325==x326)+x327)^x328);

	if (t81 != -2890635LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = UINT32_MAX;
	static int32_t x330 = INT32_MAX;
	static int16_t x331 = -1;
	static int64_t x332 = INT64_MIN;
	int64_t t82 = INT64_MAX;

	t82 = (((x329==x330)+x331)^x332);

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = 59U;
	int8_t x334 = INT8_MIN;
	uint32_t x335 = UINT32_MAX;
	static int32_t x336 = INT32_MIN;
	uint32_t t83 = 2228660U;

	t83 = (((x333==x334)+x335)^x336);

	if (t83 != 2147483647U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x338 = INT32_MAX;
	volatile int16_t x340 = INT16_MIN;
	int32_t t84 = 7;

	t84 = (((x337==x338)+x339)^x340);

	if (t84 != -32769) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x342 = UINT32_MAX;
	static int64_t x343 = -4996903506368152LL;
	int32_t x344 = INT32_MAX;
	volatile int64_t t85 = -11459LL;

	t85 = (((x341==x342)+x343)^x344);

	if (t85 != -4996903423355241LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x346 = 1;
	static uint8_t x347 = 4U;
	int8_t x348 = -1;
	static volatile int32_t t86 = 0;

	t86 = (((x345==x346)+x347)^x348);

	if (t86 != -5) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = -1;
	static int64_t x350 = INT64_MAX;
	int8_t x351 = INT8_MAX;
	int64_t x352 = -1LL;
	static volatile int64_t t87 = 1LL;

	t87 = (((x349==x350)+x351)^x352);

	if (t87 != -128LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x353 = INT16_MIN;
	int32_t x354 = INT32_MAX;
	volatile int64_t x355 = INT64_MAX;
	int8_t x356 = -1;
	int64_t t88 = INT64_MIN;

	t88 = (((x353==x354)+x355)^x356);

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x357 = -6940565;
	int8_t x359 = -8;
	int16_t x360 = 1;
	volatile int32_t t89 = -12790;

	t89 = (((x357==x358)+x359)^x360);

	if (t89 != -7) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x362 = INT8_MAX;
	int8_t x363 = INT8_MAX;
	uint64_t x364 = UINT64_MAX;
	uint64_t t90 = 1LLU;

	t90 = (((x361==x362)+x363)^x364);

	if (t90 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MIN;
	uint16_t x366 = 476U;
	int64_t x367 = -554552750675553LL;
	int32_t x368 = INT32_MIN;
	int64_t t91 = -1686953989128034LL;

	t91 = (((x365==x366)+x367)^x368);

	if (t91 != 554551686556063LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x371 = INT32_MIN;
	int8_t x372 = 3;
	int32_t t92 = -31198009;

	t92 = (((x369==x370)+x371)^x372);

	if (t92 != -2147483645) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = 3878U;
	int64_t x374 = -76517395LL;
	int32_t x375 = INT32_MIN;
	volatile int64_t x376 = 30586427446443LL;
	int64_t t93 = -4779738681LL;

	t93 = (((x373==x374)+x375)^x376);

	if (t93 != -30584644266837LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x379 = INT64_MAX;
	int32_t x380 = INT32_MIN;

	t94 = (((x377==x378)+x379)^x380);

	if (t94 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MAX;
	static int32_t x382 = INT32_MIN;
	int8_t x383 = -1;
	int16_t x384 = 8;

	t95 = (((x381==x382)+x383)^x384);

	if (t95 != -9) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x385 = INT8_MAX;
	volatile uint64_t x387 = UINT64_MAX;

	t96 = (((x385==x386)+x387)^x388);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x389 = -1LL;
	int16_t x390 = INT16_MIN;
	int64_t x391 = -238LL;
	volatile int64_t t97 = -6879379367LL;

	t97 = (((x389==x390)+x391)^x392);

	if (t97 != 2147483410LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x393 = -1LL;
	uint64_t x394 = 351048150LLU;
	int32_t x395 = INT32_MIN;
	volatile int8_t x396 = INT8_MIN;
	int32_t t98 = -1323864;

	t98 = (((x393==x394)+x395)^x396);

	if (t98 != 2147483520) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x398 = -1;
	int16_t x399 = INT16_MAX;
	int8_t x400 = INT8_MIN;
	int32_t t99 = 7745;

	t99 = (((x397==x398)+x399)^x400);

	if (t99 != -32641) { NG(); } else { ; }
	
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

