#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = -1LL;
int16_t x7 = -317;
static int32_t t1 = 38962;
static int32_t x10 = INT32_MAX;
int64_t x14 = 882166381187627LL;
static int16_t x20 = INT16_MIN;
uint16_t x22 = 3525U;
int32_t t5 = 6;
int64_t x25 = -1LL;
uint32_t x32 = 0U;
static volatile int8_t x35 = INT8_MIN;
static uint32_t x36 = 362702U;
static uint8_t x40 = 19U;
volatile int32_t t10 = -170427;
volatile int16_t x47 = -352;
volatile int16_t x56 = 1;
volatile int32_t t14 = 19985686;
int8_t x68 = INT8_MAX;
volatile int32_t t15 = 44115;
int16_t x71 = -2914;
volatile int32_t t16 = -1431584;
static int8_t x81 = INT8_MAX;
static int8_t x86 = 26;
volatile uint64_t x89 = 3969562810713261LLU;
static int64_t x91 = -1LL;
int32_t x92 = -53;
static int8_t x93 = INT8_MAX;
int64_t x100 = INT64_MIN;
int32_t x103 = INT32_MIN;
int32_t t24 = -314375;
uint64_t x105 = UINT64_MAX;
static volatile int32_t t25 = -81728;
static int8_t x110 = -1;
static int64_t x111 = 196408LL;
volatile int16_t x114 = 21;
uint32_t x115 = 6060782U;
uint32_t x117 = 1536617801U;
static uint64_t x119 = 14416LLU;
int64_t x136 = 2145077946906774729LL;
uint16_t x138 = 8073U;
static int32_t t33 = 42244;
uint16_t x144 = 27U;
int16_t x147 = INT16_MIN;
int32_t t36 = 4216944;
static volatile uint32_t x155 = 1022U;
int8_t x162 = INT8_MIN;
static volatile int32_t t41 = -4916105;
uint32_t x178 = 0U;
int16_t x180 = -51;
static int64_t x184 = INT64_MIN;
int32_t x192 = -53502;
volatile int32_t t47 = 33;
int16_t x199 = INT16_MIN;
int32_t t48 = 63;
int32_t t49 = -7341;
uint16_t x218 = 7462U;
static int32_t t53 = -52089493;
uint16_t x232 = 10U;
int32_t t56 = 11;
static volatile int16_t x236 = -1;
uint32_t x238 = 3616458U;
volatile int32_t t58 = -44;
int8_t x243 = INT8_MIN;
int32_t t59 = -792270;
int32_t x254 = -6580747;
uint16_t x261 = 300U;
int32_t t64 = -707511;
volatile int8_t x278 = 24;
int32_t t68 = -673631171;
static int16_t x287 = 681;
int16_t x291 = INT16_MIN;
volatile int16_t x297 = 169;
volatile uint8_t x304 = 2U;
int8_t x321 = 4;
volatile int64_t x323 = INT64_MIN;
int16_t x338 = INT16_MIN;
volatile uint64_t x354 = 3LLU;
int64_t x365 = -10847590394508653LL;
volatile uint16_t x367 = 21518U;
uint64_t x370 = UINT64_MAX;
int32_t x371 = INT32_MAX;
static int32_t x375 = INT32_MIN;
volatile int32_t x377 = INT32_MIN;
int8_t x380 = -1;
int64_t x386 = -52775322515LL;
volatile uint64_t x389 = 11582461648LLU;
int16_t x392 = -1886;
volatile int32_t t96 = 225055951;
uint16_t x397 = 175U;
volatile int64_t x398 = INT64_MIN;
int16_t x404 = INT16_MAX;
uint8_t x405 = UINT8_MAX;
int32_t t99 = -458314;


void f0(void) {
	volatile int8_t x1 = 3;
	int32_t x2 = INT32_MIN;
	int16_t x3 = 15;
	int64_t x4 = INT64_MIN;
	static int32_t t0 = -4466;

	t0 = (x1<=((x2<=x3)+x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = -1LL;
	uint8_t x8 = 3U;

	t1 = (x5<=((x6<=x7)+x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 1U;
	volatile int16_t x11 = 19;
	uint16_t x12 = 55U;
	int32_t t2 = -1;

	t2 = (x9<=((x10<=x11)+x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 1U;
	int32_t x15 = INT32_MIN;
	int16_t x16 = INT16_MIN;
	int32_t t3 = 2945010;

	t3 = (x13<=((x14<=x15)+x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 34U;
	int32_t x18 = INT32_MAX;
	int64_t x19 = -897LL;
	static int32_t t4 = -2002;

	t4 = (x17<=((x18<=x19)+x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 79U;
	int8_t x23 = INT8_MAX;
	volatile uint64_t x24 = 39LLU;

	t5 = (x21<=((x22<=x23)+x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = 52268;
	volatile uint32_t x27 = 7U;
	int32_t x28 = -1;
	int32_t t6 = 457585740;

	t6 = (x25<=((x26<=x27)+x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	int32_t x30 = INT32_MIN;
	static uint32_t x31 = 17U;
	static int32_t t7 = -501;

	t7 = (x29<=((x30<=x31)+x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = -3721;
	static int64_t x34 = -107032962159722664LL;
	int32_t t8 = -23050600;

	t8 = (x33<=((x34<=x35)+x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x37 = UINT32_MAX;
	uint32_t x38 = UINT32_MAX;
	int64_t x39 = 14533754805310LL;
	static int32_t t9 = -7;

	t9 = (x37<=((x38<=x39)+x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	volatile uint64_t x42 = 6403349880LLU;
	uint32_t x43 = UINT32_MAX;
	static int64_t x44 = -1LL;

	t10 = (x41<=((x42<=x43)+x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 2U;
	int64_t x46 = 3876402211071LL;
	uint32_t x48 = 968148U;
	volatile int32_t t11 = -482307;

	t11 = (x45<=((x46<=x47)+x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = -2LL;
	int64_t x54 = -1LL;
	int32_t x55 = INT32_MIN;
	int32_t t12 = -146366;

	t12 = (x53<=((x54<=x55)+x56));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = INT8_MIN;
	uint64_t x58 = UINT64_MAX;
	int32_t x59 = -1;
	int8_t x60 = INT8_MAX;
	volatile int32_t t13 = 52622559;

	t13 = (x57<=((x58<=x59)+x60));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = -1;
	int16_t x62 = -44;
	static volatile int8_t x63 = -1;
	int8_t x64 = INT8_MIN;

	t14 = (x61<=((x62<=x63)+x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x65 = INT32_MAX;
	uint8_t x66 = 0U;
	int64_t x67 = -1LL;

	t15 = (x65<=((x66<=x67)+x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MAX;
	int32_t x70 = 216;
	volatile int64_t x72 = INT64_MAX;

	t16 = (x69<=((x70<=x71)+x72));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x73 = UINT8_MAX;
	uint32_t x74 = 65569U;
	volatile int8_t x75 = 27;
	int32_t x76 = -1;
	int32_t t17 = -42325;

	t17 = (x73<=((x74<=x75)+x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x77 = UINT64_MAX;
	volatile int64_t x78 = -1LL;
	int16_t x79 = -1;
	static uint16_t x80 = 60U;
	volatile int32_t t18 = 59957;

	t18 = (x77<=((x78<=x79)+x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x82 = 161U;
	static volatile uint8_t x83 = 19U;
	int16_t x84 = -1;
	volatile int32_t t19 = -12;

	t19 = (x81<=((x82<=x83)+x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = -220;
	static volatile int8_t x87 = -1;
	int32_t x88 = 2;
	int32_t t20 = -1;

	t20 = (x85<=((x86<=x87)+x88));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x90 = 10;
	int32_t t21 = 72;

	t21 = (x89<=((x90<=x91)+x92));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x94 = 290315393U;
	int8_t x95 = INT8_MIN;
	static int16_t x96 = INT16_MIN;
	int32_t t22 = -23422;

	t22 = (x93<=((x94<=x95)+x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x97 = 0U;
	int16_t x98 = INT16_MIN;
	volatile uint32_t x99 = 86U;
	volatile int32_t t23 = 9;

	t23 = (x97<=((x98<=x99)+x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = INT8_MAX;
	uint8_t x102 = 10U;
	volatile uint64_t x104 = 3819998LLU;

	t24 = (x101<=((x102<=x103)+x104));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x106 = 113U;
	int32_t x107 = INT32_MIN;
	volatile int8_t x108 = INT8_MIN;

	t25 = (x105<=((x106<=x107)+x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x109 = 237857704U;
	int16_t x112 = -1;
	volatile int32_t t26 = -200;

	t26 = (x109<=((x110<=x111)+x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x113 = 0U;
	volatile int8_t x116 = -1;
	volatile int32_t t27 = 29920910;

	t27 = (x113<=((x114<=x115)+x116));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x118 = 250592650120170LL;
	volatile int64_t x120 = -226349474978389821LL;
	volatile int32_t t28 = 36881805;

	t28 = (x117<=((x118<=x119)+x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = INT8_MIN;
	volatile int64_t x122 = -2701LL;
	int64_t x123 = INT64_MAX;
	int16_t x124 = -1;
	static int32_t t29 = -1862;

	t29 = (x121<=((x122<=x123)+x124));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = 2638604;
	volatile int8_t x126 = INT8_MIN;
	static int16_t x127 = INT16_MIN;
	static volatile int16_t x128 = -1;
	int32_t t30 = 1528;

	t30 = (x125<=((x126<=x127)+x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x129 = 471593474U;
	static int8_t x130 = 3;
	static int32_t x131 = INT32_MAX;
	static volatile int64_t x132 = -2693394510891235LL;
	volatile int32_t t31 = 14271;

	t31 = (x129<=((x130<=x131)+x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x133 = UINT64_MAX;
	int32_t x134 = INT32_MIN;
	volatile int16_t x135 = INT16_MIN;
	static volatile int32_t t32 = -2;

	t32 = (x133<=((x134<=x135)+x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = 13000;
	uint16_t x139 = UINT16_MAX;
	uint64_t x140 = UINT64_MAX;

	t33 = (x137<=((x138<=x139)+x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x141 = INT16_MAX;
	uint8_t x142 = UINT8_MAX;
	static int64_t x143 = INT64_MIN;
	volatile int32_t t34 = -10534144;

	t34 = (x141<=((x142<=x143)+x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x145 = UINT8_MAX;
	int32_t x146 = -1;
	uint64_t x148 = UINT64_MAX;
	int32_t t35 = 485;

	t35 = (x145<=((x146<=x147)+x148));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x149 = 11U;
	uint8_t x150 = 0U;
	static int32_t x151 = INT32_MIN;
	int64_t x152 = 20663215040137548LL;

	t36 = (x149<=((x150<=x151)+x152));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint32_t x153 = 1029099334U;
	uint16_t x154 = 20U;
	int64_t x156 = -1LL;
	volatile int32_t t37 = 6565;

	t37 = (x153<=((x154<=x155)+x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x157 = 47U;
	volatile int8_t x158 = 32;
	int8_t x159 = INT8_MAX;
	uint64_t x160 = 8622868138102046047LLU;
	volatile int32_t t38 = -85365991;

	t38 = (x157<=((x158<=x159)+x160));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x161 = INT32_MAX;
	uint64_t x163 = UINT64_MAX;
	volatile uint8_t x164 = 75U;
	int32_t t39 = 3;

	t39 = (x161<=((x162<=x163)+x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x165 = 1U;
	uint16_t x166 = 266U;
	int8_t x167 = INT8_MAX;
	uint8_t x168 = UINT8_MAX;
	volatile int32_t t40 = -27;

	t40 = (x165<=((x166<=x167)+x168));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x169 = INT32_MAX;
	int8_t x170 = -1;
	int64_t x171 = -1LL;
	volatile uint16_t x172 = 35U;

	t41 = (x169<=((x170<=x171)+x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = -1;
	volatile uint16_t x174 = UINT16_MAX;
	int8_t x175 = INT8_MIN;
	int8_t x176 = INT8_MIN;
	int32_t t42 = -20;

	t42 = (x173<=((x174<=x175)+x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = INT64_MAX;
	uint16_t x179 = 2U;
	volatile int32_t t43 = 0;

	t43 = (x177<=((x178<=x179)+x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x181 = 1;
	static int32_t x182 = -1;
	int16_t x183 = INT16_MIN;
	int32_t t44 = 148712869;

	t44 = (x181<=((x182<=x183)+x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x185 = INT8_MIN;
	static uint32_t x186 = 10425U;
	int64_t x187 = -13870430170LL;
	int32_t x188 = INT32_MIN;
	volatile int32_t t45 = 2594;

	t45 = (x185<=((x186<=x187)+x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x189 = UINT16_MAX;
	volatile uint32_t x190 = 342128700U;
	int8_t x191 = 24;
	static int32_t t46 = 1989;

	t46 = (x189<=((x190<=x191)+x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x193 = 2507380LL;
	uint16_t x194 = 33U;
	int16_t x195 = INT16_MIN;
	int64_t x196 = -1LL;

	t47 = (x193<=((x194<=x195)+x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x197 = -1;
	int8_t x198 = INT8_MAX;
	static volatile uint64_t x200 = 45635607728LLU;

	t48 = (x197<=((x198<=x199)+x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x201 = -1;
	volatile uint32_t x202 = 40U;
	volatile int32_t x203 = -1;
	uint64_t x204 = 3717764594392490LLU;

	t49 = (x201<=((x202<=x203)+x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x205 = 16333165U;
	volatile int16_t x206 = INT16_MIN;
	static int8_t x207 = INT8_MIN;
	int16_t x208 = INT16_MIN;
	static int32_t t50 = 985;

	t50 = (x205<=((x206<=x207)+x208));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x209 = INT32_MAX;
	volatile int32_t x210 = -2449;
	static volatile int64_t x211 = -399912421875LL;
	static volatile int64_t x212 = INT64_MIN;
	static int32_t t51 = -1480;

	t51 = (x209<=((x210<=x211)+x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x213 = INT16_MIN;
	uint8_t x214 = 96U;
	int64_t x215 = -1LL;
	volatile int8_t x216 = 1;
	int32_t t52 = 88583996;

	t52 = (x213<=((x214<=x215)+x216));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x217 = UINT64_MAX;
	int32_t x219 = 1;
	static int64_t x220 = INT64_MAX;

	t53 = (x217<=((x218<=x219)+x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x221 = 119419LLU;
	uint64_t x222 = UINT64_MAX;
	static int16_t x223 = INT16_MIN;
	volatile uint8_t x224 = UINT8_MAX;
	static volatile int32_t t54 = -1;

	t54 = (x221<=((x222<=x223)+x224));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x225 = INT32_MIN;
	volatile int8_t x226 = INT8_MAX;
	volatile int64_t x227 = -1LL;
	int8_t x228 = -1;
	int32_t t55 = 0;

	t55 = (x225<=((x226<=x227)+x228));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x229 = 0;
	volatile uint16_t x230 = 5U;
	int8_t x231 = -8;

	t56 = (x229<=((x230<=x231)+x232));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x233 = -15;
	volatile int16_t x234 = INT16_MIN;
	uint16_t x235 = 1716U;
	int32_t t57 = 127609;

	t57 = (x233<=((x234<=x235)+x236));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x237 = -497640993;
	int32_t x239 = INT32_MIN;
	int64_t x240 = INT64_MIN;

	t58 = (x237<=((x238<=x239)+x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x241 = INT32_MIN;
	volatile int64_t x242 = -1LL;
	int16_t x244 = INT16_MIN;

	t59 = (x241<=((x242<=x243)+x244));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = -16;
	int32_t x246 = -1;
	uint64_t x247 = 16502656031643LLU;
	int8_t x248 = -1;
	int32_t t60 = -7582048;

	t60 = (x245<=((x246<=x247)+x248));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x249 = INT64_MIN;
	static int8_t x250 = -1;
	int8_t x251 = INT8_MAX;
	uint32_t x252 = UINT32_MAX;
	volatile int32_t t61 = 994;

	t61 = (x249<=((x250<=x251)+x252));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x253 = -3;
	int64_t x255 = INT64_MIN;
	int16_t x256 = 5572;
	static volatile int32_t t62 = -19503;

	t62 = (x253<=((x254<=x255)+x256));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x257 = 460368U;
	volatile int64_t x258 = -1LL;
	volatile int32_t x259 = INT32_MIN;
	int8_t x260 = -1;
	volatile int32_t t63 = 37244320;

	t63 = (x257<=((x258<=x259)+x260));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x262 = INT32_MIN;
	int16_t x263 = -1;
	static int16_t x264 = -1;

	t64 = (x261<=((x262<=x263)+x264));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x269 = UINT8_MAX;
	static volatile int8_t x270 = INT8_MAX;
	static int16_t x271 = 32;
	uint32_t x272 = UINT32_MAX;
	int32_t t65 = -11560871;

	t65 = (x269<=((x270<=x271)+x272));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x273 = INT8_MIN;
	static int32_t x274 = INT32_MAX;
	int64_t x275 = INT64_MIN;
	volatile int32_t x276 = -1;
	static int32_t t66 = -107387115;

	t66 = (x273<=((x274<=x275)+x276));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x277 = -1LL;
	static int64_t x279 = -1LL;
	uint64_t x280 = 5220LLU;
	static volatile int32_t t67 = 0;

	t67 = (x277<=((x278<=x279)+x280));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x281 = 6249528U;
	static uint64_t x282 = UINT64_MAX;
	int32_t x283 = 140;
	volatile int32_t x284 = INT32_MIN;

	t68 = (x281<=((x282<=x283)+x284));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x285 = -1;
	uint16_t x286 = 9U;
	static volatile int8_t x288 = INT8_MIN;
	volatile int32_t t69 = -15405;

	t69 = (x285<=((x286<=x287)+x288));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x289 = 578195931LL;
	volatile int16_t x290 = INT16_MAX;
	int16_t x292 = INT16_MIN;
	int32_t t70 = -3534731;

	t70 = (x289<=((x290<=x291)+x292));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x293 = INT16_MIN;
	int64_t x294 = -206417664356LL;
	int64_t x295 = INT64_MIN;
	volatile int64_t x296 = 3453LL;
	static volatile int32_t t71 = 267;

	t71 = (x293<=((x294<=x295)+x296));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x298 = -876479571518865297LL;
	int32_t x299 = INT32_MAX;
	int8_t x300 = INT8_MIN;
	volatile int32_t t72 = 680050792;

	t72 = (x297<=((x298<=x299)+x300));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x301 = -276392488;
	static int8_t x302 = -2;
	int16_t x303 = -785;
	int32_t t73 = 1774201;

	t73 = (x301<=((x302<=x303)+x304));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x305 = 536538099;
	static int32_t x306 = INT32_MIN;
	uint64_t x307 = 225066578LLU;
	int16_t x308 = INT16_MAX;
	static int32_t t74 = -1;

	t74 = (x305<=((x306<=x307)+x308));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x309 = INT8_MIN;
	volatile uint16_t x310 = 714U;
	int8_t x311 = INT8_MIN;
	volatile uint8_t x312 = UINT8_MAX;
	int32_t t75 = 30828;

	t75 = (x309<=((x310<=x311)+x312));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x313 = UINT32_MAX;
	int32_t x314 = INT32_MIN;
	volatile int16_t x315 = INT16_MIN;
	int8_t x316 = -7;
	int32_t t76 = -3541;

	t76 = (x313<=((x314<=x315)+x316));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x317 = INT64_MAX;
	static int8_t x318 = INT8_MAX;
	uint64_t x319 = 14391697416LLU;
	int64_t x320 = -1LL;
	volatile int32_t t77 = -1;

	t77 = (x317<=((x318<=x319)+x320));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x322 = INT16_MIN;
	static volatile int8_t x324 = 47;
	volatile int32_t t78 = -1;

	t78 = (x321<=((x322<=x323)+x324));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x325 = INT64_MIN;
	int64_t x326 = 495060LL;
	static int16_t x327 = INT16_MAX;
	int64_t x328 = -1LL;
	int32_t t79 = 324555531;

	t79 = (x325<=((x326<=x327)+x328));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x329 = UINT32_MAX;
	uint64_t x330 = 796623922655716342LLU;
	static int64_t x331 = -1LL;
	uint64_t x332 = 82298LLU;
	static volatile int32_t t80 = 0;

	t80 = (x329<=((x330<=x331)+x332));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x333 = -1LL;
	int64_t x334 = 6248464627525LL;
	int64_t x335 = 5174002939282840LL;
	int64_t x336 = -1LL;
	volatile int32_t t81 = 6933635;

	t81 = (x333<=((x334<=x335)+x336));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x337 = -1;
	uint64_t x339 = 2LLU;
	static uint16_t x340 = 14U;
	int32_t t82 = 0;

	t82 = (x337<=((x338<=x339)+x340));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x341 = 63LLU;
	int32_t x342 = INT32_MIN;
	static int8_t x343 = INT8_MIN;
	uint32_t x344 = 0U;
	static int32_t t83 = -2348296;

	t83 = (x341<=((x342<=x343)+x344));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x345 = -1;
	int16_t x346 = INT16_MAX;
	uint16_t x347 = 6134U;
	static uint16_t x348 = 19U;
	volatile int32_t t84 = 4;

	t84 = (x345<=((x346<=x347)+x348));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x349 = INT32_MIN;
	static uint32_t x350 = 8773396U;
	volatile int8_t x351 = INT8_MIN;
	uint16_t x352 = 3604U;
	int32_t t85 = 1216;

	t85 = (x349<=((x350<=x351)+x352));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x353 = 3U;
	uint16_t x355 = 193U;
	int8_t x356 = 1;
	volatile int32_t t86 = 5;

	t86 = (x353<=((x354<=x355)+x356));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x357 = 243676;
	uint32_t x358 = UINT32_MAX;
	int8_t x359 = -34;
	volatile int16_t x360 = 1;
	static volatile int32_t t87 = -8;

	t87 = (x357<=((x358<=x359)+x360));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x361 = 1;
	int64_t x362 = INT64_MIN;
	int8_t x363 = INT8_MIN;
	static uint8_t x364 = 3U;
	volatile int32_t t88 = 4043;

	t88 = (x361<=((x362<=x363)+x364));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x366 = 12U;
	volatile uint32_t x368 = 788718U;
	static int32_t t89 = -34797;

	t89 = (x365<=((x366<=x367)+x368));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x369 = 40U;
	int8_t x372 = -1;
	int32_t t90 = -2298559;

	t90 = (x369<=((x370<=x371)+x372));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x373 = INT16_MAX;
	int64_t x374 = INT64_MIN;
	int64_t x376 = INT64_MIN;
	volatile int32_t t91 = -55;

	t91 = (x373<=((x374<=x375)+x376));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x378 = UINT32_MAX;
	int8_t x379 = -1;
	int32_t t92 = -16905;

	t92 = (x377<=((x378<=x379)+x380));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x381 = 0U;
	int8_t x382 = INT8_MIN;
	uint64_t x383 = 3791LLU;
	uint64_t x384 = 3448180LLU;
	int32_t t93 = 1225;

	t93 = (x381<=((x382<=x383)+x384));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x385 = 14793459646LL;
	int64_t x387 = INT64_MIN;
	int32_t x388 = 16143;
	volatile int32_t t94 = -3625590;

	t94 = (x385<=((x386<=x387)+x388));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x390 = 3079U;
	volatile int32_t x391 = INT32_MIN;
	volatile int32_t t95 = 11;

	t95 = (x389<=((x390<=x391)+x392));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x393 = INT8_MIN;
	int8_t x394 = INT8_MIN;
	int32_t x395 = -697943514;
	static uint16_t x396 = 56U;

	t96 = (x393<=((x394<=x395)+x396));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x399 = INT8_MAX;
	uint64_t x400 = UINT64_MAX;
	int32_t t97 = -758867010;

	t97 = (x397<=((x398<=x399)+x400));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x401 = 38U;
	volatile uint16_t x402 = UINT16_MAX;
	static int16_t x403 = -1;
	int32_t t98 = -1;

	t98 = (x401<=((x402<=x403)+x404));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x406 = -3807349184138518LL;
	static int64_t x407 = INT64_MAX;
	int8_t x408 = -1;

	t99 = (x405<=((x406<=x407)+x408));

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

