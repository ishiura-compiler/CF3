#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x3 = 7320U;
int32_t x6 = -397182;
int8_t x10 = 0;
volatile int32_t x15 = INT32_MIN;
volatile int64_t x25 = 2LL;
int8_t x32 = INT8_MAX;
volatile int32_t t7 = -410553;
volatile int32_t x33 = -1;
uint64_t t8 = 850703726LLU;
int32_t x51 = INT32_MAX;
volatile uint64_t t13 = 208991454233262457LLU;
volatile int8_t x58 = -1;
int64_t x63 = INT64_MAX;
volatile int16_t x68 = INT16_MIN;
volatile int64_t x78 = -1LL;
int32_t x82 = -7803769;
uint8_t x83 = UINT8_MAX;
int8_t x88 = INT8_MIN;
uint8_t x90 = UINT8_MAX;
int16_t x96 = -19;
int64_t x103 = -121743162446367LL;
uint64_t x111 = 17LLU;
int16_t x125 = INT16_MIN;
uint32_t x128 = UINT32_MAX;
uint32_t t31 = 25971203U;
uint8_t x136 = 6U;
int32_t x137 = -43;
int64_t x147 = INT64_MAX;
int64_t x149 = 769305958706519593LL;
uint8_t x151 = 14U;
static int64_t x155 = INT64_MIN;
static uint32_t t38 = 886787U;
int8_t x163 = 41;
volatile int64_t t41 = 1498656934331LL;
int32_t t45 = -2;
static volatile int64_t t46 = 49830443LL;
volatile uint32_t t47 = 343059U;
int8_t x196 = INT8_MAX;
int32_t x197 = -14;
int32_t x204 = -120075892;
volatile uint64_t t50 = 69932984868300474LLU;
static volatile int32_t x215 = 1;
uint32_t x216 = 35332U;
static uint32_t t53 = 37U;
int16_t x222 = 13;
uint64_t x226 = 93081LLU;
uint8_t x235 = 0U;
static int64_t x238 = INT64_MAX;
static volatile int32_t t59 = -241635;
volatile int16_t x245 = -1;
uint8_t x248 = 13U;
int64_t x262 = -381859LL;
uint64_t x268 = 2621423405LLU;
uint16_t x272 = 292U;
int32_t x274 = -85205513;
int32_t x275 = INT32_MIN;
volatile uint64_t t68 = 1509325259239686LLU;
uint32_t x277 = 2033083455U;
int8_t x285 = 0;
int8_t x287 = INT8_MAX;
volatile int64_t t73 = 65732735841280LL;
uint32_t t74 = 72671426U;
uint64_t t75 = 63588054637687LLU;
int16_t x309 = -1;
int32_t x312 = -1;
uint64_t x317 = 0LLU;
int8_t x322 = 10;
static int16_t x327 = -1;
uint32_t x329 = 1515U;
int16_t x330 = INT16_MAX;
int32_t x335 = 3;
static volatile int32_t x336 = INT32_MAX;
uint8_t x337 = 0U;
int64_t t85 = -331224LL;
static volatile int32_t t86 = 153417242;
volatile int16_t x353 = -1;
int16_t x355 = INT16_MAX;
volatile int64_t x357 = -1LL;
int32_t x358 = -1;
uint32_t x360 = 7U;
uint16_t x361 = 27541U;
int32_t t90 = -35;
uint32_t t91 = 8058167U;
int64_t x371 = -1LL;
int64_t x374 = 31492LL;
volatile int32_t x378 = INT32_MAX;
uint8_t x379 = UINT8_MAX;
int64_t t94 = -90887LL;
volatile int32_t t96 = -1;
uint32_t t97 = 95629U;
int32_t t99 = -134;


void f0(void) {
	static uint32_t x1 = 595U;
	int32_t x2 = INT32_MIN;
	int32_t x4 = 3218;
	volatile uint32_t t0 = 218092U;

	t0 = (x1&((x2==x3)*x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 1U;
	volatile int8_t x7 = -42;
	uint64_t x8 = UINT64_MAX;
	volatile uint64_t t1 = 67526588159786020LLU;

	t1 = (x5&((x6==x7)*x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 4185313U;
	int32_t x11 = INT32_MIN;
	volatile uint32_t x12 = UINT32_MAX;
	uint32_t t2 = 229048963U;

	t2 = (x9&((x10==x11)*x12));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = -1;
	static uint16_t x14 = 4U;
	uint16_t x16 = 379U;
	int32_t t3 = 7;

	t3 = (x13&((x14==x15)*x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 2U;
	static uint32_t x18 = 203381U;
	int8_t x19 = INT8_MAX;
	static volatile int32_t x20 = INT32_MIN;
	static int32_t t4 = -3191090;

	t4 = (x17&((x18==x19)*x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 9869U;
	int32_t x22 = 17;
	static int64_t x23 = INT64_MIN;
	int32_t x24 = INT32_MAX;
	volatile uint32_t t5 = 12446U;

	t5 = (x21&((x22==x23)*x24));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x26 = 1U;
	int64_t x27 = INT64_MAX;
	int16_t x28 = INT16_MAX;
	volatile int64_t t6 = 778897108276LL;

	t6 = (x25&((x26==x27)*x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 42;
	int16_t x30 = INT16_MIN;
	volatile int32_t x31 = -29246172;

	t7 = (x29&((x30==x31)*x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x34 = 6U;
	uint64_t x35 = 9249857543174LLU;
	uint64_t x36 = UINT64_MAX;

	t8 = (x33&((x34==x35)*x36));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	volatile int16_t x38 = -4709;
	uint8_t x39 = UINT8_MAX;
	uint8_t x40 = 122U;
	int32_t t9 = 106195;

	t9 = (x37&((x38==x39)*x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	volatile int64_t x42 = INT64_MIN;
	int8_t x43 = INT8_MIN;
	int16_t x44 = INT16_MIN;
	static int32_t t10 = -292;

	t10 = (x41&((x42==x43)*x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1;
	uint64_t x46 = 1067612467866481LLU;
	uint8_t x47 = 1U;
	int16_t x48 = INT16_MIN;
	int32_t t11 = 234357537;

	t11 = (x45&((x46==x47)*x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x49 = 1U;
	static volatile int32_t x50 = -509852015;
	int32_t x52 = -1;
	int32_t t12 = -25;

	t12 = (x49&((x50==x51)*x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 128976144970LLU;
	int32_t x54 = INT32_MIN;
	volatile int8_t x55 = INT8_MIN;
	int16_t x56 = INT16_MAX;

	t13 = (x53&((x54==x55)*x56));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 40535453U;
	uint8_t x59 = 3U;
	uint16_t x60 = 15U;
	uint32_t t14 = 937739687U;

	t14 = (x57&((x58==x59)*x60));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 232305684799792447LLU;
	uint64_t x62 = UINT64_MAX;
	int8_t x64 = INT8_MIN;
	static volatile uint64_t t15 = 3705030544555422LLU;

	t15 = (x61&((x62==x63)*x64));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	int64_t x66 = INT64_MIN;
	int16_t x67 = 6067;
	volatile int32_t t16 = -49231664;

	t16 = (x65&((x66==x67)*x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	uint8_t x70 = 109U;
	int8_t x71 = 1;
	uint16_t x72 = UINT16_MAX;
	volatile uint64_t t17 = 13211947471LLU;

	t17 = (x69&((x70==x71)*x72));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -43;
	int16_t x74 = 5;
	int32_t x75 = INT32_MIN;
	uint8_t x76 = 1U;
	int32_t t18 = -2028;

	t18 = (x73&((x74==x75)*x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MAX;
	int64_t x79 = INT64_MIN;
	static uint64_t x80 = 133252243586168739LLU;
	volatile uint64_t t19 = 28511LLU;

	t19 = (x77&((x78==x79)*x80));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MAX;
	static volatile int8_t x84 = INT8_MIN;
	volatile int64_t t20 = -29704274LL;

	t20 = (x81&((x82==x83)*x84));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 6380U;
	int8_t x86 = INT8_MAX;
	uint32_t x87 = 30270U;
	volatile int32_t t21 = 1136;

	t21 = (x85&((x86==x87)*x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MAX;
	uint8_t x91 = 1U;
	uint16_t x92 = UINT16_MAX;
	int64_t t22 = 114043996131781LL;

	t22 = (x89&((x90==x91)*x92));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -1;
	int32_t x94 = 221578;
	static uint8_t x95 = UINT8_MAX;
	int32_t t23 = 86;

	t23 = (x93&((x94==x95)*x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 1153U;
	int8_t x98 = 4;
	int16_t x99 = INT16_MIN;
	volatile int16_t x100 = INT16_MIN;
	static volatile int32_t t24 = 26861086;

	t24 = (x97&((x98==x99)*x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = INT32_MIN;
	int16_t x102 = -1;
	static volatile int8_t x104 = -1;
	int32_t t25 = 71830888;

	t25 = (x101&((x102==x103)*x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = 1;
	int8_t x106 = 0;
	int32_t x107 = 979989493;
	int16_t x108 = 0;
	int32_t t26 = -815520372;

	t26 = (x105&((x106==x107)*x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x109 = UINT8_MAX;
	volatile int8_t x110 = INT8_MIN;
	int16_t x112 = 12;
	volatile int32_t t27 = -402898;

	t27 = (x109&((x110==x111)*x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = 19;
	static volatile uint32_t x114 = UINT32_MAX;
	volatile int16_t x115 = INT16_MIN;
	volatile uint64_t x116 = 27089LLU;
	volatile uint64_t t28 = 8576335563815LLU;

	t28 = (x113&((x114==x115)*x116));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = INT64_MIN;
	static volatile uint64_t x118 = UINT64_MAX;
	static uint16_t x119 = 1U;
	static uint8_t x120 = 3U;
	int64_t t29 = 669123316981756253LL;

	t29 = (x117&((x118==x119)*x120));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	volatile uint16_t x122 = 0U;
	uint32_t x123 = 348U;
	int16_t x124 = -208;
	volatile int32_t t30 = -10;

	t30 = (x121&((x122==x123)*x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x126 = -1;
	uint8_t x127 = 63U;

	t31 = (x125&((x126==x127)*x128));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x129 = 3481U;
	int8_t x130 = INT8_MIN;
	uint64_t x131 = 54488715998459LLU;
	int64_t x132 = INT64_MAX;
	static int64_t t32 = 33488035773458LL;

	t32 = (x129&((x130==x131)*x132));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x133 = UINT8_MAX;
	uint64_t x134 = UINT64_MAX;
	static int16_t x135 = INT16_MIN;
	int32_t t33 = -474419;

	t33 = (x133&((x134==x135)*x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x138 = 0LLU;
	static volatile uint16_t x139 = UINT16_MAX;
	int32_t x140 = INT32_MAX;
	int32_t t34 = -7700;

	t34 = (x137&((x138==x139)*x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = 0;
	static int32_t x142 = INT32_MIN;
	uint16_t x143 = 229U;
	volatile int64_t x144 = -1751989933LL;
	volatile int64_t t35 = -9686LL;

	t35 = (x141&((x142==x143)*x144));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = UINT8_MAX;
	static uint8_t x146 = 6U;
	int32_t x148 = -3528;
	int32_t t36 = -3761118;

	t36 = (x145&((x146==x147)*x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x150 = INT32_MAX;
	volatile int64_t x152 = 783615088639157218LL;
	int64_t t37 = -27231002923502LL;

	t37 = (x149&((x150==x151)*x152));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 348U;
	static uint64_t x154 = 1818627667LLU;
	int8_t x156 = INT8_MAX;

	t38 = (x153&((x154==x155)*x156));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x157 = INT32_MIN;
	uint32_t x158 = 11009U;
	uint16_t x159 = UINT16_MAX;
	volatile uint8_t x160 = 4U;
	int32_t t39 = 439545034;

	t39 = (x157&((x158==x159)*x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 3U;
	int16_t x162 = -16;
	static uint64_t x164 = UINT64_MAX;
	uint64_t t40 = 371074680478211LLU;

	t40 = (x161&((x162==x163)*x164));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x165 = 11;
	volatile uint64_t x166 = UINT64_MAX;
	int64_t x167 = INT64_MAX;
	int64_t x168 = -1LL;

	t41 = (x165&((x166==x167)*x168));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	uint8_t x170 = 21U;
	uint8_t x171 = 15U;
	int32_t x172 = 229029330;
	int32_t t42 = -1956;

	t42 = (x169&((x170==x171)*x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x173 = 22345U;
	int64_t x174 = INT64_MIN;
	int32_t x175 = INT32_MIN;
	static int8_t x176 = INT8_MAX;
	static int32_t t43 = 262698;

	t43 = (x173&((x174==x175)*x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -1;
	uint8_t x178 = 102U;
	int8_t x179 = -8;
	int32_t x180 = -1;
	volatile int32_t t44 = -12;

	t44 = (x177&((x178==x179)*x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x181 = -30;
	static volatile int16_t x182 = 2023;
	uint8_t x183 = 14U;
	static int8_t x184 = INT8_MAX;

	t45 = (x181&((x182==x183)*x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -1LL;
	int16_t x186 = INT16_MIN;
	int8_t x187 = INT8_MIN;
	int64_t x188 = INT64_MIN;

	t46 = (x185&((x186==x187)*x188));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 27U;
	volatile uint32_t x190 = UINT32_MAX;
	int8_t x191 = -1;
	uint32_t x192 = UINT32_MAX;

	t47 = (x189&((x190==x191)*x192));

	if (t47 != 27U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -1;
	int16_t x194 = INT16_MIN;
	int16_t x195 = INT16_MIN;
	static volatile int32_t t48 = 486;

	t48 = (x193&((x194==x195)*x196));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x198 = 15007130LLU;
	uint16_t x199 = UINT16_MAX;
	volatile int64_t x200 = -550643LL;
	static volatile int64_t t49 = 1412857364818861960LL;

	t49 = (x197&((x198==x199)*x200));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = UINT64_MAX;
	int16_t x202 = INT16_MIN;
	uint32_t x203 = 22877U;

	t50 = (x201&((x202==x203)*x204));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 881091780LLU;
	static uint8_t x206 = 3U;
	int32_t x207 = INT32_MIN;
	int64_t x208 = -29903354LL;
	volatile uint64_t t51 = 359918323222LLU;

	t51 = (x205&((x206==x207)*x208));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = -1;
	int32_t x210 = 491;
	uint32_t x211 = 8982591U;
	uint8_t x212 = 30U;
	volatile int32_t t52 = 139888281;

	t52 = (x209&((x210==x211)*x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint8_t x213 = 11U;
	static int16_t x214 = -9;

	t53 = (x213&((x214==x215)*x216));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 7254U;
	uint32_t x218 = UINT32_MAX;
	int8_t x219 = INT8_MIN;
	static uint64_t x220 = 169592LLU;
	volatile uint64_t t54 = 70541575436536714LLU;

	t54 = (x217&((x218==x219)*x220));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -1LL;
	uint8_t x223 = UINT8_MAX;
	static uint8_t x224 = 22U;
	int64_t t55 = 10303LL;

	t55 = (x221&((x222==x223)*x224));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x225 = -1;
	int8_t x227 = 30;
	volatile int8_t x228 = INT8_MIN;
	static volatile int32_t t56 = -1;

	t56 = (x225&((x226==x227)*x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x229 = 16U;
	uint16_t x230 = 14U;
	volatile int32_t x231 = INT32_MAX;
	static uint16_t x232 = UINT16_MAX;
	int32_t t57 = 31466;

	t57 = (x229&((x230==x231)*x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = UINT16_MAX;
	static int64_t x234 = INT64_MIN;
	static int32_t x236 = INT32_MAX;
	int32_t t58 = -1698371;

	t58 = (x233&((x234==x235)*x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = 32690U;
	int8_t x239 = INT8_MIN;
	int16_t x240 = INT16_MAX;

	t59 = (x237&((x238==x239)*x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = UINT16_MAX;
	int32_t x242 = -1;
	int16_t x243 = INT16_MIN;
	int8_t x244 = -1;
	static volatile int32_t t60 = 7454459;

	t60 = (x241&((x242==x243)*x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x246 = -1;
	int64_t x247 = 9657LL;
	static int32_t t61 = 2585266;

	t61 = (x245&((x246==x247)*x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = 2943;
	uint16_t x250 = 1361U;
	int16_t x251 = INT16_MIN;
	volatile int64_t x252 = -1LL;
	volatile int64_t t62 = 442116959LL;

	t62 = (x249&((x250==x251)*x252));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MAX;
	static int8_t x254 = INT8_MAX;
	int16_t x255 = INT16_MIN;
	int64_t x256 = INT64_MIN;
	volatile int64_t t63 = -1LL;

	t63 = (x253&((x254==x255)*x256));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = UINT16_MAX;
	uint16_t x258 = 388U;
	int32_t x259 = 189195;
	int8_t x260 = 5;
	volatile int32_t t64 = 229712;

	t64 = (x257&((x258==x259)*x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MAX;
	static int64_t x263 = INT64_MIN;
	uint64_t x264 = 46662LLU;
	volatile uint64_t t65 = 1450733769LLU;

	t65 = (x261&((x262==x263)*x264));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 38609206U;
	static uint64_t x266 = 181096572LLU;
	static volatile uint64_t x267 = 3651074LLU;
	uint64_t t66 = 11856670010LLU;

	t66 = (x265&((x266==x267)*x268));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x269 = -1;
	int8_t x270 = INT8_MAX;
	int64_t x271 = INT64_MAX;
	int32_t t67 = 313446;

	t67 = (x269&((x270==x271)*x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = -1;
	static uint64_t x276 = UINT64_MAX;

	t68 = (x273&((x274==x275)*x276));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x278 = -1;
	static int64_t x279 = -1LL;
	int64_t x280 = INT64_MAX;
	volatile int64_t t69 = -2763750207791LL;

	t69 = (x277&((x278==x279)*x280));

	if (t69 != 2033083455LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x281 = -58356;
	int32_t x282 = INT32_MIN;
	int16_t x283 = INT16_MIN;
	int16_t x284 = INT16_MIN;
	static int32_t t70 = -235464551;

	t70 = (x281&((x282==x283)*x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x286 = -1;
	uint32_t x288 = 1916U;
	volatile uint32_t t71 = 468919963U;

	t71 = (x285&((x286==x287)*x288));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x289 = 452607042LL;
	volatile int64_t x290 = -1LL;
	uint8_t x291 = 3U;
	int64_t x292 = INT64_MIN;
	int64_t t72 = -440LL;

	t72 = (x289&((x290==x291)*x292));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = 1810643603LL;
	static int8_t x294 = 15;
	int16_t x295 = 5;
	volatile int32_t x296 = -1;

	t73 = (x293&((x294==x295)*x296));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x297 = UINT32_MAX;
	int16_t x298 = INT16_MAX;
	uint8_t x299 = UINT8_MAX;
	int16_t x300 = -1;

	t74 = (x297&((x298==x299)*x300));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = UINT64_MAX;
	int64_t x302 = INT64_MIN;
	int8_t x303 = 1;
	static int32_t x304 = INT32_MAX;

	t75 = (x301&((x302==x303)*x304));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x305 = UINT8_MAX;
	static volatile uint16_t x306 = 87U;
	int64_t x307 = INT64_MIN;
	uint64_t x308 = 6134261310914669LLU;
	uint64_t t76 = 601387563441LLU;

	t76 = (x305&((x306==x307)*x308));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x310 = 201334312;
	uint16_t x311 = UINT16_MAX;
	static int32_t t77 = -69;

	t77 = (x309&((x310==x311)*x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = UINT16_MAX;
	static uint8_t x314 = 47U;
	static int64_t x315 = INT64_MIN;
	uint16_t x316 = 28689U;
	volatile int32_t t78 = -2;

	t78 = (x313&((x314==x315)*x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint8_t x318 = 8U;
	int64_t x319 = -1LL;
	volatile int64_t x320 = INT64_MIN;
	volatile uint64_t t79 = 3695616172994LLU;

	t79 = (x317&((x318==x319)*x320));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x321 = INT32_MAX;
	volatile uint8_t x323 = 3U;
	static int8_t x324 = -2;
	volatile int32_t t80 = -22945514;

	t80 = (x321&((x322==x323)*x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x325 = INT8_MAX;
	int32_t x326 = -1;
	static int16_t x328 = 0;
	int32_t t81 = 327788459;

	t81 = (x325&((x326==x327)*x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x331 = INT32_MAX;
	uint32_t x332 = 96U;
	volatile uint32_t t82 = 3334973U;

	t82 = (x329&((x330==x331)*x332));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	int32_t x334 = -26;
	volatile int32_t t83 = 255506;

	t83 = (x333&((x334==x335)*x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x338 = 2U;
	uint8_t x339 = 3U;
	uint32_t x340 = 1176117930U;
	volatile uint32_t t84 = 20511620U;

	t84 = (x337&((x338==x339)*x340));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = -1LL;
	int64_t x342 = -1LL;
	volatile uint16_t x343 = 267U;
	volatile int32_t x344 = INT32_MIN;

	t85 = (x341&((x342==x343)*x344));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MAX;
	volatile uint16_t x346 = 9710U;
	int32_t x347 = INT32_MIN;
	uint8_t x348 = 34U;

	t86 = (x345&((x346==x347)*x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = 17101850LL;
	int32_t x350 = INT32_MIN;
	int64_t x351 = INT64_MAX;
	uint32_t x352 = 1U;
	int64_t t87 = 459366193166LL;

	t87 = (x349&((x350==x351)*x352));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x354 = 7LLU;
	uint32_t x356 = UINT32_MAX;
	static uint32_t t88 = 545663362U;

	t88 = (x353&((x354==x355)*x356));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x359 = -4;
	int64_t t89 = 106717LL;

	t89 = (x357&((x358==x359)*x360));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x362 = 43U;
	static int32_t x363 = INT32_MIN;
	int32_t x364 = -1;

	t90 = (x361&((x362==x363)*x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -1;
	volatile uint32_t x366 = 531U;
	int32_t x367 = INT32_MAX;
	volatile uint32_t x368 = UINT32_MAX;

	t91 = (x365&((x366==x367)*x368));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	int8_t x370 = INT8_MIN;
	int64_t x372 = -1LL;
	int64_t t92 = 487472LL;

	t92 = (x369&((x370==x371)*x372));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x373 = -1LL;
	uint32_t x375 = 13U;
	int16_t x376 = INT16_MIN;
	static int64_t t93 = 1776965167498005LL;

	t93 = (x373&((x374==x375)*x376));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = -1LL;
	uint32_t x380 = UINT32_MAX;

	t94 = (x377&((x378==x379)*x380));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	int64_t x382 = -1609923414507966LL;
	int16_t x383 = INT16_MAX;
	int16_t x384 = INT16_MAX;
	static volatile int32_t t95 = 76830199;

	t95 = (x381&((x382==x383)*x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MAX;
	int32_t x386 = INT32_MAX;
	static uint64_t x387 = 1679LLU;
	volatile int8_t x388 = INT8_MIN;

	t96 = (x385&((x386==x387)*x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 246U;
	int64_t x390 = INT64_MAX;
	int16_t x391 = INT16_MIN;
	uint32_t x392 = 0U;

	t97 = (x389&((x390==x391)*x392));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = 3;
	int16_t x394 = -1299;
	int8_t x395 = INT8_MIN;
	uint64_t x396 = 56171LLU;
	volatile uint64_t t98 = 2471243833418LLU;

	t98 = (x393&((x394==x395)*x396));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x397 = -1;
	volatile int32_t x398 = -4;
	volatile int64_t x399 = INT64_MIN;
	static volatile int16_t x400 = -1;

	t99 = (x397&((x398==x399)*x400));

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

