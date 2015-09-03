#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x2 = UINT64_MAX;
static volatile int32_t t1 = 6;
static uint64_t x9 = 3LLU;
static int8_t x13 = 0;
static int16_t x16 = -1;
static volatile int64_t x18 = -1LL;
uint16_t x21 = UINT16_MAX;
int32_t x23 = -1;
int64_t x24 = INT64_MIN;
static int64_t x27 = -1729LL;
int32_t x30 = INT32_MIN;
volatile int8_t x36 = INT8_MAX;
volatile uint32_t t9 = 69825770U;
int64_t x42 = -1LL;
int8_t x43 = INT8_MIN;
volatile int64_t t10 = -94LL;
int32_t x47 = INT32_MIN;
int16_t x51 = INT16_MIN;
int8_t x66 = 1;
uint32_t x74 = UINT32_MAX;
int16_t x91 = INT16_MIN;
int16_t x104 = INT16_MIN;
static int64_t x107 = 16292LL;
int16_t x110 = -4889;
uint64_t x111 = 382742LLU;
uint64_t t26 = 58313841889LLU;
volatile int64_t x116 = INT64_MIN;
volatile int16_t x119 = -23;
static int8_t x127 = -58;
int16_t x129 = INT16_MAX;
uint32_t x134 = UINT32_MAX;
int64_t x139 = 67210510319552LL;
int8_t x140 = INT8_MIN;
static int16_t x143 = 3;
volatile int16_t x152 = 11034;
uint32_t x154 = 3U;
static int16_t x156 = INT16_MIN;
uint16_t x158 = 12U;
static int16_t x163 = -31;
int32_t x164 = 39505052;
int64_t t40 = -15947977056361LL;
int32_t x178 = -1;
uint64_t x185 = 2111LLU;
static int8_t x187 = INT8_MIN;
int8_t x191 = INT8_MIN;
volatile int16_t x196 = INT16_MIN;
static uint32_t t47 = 2835120U;
volatile int16_t x199 = INT16_MIN;
volatile uint16_t x201 = 32570U;
volatile uint16_t x203 = UINT16_MAX;
static uint64_t x212 = 34068LLU;
uint16_t x213 = UINT16_MAX;
static int8_t x215 = INT8_MIN;
int16_t x223 = INT16_MIN;
volatile int32_t t54 = 1;
volatile uint64_t x249 = 6178095LLU;
int64_t x250 = -1LL;
int32_t x251 = INT32_MAX;
volatile int64_t x253 = -1LL;
static int8_t x255 = INT8_MAX;
volatile int32_t x256 = INT32_MAX;
static int64_t x257 = INT64_MAX;
int64_t t64 = -650043847LL;
static int16_t x266 = -1183;
static int8_t x267 = -1;
int64_t x281 = 101054551743522LL;
volatile int64_t t67 = -67373888750326397LL;
int64_t x290 = INT64_MIN;
static uint16_t x300 = 41U;
volatile int32_t x302 = INT32_MAX;
uint64_t x323 = UINT64_MAX;
uint16_t x327 = 43U;
int8_t x333 = -1;
static int16_t x335 = -1;
static int16_t x350 = INT16_MIN;
int32_t x351 = INT32_MIN;
volatile int8_t x356 = INT8_MIN;
volatile int64_t x357 = INT64_MAX;
volatile int64_t t85 = -3087528596586947LL;
uint16_t x361 = 1U;
int64_t x362 = INT64_MAX;
uint8_t x366 = 2U;
static uint16_t x373 = UINT16_MAX;
int16_t x374 = INT16_MIN;
int32_t t89 = 1040;
int64_t x377 = INT64_MIN;
volatile int64_t t90 = INT64_MIN;
int8_t x382 = INT8_MAX;
uint64_t x384 = UINT64_MAX;
static int32_t x385 = INT32_MIN;
volatile int32_t t92 = INT32_MIN;
int32_t x391 = INT32_MIN;
int32_t x394 = 4338;
volatile uint16_t x396 = 100U;
int16_t x400 = INT16_MIN;
static uint32_t x404 = 1308U;
int16_t x407 = INT16_MIN;
int32_t x408 = INT32_MIN;


void f0(void) {
	int8_t x1 = -1;
	int32_t x3 = -4290024;
	volatile int64_t x4 = INT64_MIN;
	static int64_t t0 = INT64_MIN;

	t0 = (x1&((x2<x3)+x4));

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int64_t x6 = -1193242LL;
	volatile int64_t x7 = INT64_MIN;
	int16_t x8 = INT16_MIN;

	t1 = (x5&((x6<x7)+x8));

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x10 = UINT32_MAX;
	static uint64_t x11 = UINT64_MAX;
	int16_t x12 = 1;
	uint64_t t2 = 2858092307903216427LLU;

	t2 = (x9&((x10<x11)+x12));

	if (t2 != 2LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = INT8_MAX;
	volatile uint64_t x15 = 9737LLU;
	volatile int32_t t3 = 31333;

	t3 = (x13&((x14<x15)+x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = -1;
	int32_t x19 = INT32_MAX;
	uint64_t x20 = UINT64_MAX;
	volatile uint64_t t4 = 6667LLU;

	t4 = (x17&((x18<x19)+x20));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = INT8_MIN;
	int64_t t5 = -1LL;

	t5 = (x21&((x22<x23)+x24));

	if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 172U;
	int16_t x26 = 1;
	int8_t x28 = INT8_MIN;
	static volatile int32_t t6 = 883182481;

	t6 = (x25&((x26<x27)+x28));

	if (t6 != 128) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = -57;
	uint64_t x31 = 22932226LLU;
	int64_t x32 = INT64_MAX;
	static int64_t t7 = 3857399141560601LL;

	t7 = (x29&((x30<x31)+x32));

	if (t7 != 9223372036854775751LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x33 = -60;
	int32_t x34 = 16267;
	int32_t x35 = INT32_MAX;
	volatile int32_t t8 = 123;

	t8 = (x33&((x34<x35)+x36));

	if (t8 != 128) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x37 = 1465070U;
	int8_t x38 = -1;
	int32_t x39 = INT32_MAX;
	int16_t x40 = INT16_MIN;

	t9 = (x37&((x38<x39)+x40));

	if (t9 != 1441792U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -1LL;
	int64_t x44 = -1LL;

	t10 = (x41&((x42<x43)+x44));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = INT64_MIN;
	int64_t x46 = 134024286267LL;
	int32_t x48 = 98661382;
	int64_t t11 = 1818LL;

	t11 = (x45&((x46<x47)+x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MAX;
	uint8_t x50 = 22U;
	int16_t x52 = INT16_MIN;
	volatile int32_t t12 = -1218;

	t12 = (x49&((x50<x51)+x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 13182470197275865LLU;
	uint32_t x54 = UINT32_MAX;
	uint16_t x55 = UINT16_MAX;
	int32_t x56 = INT32_MIN;
	uint64_t t13 = 1869520LLU;

	t13 = (x53&((x54<x55)+x56));

	if (t13 != 13182470107168768LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	int64_t x58 = INT64_MIN;
	volatile int32_t x59 = INT32_MIN;
	volatile int16_t x60 = 6;
	static volatile int32_t t14 = -14659470;

	t14 = (x57&((x58<x59)+x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	int64_t x62 = INT64_MIN;
	int8_t x63 = 41;
	int16_t x64 = INT16_MAX;
	int32_t t15 = -167;

	t15 = (x61&((x62<x63)+x64));

	if (t15 != 32768) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = 2;
	uint16_t x67 = 11U;
	volatile int16_t x68 = -99;
	static volatile int32_t t16 = 1;

	t16 = (x65&((x66<x67)+x68));

	if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	static int16_t x70 = -435;
	static uint32_t x71 = UINT32_MAX;
	uint16_t x72 = UINT16_MAX;
	volatile int32_t t17 = -118599675;

	t17 = (x69&((x70<x71)+x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = -1;
	int16_t x75 = -1;
	uint32_t x76 = UINT32_MAX;
	uint32_t t18 = UINT32_MAX;

	t18 = (x73&((x74<x75)+x76));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	int32_t x78 = 53;
	int16_t x79 = INT16_MAX;
	int64_t x80 = 111423622LL;
	int64_t t19 = -1673289305375LL;

	t19 = (x77&((x78<x79)+x80));

	if (t19 != 111423616LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = 1866665;
	static int8_t x82 = INT8_MIN;
	uint16_t x83 = UINT16_MAX;
	int16_t x84 = -14232;
	volatile int32_t t20 = -54171974;

	t20 = (x81&((x82<x83)+x84));

	if (t20 != 1853481) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = UINT8_MAX;
	int64_t x86 = INT64_MAX;
	static int16_t x87 = -58;
	volatile int32_t x88 = INT32_MAX;
	volatile int32_t t21 = 23052;

	t21 = (x85&((x86<x87)+x88));

	if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = -1;
	static uint32_t x90 = UINT32_MAX;
	uint16_t x92 = 4U;
	static volatile int32_t t22 = -2861;

	t22 = (x89&((x90<x91)+x92));

	if (t22 != 4) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x97 = UINT32_MAX;
	int16_t x98 = -1075;
	uint32_t x99 = UINT32_MAX;
	int16_t x100 = -5;
	volatile uint32_t t23 = 60932964U;

	t23 = (x97&((x98<x99)+x100));

	if (t23 != 4294967292U) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x101 = 8458U;
	uint32_t x102 = UINT32_MAX;
	int64_t x103 = INT64_MIN;
	static volatile int32_t t24 = 76628;

	t24 = (x101&((x102<x103)+x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x105 = INT64_MIN;
	int64_t x106 = INT64_MIN;
	int8_t x108 = 0;
	volatile int64_t t25 = 56498603LL;

	t25 = (x105&((x106<x107)+x108));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x109 = 269922195409LLU;
	int32_t x112 = -1;

	t26 = (x109&((x110<x111)+x112));

	if (t26 != 269922195409LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x113 = UINT64_MAX;
	volatile int64_t x114 = 4692708510280LL;
	int32_t x115 = 62268610;
	uint64_t t27 = 46951452683305698LLU;

	t27 = (x113&((x114<x115)+x116));

	if (t27 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = INT16_MAX;
	int32_t x118 = INT32_MIN;
	static uint64_t x120 = UINT64_MAX;
	uint64_t t28 = 443312689584LLU;

	t28 = (x117&((x118<x119)+x120));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = INT16_MAX;
	uint16_t x122 = 0U;
	int8_t x123 = INT8_MIN;
	int8_t x124 = 10;
	static int32_t t29 = -84;

	t29 = (x121&((x122<x123)+x124));

	if (t29 != 10) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = 15U;
	static int32_t x126 = INT32_MAX;
	volatile int8_t x128 = INT8_MIN;
	int32_t t30 = -1145;

	t30 = (x125&((x126<x127)+x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x130 = -2;
	int32_t x131 = INT32_MIN;
	static uint16_t x132 = 62U;
	int32_t t31 = -155928;

	t31 = (x129&((x130<x131)+x132));

	if (t31 != 62) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = INT32_MIN;
	volatile int32_t x135 = INT32_MIN;
	uint8_t x136 = UINT8_MAX;
	volatile int32_t t32 = -1319;

	t32 = (x133&((x134<x135)+x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x137 = INT16_MIN;
	int64_t x138 = INT64_MIN;
	volatile int32_t t33 = -37696581;

	t33 = (x137&((x138<x139)+x140));

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = 0;
	uint64_t x142 = 1870LLU;
	uint64_t x144 = 1728737LLU;
	uint64_t t34 = 14757LLU;

	t34 = (x141&((x142<x143)+x144));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = INT16_MIN;
	uint16_t x146 = 27035U;
	static int16_t x147 = INT16_MAX;
	int64_t x148 = 57727916125305104LL;
	static volatile int64_t t35 = -34113091006273LL;

	t35 = (x145&((x146<x147)+x148));

	if (t35 != 57727916125290496LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = INT32_MIN;
	int16_t x150 = 1214;
	uint8_t x151 = UINT8_MAX;
	int32_t t36 = -783;

	t36 = (x149&((x150<x151)+x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x153 = 7;
	int32_t x155 = -1;
	static int32_t t37 = -515;

	t37 = (x153&((x154<x155)+x156));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = INT16_MIN;
	uint32_t x159 = 525870412U;
	int32_t x160 = 14878589;
	static int32_t t38 = 49632;

	t38 = (x157&((x158<x159)+x160));

	if (t38 != 14876672) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = INT64_MAX;
	static volatile int64_t x162 = INT64_MIN;
	int64_t t39 = 36285833409486276LL;

	t39 = (x161&((x162<x163)+x164));

	if (t39 != 39505053LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = -66461901451935LL;
	static uint16_t x166 = UINT16_MAX;
	volatile int16_t x167 = INT16_MIN;
	volatile uint32_t x168 = 280695189U;

	t40 = (x165&((x166<x167)+x168));

	if (t40 != 12124417LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = 3;
	int32_t x170 = INT32_MIN;
	uint32_t x171 = 1139315U;
	int8_t x172 = 1;
	int32_t t41 = 23695;

	t41 = (x169&((x170<x171)+x172));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x173 = UINT32_MAX;
	volatile int32_t x174 = -1;
	static uint16_t x175 = 0U;
	static int8_t x176 = INT8_MIN;
	volatile uint32_t t42 = 1521U;

	t42 = (x173&((x174<x175)+x176));

	if (t42 != 4294967169U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x177 = 535088396;
	int32_t x179 = -1;
	int64_t x180 = -530840299193LL;
	volatile int64_t t43 = 258628306232187LL;

	t43 = (x177&((x178<x179)+x180));

	if (t43 != 123783428LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x181 = 33534885181336LLU;
	int8_t x182 = 0;
	uint8_t x183 = 1U;
	static int64_t x184 = -74170172LL;
	volatile uint64_t t44 = 2684096318035575LLU;

	t44 = (x181&((x182<x183)+x184));

	if (t44 != 33534878154880LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x186 = 30382U;
	volatile uint16_t x188 = 2U;
	static uint64_t t45 = 491653580218LLU;

	t45 = (x185&((x186<x187)+x188));

	if (t45 != 2LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = -763375;
	static int64_t x190 = 1096LL;
	static int32_t x192 = INT32_MIN;
	int32_t t46 = INT32_MIN;

	t46 = (x189&((x190<x191)+x192));

	if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x193 = 59483565U;
	int32_t x194 = INT32_MAX;
	volatile int8_t x195 = 18;

	t47 = (x193&((x194<x195)+x196));

	if (t47 != 59473920U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = 43834591LL;
	uint32_t x198 = UINT32_MAX;
	static uint16_t x200 = UINT16_MAX;
	static volatile int64_t t48 = 50717295LL;

	t48 = (x197&((x198<x199)+x200));

	if (t48 != 56543LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x202 = -1;
	static int64_t x204 = -1LL;
	volatile int64_t t49 = 12547498LL;

	t49 = (x201&((x202<x203)+x204));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x205 = INT64_MAX;
	int16_t x206 = INT16_MIN;
	int16_t x207 = 562;
	volatile uint32_t x208 = 44968440U;
	volatile int64_t t50 = -14704900210696047LL;

	t50 = (x205&((x206<x207)+x208));

	if (t50 != 44968441LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x209 = 7242U;
	static uint64_t x210 = 3970LLU;
	uint32_t x211 = 87379494U;
	volatile uint64_t t51 = 966633845625LLU;

	t51 = (x209&((x210<x211)+x212));

	if (t51 != 1024LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x214 = -1LL;
	uint8_t x216 = 91U;
	int32_t t52 = 234892139;

	t52 = (x213&((x214<x215)+x216));

	if (t52 != 91) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x217 = UINT32_MAX;
	uint64_t x218 = 2248912865LLU;
	static int16_t x219 = INT16_MIN;
	int64_t x220 = 297368879517563806LL;
	volatile int64_t t53 = -3142LL;

	t53 = (x217&((x218<x219)+x220));

	if (t53 != 2665905055LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x221 = UINT8_MAX;
	uint8_t x222 = 7U;
	int32_t x224 = INT32_MAX;

	t54 = (x221&((x222<x223)+x224));

	if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x225 = 51U;
	int64_t x226 = INT64_MIN;
	int8_t x227 = INT8_MIN;
	static int8_t x228 = INT8_MIN;
	static volatile uint32_t t55 = 1486U;

	t55 = (x225&((x226<x227)+x228));

	if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x229 = 23;
	int64_t x230 = -1LL;
	int32_t x231 = INT32_MAX;
	int8_t x232 = 14;
	volatile int32_t t56 = -732351;

	t56 = (x229&((x230<x231)+x232));

	if (t56 != 7) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x233 = INT32_MIN;
	volatile int32_t x234 = 549464;
	static volatile int64_t x235 = -350245802LL;
	int8_t x236 = INT8_MIN;
	int32_t t57 = INT32_MIN;

	t57 = (x233&((x234<x235)+x236));

	if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x237 = INT32_MIN;
	uint8_t x238 = 5U;
	int32_t x239 = INT32_MAX;
	int64_t x240 = -2240561101649791LL;
	int64_t t58 = -407078826034131LL;

	t58 = (x237&((x238<x239)+x240));

	if (t58 != -2240562031755264LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x241 = 233U;
	uint8_t x242 = 1U;
	int8_t x243 = INT8_MIN;
	volatile int64_t x244 = -7467605488202LL;
	int64_t t59 = -1827739262293914641LL;

	t59 = (x241&((x242<x243)+x244));

	if (t59 != 160LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = INT16_MIN;
	int16_t x246 = INT16_MIN;
	volatile uint16_t x247 = 2U;
	int64_t x248 = INT64_MIN;
	static int64_t t60 = INT64_MIN;

	t60 = (x245&((x246<x247)+x248));

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x252 = 3971770U;
	static volatile uint64_t t61 = 8259152477511LLU;

	t61 = (x249&((x250<x251)+x252));

	if (t61 != 1835051LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x254 = INT32_MAX;
	volatile int64_t t62 = 5905179634196LL;

	t62 = (x253&((x254<x255)+x256));

	if (t62 != 2147483647LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x258 = INT64_MIN;
	static int16_t x259 = 4;
	int64_t x260 = INT64_MIN;
	static volatile int64_t t63 = -4LL;

	t63 = (x257&((x258<x259)+x260));

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x261 = -1;
	int8_t x262 = INT8_MAX;
	int8_t x263 = -1;
	int64_t x264 = -1LL;

	t64 = (x261&((x262<x263)+x264));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x265 = 9;
	volatile int32_t x268 = -230029;
	int32_t t65 = 0;

	t65 = (x265&((x266<x267)+x268));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x269 = INT8_MIN;
	int16_t x270 = INT16_MIN;
	int64_t x271 = INT64_MIN;
	int64_t x272 = 141LL;
	int64_t t66 = 40221LL;

	t66 = (x269&((x270<x271)+x272));

	if (t66 != 128LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x282 = INT16_MIN;
	uint64_t x283 = 4616LLU;
	static int16_t x284 = INT16_MAX;

	t67 = (x281&((x282<x283)+x284));

	if (t67 != 23586LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x289 = INT16_MIN;
	int64_t x291 = -1163800450LL;
	uint64_t x292 = 5187599392541LLU;
	uint64_t t68 = 13629395232503LLU;

	t68 = (x289&((x290<x291)+x292));

	if (t68 != 5187599368192LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x293 = -66497447;
	int32_t x294 = -13569;
	int64_t x295 = INT64_MIN;
	int8_t x296 = INT8_MIN;
	volatile int32_t t69 = 22046911;

	t69 = (x293&((x294<x295)+x296));

	if (t69 != -66497536) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x297 = 15U;
	uint8_t x298 = 6U;
	uint32_t x299 = UINT32_MAX;
	int32_t t70 = 422885;

	t70 = (x297&((x298<x299)+x300));

	if (t70 != 10) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x301 = INT64_MIN;
	uint8_t x303 = 4U;
	int64_t x304 = 397747304082600447LL;
	int64_t t71 = 342234864385LL;

	t71 = (x301&((x302<x303)+x304));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x305 = INT32_MIN;
	int32_t x306 = -1;
	uint64_t x307 = 13LLU;
	static int32_t x308 = INT32_MIN;
	volatile int32_t t72 = INT32_MIN;

	t72 = (x305&((x306<x307)+x308));

	if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x309 = INT16_MIN;
	int8_t x310 = -1;
	uint32_t x311 = 508108289U;
	static int64_t x312 = INT64_MIN;
	static int64_t t73 = INT64_MIN;

	t73 = (x309&((x310<x311)+x312));

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x313 = UINT64_MAX;
	volatile int16_t x314 = 274;
	int8_t x315 = -1;
	static int32_t x316 = -6;
	static uint64_t t74 = 6LLU;

	t74 = (x313&((x314<x315)+x316));

	if (t74 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x317 = INT16_MIN;
	int32_t x318 = 416710725;
	uint16_t x319 = UINT16_MAX;
	int64_t x320 = INT64_MIN;
	static volatile int64_t t75 = INT64_MIN;

	t75 = (x317&((x318<x319)+x320));

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x321 = INT64_MIN;
	int32_t x322 = INT32_MIN;
	uint32_t x324 = 2743236U;
	static volatile int64_t t76 = -31694523753812348LL;

	t76 = (x321&((x322<x323)+x324));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x325 = 40LLU;
	static int64_t x326 = -1LL;
	volatile uint32_t x328 = 663671U;
	uint64_t t77 = 6163522791719LLU;

	t77 = (x325&((x326<x327)+x328));

	if (t77 != 40LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x329 = -3352173LL;
	uint64_t x330 = 67643212564064437LLU;
	volatile int32_t x331 = -12;
	uint64_t x332 = 223494513727937LLU;
	uint64_t t78 = 74LLU;

	t78 = (x329&((x330<x331)+x332));

	if (t78 != 223494512613762LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x334 = INT16_MAX;
	int64_t x336 = -1LL;
	int64_t t79 = -6656237807LL;

	t79 = (x333&((x334<x335)+x336));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x337 = 35773721954LLU;
	int32_t x338 = INT32_MIN;
	int16_t x339 = INT16_MIN;
	volatile int64_t x340 = INT64_MIN;
	uint64_t t80 = 1570LLU;

	t80 = (x337&((x338<x339)+x340));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x341 = UINT64_MAX;
	volatile uint8_t x342 = 1U;
	int64_t x343 = -248411009443835LL;
	uint64_t x344 = 1LLU;
	volatile uint64_t t81 = 1462833441LLU;

	t81 = (x341&((x342<x343)+x344));

	if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x345 = 7874204LLU;
	int32_t x346 = -7;
	int8_t x347 = INT8_MIN;
	int8_t x348 = INT8_MIN;
	uint64_t t82 = 0LLU;

	t82 = (x345&((x346<x347)+x348));

	if (t82 != 7874176LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x349 = -12;
	static int32_t x352 = 3;
	int32_t t83 = 2309434;

	t83 = (x349&((x350<x351)+x352));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x353 = -490985218648LL;
	static int64_t x354 = -1LL;
	static int64_t x355 = INT64_MAX;
	volatile int64_t t84 = -14131LL;

	t84 = (x353&((x354<x355)+x356));

	if (t84 != -490985218688LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x358 = UINT32_MAX;
	volatile int16_t x359 = -5;
	int16_t x360 = 6448;

	t85 = (x357&((x358<x359)+x360));

	if (t85 != 6448LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x363 = INT8_MIN;
	uint8_t x364 = 17U;
	int32_t t86 = -14;

	t86 = (x361&((x362<x363)+x364));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x365 = UINT16_MAX;
	int16_t x367 = INT16_MAX;
	static uint16_t x368 = UINT16_MAX;
	volatile int32_t t87 = 46063;

	t87 = (x365&((x366<x367)+x368));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x369 = INT32_MIN;
	int32_t x370 = INT32_MAX;
	int8_t x371 = INT8_MIN;
	int32_t x372 = -1;
	int32_t t88 = INT32_MIN;

	t88 = (x369&((x370<x371)+x372));

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x375 = 1;
	int32_t x376 = INT32_MIN;

	t89 = (x373&((x374<x375)+x376));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x378 = UINT32_MAX;
	uint32_t x379 = 3992U;
	static int32_t x380 = -25657;

	t90 = (x377&((x378<x379)+x380));

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x381 = -187;
	int64_t x383 = -1LL;
	uint64_t t91 = 26662778430LLU;

	t91 = (x381&((x382<x383)+x384));

	if (t91 != 18446744073709551429LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x386 = -1;
	uint8_t x387 = 0U;
	int16_t x388 = INT16_MIN;

	t92 = (x385&((x386<x387)+x388));

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x389 = INT16_MIN;
	static volatile int64_t x390 = -1LL;
	int32_t x392 = -1;
	int32_t t93 = -467;

	t93 = (x389&((x390<x391)+x392));

	if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x393 = -1;
	int8_t x395 = INT8_MIN;
	volatile int32_t t94 = 4043;

	t94 = (x393&((x394<x395)+x396));

	if (t94 != 100) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x397 = INT64_MAX;
	static int64_t x398 = -1LL;
	int64_t x399 = -478605LL;
	volatile int64_t t95 = 28018LL;

	t95 = (x397&((x398<x399)+x400));

	if (t95 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x401 = INT16_MAX;
	int32_t x402 = -1;
	int64_t x403 = -1LL;
	volatile uint32_t t96 = 4586640U;

	t96 = (x401&((x402<x403)+x404));

	if (t96 != 1308U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x405 = 28LLU;
	int8_t x406 = INT8_MAX;
	static uint64_t t97 = 280972866321318104LLU;

	t97 = (x405&((x406<x407)+x408));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x409 = -1;
	volatile int16_t x410 = INT16_MIN;
	int16_t x411 = INT16_MIN;
	uint8_t x412 = 0U;
	int32_t t98 = -129;

	t98 = (x409&((x410<x411)+x412));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x413 = INT16_MIN;
	int32_t x414 = INT32_MIN;
	static uint8_t x415 = UINT8_MAX;
	uint32_t x416 = UINT32_MAX;
	volatile uint32_t t99 = 32720U;

	t99 = (x413&((x414<x415)+x416));

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

