#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = 2593263188453LL;
static int32_t x8 = 42475529;
int16_t x15 = -1;
volatile uint32_t x18 = 76U;
int8_t x21 = 6;
int64_t x24 = INT64_MAX;
volatile int64_t x25 = INT64_MAX;
int64_t x27 = INT64_MAX;
static int32_t x28 = INT32_MAX;
uint64_t x29 = 67071212056849LLU;
volatile uint64_t t7 = 1378LLU;
static int64_t x41 = INT64_MIN;
volatile int64_t t10 = INT64_MIN;
int16_t x47 = 21;
uint16_t x52 = 3U;
uint64_t x58 = UINT64_MAX;
static uint8_t x60 = 63U;
uint16_t x66 = UINT16_MAX;
volatile int64_t t16 = -58090LL;
static uint16_t x70 = UINT16_MAX;
static int32_t x73 = -1;
int32_t x74 = INT32_MIN;
int8_t x75 = -1;
uint32_t x76 = 33U;
uint16_t x78 = UINT16_MAX;
static volatile uint16_t x92 = 25U;
volatile uint8_t x94 = UINT8_MAX;
int8_t x115 = INT8_MIN;
volatile int16_t x119 = INT16_MAX;
static volatile int32_t x120 = 4242531;
volatile int32_t t29 = 133625468;
volatile int32_t x128 = INT32_MAX;
static uint8_t x129 = 1U;
int32_t x130 = INT32_MIN;
volatile int32_t t32 = -25;
int32_t t33 = 1;
uint64_t x142 = 399450048862LLU;
int64_t x147 = INT64_MIN;
int16_t x159 = INT16_MIN;
int16_t x163 = -1;
int64_t x165 = -2213147677LL;
uint32_t x167 = UINT32_MAX;
static int64_t t41 = -2062536077460445LL;
int64_t x171 = -1LL;
int8_t x180 = -9;
int64_t x182 = INT64_MIN;
volatile uint64_t x186 = 895727642556LLU;
volatile int8_t x192 = 0;
volatile int32_t x198 = INT32_MAX;
static int32_t x199 = INT32_MIN;
int16_t x201 = INT16_MAX;
static int8_t x205 = INT8_MIN;
int32_t x216 = -1;
static int32_t t54 = INT32_MIN;
volatile int8_t x226 = -1;
uint32_t x228 = 115027U;
int32_t x236 = -1;
uint64_t x239 = UINT64_MAX;
int32_t t59 = -705118;
uint8_t x245 = 2U;
volatile uint8_t x250 = 2U;
volatile uint64_t x251 = UINT64_MAX;
static int64_t t62 = -2600339866LL;
int32_t t63 = 6;
int64_t x257 = INT64_MAX;
int64_t x258 = INT64_MIN;
uint16_t x265 = 4232U;
volatile int64_t x267 = 107886526103664484LL;
volatile int32_t x270 = INT32_MIN;
uint8_t x280 = UINT8_MAX;
volatile int64_t t70 = 425286972162547726LL;
static int32_t t72 = -377;
uint16_t x293 = 4U;
int16_t x296 = INT16_MAX;
volatile uint16_t x299 = 3782U;
uint32_t x300 = 16547U;
volatile uint32_t t74 = 191569500U;
int32_t t78 = 49;
int8_t x322 = -1;
int32_t x324 = -1;
volatile int64_t t80 = 536234LL;
int16_t x330 = INT16_MIN;
static int8_t x332 = 11;
static uint64_t x338 = 7566890237816501LLU;
uint32_t x340 = 5066U;
int8_t x344 = INT8_MAX;
int8_t x348 = 1;
int16_t x349 = -6;
volatile int32_t x351 = 46993763;
int64_t t89 = 12057512871LL;
static uint8_t x366 = UINT8_MAX;
static uint64_t x367 = 1354023516596182LLU;
int32_t x370 = INT32_MIN;
int8_t x373 = INT8_MIN;
int16_t x374 = INT16_MAX;
int8_t x376 = 0;
int32_t t95 = -1044489694;
int16_t x388 = INT16_MAX;
int32_t t97 = 4898580;
int8_t x393 = 4;
volatile int32_t x395 = 67596;
static uint32_t x396 = 0U;
int32_t t99 = -1;


void f0(void) {
	int64_t x1 = -1LL;
	uint32_t x2 = 3383U;
	volatile uint8_t x4 = 0U;
	static volatile int64_t t0 = -35062452241904739LL;

	t0 = (x1&((x2<x3)*x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 4;
	static uint64_t x6 = 26546535052683LLU;
	static uint16_t x7 = 0U;
	volatile int32_t t1 = 8870076;

	t1 = (x5&((x6<x7)*x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x9 = -207;
	int8_t x10 = 0;
	int16_t x11 = 8689;
	int32_t x12 = INT32_MIN;
	int32_t t2 = INT32_MIN;

	t2 = (x9&((x10<x11)*x12));

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint8_t x13 = 100U;
	uint32_t x14 = 92467U;
	int64_t x16 = -204751305144504LL;
	volatile int64_t t3 = -4491197729722853166LL;

	t3 = (x13&((x14<x15)*x16));

	if (t3 != 64LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 1U;
	uint32_t x19 = 3738146U;
	int64_t x20 = -1LL;
	int64_t t4 = 6535LL;

	t4 = (x17&((x18<x19)*x20));

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = INT8_MIN;
	int16_t x23 = INT16_MIN;
	int64_t t5 = 18880721862195LL;

	t5 = (x21&((x22<x23)*x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = INT64_MIN;
	volatile int64_t t6 = 12702549LL;

	t6 = (x25&((x26<x27)*x28));

	if (t6 != 2147483647LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x30 = 32U;
	int8_t x31 = INT8_MIN;
	int8_t x32 = -1;

	t7 = (x29&((x30<x31)*x32));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	uint64_t x34 = 239LLU;
	volatile uint8_t x35 = 16U;
	int16_t x36 = INT16_MAX;
	volatile int64_t t8 = -1LL;

	t8 = (x33&((x34<x35)*x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = INT8_MIN;
	int16_t x38 = INT16_MAX;
	int32_t x39 = INT32_MIN;
	volatile uint16_t x40 = 13U;
	volatile int32_t t9 = -50939978;

	t9 = (x37&((x38<x39)*x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x42 = -416634LL;
	int8_t x43 = -2;
	int64_t x44 = INT64_MIN;

	t10 = (x41&((x42<x43)*x44));

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 721412LLU;
	volatile int32_t x46 = -53104;
	static uint64_t x48 = 506621054081920LLU;
	static uint64_t t11 = 518958697LLU;

	t11 = (x45&((x46<x47)*x48));

	if (t11 != 131584LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	volatile int32_t x50 = INT32_MIN;
	int64_t x51 = INT64_MIN;
	int32_t t12 = 0;

	t12 = (x49&((x50<x51)*x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = 522LL;
	int16_t x54 = INT16_MAX;
	uint64_t x55 = UINT64_MAX;
	int32_t x56 = -1;
	int64_t t13 = -1882956040LL;

	t13 = (x53&((x54<x55)*x56));

	if (t13 != 522LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x57 = 16779U;
	static int64_t x59 = INT64_MAX;
	volatile int32_t t14 = 441908649;

	t14 = (x57&((x58<x59)*x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = -113828596;
	int64_t x62 = -45647LL;
	uint16_t x63 = UINT16_MAX;
	int32_t x64 = 3859245;
	int32_t t15 = -155602607;

	t15 = (x61&((x62<x63)*x64));

	if (t15 != 3277068) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = INT64_MIN;
	int16_t x67 = 0;
	volatile int32_t x68 = 8701;

	t16 = (x65&((x66<x67)*x68));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = INT8_MIN;
	volatile int64_t x71 = -1LL;
	uint32_t x72 = 9U;
	volatile uint32_t t17 = 1U;

	t17 = (x69&((x70<x71)*x72));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t t18 = 32136962U;

	t18 = (x73&((x74<x75)*x76));

	if (t18 != 33U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MAX;
	static uint64_t x79 = 163417192895805116LLU;
	uint8_t x80 = 0U;
	static int32_t t19 = -923198;

	t19 = (x77&((x78<x79)*x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -4845550779936409LL;
	int32_t x82 = INT32_MIN;
	int32_t x83 = INT32_MIN;
	int16_t x84 = INT16_MIN;
	static int64_t t20 = 139232957430LL;

	t20 = (x81&((x82<x83)*x84));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 11U;
	int64_t x86 = 1728562201753302LL;
	uint8_t x87 = 17U;
	volatile int64_t x88 = INT64_MIN;
	static int64_t t21 = -924858228791131LL;

	t21 = (x85&((x86<x87)*x88));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 126U;
	uint64_t x90 = 284882LLU;
	int64_t x91 = -1LL;
	volatile int32_t t22 = -1;

	t22 = (x89&((x90<x91)*x92));

	if (t22 != 24) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 1U;
	int16_t x95 = 157;
	int16_t x96 = INT16_MAX;
	volatile uint32_t t23 = 14630U;

	t23 = (x93&((x94<x95)*x96));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = INT16_MIN;
	static uint8_t x98 = UINT8_MAX;
	static volatile int32_t x99 = -79;
	int64_t x100 = INT64_MIN;
	volatile int64_t t24 = 80787333LL;

	t24 = (x97&((x98<x99)*x100));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = INT32_MAX;
	uint8_t x102 = UINT8_MAX;
	int8_t x103 = 1;
	int16_t x104 = INT16_MAX;
	int32_t t25 = 261890307;

	t25 = (x101&((x102<x103)*x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	static uint8_t x106 = 2U;
	static volatile uint8_t x107 = 49U;
	uint8_t x108 = 46U;
	volatile int32_t t26 = -58;

	t26 = (x105&((x106<x107)*x108));

	if (t26 != 46) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -1;
	static volatile uint16_t x110 = UINT16_MAX;
	uint64_t x111 = UINT64_MAX;
	uint32_t x112 = 157871203U;
	volatile uint32_t t27 = 930U;

	t27 = (x109&((x110<x111)*x112));

	if (t27 != 157871203U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MAX;
	int8_t x114 = INT8_MIN;
	static int16_t x116 = INT16_MIN;
	int32_t t28 = -30309;

	t28 = (x113&((x114<x115)*x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x117 = -1;
	int8_t x118 = 0;

	t29 = (x117&((x118<x119)*x120));

	if (t29 != 4242531) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MAX;
	int16_t x122 = 0;
	uint16_t x123 = 9689U;
	int8_t x124 = -1;
	int32_t t30 = 66244798;

	t30 = (x121&((x122<x123)*x124));

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = 65;
	volatile int32_t x126 = -1;
	int8_t x127 = INT8_MIN;
	int32_t t31 = -241136;

	t31 = (x125&((x126<x127)*x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x131 = INT8_MIN;
	int8_t x132 = 14;

	t32 = (x129&((x130<x131)*x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	int8_t x134 = -1;
	int8_t x135 = -1;
	uint8_t x136 = 18U;

	t33 = (x133&((x134<x135)*x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 228084349U;
	static int32_t x138 = INT32_MAX;
	static uint32_t x139 = 5U;
	static int8_t x140 = INT8_MIN;
	uint32_t t34 = 60764U;

	t34 = (x137&((x138<x139)*x140));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	volatile uint8_t x143 = 97U;
	uint64_t x144 = UINT64_MAX;
	volatile uint64_t t35 = 508046061159774LLU;

	t35 = (x141&((x142<x143)*x144));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MAX;
	uint8_t x146 = UINT8_MAX;
	int8_t x148 = -1;
	int32_t t36 = -35357;

	t36 = (x145&((x146<x147)*x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x149 = INT16_MAX;
	int64_t x150 = INT64_MIN;
	int16_t x151 = INT16_MIN;
	uint8_t x152 = UINT8_MAX;
	static int32_t t37 = 4;

	t37 = (x149&((x150<x151)*x152));

	if (t37 != 255) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = 7;
	int32_t x154 = 31;
	int32_t x155 = -101829;
	volatile int64_t x156 = INT64_MIN;
	volatile int64_t t38 = -7979927227152LL;

	t38 = (x153&((x154<x155)*x156));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x157 = -1;
	int8_t x158 = INT8_MAX;
	int8_t x160 = -7;
	int32_t t39 = -2729474;

	t39 = (x157&((x158<x159)*x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	int64_t x162 = 24709163591LL;
	int32_t x164 = 10;
	volatile int32_t t40 = -18;

	t40 = (x161&((x162<x163)*x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x166 = 0;
	int16_t x168 = INT16_MIN;

	t41 = (x165&((x166<x167)*x168));

	if (t41 != -2213150720LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 9U;
	int8_t x170 = INT8_MIN;
	int32_t x172 = INT32_MIN;
	volatile int32_t t42 = -3302;

	t42 = (x169&((x170<x171)*x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = UINT8_MAX;
	int64_t x174 = -1307221LL;
	int16_t x175 = INT16_MIN;
	static volatile int32_t x176 = 672826;
	int32_t t43 = -22238;

	t43 = (x173&((x174<x175)*x176));

	if (t43 != 58) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	uint64_t x178 = 18217326528557335LLU;
	uint8_t x179 = UINT8_MAX;
	volatile int32_t t44 = -807;

	t44 = (x177&((x178<x179)*x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MAX;
	int64_t x183 = INT64_MAX;
	volatile int8_t x184 = INT8_MIN;
	int32_t t45 = -1;

	t45 = (x181&((x182<x183)*x184));

	if (t45 != 2147483520) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MAX;
	int8_t x187 = -26;
	volatile int64_t x188 = 16029223647967LL;
	volatile int64_t t46 = 130832571253727LL;

	t46 = (x185&((x186<x187)*x188));

	if (t46 != 31455LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = UINT16_MAX;
	uint64_t x190 = UINT64_MAX;
	static int16_t x191 = INT16_MIN;
	volatile int32_t t47 = 247060079;

	t47 = (x189&((x190<x191)*x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 54567382U;
	volatile uint64_t x194 = 843644292LLU;
	int8_t x195 = 1;
	static uint64_t x196 = 2015018721675LLU;
	volatile uint64_t t48 = 39070382661963240LLU;

	t48 = (x193&((x194<x195)*x196));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 4088U;
	uint8_t x200 = 0U;
	volatile int32_t t49 = 0;

	t49 = (x197&((x198<x199)*x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x202 = INT16_MAX;
	int16_t x203 = INT16_MIN;
	volatile uint64_t x204 = UINT64_MAX;
	volatile uint64_t t50 = 207840517LLU;

	t50 = (x201&((x202<x203)*x204));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x206 = INT32_MIN;
	int64_t x207 = INT64_MIN;
	int16_t x208 = INT16_MIN;
	int32_t t51 = -1;

	t51 = (x205&((x206<x207)*x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = UINT16_MAX;
	volatile int8_t x210 = -5;
	uint32_t x211 = 7210868U;
	int32_t x212 = INT32_MIN;
	int32_t t52 = -213983689;

	t52 = (x209&((x210<x211)*x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x213 = INT64_MAX;
	static int32_t x214 = INT32_MIN;
	int16_t x215 = 645;
	static volatile int64_t t53 = INT64_MAX;

	t53 = (x213&((x214<x215)*x216));

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x217 = INT32_MIN;
	int64_t x218 = INT64_MIN;
	static int16_t x219 = -12;
	int32_t x220 = -17951;

	t54 = (x217&((x218<x219)*x220));

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -18;
	int64_t x222 = -1LL;
	int64_t x223 = -1LL;
	volatile uint32_t x224 = 248384878U;
	uint32_t t55 = 473445494U;

	t55 = (x221&((x222<x223)*x224));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x225 = UINT8_MAX;
	static int32_t x227 = INT32_MIN;
	uint32_t t56 = 212U;

	t56 = (x225&((x226<x227)*x228));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x229 = INT16_MIN;
	volatile int16_t x230 = -1;
	int32_t x231 = -2328523;
	static int16_t x232 = 2;
	static volatile int32_t t57 = 637803;

	t57 = (x229&((x230<x231)*x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MAX;
	volatile uint32_t x234 = UINT32_MAX;
	int8_t x235 = INT8_MIN;
	static volatile int32_t t58 = -15;

	t58 = (x233&((x234<x235)*x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x237 = 2959U;
	int16_t x238 = INT16_MAX;
	int32_t x240 = INT32_MIN;

	t59 = (x237&((x238<x239)*x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	int64_t x242 = INT64_MIN;
	static int64_t x243 = -266257568284LL;
	static volatile int8_t x244 = INT8_MAX;
	int32_t t60 = -238;

	t60 = (x241&((x242<x243)*x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x246 = UINT8_MAX;
	static uint64_t x247 = 1447531377476061LLU;
	uint8_t x248 = 1U;
	int32_t t61 = -5;

	t61 = (x245&((x246<x247)*x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MIN;
	int16_t x252 = INT16_MAX;

	t62 = (x249&((x250<x251)*x252));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = -1;
	int64_t x254 = 3825488LL;
	int8_t x255 = -1;
	volatile int16_t x256 = INT16_MAX;

	t63 = (x253&((x254<x255)*x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x259 = 1722U;
	static uint64_t x260 = UINT64_MAX;
	volatile uint64_t t64 = 4273521827LLU;

	t64 = (x257&((x258<x259)*x260));

	if (t64 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 1U;
	int64_t x262 = INT64_MIN;
	static int32_t x263 = INT32_MIN;
	volatile int32_t x264 = 64642833;
	int32_t t65 = 656115961;

	t65 = (x261&((x262<x263)*x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x266 = 5U;
	uint8_t x268 = UINT8_MAX;
	volatile int32_t t66 = 50229556;

	t66 = (x265&((x266<x267)*x268));

	if (t66 != 136) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x269 = -1;
	static uint64_t x271 = 13106LLU;
	static int64_t x272 = INT64_MIN;
	int64_t t67 = -23430380LL;

	t67 = (x269&((x270<x271)*x272));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MAX;
	static int8_t x274 = INT8_MIN;
	volatile uint8_t x275 = 0U;
	int16_t x276 = INT16_MIN;
	volatile int32_t t68 = 1040990;

	t68 = (x273&((x274<x275)*x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	volatile uint64_t x278 = 1021587610523771LLU;
	static uint64_t x279 = UINT64_MAX;
	static int32_t t69 = -8;

	t69 = (x277&((x278<x279)*x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	int8_t x282 = INT8_MIN;
	int16_t x283 = INT16_MAX;
	static uint8_t x284 = 94U;

	t70 = (x281&((x282<x283)*x284));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x285 = 24U;
	int64_t x286 = INT64_MIN;
	static uint16_t x287 = UINT16_MAX;
	uint64_t x288 = 1563LLU;
	volatile uint64_t t71 = 57492501834LLU;

	t71 = (x285&((x286<x287)*x288));

	if (t71 != 24LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x289 = -5236;
	uint64_t x290 = 1526126279826090LLU;
	uint64_t x291 = UINT64_MAX;
	int32_t x292 = INT32_MAX;

	t72 = (x289&((x290<x291)*x292));

	if (t72 != 2147478412) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x294 = INT32_MIN;
	int16_t x295 = -1;
	int32_t t73 = 5;

	t73 = (x293&((x294<x295)*x296));

	if (t73 != 4) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = 27;
	uint8_t x298 = 115U;

	t74 = (x297&((x298<x299)*x300));

	if (t74 != 3U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MAX;
	volatile int8_t x302 = -7;
	static volatile int32_t x303 = -3088896;
	int64_t x304 = -1948625364805LL;
	static volatile int64_t t75 = -145LL;

	t75 = (x301&((x302<x303)*x304));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = UINT32_MAX;
	int64_t x306 = INT64_MAX;
	uint16_t x307 = UINT16_MAX;
	int8_t x308 = INT8_MAX;
	uint32_t t76 = 7U;

	t76 = (x305&((x306<x307)*x308));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	volatile uint32_t x310 = 3U;
	int8_t x311 = -1;
	volatile int16_t x312 = INT16_MIN;
	volatile int32_t t77 = INT32_MIN;

	t77 = (x309&((x310<x311)*x312));

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x313 = -1;
	static int32_t x314 = -1;
	int8_t x315 = -1;
	static int32_t x316 = INT32_MIN;

	t78 = (x313&((x314<x315)*x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = 7950;
	volatile int32_t x318 = INT32_MIN;
	uint8_t x319 = 0U;
	int32_t x320 = 7727713;
	volatile int32_t t79 = -29969320;

	t79 = (x317&((x318<x319)*x320));

	if (t79 != 2560) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = 489492917599609927LL;
	int32_t x323 = 691906864;

	t80 = (x321&((x322<x323)*x324));

	if (t80 != 489492917599609927LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MIN;
	static volatile uint32_t x326 = 542247501U;
	volatile int64_t x327 = -57506377LL;
	int32_t x328 = -591426;
	static int32_t t81 = -5342;

	t81 = (x325&((x326<x327)*x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -1;
	static int16_t x331 = -1;
	static int32_t t82 = 91;

	t82 = (x329&((x330<x331)*x332));

	if (t82 != 11) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	int16_t x334 = -1;
	int64_t x335 = INT64_MAX;
	int64_t x336 = 1197LL;
	volatile int64_t t83 = 1809134145374647LL;

	t83 = (x333&((x334<x335)*x336));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MIN;
	static int8_t x339 = 0;
	volatile uint32_t t84 = 15449U;

	t84 = (x337&((x338<x339)*x340));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x341 = 707U;
	int8_t x342 = -1;
	uint64_t x343 = 1136097086886LLU;
	static volatile uint32_t t85 = 124744216U;

	t85 = (x341&((x342<x343)*x344));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = UINT64_MAX;
	uint16_t x346 = 15709U;
	int64_t x347 = INT64_MIN;
	uint64_t t86 = 70519915878983573LLU;

	t86 = (x345&((x346<x347)*x348));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint32_t x350 = 1271705555U;
	static int32_t x352 = -1;
	volatile int32_t t87 = 24990;

	t87 = (x349&((x350<x351)*x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x353 = INT64_MIN;
	int32_t x354 = -21041;
	int8_t x355 = -1;
	uint8_t x356 = UINT8_MAX;
	int64_t t88 = 846022994813937LL;

	t88 = (x353&((x354<x355)*x356));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x357 = -8625053311130970LL;
	static uint64_t x358 = 40267510135730265LLU;
	int16_t x359 = INT16_MIN;
	int32_t x360 = -1;

	t89 = (x357&((x358<x359)*x360));

	if (t89 != -8625053311130970LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 410U;
	int64_t x362 = 24827814LL;
	volatile uint32_t x363 = 14546U;
	int8_t x364 = 1;
	int32_t t90 = -577533;

	t90 = (x361&((x362<x363)*x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = UINT64_MAX;
	int64_t x368 = INT64_MAX;
	static volatile uint64_t t91 = 5LLU;

	t91 = (x365&((x366<x367)*x368));

	if (t91 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = 13U;
	volatile int16_t x371 = -1;
	uint8_t x372 = 15U;
	static volatile int32_t t92 = 1;

	t92 = (x369&((x370<x371)*x372));

	if (t92 != 13) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x375 = INT64_MIN;
	static volatile int32_t t93 = 458;

	t93 = (x373&((x374<x375)*x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 0U;
	static int64_t x378 = 987715786855LL;
	int8_t x379 = -1;
	int64_t x380 = -1805LL;
	volatile int64_t t94 = -1085249603162LL;

	t94 = (x377&((x378<x379)*x380));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	static int16_t x382 = INT16_MIN;
	static uint64_t x383 = 4669567705029429014LLU;
	int16_t x384 = INT16_MAX;

	t95 = (x381&((x382<x383)*x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 1253654800798800LLU;
	static uint8_t x386 = UINT8_MAX;
	int32_t x387 = -1;
	uint64_t t96 = 13LLU;

	t96 = (x385&((x386<x387)*x388));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x389 = -2;
	volatile int32_t x390 = INT32_MIN;
	int64_t x391 = -19071596LL;
	int32_t x392 = -1;

	t97 = (x389&((x390<x391)*x392));

	if (t97 != -2) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x394 = -54;
	uint32_t t98 = 32980201U;

	t98 = (x393&((x394<x395)*x396));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = -1;
	volatile uint32_t x398 = 664U;
	volatile int16_t x399 = INT16_MAX;
	int16_t x400 = -19;

	t99 = (x397&((x398<x399)*x400));

	if (t99 != -19) { NG(); } else { ; }
	
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

