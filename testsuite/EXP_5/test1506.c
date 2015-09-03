#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t1 = INT64_MIN;
volatile uint32_t t2 = 2096U;
uint32_t x17 = 3061U;
uint8_t x23 = 16U;
int8_t x24 = INT8_MIN;
int32_t x25 = 4995;
static int32_t t6 = 99891793;
uint16_t x30 = 235U;
int32_t x37 = INT32_MIN;
static int64_t x43 = -440226LL;
static uint16_t x52 = UINT16_MAX;
uint64_t x55 = UINT64_MAX;
volatile int32_t t13 = 6122531;
volatile int32_t t14 = -88612855;
static volatile uint64_t t16 = 3227727232580146482LLU;
static int32_t x69 = INT32_MAX;
int64_t x70 = INT64_MIN;
uint32_t t17 = 687U;
int8_t x74 = INT8_MIN;
int16_t x83 = INT16_MAX;
int32_t x92 = -1;
volatile int32_t t23 = 57;
volatile int32_t x99 = INT32_MIN;
uint32_t t24 = 115255124U;
static volatile int64_t x102 = 39157060945237LL;
static volatile int8_t x103 = INT8_MIN;
static uint16_t x106 = UINT16_MAX;
volatile int32_t t27 = -231129;
uint64_t x120 = UINT64_MAX;
int8_t x125 = INT8_MIN;
uint32_t x145 = 7757U;
volatile uint32_t t36 = 10082U;
volatile int32_t x156 = 4;
uint64_t x161 = 103657498388LLU;
static uint32_t x163 = 0U;
volatile uint32_t x164 = UINT32_MAX;
uint32_t x168 = UINT32_MAX;
volatile uint16_t x170 = 6U;
static volatile int32_t x172 = INT32_MIN;
int64_t x173 = INT64_MIN;
uint32_t x178 = 2281U;
volatile int32_t x182 = INT32_MAX;
int64_t x187 = -1LL;
int64_t x191 = -1LL;
int32_t x197 = INT32_MIN;
uint64_t x198 = 290413616LLU;
int32_t x206 = -1;
static int8_t x212 = INT8_MIN;
static uint64_t x215 = 257572LLU;
uint8_t x216 = 88U;
int32_t x221 = -3;
int32_t t55 = -5;
int32_t x227 = -175548;
int8_t x233 = 5;
int64_t x236 = -1LL;
int16_t x239 = -1;
int8_t x247 = 1;
static volatile int8_t x252 = INT8_MIN;
int16_t x255 = INT16_MIN;
static volatile int32_t x256 = INT32_MIN;
volatile int64_t x257 = INT64_MAX;
volatile int16_t x258 = INT16_MAX;
static volatile int64_t t64 = 123325642979040LL;
int32_t x261 = 1;
int32_t x272 = -1;
int16_t x273 = -1;
uint8_t x280 = 10U;
int64_t x282 = 172954958036LL;
volatile int32_t t70 = 171556;
int32_t x288 = INT32_MAX;
int32_t t73 = -3826702;
int8_t x300 = 0;
int32_t x305 = -1223448;
int64_t x309 = INT64_MIN;
int64_t x317 = -1LL;
volatile int8_t x323 = INT8_MIN;
int64_t x329 = INT64_MIN;
static int64_t x332 = -1LL;
uint32_t x337 = 0U;
volatile uint32_t t84 = 1471064267U;
int32_t x346 = INT32_MAX;
int64_t x350 = INT64_MIN;
int64_t x352 = INT64_MIN;
int64_t t87 = -3463824358676009LL;
static volatile int8_t x355 = INT8_MAX;
int16_t x358 = 30;
int32_t x367 = INT32_MIN;
uint64_t x370 = 54507LLU;
uint64_t x371 = 3833LLU;
int32_t x378 = 0;
int8_t x380 = INT8_MIN;
static int32_t x399 = 1;


void f0(void) {
	static int64_t x1 = INT64_MIN;
	int64_t x2 = INT64_MIN;
	uint8_t x3 = UINT8_MAX;
	volatile int8_t x4 = INT8_MIN;
	volatile int64_t t0 = INT64_MIN;

	t0 = (x1&((x2<x3)|x4));

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MIN;
	volatile uint8_t x6 = UINT8_MAX;
	int16_t x7 = INT16_MIN;
	volatile int64_t x8 = -1LL;

	t1 = (x5&((x6<x7)|x8));

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 1403U;
	static int64_t x10 = -1LL;
	int8_t x11 = INT8_MIN;
	volatile uint32_t x12 = 7U;

	t2 = (x9&((x10<x11)|x12));

	if (t2 != 3U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 147;
	int16_t x14 = 7;
	int32_t x15 = -1;
	volatile uint16_t x16 = 241U;
	int32_t t3 = 19;

	t3 = (x13&((x14<x15)|x16));

	if (t3 != 145) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = INT16_MAX;
	uint8_t x19 = 1U;
	int8_t x20 = 1;
	volatile uint32_t t4 = 9U;

	t4 = (x17&((x18<x19)|x20));

	if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = 5570U;
	volatile uint64_t x22 = 116550LLU;
	volatile uint32_t t5 = 26U;

	t5 = (x21&((x22<x23)|x24));

	if (t5 != 5504U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = INT8_MAX;
	int16_t x27 = -1;
	volatile int32_t x28 = -3973;

	t6 = (x25&((x26<x27)|x28));

	if (t6 != 4099) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = -7;
	volatile int8_t x31 = INT8_MAX;
	uint64_t x32 = 5593864924678935342LLU;
	volatile uint64_t t7 = 852988664826396LLU;

	t7 = (x29&((x30<x31)|x32));

	if (t7 != 5593864924678935336LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 61881835446609505LL;
	uint8_t x34 = UINT8_MAX;
	int32_t x35 = -1774;
	volatile uint16_t x36 = 10680U;
	int64_t t8 = -4596408777144LL;

	t8 = (x33&((x34<x35)|x36));

	if (t8 != 8224LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = -60533308;
	uint64_t x39 = 523119541311666530LLU;
	int16_t x40 = 490;
	volatile int32_t t9 = 133721013;

	t9 = (x37&((x38<x39)|x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;
	uint64_t x42 = 297LLU;
	volatile uint32_t x44 = 132U;
	static uint32_t t10 = 3U;

	t10 = (x41&((x42<x43)|x44));

	if (t10 != 133U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = 11024760;
	uint8_t x46 = UINT8_MAX;
	static int16_t x47 = 3361;
	int64_t x48 = 5363334359LL;
	int64_t t11 = -360018599806769LL;

	t11 = (x45&((x46<x47)|x48));

	if (t11 != 11024464LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 0U;
	int32_t x50 = INT32_MIN;
	static uint32_t x51 = UINT32_MAX;
	int32_t t12 = -166548752;

	t12 = (x49&((x50<x51)|x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x53 = -27553;
	int64_t x54 = -1LL;
	int32_t x56 = 68830;

	t13 = (x53&((x54<x55)|x56));

	if (t13 != 66654) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = -124722;
	int8_t x58 = 0;
	static uint8_t x59 = UINT8_MAX;
	int16_t x60 = 105;

	t14 = (x57&((x58<x59)|x60));

	if (t14 != 72) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	uint16_t x62 = 19998U;
	int64_t x63 = INT64_MAX;
	int16_t x64 = 0;
	int32_t t15 = -427601;

	t15 = (x61&((x62<x63)|x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 2811704673659LLU;
	static int64_t x66 = -46210650LL;
	int8_t x67 = -1;
	uint16_t x68 = 68U;

	t16 = (x65&((x66<x67)|x68));

	if (t16 != 65LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x71 = 0;
	volatile uint32_t x72 = UINT32_MAX;

	t17 = (x69&((x70<x71)|x72));

	if (t17 != 2147483647U) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = INT64_MAX;
	uint32_t x75 = 3194427U;
	int64_t x76 = INT64_MIN;
	volatile int64_t t18 = -1LL;

	t18 = (x73&((x74<x75)|x76));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = UINT32_MAX;
	static uint16_t x78 = UINT16_MAX;
	int8_t x79 = -1;
	uint32_t x80 = 115466374U;
	volatile uint32_t t19 = 1887U;

	t19 = (x77&((x78<x79)|x80));

	if (t19 != 115466374U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = 1342871674002LL;
	int32_t x82 = 50;
	int32_t x84 = INT32_MAX;
	int64_t t20 = 189067LL;

	t20 = (x81&((x82<x83)|x84));

	if (t20 != 694394002LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x85 = 7919652304479668LLU;
	int64_t x86 = -79916370257043970LL;
	uint8_t x87 = UINT8_MAX;
	static volatile int8_t x88 = 2;
	volatile uint64_t t21 = 100630048797LLU;

	t21 = (x85&((x86<x87)|x88));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MAX;
	static uint16_t x90 = UINT16_MAX;
	uint16_t x91 = 3628U;
	int32_t t22 = INT32_MAX;

	t22 = (x89&((x90<x91)|x92));

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MAX;
	static int16_t x94 = -1;
	int16_t x95 = 1074;
	uint8_t x96 = 109U;

	t23 = (x93&((x94<x95)|x96));

	if (t23 != 109) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x97 = 948328U;
	volatile int64_t x98 = INT64_MAX;
	int32_t x100 = 4126;

	t24 = (x97&((x98<x99)|x100));

	if (t24 != 4104U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MAX;
	int8_t x104 = INT8_MIN;
	int64_t t25 = 66466898948289LL;

	t25 = (x101&((x102<x103)|x104));

	if (t25 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	uint64_t x107 = 330887521674236881LLU;
	uint8_t x108 = UINT8_MAX;
	volatile int64_t t26 = 156933547658214LL;

	t26 = (x105&((x106<x107)|x108));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint8_t x109 = 43U;
	int8_t x110 = -2;
	int32_t x111 = INT32_MIN;
	int8_t x112 = 6;

	t27 = (x109&((x110<x111)|x112));

	if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	uint8_t x114 = 23U;
	volatile int16_t x115 = 9;
	uint16_t x116 = 28U;
	int32_t t28 = -2097;

	t28 = (x113&((x114<x115)|x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	int32_t x118 = 4357;
	static int8_t x119 = -1;
	volatile uint64_t t29 = UINT64_MAX;

	t29 = (x117&((x118<x119)|x120));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 782571LLU;
	int16_t x122 = INT16_MIN;
	int8_t x123 = -3;
	int64_t x124 = INT64_MAX;
	static uint64_t t30 = 1215670496LLU;

	t30 = (x121&((x122<x123)|x124));

	if (t30 != 782571LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = INT32_MAX;
	int16_t x127 = 3;
	int16_t x128 = -1;
	volatile int32_t t31 = -3;

	t31 = (x125&((x126<x127)|x128));

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = UINT32_MAX;
	static int64_t x130 = INT64_MIN;
	uint32_t x131 = 218766670U;
	int64_t x132 = 110LL;
	int64_t t32 = -512072814824046372LL;

	t32 = (x129&((x130<x131)|x132));

	if (t32 != 111LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x133 = INT64_MIN;
	volatile int16_t x134 = INT16_MIN;
	volatile int32_t x135 = INT32_MIN;
	volatile int32_t x136 = -1;
	int64_t t33 = INT64_MIN;

	t33 = (x133&((x134<x135)|x136));

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x137 = INT32_MIN;
	int64_t x138 = INT64_MIN;
	int8_t x139 = 0;
	volatile uint32_t x140 = UINT32_MAX;
	uint32_t t34 = 93U;

	t34 = (x137&((x138<x139)|x140));

	if (t34 != 2147483648U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x141 = 5712935U;
	uint8_t x142 = 0U;
	int32_t x143 = INT32_MIN;
	static uint32_t x144 = UINT32_MAX;
	volatile uint32_t t35 = 193005U;

	t35 = (x141&((x142<x143)|x144));

	if (t35 != 5712935U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x146 = -1741;
	int8_t x147 = -1;
	int16_t x148 = -51;

	t36 = (x145&((x146<x147)|x148));

	if (t36 != 7757U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 106629671U;
	static uint8_t x150 = 115U;
	static int32_t x151 = 45931;
	static int16_t x152 = -8117;
	volatile uint32_t t37 = 0U;

	t37 = (x149&((x150<x151)|x152));

	if (t37 != 106627075U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -10282;
	static int16_t x154 = INT16_MIN;
	int64_t x155 = -1LL;
	volatile int32_t t38 = 727;

	t38 = (x153&((x154<x155)|x156));

	if (t38 != 4) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = 683444865217LL;
	static volatile int8_t x158 = INT8_MIN;
	int64_t x159 = INT64_MIN;
	volatile uint16_t x160 = UINT16_MAX;
	int64_t t39 = -3481778LL;

	t39 = (x157&((x158<x159)|x160));

	if (t39 != 2241LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x162 = INT8_MAX;
	volatile uint64_t t40 = 2146777218211564759LLU;

	t40 = (x161&((x162<x163)|x164));

	if (t40 != 578283284LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MAX;
	volatile uint64_t x166 = UINT64_MAX;
	int16_t x167 = INT16_MIN;
	uint32_t t41 = 2076695U;

	t41 = (x165&((x166<x167)|x168));

	if (t41 != 127U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -1;
	int64_t x171 = INT64_MIN;
	volatile int32_t t42 = INT32_MIN;

	t42 = (x169&((x170<x171)|x172));

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x174 = -1LL;
	int32_t x175 = 68629273;
	uint8_t x176 = 19U;
	int64_t t43 = 1651427849LL;

	t43 = (x173&((x174<x175)|x176));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x177 = 1;
	int8_t x179 = 1;
	int64_t x180 = INT64_MAX;
	volatile int64_t t44 = 15LL;

	t44 = (x177&((x178<x179)|x180));

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = 411279LL;
	int32_t x183 = -1;
	static volatile uint8_t x184 = UINT8_MAX;
	volatile int64_t t45 = 893005LL;

	t45 = (x181&((x182<x183)|x184));

	if (t45 != 143LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x185 = INT32_MIN;
	uint32_t x186 = 2U;
	int32_t x188 = -4857671;
	int32_t t46 = INT32_MIN;

	t46 = (x185&((x186<x187)|x188));

	if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = -1;
	int32_t x190 = INT32_MAX;
	int8_t x192 = 1;
	int32_t t47 = 50;

	t47 = (x189&((x190<x191)|x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x193 = -1;
	int8_t x194 = INT8_MIN;
	volatile int16_t x195 = -1;
	int64_t x196 = -1LL;
	volatile int64_t t48 = -11270237034468386LL;

	t48 = (x193&((x194<x195)|x196));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x199 = 12U;
	int32_t x200 = INT32_MAX;
	volatile int32_t t49 = 23402126;

	t49 = (x197&((x198<x199)|x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x201 = -1;
	int32_t x202 = INT32_MIN;
	int32_t x203 = INT32_MIN;
	uint8_t x204 = 2U;
	int32_t t50 = -7;

	t50 = (x201&((x202<x203)|x204));

	if (t50 != 2) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x205 = INT64_MIN;
	uint64_t x207 = 575709351LLU;
	uint16_t x208 = 1559U;
	int64_t t51 = -80901731316381711LL;

	t51 = (x205&((x206<x207)|x208));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = 31707U;
	volatile uint32_t x210 = UINT32_MAX;
	volatile int64_t x211 = 15176027339LL;
	uint32_t t52 = 2029U;

	t52 = (x209&((x210<x211)|x212));

	if (t52 != 31617U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MAX;
	static uint32_t x214 = 1228649034U;
	int64_t t53 = 94843623377173LL;

	t53 = (x213&((x214<x215)|x216));

	if (t53 != 88LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 12U;
	int64_t x218 = 11836824698279LL;
	uint16_t x219 = UINT16_MAX;
	int32_t x220 = INT32_MAX;
	volatile int32_t t54 = -13812;

	t54 = (x217&((x218<x219)|x220));

	if (t54 != 12) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x222 = 187256081LL;
	volatile int8_t x223 = -6;
	uint16_t x224 = 2U;

	t55 = (x221&((x222<x223)|x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = 230;
	volatile int32_t x226 = INT32_MIN;
	volatile uint16_t x228 = UINT16_MAX;
	volatile int32_t t56 = 2;

	t56 = (x225&((x226<x227)|x228));

	if (t56 != 230) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 5U;
	int32_t x230 = INT32_MIN;
	uint32_t x231 = UINT32_MAX;
	int16_t x232 = INT16_MIN;
	int32_t t57 = 164876;

	t57 = (x229&((x230<x231)|x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x234 = INT32_MAX;
	int64_t x235 = -1LL;
	static int64_t t58 = -88924LL;

	t58 = (x233&((x234<x235)|x236));

	if (t58 != 5LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -1;
	static uint32_t x238 = 15U;
	int8_t x240 = 1;
	int32_t t59 = 152;

	t59 = (x237&((x238<x239)|x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 60U;
	uint64_t x242 = 16566250842LLU;
	uint16_t x243 = 1578U;
	volatile int64_t x244 = INT64_MAX;
	int64_t t60 = 9897648LL;

	t60 = (x241&((x242<x243)|x244));

	if (t60 != 60LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x245 = 13943718056LLU;
	int32_t x246 = INT32_MIN;
	int16_t x248 = 7581;
	volatile uint64_t t61 = 445503567917LLU;

	t61 = (x245&((x246<x247)|x248));

	if (t61 != 136LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MIN;
	uint32_t x250 = 4611U;
	uint16_t x251 = 1608U;
	int64_t t62 = INT64_MIN;

	t62 = (x249&((x250<x251)|x252));

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = 1183U;
	volatile int64_t x254 = INT64_MAX;
	uint32_t t63 = 91U;

	t63 = (x253&((x254<x255)|x256));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x259 = 6U;
	static uint32_t x260 = 22529U;

	t64 = (x257&((x258<x259)|x260));

	if (t64 != 22529LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x262 = -1;
	uint8_t x263 = 1U;
	int8_t x264 = -1;
	static int32_t t65 = 13;

	t65 = (x261&((x262<x263)|x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -7945699836944011LL;
	int16_t x266 = -1;
	uint32_t x267 = 16491598U;
	uint16_t x268 = 1U;
	volatile int64_t t66 = -79986397103844LL;

	t66 = (x265&((x266<x267)|x268));

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 27U;
	uint8_t x270 = 1U;
	static volatile int64_t x271 = INT64_MIN;
	static volatile int32_t t67 = 7300;

	t67 = (x269&((x270<x271)|x272));

	if (t67 != 27) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x274 = 120U;
	uint8_t x275 = UINT8_MAX;
	int32_t x276 = -732;
	int32_t t68 = 2;

	t68 = (x273&((x274<x275)|x276));

	if (t68 != -731) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = -65369;
	static int32_t x278 = INT32_MIN;
	int8_t x279 = INT8_MIN;
	volatile int32_t t69 = 49200123;

	t69 = (x277&((x278<x279)|x280));

	if (t69 != 3) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MIN;
	uint32_t x283 = 114154U;
	static int8_t x284 = 4;

	t70 = (x281&((x282<x283)|x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = 10064;
	int32_t x286 = 894;
	int8_t x287 = INT8_MIN;
	static int32_t t71 = -1586;

	t71 = (x285&((x286<x287)|x288));

	if (t71 != 10064) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x289 = 1;
	static uint32_t x290 = 460941549U;
	int64_t x291 = INT64_MIN;
	int8_t x292 = -1;
	volatile int32_t t72 = 1;

	t72 = (x289&((x290<x291)|x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x293 = INT8_MIN;
	uint32_t x294 = 694396U;
	int8_t x295 = -1;
	volatile int32_t x296 = 567611224;

	t73 = (x293&((x294<x295)|x296));

	if (t73 != 567611136) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x297 = -1;
	int32_t x298 = INT32_MAX;
	uint64_t x299 = UINT64_MAX;
	int32_t t74 = -1;

	t74 = (x297&((x298<x299)|x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MAX;
	static int64_t x302 = INT64_MAX;
	int32_t x303 = INT32_MIN;
	int32_t x304 = 68366;
	int32_t t75 = -412936;

	t75 = (x301&((x302<x303)|x304));

	if (t75 != 2830) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x306 = INT32_MIN;
	int16_t x307 = INT16_MIN;
	uint32_t x308 = 234851824U;
	uint32_t t76 = 5U;

	t76 = (x305&((x306<x307)|x308));

	if (t76 != 233637088U) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x310 = INT8_MAX;
	int16_t x311 = INT16_MIN;
	int16_t x312 = INT16_MIN;
	int64_t t77 = INT64_MIN;

	t77 = (x309&((x310<x311)|x312));

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 182U;
	int16_t x314 = INT16_MAX;
	volatile int16_t x315 = -1;
	static int32_t x316 = INT32_MAX;
	volatile int32_t t78 = -473;

	t78 = (x313&((x314<x315)|x316));

	if (t78 != 182) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x318 = -3;
	int8_t x319 = INT8_MIN;
	int64_t x320 = -1LL;
	volatile int64_t t79 = -867369799770225312LL;

	t79 = (x317&((x318<x319)|x320));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x321 = 4556;
	uint64_t x322 = 0LLU;
	static int16_t x324 = -1;
	int32_t t80 = 844;

	t80 = (x321&((x322<x323)|x324));

	if (t80 != 4556) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = 7814561U;
	int8_t x326 = INT8_MIN;
	uint16_t x327 = UINT16_MAX;
	uint8_t x328 = 60U;
	volatile uint32_t t81 = 15326472U;

	t81 = (x325&((x326<x327)|x328));

	if (t81 != 33U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x330 = INT8_MIN;
	uint32_t x331 = 27286U;
	int64_t t82 = INT64_MIN;

	t82 = (x329&((x330<x331)|x332));

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = 316862447042LLU;
	uint8_t x334 = 3U;
	volatile int8_t x335 = -1;
	static int64_t x336 = INT64_MIN;
	uint64_t t83 = 3779373911858278786LLU;

	t83 = (x333&((x334<x335)|x336));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x338 = 11;
	int64_t x339 = -11467992LL;
	int8_t x340 = INT8_MIN;

	t84 = (x337&((x338<x339)|x340));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x341 = 21748607LLU;
	int8_t x342 = INT8_MIN;
	static int64_t x343 = INT64_MIN;
	static int16_t x344 = INT16_MAX;
	volatile uint64_t t85 = 27359462LLU;

	t85 = (x341&((x342<x343)|x344));

	if (t85 != 23423LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = -1;
	int32_t x347 = INT32_MIN;
	volatile uint16_t x348 = 177U;
	static int32_t t86 = 63;

	t86 = (x345&((x346<x347)|x348));

	if (t86 != 177) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = -1;
	int16_t x351 = INT16_MAX;

	t87 = (x349&((x350<x351)|x352));

	if (t87 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x353 = UINT16_MAX;
	uint8_t x354 = UINT8_MAX;
	volatile int32_t x356 = INT32_MIN;
	volatile int32_t t88 = 15099651;

	t88 = (x353&((x354<x355)|x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x357 = 1LLU;
	int16_t x359 = INT16_MIN;
	int64_t x360 = -1LL;
	uint64_t t89 = 2480701LLU;

	t89 = (x357&((x358<x359)|x360));

	if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x361 = -1;
	int8_t x362 = -1;
	int16_t x363 = 0;
	static volatile int64_t x364 = -20605609708577678LL;
	volatile int64_t t90 = -4840126844582921LL;

	t90 = (x361&((x362<x363)|x364));

	if (t90 != -20605609708577677LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x365 = INT16_MAX;
	volatile int64_t x366 = -1LL;
	int8_t x368 = -1;
	int32_t t91 = 238;

	t91 = (x365&((x366<x367)|x368));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint32_t x369 = 433954137U;
	volatile int8_t x372 = -2;
	static uint32_t t92 = 2745U;

	t92 = (x369&((x370<x371)|x372));

	if (t92 != 433954136U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -1;
	uint8_t x374 = 69U;
	uint8_t x375 = 1U;
	static uint16_t x376 = UINT16_MAX;
	int32_t t93 = -1;

	t93 = (x373&((x374<x375)|x376));

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = UINT8_MAX;
	int16_t x379 = -2921;
	volatile int32_t t94 = -11;

	t94 = (x377&((x378<x379)|x380));

	if (t94 != 128) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x381 = UINT64_MAX;
	uint64_t x382 = UINT64_MAX;
	int8_t x383 = INT8_MIN;
	static int8_t x384 = INT8_MIN;
	volatile uint64_t t95 = 1LLU;

	t95 = (x381&((x382<x383)|x384));

	if (t95 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = 0;
	static int32_t x386 = -4627;
	volatile int64_t x387 = -207LL;
	uint64_t x388 = 9864134696525542LLU;
	volatile uint64_t t96 = 54469787823158451LLU;

	t96 = (x385&((x386<x387)|x388));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = UINT32_MAX;
	volatile int64_t x390 = -14603LL;
	int32_t x391 = INT32_MIN;
	uint32_t x392 = 1872918094U;
	uint32_t t97 = 1520184870U;

	t97 = (x389&((x390<x391)|x392));

	if (t97 != 1872918094U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MAX;
	static int16_t x394 = INT16_MIN;
	int16_t x395 = INT16_MIN;
	int8_t x396 = -1;
	volatile int32_t t98 = INT32_MAX;

	t98 = (x393&((x394<x395)|x396));

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x397 = -1;
	uint64_t x398 = UINT64_MAX;
	int32_t x400 = INT32_MIN;
	int32_t t99 = INT32_MIN;

	t99 = (x397&((x398<x399)|x400));

	if (t99 != INT32_MIN) { NG(); } else { ; }
	
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

