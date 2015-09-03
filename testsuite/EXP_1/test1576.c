#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = INT8_MIN;
int16_t x10 = 2828;
int64_t x14 = -13352676481285LL;
int32_t x18 = INT32_MAX;
int8_t x21 = INT8_MAX;
uint32_t x24 = UINT32_MAX;
int64_t x27 = INT64_MAX;
int16_t x28 = INT16_MAX;
static volatile int32_t x34 = -1424372;
static int8_t x35 = INT8_MAX;
int16_t x49 = 187;
int32_t x53 = -97498;
static int64_t x54 = -1LL;
uint32_t x65 = UINT32_MAX;
int32_t x69 = INT32_MIN;
volatile int32_t x72 = -306;
static int16_t x73 = 7;
static volatile int32_t x74 = INT32_MIN;
uint16_t x79 = 432U;
int32_t x80 = INT32_MAX;
int64_t x92 = INT64_MAX;
int64_t t21 = 86507448LL;
int8_t x97 = INT8_MIN;
uint32_t x98 = 334302U;
volatile uint32_t t23 = 390420U;
int8_t x103 = INT8_MAX;
static int64_t x105 = INT64_MIN;
int32_t x107 = -1;
static volatile int32_t t26 = 1448353;
int64_t t27 = 3027LL;
uint16_t x124 = UINT16_MAX;
int16_t x128 = INT16_MAX;
uint32_t x129 = 6713023U;
int8_t x148 = INT8_MIN;
static int32_t t34 = 717704;
static int16_t x149 = INT16_MAX;
int32_t t35 = -2492;
volatile int8_t x156 = INT8_MAX;
static uint16_t x158 = 255U;
static volatile int16_t x161 = 8;
uint32_t x165 = UINT32_MAX;
static int8_t x171 = INT8_MAX;
static int16_t x175 = INT16_MIN;
static int32_t x176 = 563;
static volatile uint64_t t42 = 373LLU;
volatile int32_t x182 = INT32_MIN;
int8_t x186 = INT8_MIN;
int64_t x196 = -12049723797LL;
volatile int64_t x207 = -1453LL;
volatile uint64_t t49 = 1627538LLU;
int8_t x212 = -1;
volatile int64_t x216 = INT64_MAX;
uint32_t x217 = 58777011U;
uint32_t x223 = 4011U;
volatile uint32_t t53 = 2997210U;
int64_t x231 = -340059LL;
int32_t x232 = INT32_MAX;
int16_t x234 = -1;
int32_t t57 = -1888001;
static volatile int32_t t58 = -376726004;
uint64_t x253 = UINT64_MAX;
static uint16_t x255 = UINT16_MAX;
volatile uint32_t t61 = 222044541U;
int8_t x258 = INT8_MIN;
volatile int32_t t62 = 6;
int16_t x261 = 886;
int8_t x262 = 1;
int64_t x265 = INT64_MAX;
uint16_t x266 = 994U;
int64_t x269 = INT64_MIN;
int64_t x274 = INT64_MIN;
int8_t x276 = 1;
volatile int32_t t66 = 13106723;
int32_t x280 = INT32_MIN;
int16_t x281 = -1;
int8_t x284 = INT8_MAX;
volatile int64_t x304 = INT64_MAX;
volatile int64_t t73 = 28987994429276LL;
int32_t x305 = -1;
uint32_t x306 = 218018212U;
uint32_t x315 = 2U;
volatile uint8_t x317 = 48U;
uint64_t x318 = 226453814143319438LLU;
uint32_t x319 = UINT32_MAX;
int16_t x324 = INT16_MIN;
uint32_t x326 = 88U;
static int64_t x331 = -1LL;
uint8_t x337 = UINT8_MAX;
uint8_t x338 = UINT8_MAX;
int16_t x339 = 7795;
volatile int32_t t82 = 1841302;
uint8_t x345 = 42U;
int32_t x350 = INT32_MIN;
static uint32_t x372 = 732131U;
int32_t x375 = INT32_MAX;
volatile uint32_t x377 = UINT32_MAX;
static int16_t x381 = -114;
volatile int64_t x382 = 376LL;
int64_t x389 = -1LL;
uint64_t x390 = UINT64_MAX;
uint16_t x395 = 1684U;
uint32_t t96 = 93201698U;
volatile int16_t x400 = -1;
volatile int32_t t97 = -14;
static int32_t x401 = INT32_MAX;
int8_t x402 = INT8_MIN;
uint64_t x405 = 111644350300662LLU;
int16_t x408 = 461;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	int64_t x2 = INT64_MAX;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = INT32_MIN;

	t0 = (((x1<=x2)%x3)*x4);

	if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = -1;
	int16_t x6 = -5925;
	int8_t x7 = INT8_MAX;
	static int64_t x8 = -106643126120116LL;
	volatile int64_t t1 = 1060822846100LL;

	t1 = (((x5<=x6)%x7)*x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 757082337U;
	int16_t x11 = INT16_MIN;
	int32_t x12 = 0;
	static int32_t t2 = -1730908;

	t2 = (((x9<=x10)%x11)*x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MAX;
	int32_t x15 = INT32_MIN;
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = -1;

	t3 = (((x13<=x14)%x15)*x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int64_t x19 = -101LL;
	static uint32_t x20 = UINT32_MAX;
	int64_t t4 = -12538634268689LL;

	t4 = (((x17<=x18)%x19)*x20);

	if (t4 != 4294967295LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x22 = 749473350LLU;
	int64_t x23 = -13901271LL;
	static int64_t t5 = 2147885246657801577LL;

	t5 = (((x21<=x22)%x23)*x24);

	if (t5 != 4294967295LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	int8_t x26 = 28;
	int64_t t6 = -40075071813656735LL;

	t6 = (((x25<=x26)%x27)*x28);

	if (t6 != 32767LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	int64_t x30 = INT64_MAX;
	uint32_t x31 = 25280964U;
	static int64_t x32 = 324854882849LL;
	static volatile int64_t t7 = -3861949498LL;

	t7 = (((x29<=x30)%x31)*x32);

	if (t7 != 324854882849LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	int32_t x36 = 10897;
	volatile int32_t t8 = 100147;

	t8 = (((x33<=x34)%x35)*x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = 800;
	int8_t x38 = INT8_MIN;
	static uint64_t x39 = UINT64_MAX;
	int8_t x40 = -1;
	uint64_t t9 = 2587460064318764LLU;

	t9 = (((x37<=x38)%x39)*x40);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	uint32_t x42 = UINT32_MAX;
	int32_t x43 = INT32_MAX;
	int32_t x44 = INT32_MIN;
	int32_t t10 = INT32_MIN;

	t10 = (((x41<=x42)%x43)*x44);

	if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1246;
	int16_t x46 = INT16_MIN;
	int16_t x47 = INT16_MAX;
	int8_t x48 = INT8_MIN;
	volatile int32_t t11 = 244621;

	t11 = (((x45<=x46)%x47)*x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x50 = 7U;
	int64_t x51 = -2223173350334448LL;
	uint8_t x52 = 0U;
	volatile int64_t t12 = -447425426647LL;

	t12 = (((x49<=x50)%x51)*x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x55 = INT32_MIN;
	static volatile int16_t x56 = INT16_MIN;
	int32_t t13 = -676894;

	t13 = (((x53<=x54)%x55)*x56);

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = 1834;
	static int64_t x58 = -8185513LL;
	uint8_t x59 = 10U;
	int16_t x60 = -1;
	int32_t t14 = 1953790;

	t14 = (((x57<=x58)%x59)*x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 367684U;
	volatile uint16_t x62 = UINT16_MAX;
	uint16_t x63 = 6U;
	static volatile int64_t x64 = -1LL;
	static int64_t t15 = -904390LL;

	t15 = (((x61<=x62)%x63)*x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x66 = 10U;
	static int32_t x67 = -1;
	volatile uint16_t x68 = UINT16_MAX;
	int32_t t16 = 13;

	t16 = (((x65<=x66)%x67)*x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x70 = 3977;
	int64_t x71 = INT64_MIN;
	int64_t t17 = -12128149LL;

	t17 = (((x69<=x70)%x71)*x72);

	if (t17 != -306LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x75 = -320;
	int8_t x76 = 1;
	volatile int32_t t18 = 91841267;

	t18 = (((x73<=x74)%x75)*x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = UINT8_MAX;
	int8_t x78 = 1;
	int32_t t19 = -45;

	t19 = (((x77<=x78)%x79)*x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = INT8_MAX;
	static int16_t x82 = INT16_MAX;
	volatile uint16_t x83 = UINT16_MAX;
	volatile uint8_t x84 = UINT8_MAX;
	int32_t t20 = 62523;

	t20 = (((x81<=x82)%x83)*x84);

	if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = INT32_MAX;
	int16_t x90 = -1;
	int64_t x91 = 331098376651151013LL;

	t21 = (((x89<=x90)%x91)*x92);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = 53;
	volatile int16_t x94 = INT16_MIN;
	int8_t x95 = INT8_MIN;
	volatile int16_t x96 = -1;
	volatile int32_t t22 = 523466397;

	t22 = (((x93<=x94)%x95)*x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x99 = UINT16_MAX;
	uint32_t x100 = UINT32_MAX;

	t23 = (((x97<=x98)%x99)*x100);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x101 = 1U;
	static int16_t x102 = INT16_MAX;
	int32_t x104 = 0;
	static int32_t t24 = 17174;

	t24 = (((x101<=x102)%x103)*x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x106 = 13200U;
	int8_t x108 = INT8_MAX;
	volatile int32_t t25 = -11079771;

	t25 = (((x105<=x106)%x107)*x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x109 = UINT32_MAX;
	volatile int64_t x110 = 694158564LL;
	int32_t x111 = INT32_MIN;
	int8_t x112 = INT8_MIN;

	t26 = (((x109<=x110)%x111)*x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = INT32_MIN;
	volatile int8_t x118 = 1;
	volatile int8_t x119 = 19;
	int64_t x120 = -1LL;

	t27 = (((x117<=x118)%x119)*x120);

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x121 = UINT16_MAX;
	static volatile int16_t x122 = INT16_MIN;
	static int8_t x123 = 6;
	static int32_t t28 = 3332;

	t28 = (((x121<=x122)%x123)*x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x125 = INT32_MIN;
	static int64_t x126 = INT64_MIN;
	static uint64_t x127 = 1492712972754668909LLU;
	volatile uint64_t t29 = 4610356051874260LLU;

	t29 = (((x125<=x126)%x127)*x128);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int32_t x130 = INT32_MIN;
	int16_t x131 = INT16_MAX;
	uint32_t x132 = 6U;
	volatile uint32_t t30 = 42724571U;

	t30 = (((x129<=x130)%x131)*x132);

	if (t30 != 6U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = -44;
	uint32_t x134 = 483471087U;
	volatile int64_t x135 = -31827450LL;
	volatile int16_t x136 = 43;
	static int64_t t31 = -13770134358567LL;

	t31 = (((x133<=x134)%x135)*x136);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x137 = 37533U;
	int32_t x138 = -1;
	static uint16_t x139 = UINT16_MAX;
	static int64_t x140 = INT64_MAX;
	int64_t t32 = INT64_MAX;

	t32 = (((x137<=x138)%x139)*x140);

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = 3604;
	static uint8_t x142 = 78U;
	uint32_t x143 = 26U;
	volatile int32_t x144 = -1;
	static volatile uint32_t t33 = 1664764U;

	t33 = (((x141<=x142)%x143)*x144);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x145 = INT16_MAX;
	uint16_t x146 = 237U;
	int32_t x147 = -1;

	t34 = (((x145<=x146)%x147)*x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x150 = -1LL;
	int16_t x151 = 38;
	static uint16_t x152 = UINT16_MAX;

	t35 = (((x149<=x150)%x151)*x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x153 = INT16_MAX;
	static int16_t x154 = INT16_MIN;
	uint64_t x155 = UINT64_MAX;
	static uint64_t t36 = 472802990535121LLU;

	t36 = (((x153<=x154)%x155)*x156);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = -512;
	volatile int64_t x159 = -3823511195396173158LL;
	static volatile uint32_t x160 = 5393592U;
	int64_t t37 = -21776748LL;

	t37 = (((x157<=x158)%x159)*x160);

	if (t37 != 5393592LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x162 = INT8_MIN;
	int64_t x163 = 505397816696802214LL;
	uint16_t x164 = UINT16_MAX;
	int64_t t38 = 1103863464815655242LL;

	t38 = (((x161<=x162)%x163)*x164);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x166 = 6472341129664362LL;
	static volatile uint32_t x167 = 31U;
	int32_t x168 = INT32_MAX;
	static uint32_t t39 = 23810U;

	t39 = (((x165<=x166)%x167)*x168);

	if (t39 != 2147483647U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x169 = 2923445U;
	volatile int64_t x170 = 101170672352885LL;
	volatile int64_t x172 = INT64_MIN;
	int64_t t40 = INT64_MIN;

	t40 = (((x169<=x170)%x171)*x172);

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x173 = 66U;
	int8_t x174 = -1;
	int32_t t41 = -25;

	t41 = (((x173<=x174)%x175)*x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x177 = UINT8_MAX;
	int16_t x178 = INT16_MIN;
	uint8_t x179 = 57U;
	static uint64_t x180 = UINT64_MAX;

	t42 = (((x177<=x178)%x179)*x180);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x181 = UINT32_MAX;
	static int64_t x183 = -1LL;
	volatile int64_t x184 = INT64_MAX;
	int64_t t43 = 61461LL;

	t43 = (((x181<=x182)%x183)*x184);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x185 = 12;
	int8_t x187 = INT8_MIN;
	uint16_t x188 = 811U;
	volatile int32_t t44 = 55146;

	t44 = (((x185<=x186)%x187)*x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x189 = UINT16_MAX;
	int64_t x190 = INT64_MIN;
	int16_t x191 = INT16_MAX;
	static int64_t x192 = 8LL;
	int64_t t45 = 0LL;

	t45 = (((x189<=x190)%x191)*x192);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x193 = 100350472843422LLU;
	uint64_t x194 = 9698504356804LLU;
	int64_t x195 = -4281409397LL;
	static int64_t t46 = -1331694013874102LL;

	t46 = (((x193<=x194)%x195)*x196);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x197 = INT64_MIN;
	static volatile int32_t x198 = 71;
	static int16_t x199 = INT16_MAX;
	volatile int32_t x200 = INT32_MIN;
	int32_t t47 = INT32_MIN;

	t47 = (((x197<=x198)%x199)*x200);

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x201 = 15109U;
	int16_t x202 = INT16_MIN;
	int64_t x203 = INT64_MIN;
	uint8_t x204 = 7U;
	int64_t t48 = 7836759837LL;

	t48 = (((x201<=x202)%x203)*x204);

	if (t48 != 7LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x205 = 6024;
	uint32_t x206 = 10836U;
	uint64_t x208 = 2850338625557387393LLU;

	t49 = (((x205<=x206)%x207)*x208);

	if (t49 != 2850338625557387393LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x209 = 23U;
	static volatile uint8_t x210 = 0U;
	int32_t x211 = INT32_MIN;
	int32_t t50 = 5;

	t50 = (((x209<=x210)%x211)*x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x213 = -1;
	uint64_t x214 = 32321083392480LLU;
	static int64_t x215 = -1LL;
	int64_t t51 = -2454954540504675483LL;

	t51 = (((x213<=x214)%x215)*x216);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x218 = INT8_MIN;
	int32_t x219 = -97019588;
	int32_t x220 = INT32_MIN;
	int32_t t52 = INT32_MIN;

	t52 = (((x217<=x218)%x219)*x220);

	if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x221 = UINT64_MAX;
	static volatile int64_t x222 = INT64_MIN;
	int8_t x224 = -26;

	t53 = (((x221<=x222)%x223)*x224);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x225 = 26612U;
	static uint16_t x226 = 7035U;
	uint32_t x227 = 6191U;
	uint32_t x228 = UINT32_MAX;
	uint32_t t54 = 590500984U;

	t54 = (((x225<=x226)%x227)*x228);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x229 = 1;
	int8_t x230 = INT8_MIN;
	volatile int64_t t55 = 122840993913LL;

	t55 = (((x229<=x230)%x231)*x232);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x233 = -1;
	uint16_t x235 = 13U;
	int16_t x236 = INT16_MIN;
	volatile int32_t t56 = -306;

	t56 = (((x233<=x234)%x235)*x236);

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x237 = 112;
	uint16_t x238 = 0U;
	volatile uint16_t x239 = UINT16_MAX;
	static volatile int16_t x240 = INT16_MIN;

	t57 = (((x237<=x238)%x239)*x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x241 = 2U;
	int16_t x242 = -1;
	static int8_t x243 = INT8_MIN;
	int16_t x244 = -41;

	t58 = (((x241<=x242)%x243)*x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x245 = 21879048LLU;
	int32_t x246 = INT32_MIN;
	int64_t x247 = 127490819452996802LL;
	uint32_t x248 = 238764U;
	static int64_t t59 = -893LL;

	t59 = (((x245<=x246)%x247)*x248);

	if (t59 != 238764LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x249 = 1137353780789398LLU;
	int16_t x250 = -446;
	uint32_t x251 = 299U;
	int64_t x252 = -1LL;
	volatile int64_t t60 = 410906576LL;

	t60 = (((x249<=x250)%x251)*x252);

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x254 = UINT16_MAX;
	static uint32_t x256 = UINT32_MAX;

	t61 = (((x253<=x254)%x255)*x256);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x257 = -1;
	uint16_t x259 = 1263U;
	int32_t x260 = INT32_MIN;

	t62 = (((x257<=x258)%x259)*x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x263 = UINT16_MAX;
	uint32_t x264 = 16171119U;
	static uint32_t t63 = 89290U;

	t63 = (((x261<=x262)%x263)*x264);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x267 = UINT16_MAX;
	int16_t x268 = -7562;
	volatile int32_t t64 = 31134551;

	t64 = (((x265<=x266)%x267)*x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x270 = 0;
	uint8_t x271 = UINT8_MAX;
	uint16_t x272 = 242U;
	int32_t t65 = 37517495;

	t65 = (((x269<=x270)%x271)*x272);

	if (t65 != 242) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x273 = 0;
	uint16_t x275 = 1518U;

	t66 = (((x273<=x274)%x275)*x276);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x277 = -1LL;
	uint8_t x278 = 12U;
	int64_t x279 = INT64_MIN;
	int64_t t67 = 6673LL;

	t67 = (((x277<=x278)%x279)*x280);

	if (t67 != -2147483648LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x282 = -1;
	volatile int32_t x283 = -929441115;
	volatile int32_t t68 = -5;

	t68 = (((x281<=x282)%x283)*x284);

	if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x285 = UINT16_MAX;
	static int16_t x286 = 1;
	int64_t x287 = INT64_MIN;
	uint64_t x288 = 21LLU;
	static volatile uint64_t t69 = 2779101348082LLU;

	t69 = (((x285<=x286)%x287)*x288);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x289 = UINT32_MAX;
	uint8_t x290 = 1U;
	volatile uint32_t x291 = 450897U;
	int32_t x292 = -20618682;
	volatile uint32_t t70 = 114433007U;

	t70 = (((x289<=x290)%x291)*x292);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x293 = 28;
	int64_t x294 = -1LL;
	volatile int8_t x295 = INT8_MAX;
	int64_t x296 = -1LL;
	volatile int64_t t71 = -2706484LL;

	t71 = (((x293<=x294)%x295)*x296);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x297 = 3;
	int32_t x298 = -102304;
	int32_t x299 = INT32_MIN;
	int16_t x300 = INT16_MAX;
	static volatile int32_t t72 = -399;

	t72 = (((x297<=x298)%x299)*x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x301 = UINT64_MAX;
	int32_t x302 = INT32_MAX;
	static int16_t x303 = -2387;

	t73 = (((x301<=x302)%x303)*x304);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x307 = INT8_MAX;
	int64_t x308 = -4470444737008222LL;
	volatile int64_t t74 = 1126LL;

	t74 = (((x305<=x306)%x307)*x308);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x309 = INT64_MIN;
	static uint32_t x310 = 138U;
	int16_t x311 = INT16_MIN;
	uint32_t x312 = 1U;
	uint32_t t75 = 2073710109U;

	t75 = (((x309<=x310)%x311)*x312);

	if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x313 = INT32_MAX;
	int64_t x314 = -1LL;
	uint32_t x316 = 3088747U;
	uint32_t t76 = 21U;

	t76 = (((x313<=x314)%x315)*x316);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x320 = -1;
	static volatile uint32_t t77 = UINT32_MAX;

	t77 = (((x317<=x318)%x319)*x320);

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x321 = -1;
	int8_t x322 = 3;
	uint64_t x323 = UINT64_MAX;
	volatile uint64_t t78 = 8337080406517413LLU;

	t78 = (((x321<=x322)%x323)*x324);

	if (t78 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x325 = -1;
	uint64_t x327 = 34960799101LLU;
	int8_t x328 = INT8_MIN;
	static volatile uint64_t t79 = 688247788LLU;

	t79 = (((x325<=x326)%x327)*x328);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x329 = -23;
	int32_t x330 = INT32_MIN;
	volatile int16_t x332 = INT16_MIN;
	volatile int64_t t80 = -21LL;

	t80 = (((x329<=x330)%x331)*x332);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x333 = 1;
	static int8_t x334 = INT8_MIN;
	int32_t x335 = INT32_MIN;
	int16_t x336 = INT16_MIN;
	int32_t t81 = -252;

	t81 = (((x333<=x334)%x335)*x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x340 = INT16_MIN;

	t82 = (((x337<=x338)%x339)*x340);

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x341 = UINT64_MAX;
	int8_t x342 = INT8_MIN;
	static uint64_t x343 = 3333594LLU;
	uint16_t x344 = 6U;
	uint64_t t83 = 3892903400LLU;

	t83 = (((x341<=x342)%x343)*x344);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x346 = -14002168LL;
	int64_t x347 = INT64_MIN;
	static volatile int32_t x348 = -1509937;
	volatile int64_t t84 = -488276827LL;

	t84 = (((x345<=x346)%x347)*x348);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x349 = -1;
	volatile uint16_t x351 = 490U;
	uint32_t x352 = 23U;
	volatile uint32_t t85 = 3070848U;

	t85 = (((x349<=x350)%x351)*x352);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x353 = INT8_MIN;
	static int64_t x354 = 4166506438LL;
	static uint64_t x355 = UINT64_MAX;
	static int32_t x356 = -2;
	uint64_t t86 = 55LLU;

	t86 = (((x353<=x354)%x355)*x356);

	if (t86 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x357 = 0U;
	int8_t x358 = -1;
	int16_t x359 = -1715;
	int64_t x360 = 152060386907646LL;
	int64_t t87 = -246178640084129442LL;

	t87 = (((x357<=x358)%x359)*x360);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x361 = INT8_MIN;
	uint32_t x362 = 2760U;
	uint16_t x363 = 270U;
	int8_t x364 = INT8_MIN;
	int32_t t88 = -1964365;

	t88 = (((x361<=x362)%x363)*x364);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x365 = INT16_MAX;
	int64_t x366 = -22531937LL;
	uint64_t x367 = UINT64_MAX;
	int8_t x368 = INT8_MIN;
	uint64_t t89 = 61481521LLU;

	t89 = (((x365<=x366)%x367)*x368);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x369 = -1;
	uint8_t x370 = 1U;
	volatile int32_t x371 = INT32_MAX;
	uint32_t t90 = 660661U;

	t90 = (((x369<=x370)%x371)*x372);

	if (t90 != 732131U) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x373 = -1LL;
	int16_t x374 = INT16_MAX;
	int32_t x376 = 57285;
	int32_t t91 = 1;

	t91 = (((x373<=x374)%x375)*x376);

	if (t91 != 57285) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x378 = -1;
	uint8_t x379 = 36U;
	uint8_t x380 = 1U;
	static volatile int32_t t92 = -25001241;

	t92 = (((x377<=x378)%x379)*x380);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x383 = UINT64_MAX;
	uint8_t x384 = UINT8_MAX;
	volatile uint64_t t93 = 1098571399769632427LLU;

	t93 = (((x381<=x382)%x383)*x384);

	if (t93 != 255LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x385 = 818420678U;
	uint16_t x386 = UINT16_MAX;
	uint16_t x387 = 11U;
	static uint32_t x388 = 162662537U;
	static volatile uint32_t t94 = 746U;

	t94 = (((x385<=x386)%x387)*x388);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x391 = INT16_MAX;
	static uint8_t x392 = 25U;
	int32_t t95 = -517706;

	t95 = (((x389<=x390)%x391)*x392);

	if (t95 != 25) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x393 = INT8_MAX;
	int8_t x394 = INT8_MIN;
	static uint32_t x396 = UINT32_MAX;

	t96 = (((x393<=x394)%x395)*x396);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x397 = INT64_MIN;
	static volatile int32_t x398 = -1;
	volatile int8_t x399 = -1;

	t97 = (((x397<=x398)%x399)*x400);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x403 = INT8_MIN;
	uint16_t x404 = UINT16_MAX;
	int32_t t98 = 0;

	t98 = (((x401<=x402)%x403)*x404);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x406 = INT32_MIN;
	int16_t x407 = INT16_MIN;
	volatile int32_t t99 = 196;

	t99 = (((x405<=x406)%x407)*x408);

	if (t99 != 461) { NG(); } else { ; }
	
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

