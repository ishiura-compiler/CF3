#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x11 = -3;
volatile uint8_t x18 = 23U;
uint16_t x28 = 267U;
volatile int32_t t6 = 1172;
int64_t x36 = 65131872711068LL;
uint8_t x39 = 1U;
uint16_t x43 = 1U;
static uint64_t x48 = 2738654778963827LLU;
int64_t x49 = 3LL;
int64_t x51 = 849LL;
volatile int32_t x55 = 0;
int16_t x56 = INT16_MIN;
volatile int32_t t13 = 1897;
int16_t x58 = INT16_MIN;
static int32_t x60 = INT32_MAX;
int32_t t14 = INT32_MIN;
int64_t x65 = INT64_MIN;
volatile int8_t x68 = INT8_MIN;
uint32_t x71 = 44U;
uint8_t x72 = 0U;
uint32_t x87 = 2034467U;
uint16_t x90 = 1680U;
static volatile uint64_t t23 = 2757507579632284860LLU;
uint8_t x98 = UINT8_MAX;
volatile int16_t x108 = INT16_MIN;
volatile uint64_t t26 = 144418964LLU;
uint8_t x116 = 1U;
uint32_t x121 = 1592909954U;
uint16_t x124 = 4041U;
static volatile uint32_t x127 = 24U;
int8_t x129 = INT8_MIN;
uint8_t x130 = 12U;
int16_t x134 = INT16_MIN;
uint32_t t34 = UINT32_MAX;
static volatile int32_t x148 = -3;
int8_t x151 = -1;
static uint32_t x152 = UINT32_MAX;
uint64_t x173 = 62499LLU;
int64_t x174 = INT64_MIN;
static uint64_t t43 = 20LLU;
static int8_t x177 = -1;
volatile int8_t x179 = -1;
volatile int32_t x181 = -1;
uint64_t t45 = 176957303371LLU;
volatile uint64_t x186 = 3258LLU;
int32_t t46 = -13;
int32_t t47 = 407874350;
uint64_t x195 = UINT64_MAX;
volatile uint64_t x200 = 1005LLU;
volatile uint64_t t49 = 501LLU;
volatile int64_t x202 = 248LL;
static volatile int32_t x206 = 52892495;
static int32_t t51 = 8450;
int8_t x216 = INT8_MAX;
int16_t x219 = INT16_MAX;
static int32_t x220 = INT32_MIN;
int32_t x222 = INT32_MIN;
volatile uint16_t x224 = 17731U;
volatile int32_t t55 = 8;
int64_t x227 = 0LL;
uint8_t x228 = 5U;
int64_t t56 = 526104377017LL;
int16_t x229 = INT16_MAX;
uint32_t x231 = 412810U;
static int64_t x233 = -6859LL;
int64_t x234 = -1LL;
volatile int64_t x237 = 7502018312680LL;
static volatile int64_t t59 = -2187271LL;
volatile int8_t x246 = -1;
volatile int16_t x249 = -1132;
volatile int32_t t62 = 13188;
int8_t x253 = INT8_MIN;
static int64_t x257 = -1LL;
uint32_t x261 = 2U;
int8_t x262 = -5;
volatile uint32_t t65 = 126U;
uint32_t x266 = 73989580U;
int64_t t67 = 16699260358LL;
uint64_t x273 = 1277563032115625LLU;
int64_t x274 = -1LL;
int32_t x283 = INT32_MIN;
static int64_t t70 = INT64_MAX;
volatile int32_t t71 = -106302;
volatile int64_t t72 = 7193889913LL;
uint32_t x295 = 5825U;
static int16_t x298 = INT16_MAX;
uint32_t x304 = UINT32_MAX;
static int64_t x305 = 1LL;
int8_t x309 = -1;
int64_t x315 = -1LL;
int32_t t78 = -871204;
uint16_t x317 = 46U;
int64_t x318 = INT64_MIN;
uint32_t x319 = 5U;
int32_t t79 = 58233045;
uint8_t x325 = 1U;
int16_t x329 = -1;
int32_t x333 = 38462624;
uint32_t x348 = UINT32_MAX;
volatile uint64_t t87 = 951648LLU;
static int64_t x356 = -14656342610876LL;
int64_t t88 = 2LL;
volatile uint64_t t89 = 843LLU;
static uint8_t x365 = UINT8_MAX;
uint8_t x369 = UINT8_MAX;
uint64_t x372 = 2101406823LLU;
volatile uint64_t t92 = 11119189080LLU;
int8_t x373 = 2;
int64_t x375 = INT64_MIN;
static int64_t x376 = -14723061267281810LL;
int16_t x379 = INT16_MIN;
uint32_t x389 = 148941U;
volatile int32_t t98 = -232200008;


void f0(void) {
	static int8_t x1 = 8;
	int8_t x2 = 10;
	int8_t x3 = 7;
	int64_t x4 = -14312346234LL;
	volatile int64_t t0 = -2335659736942LL;

	t0 = (x1^((x2==x3)|x4));

	if (t0 != -14312346226LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	int16_t x6 = 4;
	int8_t x7 = 0;
	uint8_t x8 = 14U;
	static volatile int64_t t1 = 91LL;

	t1 = (x5^((x6==x7)|x8));

	if (t1 != -15LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	uint64_t x10 = UINT64_MAX;
	int32_t x12 = 40395149;
	int32_t t2 = -7754444;

	t2 = (x9^((x10==x11)|x12));

	if (t2 != 40410738) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 1700069133LLU;
	uint8_t x14 = 72U;
	static uint32_t x15 = 13U;
	int64_t x16 = INT64_MIN;
	volatile uint64_t t3 = 1194441180236446388LLU;

	t3 = (x13^((x14==x15)|x16));

	if (t3 != 9223372038554844941LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int32_t x19 = INT32_MIN;
	int32_t x20 = INT32_MIN;
	int32_t t4 = 1;

	t4 = (x17^((x18==x19)|x20));

	if (t4 != 2147450880) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 2LL;
	static uint8_t x22 = 7U;
	uint16_t x23 = UINT16_MAX;
	static uint32_t x24 = UINT32_MAX;
	static volatile int64_t t5 = 1LL;

	t5 = (x21^((x22==x23)|x24));

	if (t5 != 4294967293LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -41;
	volatile int16_t x26 = -1;
	int32_t x27 = 496418221;

	t6 = (x25^((x26==x27)|x28));

	if (t6 != -292) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	volatile int8_t x30 = INT8_MIN;
	int16_t x31 = INT16_MAX;
	int64_t x32 = 92909785890LL;
	volatile int64_t t7 = 0LL;

	t7 = (x29^((x30==x31)|x32));

	if (t7 != -9223371943944989918LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = INT8_MAX;
	int64_t x34 = -516703890249649LL;
	int64_t x35 = 55LL;
	int64_t t8 = -1370LL;

	t8 = (x33^((x34==x35)|x36));

	if (t8 != 65131872711139LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x37 = 31U;
	volatile int64_t x38 = INT64_MAX;
	int16_t x40 = 1115;
	volatile int32_t t9 = 474;

	t9 = (x37^((x38==x39)|x40));

	if (t9 != 1092) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	int16_t x42 = INT16_MIN;
	int32_t x44 = INT32_MAX;
	volatile int32_t t10 = 25901;

	t10 = (x41^((x42==x43)|x44));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x45 = 20418U;
	static uint16_t x46 = 1329U;
	int64_t x47 = INT64_MAX;
	uint64_t t11 = 61320093610056LLU;

	t11 = (x45^((x46==x47)|x48));

	if (t11 != 2738654778980529LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = INT64_MAX;
	uint32_t x52 = 4U;
	int64_t t12 = -126LL;

	t12 = (x49^((x50==x51)|x52));

	if (t12 != 7LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	volatile uint64_t x54 = 1595210618040025LLU;

	t13 = (x53^((x54==x55)|x56));

	if (t13 != 32640) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -1;
	int32_t x59 = -1;

	t14 = (x57^((x58==x59)|x60));

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x61 = -89;
	int32_t x62 = INT32_MIN;
	static volatile int8_t x63 = 28;
	volatile uint16_t x64 = 39U;
	volatile int32_t t15 = 9509;

	t15 = (x61^((x62==x63)|x64));

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = INT64_MIN;
	int8_t x67 = -1;
	int64_t t16 = -793930785130LL;

	t16 = (x65^((x66==x67)|x68));

	if (t16 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x69 = 4374208U;
	int32_t x70 = -1;
	uint32_t t17 = 136U;

	t17 = (x69^((x70==x71)|x72));

	if (t17 != 4374208U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	uint64_t x74 = UINT64_MAX;
	static int64_t x75 = INT64_MIN;
	volatile int8_t x76 = -56;
	volatile int32_t t18 = -358116;

	t18 = (x73^((x74==x75)|x76));

	if (t18 != 2147483592) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x77 = 4222;
	int8_t x78 = -1;
	volatile int8_t x79 = INT8_MIN;
	static volatile int8_t x80 = INT8_MIN;
	volatile int32_t t19 = 152608792;

	t19 = (x77^((x78==x79)|x80));

	if (t19 != -4098) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	static volatile uint16_t x82 = 10366U;
	uint64_t x83 = 133231474LLU;
	int32_t x84 = INT32_MAX;
	int32_t t20 = INT32_MIN;

	t20 = (x81^((x82==x83)|x84));

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = INT64_MIN;
	static int16_t x86 = 43;
	static int8_t x88 = 0;
	int64_t t21 = INT64_MIN;

	t21 = (x85^((x86==x87)|x88));

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = INT8_MAX;
	int16_t x91 = INT16_MIN;
	volatile uint32_t x92 = 1237U;
	volatile uint32_t t22 = 139774225U;

	t22 = (x89^((x90==x91)|x92));

	if (t22 != 1194U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = UINT64_MAX;
	static volatile int32_t x94 = -1;
	static uint32_t x95 = UINT32_MAX;
	int32_t x96 = INT32_MIN;

	t23 = (x93^((x94==x95)|x96));

	if (t23 != 2147483646LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = 31873;
	static volatile uint16_t x99 = 8U;
	static int64_t x100 = INT64_MAX;
	static volatile int64_t t24 = -221421LL;

	t24 = (x97^((x98==x99)|x100));

	if (t24 != 9223372036854743934LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	int16_t x102 = INT16_MAX;
	static int16_t x103 = -14;
	int64_t x104 = INT64_MIN;
	int64_t t25 = -7324115LL;

	t25 = (x101^((x102==x103)|x104));

	if (t25 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x105 = 6LLU;
	uint8_t x106 = UINT8_MAX;
	uint32_t x107 = UINT32_MAX;

	t26 = (x105^((x106==x107)|x108));

	if (t26 != 18446744073709518854LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x109 = 7706U;
	uint16_t x110 = UINT16_MAX;
	int16_t x111 = -1;
	uint16_t x112 = UINT16_MAX;
	uint32_t t27 = 11338471U;

	t27 = (x109^((x110==x111)|x112));

	if (t27 != 57829U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -16215938670480165LL;
	volatile int8_t x114 = 1;
	uint64_t x115 = 36936081663804717LLU;
	volatile int64_t t28 = -6092634758884274LL;

	t28 = (x113^((x114==x115)|x116));

	if (t28 != -16215938670480166LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x117 = INT16_MAX;
	int64_t x118 = -57510LL;
	int16_t x119 = 1;
	int8_t x120 = -1;
	int32_t t29 = -1575;

	t29 = (x117^((x118==x119)|x120));

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = -1;
	uint16_t x123 = UINT16_MAX;
	volatile uint32_t t30 = 232911U;

	t30 = (x121^((x122==x123)|x124));

	if (t30 != 1592913739U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MAX;
	int32_t x126 = -1;
	static int8_t x128 = INT8_MAX;
	volatile int32_t t31 = 1;

	t31 = (x125^((x126==x127)|x128));

	if (t31 != 32640) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x131 = -2350537LL;
	int8_t x132 = -1;
	int32_t t32 = 82860;

	t32 = (x129^((x130==x131)|x132));

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	int64_t x135 = INT64_MIN;
	int16_t x136 = INT16_MAX;
	int32_t t33 = -19024;

	t33 = (x133^((x134==x135)|x136));

	if (t33 != -2147450881) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -1;
	int64_t x138 = 507155309LL;
	volatile uint8_t x139 = UINT8_MAX;
	volatile uint32_t x140 = 0U;

	t34 = (x137^((x138==x139)|x140));

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = UINT32_MAX;
	static uint16_t x142 = 4U;
	uint64_t x143 = 43LLU;
	uint8_t x144 = 1U;
	static uint32_t t35 = 2097189496U;

	t35 = (x141^((x142==x143)|x144));

	if (t35 != 4294967294U) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x145 = 1008LL;
	int32_t x146 = -1;
	volatile int8_t x147 = -3;
	int64_t t36 = -1632LL;

	t36 = (x145^((x146==x147)|x148));

	if (t36 != -1011LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x149 = INT16_MAX;
	volatile int64_t x150 = INT64_MAX;
	uint32_t t37 = 543048U;

	t37 = (x149^((x150==x151)|x152));

	if (t37 != 4294934528U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = 208;
	uint8_t x154 = UINT8_MAX;
	volatile int64_t x155 = INT64_MAX;
	static volatile uint8_t x156 = 51U;
	volatile int32_t t38 = 472184;

	t38 = (x153^((x154==x155)|x156));

	if (t38 != 227) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 13966U;
	int8_t x158 = -1;
	volatile int32_t x159 = INT32_MIN;
	uint8_t x160 = UINT8_MAX;
	volatile uint32_t t39 = 2439U;

	t39 = (x157^((x158==x159)|x160));

	if (t39 != 13937U) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x161 = -1LL;
	int32_t x162 = INT32_MIN;
	static int16_t x163 = INT16_MIN;
	int64_t x164 = -1577350919278939LL;
	int64_t t40 = -3470778579276563435LL;

	t40 = (x161^((x162==x163)|x164));

	if (t40 != 1577350919278938LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 3U;
	int8_t x166 = INT8_MIN;
	int16_t x167 = INT16_MIN;
	int16_t x168 = -1;
	static volatile int32_t t41 = -1750;

	t41 = (x165^((x166==x167)|x168));

	if (t41 != -4) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x169 = INT16_MIN;
	static int32_t x170 = -1;
	int64_t x171 = -1LL;
	static int16_t x172 = INT16_MAX;
	volatile int32_t t42 = -1;

	t42 = (x169^((x170==x171)|x172));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x175 = -1;
	uint64_t x176 = UINT64_MAX;

	t43 = (x173^((x174==x175)|x176));

	if (t43 != 18446744073709489116LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x178 = -1;
	volatile uint32_t x180 = 503490803U;
	static uint32_t t44 = 145U;

	t44 = (x177^((x178==x179)|x180));

	if (t44 != 3791476492U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x182 = INT16_MIN;
	int16_t x183 = -1;
	volatile uint64_t x184 = 65839666729372LLU;

	t45 = (x181^((x182==x183)|x184));

	if (t45 != 18446678234042822243LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = UINT16_MAX;
	int32_t x187 = 3849;
	volatile int8_t x188 = INT8_MAX;

	t46 = (x185^((x186==x187)|x188));

	if (t46 != 65408) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	int64_t x190 = -187102LL;
	int8_t x191 = INT8_MIN;
	int8_t x192 = -1;

	t47 = (x189^((x190==x191)|x192));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 358U;
	int8_t x194 = INT8_MIN;
	uint8_t x196 = 1U;
	volatile int32_t t48 = -1347825;

	t48 = (x193^((x194==x195)|x196));

	if (t48 != 359) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 556129LLU;
	int64_t x198 = -1LL;
	static volatile int64_t x199 = -26731349520091LL;

	t49 = (x197^((x198==x199)|x200));

	if (t49 != 556940LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MIN;
	int32_t x203 = -1;
	static volatile int64_t x204 = INT64_MIN;
	int64_t t50 = 0LL;

	t50 = (x201^((x202==x203)|x204));

	if (t50 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -1;
	volatile int64_t x207 = 15446563LL;
	volatile uint8_t x208 = 14U;

	t51 = (x205^((x206==x207)|x208));

	if (t51 != -15) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = -1;
	uint64_t x210 = 7423LLU;
	static int8_t x211 = -1;
	uint8_t x212 = 3U;
	int32_t t52 = -5;

	t52 = (x209^((x210==x211)|x212));

	if (t52 != -4) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x213 = INT8_MIN;
	int32_t x214 = -5489;
	uint16_t x215 = 41U;
	volatile int32_t t53 = 1;

	t53 = (x213^((x214==x215)|x216));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x217 = 1;
	static int8_t x218 = 1;
	static volatile int32_t t54 = 962383224;

	t54 = (x217^((x218==x219)|x220));

	if (t54 != -2147483647) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 4U;
	static volatile uint8_t x223 = 5U;

	t55 = (x221^((x222==x223)|x224));

	if (t55 != 17735) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x225 = 377847LL;
	static uint8_t x226 = 1U;

	t56 = (x225^((x226==x227)|x228));

	if (t56 != 377842LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x230 = 4682073013LLU;
	int16_t x232 = INT16_MIN;
	int32_t t57 = -58106;

	t57 = (x229^((x230==x231)|x232));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint64_t x235 = 3164LLU;
	uint8_t x236 = UINT8_MAX;
	int64_t t58 = 56637329LL;

	t58 = (x233^((x234==x235)|x236));

	if (t58 != -6710LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x238 = UINT16_MAX;
	volatile int8_t x239 = 3;
	static int8_t x240 = 46;

	t59 = (x237^((x238==x239)|x240));

	if (t59 != 7502018312646LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = -1;
	uint32_t x242 = UINT32_MAX;
	int64_t x243 = -1LL;
	static int16_t x244 = INT16_MIN;
	static int32_t t60 = -549026;

	t60 = (x241^((x242==x243)|x244));

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = -1;
	volatile int32_t x247 = INT32_MIN;
	uint8_t x248 = 0U;
	static volatile int32_t t61 = 29889;

	t61 = (x245^((x246==x247)|x248));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x250 = 2U;
	volatile int64_t x251 = INT64_MAX;
	volatile int16_t x252 = -1;

	t62 = (x249^((x250==x251)|x252));

	if (t62 != 1131) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x254 = 380;
	volatile int8_t x255 = -1;
	int32_t x256 = INT32_MAX;
	int32_t t63 = 296904;

	t63 = (x253^((x254==x255)|x256));

	if (t63 != -2147483521) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x258 = 0U;
	uint16_t x259 = 5U;
	int64_t x260 = INT64_MIN;
	volatile int64_t t64 = INT64_MAX;

	t64 = (x257^((x258==x259)|x260));

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x263 = UINT64_MAX;
	uint8_t x264 = UINT8_MAX;

	t65 = (x261^((x262==x263)|x264));

	if (t65 != 253U) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = UINT16_MAX;
	static int16_t x267 = INT16_MIN;
	int16_t x268 = -1;
	volatile int32_t t66 = -100396364;

	t66 = (x265^((x266==x267)|x268));

	if (t66 != -65536) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MAX;
	static uint8_t x270 = 79U;
	volatile int64_t x271 = 240LL;
	uint32_t x272 = 713U;

	t67 = (x269^((x270==x271)|x272));

	if (t67 != 9223372036854775094LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x275 = -1021492;
	int16_t x276 = -10679;
	uint64_t t68 = 3696570LLU;

	t68 = (x273^((x274==x275)|x276));

	if (t68 != 18445466510677430240LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x277 = INT16_MIN;
	static int16_t x278 = -58;
	uint32_t x279 = UINT32_MAX;
	int32_t x280 = -52114;
	static volatile int32_t t69 = -277368;

	t69 = (x277^((x278==x279)|x280));

	if (t69 != 46190) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x281 = INT64_MIN;
	static int32_t x282 = 6902;
	volatile int8_t x284 = -1;

	t70 = (x281^((x282==x283)|x284));

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = UINT16_MAX;
	int16_t x286 = -284;
	uint8_t x287 = 55U;
	int16_t x288 = -170;

	t71 = (x285^((x286==x287)|x288));

	if (t71 != -65367) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = 14721U;
	int32_t x290 = INT32_MIN;
	int16_t x291 = -1;
	int64_t x292 = INT64_MAX;

	t72 = (x289^((x290==x291)|x292));

	if (t72 != 9223372036854761086LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MIN;
	int64_t x294 = INT64_MAX;
	volatile int16_t x296 = 973;
	static int64_t t73 = 279LL;

	t73 = (x293^((x294==x295)|x296));

	if (t73 != -9223372036854774835LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = 1;
	uint16_t x299 = UINT16_MAX;
	volatile int64_t x300 = INT64_MAX;
	volatile int64_t t74 = -1367650405667LL;

	t74 = (x297^((x298==x299)|x300));

	if (t74 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x301 = INT32_MIN;
	int64_t x302 = -1LL;
	uint16_t x303 = 3U;
	uint32_t t75 = 8U;

	t75 = (x301^((x302==x303)|x304));

	if (t75 != 2147483647U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = -1;
	int32_t x307 = INT32_MIN;
	uint16_t x308 = 12U;
	volatile int64_t t76 = 344415754506LL;

	t76 = (x305^((x306==x307)|x308));

	if (t76 != 13LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x310 = -53;
	uint8_t x311 = UINT8_MAX;
	volatile int32_t x312 = INT32_MAX;
	volatile int32_t t77 = INT32_MIN;

	t77 = (x309^((x310==x311)|x312));

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = UINT16_MAX;
	int64_t x314 = INT64_MIN;
	uint16_t x316 = UINT16_MAX;

	t78 = (x313^((x314==x315)|x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x320 = -1;

	t79 = (x317^((x318==x319)|x320));

	if (t79 != -47) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = UINT16_MAX;
	uint16_t x322 = 1496U;
	int32_t x323 = INT32_MIN;
	static int8_t x324 = INT8_MAX;
	int32_t t80 = 0;

	t80 = (x321^((x322==x323)|x324));

	if (t80 != 65408) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint32_t x326 = 536504U;
	int64_t x327 = INT64_MIN;
	uint64_t x328 = UINT64_MAX;
	volatile uint64_t t81 = 67118762020249056LLU;

	t81 = (x325^((x326==x327)|x328));

	if (t81 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x330 = -3286;
	int64_t x331 = INT64_MIN;
	int16_t x332 = INT16_MAX;
	int32_t t82 = 3493107;

	t82 = (x329^((x330==x331)|x332));

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x334 = 1U;
	uint32_t x335 = 1002U;
	static volatile int8_t x336 = -1;
	int32_t t83 = 3421;

	t83 = (x333^((x334==x335)|x336));

	if (t83 != -38462625) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MIN;
	uint8_t x338 = 26U;
	int32_t x339 = INT32_MIN;
	int64_t x340 = -62683LL;
	int64_t t84 = -377799LL;

	t84 = (x337^((x338==x339)|x340));

	if (t84 != 62629LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x341 = 0U;
	static uint64_t x342 = 702000738527LLU;
	uint16_t x343 = UINT16_MAX;
	int32_t x344 = INT32_MIN;
	volatile int32_t t85 = INT32_MIN;

	t85 = (x341^((x342==x343)|x344));

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	static int8_t x346 = 1;
	int8_t x347 = INT8_MIN;
	uint32_t t86 = 62866707U;

	t86 = (x345^((x346==x347)|x348));

	if (t86 != 32767U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 187LLU;
	volatile uint32_t x350 = 164U;
	uint64_t x351 = 186082LLU;
	uint32_t x352 = 1U;

	t87 = (x349^((x350==x351)|x352));

	if (t87 != 186LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint32_t x353 = 755U;
	static uint32_t x354 = 4764U;
	int8_t x355 = INT8_MIN;

	t88 = (x353^((x354==x355)|x356));

	if (t88 != -14656342610249LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = UINT64_MAX;
	static int16_t x358 = INT16_MAX;
	volatile uint64_t x359 = 279941LLU;
	uint16_t x360 = UINT16_MAX;

	t89 = (x357^((x358==x359)|x360));

	if (t89 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = -972;
	volatile int8_t x362 = INT8_MIN;
	int32_t x363 = -445041344;
	int16_t x364 = INT16_MAX;
	volatile int32_t t90 = -1064221305;

	t90 = (x361^((x362==x363)|x364));

	if (t90 != -31797) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x366 = 1U;
	int64_t x367 = INT64_MIN;
	uint16_t x368 = UINT16_MAX;
	volatile int32_t t91 = -3981;

	t91 = (x365^((x366==x367)|x368));

	if (t91 != 65280) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x370 = INT16_MAX;
	int64_t x371 = INT64_MIN;

	t92 = (x369^((x370==x371)|x372));

	if (t92 != 2101406872LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x374 = INT64_MAX;
	int64_t t93 = 52395LL;

	t93 = (x373^((x374==x375)|x376));

	if (t93 != -14723061267281812LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 2U;
	uint32_t x378 = 22794865U;
	static volatile int16_t x380 = INT16_MAX;
	volatile int32_t t94 = 228;

	t94 = (x377^((x378==x379)|x380));

	if (t94 != 32765) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MIN;
	int64_t x382 = -1LL;
	static int32_t x383 = INT32_MIN;
	int32_t x384 = 69;
	volatile int32_t t95 = -2;

	t95 = (x381^((x382==x383)|x384));

	if (t95 != -32699) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x385 = 4736U;
	int32_t x386 = INT32_MIN;
	int16_t x387 = 1;
	static int64_t x388 = 33592446095LL;
	int64_t t96 = 1LL;

	t96 = (x385^((x386==x387)|x388));

	if (t96 != 33592450575LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x390 = 8880U;
	int32_t x391 = INT32_MAX;
	static int32_t x392 = INT32_MIN;
	volatile uint32_t t97 = 31549299U;

	t97 = (x389^((x390==x391)|x392));

	if (t97 != 2147632589U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	uint8_t x394 = 20U;
	volatile int64_t x395 = -1LL;
	int8_t x396 = -2;

	t98 = (x393^((x394==x395)|x396));

	if (t98 != 2147483646) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MAX;
	uint32_t x398 = 92212U;
	int32_t x399 = INT32_MAX;
	volatile int64_t x400 = -862259LL;
	int64_t t99 = 234860511888674506LL;

	t99 = (x397^((x398==x399)|x400));

	if (t99 != -874446LL) { NG(); } else { ; }
	
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

