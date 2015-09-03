#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MIN;
int16_t x13 = INT16_MIN;
static int16_t x15 = 248;
int64_t x16 = -1LL;
volatile int16_t x22 = INT16_MIN;
volatile uint8_t x31 = 72U;
volatile uint32_t x45 = 88254554U;
int64_t x47 = -1LL;
static volatile int32_t t13 = 63679353;
uint64_t x57 = 11LLU;
uint64_t x67 = UINT64_MAX;
volatile int8_t x73 = INT8_MAX;
static int64_t x80 = -1LL;
volatile int64_t x82 = -1LL;
uint64_t x84 = UINT64_MAX;
int32_t t22 = -53928733;
int32_t x101 = INT32_MIN;
volatile int32_t x102 = INT32_MIN;
static volatile int64_t x103 = INT64_MAX;
int32_t x105 = INT32_MAX;
static int8_t x108 = INT8_MIN;
volatile uint8_t x109 = 19U;
uint32_t x110 = 14U;
uint64_t x111 = UINT64_MAX;
uint64_t x115 = 240669LLU;
volatile uint8_t x116 = 1U;
int16_t x127 = 2;
int32_t t31 = 16112;
int8_t x131 = INT8_MIN;
static volatile int32_t t33 = -113;
volatile int64_t x144 = -1LL;
uint32_t x148 = 50542196U;
static volatile int32_t t36 = 48465;
static int8_t x152 = -1;
int32_t t37 = -25;
int64_t x155 = INT64_MIN;
int16_t x164 = INT16_MIN;
uint16_t x174 = UINT16_MAX;
int8_t x176 = INT8_MIN;
static int16_t x179 = -12811;
volatile int32_t t45 = -1261270;
int16_t x188 = -1128;
uint64_t x194 = UINT64_MAX;
int16_t x198 = -91;
uint32_t x201 = 504U;
volatile int8_t x206 = INT8_MAX;
int32_t x217 = 1942459;
static volatile int32_t t55 = 452547;
uint8_t x228 = 3U;
static volatile uint64_t x231 = 7160376650649101317LLU;
int64_t x247 = 1400541805440223864LL;
int16_t x253 = INT16_MIN;
int32_t t63 = 3775;
int32_t x257 = -1;
volatile int32_t x259 = -1;
int32_t t64 = 22113;
int16_t x271 = INT16_MAX;
uint8_t x272 = 8U;
uint64_t x274 = 3LLU;
static volatile int16_t x281 = 10481;
int32_t t70 = 262;
volatile int8_t x285 = 1;
int64_t x286 = -1LL;
int8_t x290 = INT8_MIN;
uint32_t x292 = 44U;
static uint16_t x295 = 48U;
static volatile int8_t x298 = 0;
volatile int32_t t74 = -85;
int64_t x310 = INT64_MIN;
int64_t x315 = -217LL;
volatile int16_t x316 = -5;
static int64_t x320 = INT64_MIN;
static uint16_t x324 = UINT16_MAX;
static volatile int32_t t80 = -1523;
static int8_t x326 = -1;
int16_t x330 = INT16_MAX;
int32_t x335 = INT32_MIN;
int8_t x336 = INT8_MAX;
int64_t x345 = INT64_MIN;
int8_t x346 = 10;
uint64_t x349 = 187LLU;
static uint64_t x351 = UINT64_MAX;
int32_t t87 = -54910229;
uint16_t x357 = 185U;
volatile int32_t t90 = 18;
uint8_t x366 = 87U;
volatile int32_t t91 = -2091;
int64_t x369 = -1LL;
uint8_t x370 = 1U;
int8_t x376 = -2;
volatile int32_t t93 = -400962;
int16_t x384 = INT16_MIN;
int16_t x396 = INT16_MAX;


void f0(void) {
	int8_t x1 = INT8_MAX;
	static uint16_t x3 = 1U;
	int16_t x4 = -1;
	volatile int32_t t0 = -31;

	t0 = ((x1==x2)==(x3<x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	uint8_t x6 = 121U;
	int32_t x7 = -1;
	uint16_t x8 = UINT16_MAX;
	int32_t t1 = -1;

	t1 = ((x5==x6)==(x7<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 0;
	uint64_t x10 = UINT64_MAX;
	static int8_t x11 = INT8_MIN;
	uint8_t x12 = UINT8_MAX;
	volatile int32_t t2 = -657985;

	t2 = ((x9==x10)==(x11<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x14 = INT64_MIN;
	int32_t t3 = 113;

	t3 = ((x13==x14)==(x15<x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = -1LL;
	int8_t x18 = -1;
	volatile int8_t x19 = INT8_MAX;
	static int64_t x20 = INT64_MIN;
	int32_t t4 = 2;

	t4 = ((x17==x18)==(x19<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	static int8_t x23 = INT8_MIN;
	uint16_t x24 = UINT16_MAX;
	volatile int32_t t5 = 59685;

	t5 = ((x21==x22)==(x23<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int16_t x26 = -1;
	uint64_t x27 = UINT64_MAX;
	int16_t x28 = 8;
	volatile int32_t t6 = 774339;

	t6 = ((x25==x26)==(x27<x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 160;
	int8_t x30 = INT8_MIN;
	volatile uint32_t x32 = 1U;
	volatile int32_t t7 = -269459;

	t7 = ((x29==x30)==(x31<x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	uint16_t x34 = 107U;
	int16_t x35 = -1;
	int8_t x36 = -15;
	static int32_t t8 = 0;

	t8 = ((x33==x34)==(x35<x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MAX;
	int16_t x38 = 36;
	int32_t x39 = 1277659;
	uint16_t x40 = 129U;
	volatile int32_t t9 = -23212750;

	t9 = ((x37==x38)==(x39<x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = INT16_MIN;
	static volatile int32_t x42 = INT32_MIN;
	volatile uint32_t x43 = UINT32_MAX;
	int32_t x44 = INT32_MIN;
	volatile int32_t t10 = -91852;

	t10 = ((x41==x42)==(x43<x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x46 = 4650LL;
	static uint32_t x48 = 45487875U;
	static volatile int32_t t11 = -1;

	t11 = ((x45==x46)==(x47<x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x49 = 1620368733254836899LLU;
	static uint8_t x50 = 67U;
	int32_t x51 = INT32_MIN;
	int16_t x52 = -44;
	volatile int32_t t12 = -859033265;

	t12 = ((x49==x50)==(x51<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = -32400321385344LL;
	volatile uint64_t x54 = 13576LLU;
	int32_t x55 = INT32_MIN;
	int32_t x56 = -1;

	t13 = ((x53==x54)==(x55<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x58 = 975U;
	uint8_t x59 = 65U;
	int8_t x60 = INT8_MIN;
	int32_t t14 = 23885;

	t14 = ((x57==x58)==(x59<x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	static uint32_t x62 = 24746U;
	int32_t x63 = INT32_MAX;
	int64_t x64 = -1LL;
	static int32_t t15 = 9524;

	t15 = ((x61==x62)==(x63<x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x65 = 43670006928465230LLU;
	int16_t x66 = 18;
	int8_t x68 = INT8_MIN;
	static volatile int32_t t16 = 11;

	t16 = ((x65==x66)==(x67<x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 39U;
	int8_t x70 = -1;
	volatile int16_t x71 = -1;
	volatile int16_t x72 = INT16_MIN;
	int32_t t17 = 111;

	t17 = ((x69==x70)==(x71<x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x74 = INT8_MIN;
	volatile uint64_t x75 = UINT64_MAX;
	int8_t x76 = INT8_MAX;
	int32_t t18 = -2424;

	t18 = ((x73==x74)==(x75<x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = 29;
	uint8_t x78 = UINT8_MAX;
	int16_t x79 = 8;
	volatile int32_t t19 = 50999949;

	t19 = ((x77==x78)==(x79<x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = INT8_MAX;
	int8_t x83 = -1;
	volatile int32_t t20 = 65357045;

	t20 = ((x81==x82)==(x83<x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = 504165;
	int16_t x86 = INT16_MIN;
	int64_t x87 = INT64_MIN;
	int64_t x88 = INT64_MIN;
	volatile int32_t t21 = -16264032;

	t21 = ((x85==x86)==(x87<x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	int32_t x90 = INT32_MIN;
	static int64_t x91 = -111LL;
	uint16_t x92 = 114U;

	t22 = ((x89==x90)==(x91<x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 24898631177216LLU;
	int64_t x94 = INT64_MAX;
	static uint32_t x95 = UINT32_MAX;
	int32_t x96 = INT32_MAX;
	static volatile int32_t t23 = -2774176;

	t23 = ((x93==x94)==(x95<x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x97 = 110911628U;
	int8_t x98 = -1;
	uint64_t x99 = 148032973639LLU;
	static int32_t x100 = INT32_MIN;
	int32_t t24 = -1834846;

	t24 = ((x97==x98)==(x99<x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x104 = INT32_MIN;
	volatile int32_t t25 = 9617409;

	t25 = ((x101==x102)==(x103<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x106 = INT32_MAX;
	int64_t x107 = INT64_MIN;
	int32_t t26 = 178;

	t26 = ((x105==x106)==(x107<x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint64_t x112 = 592234279325LLU;
	static int32_t t27 = 29227719;

	t27 = ((x109==x110)==(x111<x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x113 = UINT8_MAX;
	volatile int32_t x114 = -328516;
	int32_t t28 = -5204188;

	t28 = ((x113==x114)==(x115<x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -1;
	volatile int16_t x118 = INT16_MIN;
	uint16_t x119 = 1U;
	int16_t x120 = -1;
	volatile int32_t t29 = -2966;

	t29 = ((x117==x118)==(x119<x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -39;
	uint32_t x122 = UINT32_MAX;
	int64_t x123 = -5970523568LL;
	uint64_t x124 = 831489320975LLU;
	volatile int32_t t30 = -2055212;

	t30 = ((x121==x122)==(x123<x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	uint32_t x126 = 4194U;
	int64_t x128 = -501LL;

	t31 = ((x125==x126)==(x127<x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 16U;
	int32_t x130 = 2;
	int16_t x132 = INT16_MAX;
	int32_t t32 = 1;

	t32 = ((x129==x130)==(x131<x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	int32_t x134 = -1;
	int16_t x135 = INT16_MIN;
	int8_t x136 = INT8_MAX;

	t33 = ((x133==x134)==(x135<x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x137 = 1940390839U;
	uint64_t x138 = 90176829818LLU;
	uint8_t x139 = UINT8_MAX;
	static uint16_t x140 = UINT16_MAX;
	int32_t t34 = -6;

	t34 = ((x137==x138)==(x139<x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x141 = 32839591079LLU;
	int32_t x142 = INT32_MIN;
	static volatile int32_t x143 = -1;
	int32_t t35 = 3;

	t35 = ((x141==x142)==(x143<x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = 120U;
	int16_t x146 = INT16_MIN;
	int16_t x147 = INT16_MIN;

	t36 = ((x145==x146)==(x147<x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x149 = 1U;
	uint64_t x150 = 3413754261397132LLU;
	uint32_t x151 = 5612U;

	t37 = ((x149==x150)==(x151<x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x153 = INT16_MIN;
	static int64_t x154 = INT64_MIN;
	int16_t x156 = INT16_MIN;
	int32_t t38 = -1326193;

	t38 = ((x153==x154)==(x155<x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = -1;
	static int16_t x158 = INT16_MIN;
	uint16_t x159 = 18U;
	uint16_t x160 = UINT16_MAX;
	volatile int32_t t39 = -305436719;

	t39 = ((x157==x158)==(x159<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x161 = -1;
	int32_t x162 = 0;
	volatile int32_t x163 = INT32_MIN;
	int32_t t40 = 1116129;

	t40 = ((x161==x162)==(x163<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 6U;
	uint16_t x166 = 10144U;
	uint8_t x167 = 3U;
	uint32_t x168 = UINT32_MAX;
	volatile int32_t t41 = 14;

	t41 = ((x165==x166)==(x167<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -1LL;
	int64_t x170 = 2023LL;
	int16_t x171 = -117;
	int32_t x172 = 695;
	int32_t t42 = 185876;

	t42 = ((x169==x170)==(x171<x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 61U;
	int64_t x175 = INT64_MIN;
	volatile int32_t t43 = -76854527;

	t43 = ((x173==x174)==(x175<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MIN;
	uint16_t x178 = UINT16_MAX;
	int64_t x180 = INT64_MIN;
	int32_t t44 = -23;

	t44 = ((x177==x178)==(x179<x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x181 = INT16_MIN;
	uint32_t x182 = 3U;
	static volatile int32_t x183 = INT32_MIN;
	int16_t x184 = -1;

	t45 = ((x181==x182)==(x183<x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x185 = INT8_MIN;
	uint16_t x186 = 18U;
	int32_t x187 = INT32_MAX;
	int32_t t46 = -1187;

	t46 = ((x185==x186)==(x187<x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	uint8_t x190 = 0U;
	static int32_t x191 = INT32_MIN;
	int16_t x192 = -2;
	volatile int32_t t47 = 0;

	t47 = ((x189==x190)==(x191<x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -1LL;
	int64_t x195 = INT64_MAX;
	uint32_t x196 = 3692U;
	volatile int32_t t48 = -83;

	t48 = ((x193==x194)==(x195<x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -1;
	static int16_t x199 = INT16_MAX;
	static int64_t x200 = INT64_MIN;
	int32_t t49 = -70552623;

	t49 = ((x197==x198)==(x199<x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x202 = INT16_MAX;
	int64_t x203 = -1LL;
	int64_t x204 = -3277135502LL;
	static volatile int32_t t50 = 1827;

	t50 = ((x201==x202)==(x203<x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = -1;
	int8_t x207 = INT8_MIN;
	int16_t x208 = 1;
	volatile int32_t t51 = 4124131;

	t51 = ((x205==x206)==(x207<x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = 3576;
	int32_t x210 = INT32_MIN;
	uint32_t x211 = 193024041U;
	int64_t x212 = -7984557LL;
	int32_t t52 = -57;

	t52 = ((x209==x210)==(x211<x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = -261955LL;
	uint16_t x214 = 5U;
	static int32_t x215 = -1772;
	int32_t x216 = 81518;
	volatile int32_t t53 = -1977;

	t53 = ((x213==x214)==(x215<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x218 = INT16_MIN;
	int16_t x219 = 236;
	int16_t x220 = INT16_MIN;
	int32_t t54 = 1147730;

	t54 = ((x217==x218)==(x219<x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -1;
	int64_t x222 = 6621269LL;
	int32_t x223 = INT32_MAX;
	static uint64_t x224 = UINT64_MAX;

	t55 = ((x221==x222)==(x223<x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x225 = INT8_MAX;
	uint16_t x226 = 24U;
	static uint64_t x227 = UINT64_MAX;
	volatile int32_t t56 = 244498343;

	t56 = ((x225==x226)==(x227<x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x229 = -394;
	int64_t x230 = INT64_MIN;
	static int16_t x232 = INT16_MIN;
	int32_t t57 = 430;

	t57 = ((x229==x230)==(x231<x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = 0;
	uint32_t x234 = 11391U;
	uint64_t x235 = 237826LLU;
	volatile int64_t x236 = -1LL;
	int32_t t58 = -1;

	t58 = ((x233==x234)==(x235<x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MAX;
	uint8_t x238 = 1U;
	static volatile int16_t x239 = INT16_MIN;
	int16_t x240 = INT16_MIN;
	volatile int32_t t59 = -179;

	t59 = ((x237==x238)==(x239<x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MIN;
	int16_t x242 = INT16_MIN;
	int32_t x243 = INT32_MIN;
	static int8_t x244 = INT8_MAX;
	int32_t t60 = -23344782;

	t60 = ((x241==x242)==(x243<x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = 15U;
	static int32_t x246 = INT32_MIN;
	int8_t x248 = -1;
	volatile int32_t t61 = 11;

	t61 = ((x245==x246)==(x247<x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -1;
	int8_t x250 = INT8_MIN;
	int64_t x251 = INT64_MIN;
	uint32_t x252 = UINT32_MAX;
	volatile int32_t t62 = 5718723;

	t62 = ((x249==x250)==(x251<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x254 = 704LL;
	int8_t x255 = INT8_MIN;
	static int64_t x256 = INT64_MAX;

	t63 = ((x253==x254)==(x255<x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x258 = 5809065795873316LLU;
	int32_t x260 = INT32_MAX;

	t64 = ((x257==x258)==(x259<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x261 = INT64_MIN;
	int32_t x262 = -1;
	uint64_t x263 = UINT64_MAX;
	static int64_t x264 = INT64_MIN;
	int32_t t65 = -23;

	t65 = ((x261==x262)==(x263<x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x265 = -3;
	int64_t x266 = INT64_MAX;
	int32_t x267 = -11924;
	volatile uint8_t x268 = 6U;
	volatile int32_t t66 = -46;

	t66 = ((x265==x266)==(x267<x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -805754603;
	uint8_t x270 = UINT8_MAX;
	int32_t t67 = 21964169;

	t67 = ((x269==x270)==(x271<x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = UINT64_MAX;
	int16_t x275 = 0;
	int64_t x276 = INT64_MIN;
	volatile int32_t t68 = 1045909;

	t68 = ((x273==x274)==(x275<x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = 1U;
	uint16_t x278 = 734U;
	int16_t x279 = INT16_MAX;
	uint32_t x280 = 25U;
	int32_t t69 = 5820;

	t69 = ((x277==x278)==(x279<x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x282 = INT64_MIN;
	uint32_t x283 = UINT32_MAX;
	static int16_t x284 = -1;

	t70 = ((x281==x282)==(x283<x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x287 = 1422U;
	int16_t x288 = -628;
	int32_t t71 = 1;

	t71 = ((x285==x286)==(x287<x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = 1052679272057881LL;
	uint8_t x291 = UINT8_MAX;
	static int32_t t72 = 157721;

	t72 = ((x289==x290)==(x291<x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = 1U;
	uint32_t x294 = 278U;
	static uint64_t x296 = UINT64_MAX;
	volatile int32_t t73 = 12200038;

	t73 = ((x293==x294)==(x295<x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -1029;
	uint16_t x299 = UINT16_MAX;
	int64_t x300 = 133666275079LL;

	t74 = ((x297==x298)==(x299<x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 1U;
	int64_t x302 = -14LL;
	uint64_t x303 = 5056653LLU;
	volatile int64_t x304 = 3490643032LL;
	volatile int32_t t75 = 242;

	t75 = ((x301==x302)==(x303<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = -398357149;
	int16_t x306 = -1;
	int16_t x307 = INT16_MIN;
	int32_t x308 = INT32_MIN;
	static int32_t t76 = 1;

	t76 = ((x305==x306)==(x307<x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = 12U;
	int16_t x311 = INT16_MAX;
	volatile int32_t x312 = -121;
	int32_t t77 = 44035192;

	t77 = ((x309==x310)==(x311<x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x313 = -3;
	volatile int32_t x314 = -48120;
	static int32_t t78 = -1415;

	t78 = ((x313==x314)==(x315<x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -11;
	static volatile int64_t x318 = -1LL;
	int64_t x319 = -1LL;
	int32_t t79 = -6467;

	t79 = ((x317==x318)==(x319<x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	uint64_t x322 = 1LLU;
	int8_t x323 = 0;

	t80 = ((x321==x322)==(x323<x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x325 = INT16_MIN;
	volatile int64_t x327 = INT64_MIN;
	uint64_t x328 = 1008498LLU;
	static int32_t t81 = -50866268;

	t81 = ((x325==x326)==(x327<x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MIN;
	int8_t x331 = 0;
	int8_t x332 = INT8_MAX;
	volatile int32_t t82 = 0;

	t82 = ((x329==x330)==(x331<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x333 = 30U;
	int16_t x334 = 43;
	volatile int32_t t83 = 438028;

	t83 = ((x333==x334)==(x335<x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = -1;
	int64_t x338 = INT64_MAX;
	static int64_t x339 = -1306094LL;
	volatile int8_t x340 = INT8_MIN;
	int32_t t84 = -5892228;

	t84 = ((x337==x338)==(x339<x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = 3U;
	static volatile int32_t x342 = -1;
	int32_t x343 = INT32_MIN;
	int8_t x344 = 0;
	volatile int32_t t85 = -26;

	t85 = ((x341==x342)==(x343<x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x347 = 188;
	static int32_t x348 = 1;
	int32_t t86 = -181441474;

	t86 = ((x345==x346)==(x347<x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x350 = -1LL;
	int32_t x352 = INT32_MAX;

	t87 = ((x349==x350)==(x351<x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MAX;
	static int8_t x354 = -1;
	int32_t x355 = INT32_MIN;
	int16_t x356 = INT16_MAX;
	int32_t t88 = -557627;

	t88 = ((x353==x354)==(x355<x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x358 = UINT32_MAX;
	static uint8_t x359 = UINT8_MAX;
	int64_t x360 = INT64_MIN;
	int32_t t89 = -1;

	t89 = ((x357==x358)==(x359<x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x361 = INT16_MAX;
	int32_t x362 = INT32_MAX;
	static uint16_t x363 = 17U;
	static uint16_t x364 = 28U;

	t90 = ((x361==x362)==(x363<x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x365 = INT32_MAX;
	static uint64_t x367 = UINT64_MAX;
	static int64_t x368 = 1679977481268LL;

	t91 = ((x365==x366)==(x367<x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x371 = 4924309U;
	uint64_t x372 = 325LLU;
	int32_t t92 = -9815;

	t92 = ((x369==x370)==(x371<x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint64_t x373 = 458474060383195LLU;
	uint16_t x374 = UINT16_MAX;
	static volatile int32_t x375 = INT32_MAX;

	t93 = ((x373==x374)==(x375<x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x377 = 43LL;
	static volatile uint64_t x378 = 23212354319085031LLU;
	static volatile int16_t x379 = 289;
	uint16_t x380 = 29075U;
	static volatile int32_t t94 = 44;

	t94 = ((x377==x378)==(x379<x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = 61;
	volatile int32_t x382 = INT32_MIN;
	int32_t x383 = 755598;
	int32_t t95 = 0;

	t95 = ((x381==x382)==(x383<x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MAX;
	static volatile int64_t x386 = INT64_MIN;
	volatile int8_t x387 = INT8_MAX;
	int8_t x388 = INT8_MAX;
	int32_t t96 = -224442495;

	t96 = ((x385==x386)==(x387<x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MAX;
	uint16_t x390 = 5U;
	int64_t x391 = INT64_MIN;
	int16_t x392 = INT16_MAX;
	int32_t t97 = 60;

	t97 = ((x389==x390)==(x391<x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MAX;
	uint8_t x394 = 3U;
	static int16_t x395 = -3390;
	int32_t t98 = -279929;

	t98 = ((x393==x394)==(x395<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = 10;
	int8_t x398 = -1;
	static volatile int8_t x399 = INT8_MIN;
	uint16_t x400 = UINT16_MAX;
	volatile int32_t t99 = 501382;

	t99 = ((x397==x398)==(x399<x400));

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

