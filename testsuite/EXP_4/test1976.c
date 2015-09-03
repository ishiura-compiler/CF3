#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = UINT8_MAX;
int16_t x7 = INT16_MAX;
volatile int16_t x12 = -1;
int16_t x15 = -1838;
int8_t x17 = INT8_MIN;
static volatile int8_t x22 = 0;
uint32_t x25 = 19U;
int32_t x26 = INT32_MAX;
volatile int32_t t7 = 279;
static int32_t x38 = INT32_MAX;
volatile int32_t x40 = 7734;
int16_t x44 = INT16_MIN;
volatile int16_t x46 = INT16_MIN;
int32_t x48 = -2036;
static volatile uint8_t x63 = UINT8_MAX;
volatile uint16_t x64 = 88U;
int8_t x65 = -1;
static int64_t x66 = -1LL;
int16_t x71 = -996;
uint64_t x75 = UINT64_MAX;
uint16_t x92 = UINT16_MAX;
uint32_t x93 = 243U;
uint32_t x96 = 22838U;
uint64_t x97 = 493208826210LLU;
uint16_t x103 = UINT16_MAX;
static int8_t x110 = INT8_MAX;
static int32_t x112 = INT32_MIN;
int64_t x114 = INT64_MAX;
static volatile int64_t x117 = -1LL;
volatile uint32_t x118 = UINT32_MAX;
uint8_t x119 = UINT8_MAX;
volatile uint32_t x124 = 15U;
uint16_t x128 = 632U;
volatile int32_t t31 = 884394;
volatile uint16_t x134 = UINT16_MAX;
static int32_t x136 = INT32_MIN;
int64_t x140 = INT64_MIN;
int64_t x146 = -1LL;
volatile uint64_t x147 = 55067451990645921LLU;
int16_t x161 = INT16_MAX;
volatile int64_t x165 = INT64_MIN;
int32_t x172 = -1266;
int8_t x176 = INT8_MAX;
int32_t x177 = INT32_MIN;
int16_t x179 = INT16_MIN;
volatile int32_t x188 = -1;
int8_t x190 = INT8_MIN;
uint32_t x196 = UINT32_MAX;
static int16_t x197 = INT16_MIN;
uint64_t x200 = UINT64_MAX;
volatile int32_t t49 = 939370400;
volatile int64_t x201 = INT64_MAX;
int64_t x202 = INT64_MAX;
volatile int16_t x208 = 338;
uint8_t x214 = 1U;
static uint16_t x219 = UINT16_MAX;
uint32_t x223 = 523672U;
static volatile int32_t t56 = -90012136;
volatile int32_t t58 = -1;
int32_t x238 = -1;
int32_t x245 = 1;
volatile uint32_t x251 = 428U;
volatile int32_t t63 = 7189506;
volatile int32_t t65 = -66491072;
int32_t x266 = -72;
int16_t x272 = INT16_MIN;
uint16_t x273 = UINT16_MAX;
int32_t t68 = -24389;
volatile int16_t x277 = 0;
uint64_t x280 = 889LLU;
int64_t x286 = -3273722484042818LL;
static int16_t x293 = INT16_MIN;
uint32_t x303 = 12394U;
static volatile int32_t t76 = -473559;
uint64_t x311 = UINT64_MAX;
volatile uint32_t x315 = 130711531U;
int32_t x318 = -172078;
volatile uint16_t x322 = 1026U;
volatile int32_t t82 = 3634250;
uint16_t x334 = 19U;
static int32_t t83 = -10;
static uint64_t x338 = UINT64_MAX;
uint8_t x350 = UINT8_MAX;
int16_t x355 = 2;
static int32_t x358 = -12443501;
uint8_t x362 = UINT8_MAX;
static uint32_t x363 = UINT32_MAX;
static int32_t x366 = 3138502;
static int64_t x367 = INT64_MAX;
int16_t x369 = 0;
uint8_t x378 = 0U;
uint8_t x382 = UINT8_MAX;
volatile int32_t x384 = INT32_MIN;
volatile int32_t t96 = -159638335;
static int16_t x389 = INT16_MIN;
uint64_t x391 = 166766124124LLU;
int32_t t97 = 2517;
static volatile int64_t x400 = INT64_MIN;


void f0(void) {
	static uint32_t x1 = UINT32_MAX;
	static int8_t x2 = INT8_MIN;
	int8_t x4 = 1;
	uint32_t t0 = 1692421093U;

	t0 = (x1^(x2<(x3|x4)));

	if (t0 != 4294967294U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	static uint8_t x6 = 5U;
	uint32_t x8 = 17568U;
	int32_t t1 = -281;

	t1 = (x5^(x6<(x7|x8)));

	if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	int16_t x10 = 4227;
	int64_t x11 = 2LL;
	static int32_t t2 = -21715;

	t2 = (x9^(x10<(x11|x12)));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MIN;
	volatile int16_t x14 = INT16_MIN;
	static int64_t x16 = -1578LL;
	int32_t t3 = 73893074;

	t3 = (x13^(x14<(x15|x16)));

	if (t3 != -127) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x18 = UINT8_MAX;
	volatile int32_t x19 = 2;
	volatile uint32_t x20 = 705U;
	static int32_t t4 = -126971786;

	t4 = (x17^(x18<(x19|x20)));

	if (t4 != -127) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 205323U;
	int8_t x23 = 51;
	int32_t x24 = INT32_MIN;
	volatile uint32_t t5 = 146U;

	t5 = (x21^(x22<(x23|x24)));

	if (t5 != 205323U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x27 = INT16_MIN;
	volatile int64_t x28 = 1075LL;
	uint32_t t6 = 190736757U;

	t6 = (x25^(x26<(x27|x28)));

	if (t6 != 19U) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = -1;
	int8_t x30 = INT8_MIN;
	static uint16_t x31 = 1117U;
	static volatile uint64_t x32 = 1397508601998930794LLU;

	t7 = (x29^(x30<(x31|x32)));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = 1;
	volatile uint8_t x34 = 11U;
	volatile uint32_t x35 = 38762U;
	uint16_t x36 = 16U;
	int32_t t8 = -159149643;

	t8 = (x33^(x34<(x35|x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = 520999302999682173LLU;
	volatile int8_t x39 = -1;
	uint64_t t9 = 1068165974899LLU;

	t9 = (x37^(x38<(x39|x40)));

	if (t9 != 520999302999682173LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	uint16_t x42 = UINT16_MAX;
	int8_t x43 = INT8_MAX;
	volatile int64_t t10 = INT64_MIN;

	t10 = (x41^(x42<(x43|x44)));

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 64015280U;
	static int16_t x47 = INT16_MIN;
	uint32_t t11 = 951613U;

	t11 = (x45^(x46<(x47|x48)));

	if (t11 != 64015281U) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 31319684U;
	static int32_t x50 = -53375052;
	static int64_t x51 = INT64_MAX;
	static volatile int16_t x52 = INT16_MIN;
	uint32_t t12 = 1269757U;

	t12 = (x49^(x50<(x51|x52)));

	if (t12 != 31319685U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	int64_t x54 = INT64_MIN;
	int16_t x55 = 309;
	static volatile uint64_t x56 = 347579LLU;
	static int32_t t13 = -847;

	t13 = (x53^(x54<(x55|x56)));

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 1491U;
	int16_t x58 = 0;
	int16_t x59 = INT16_MIN;
	static int64_t x60 = 93436028LL;
	static int32_t t14 = 1189600;

	t14 = (x57^(x58<(x59|x60)));

	if (t14 != 1491) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 9U;
	static int64_t x62 = -1LL;
	volatile int32_t t15 = 0;

	t15 = (x61^(x62<(x63|x64)));

	if (t15 != 8) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x67 = 1346496LLU;
	int32_t x68 = INT32_MAX;
	volatile int32_t t16 = -6229;

	t16 = (x65^(x66<(x67|x68)));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	int8_t x70 = INT8_MIN;
	volatile int8_t x72 = 14;
	volatile int32_t t17 = INT32_MAX;

	t17 = (x69^(x70<(x71|x72)));

	if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MAX;
	static int8_t x74 = INT8_MIN;
	int64_t x76 = INT64_MIN;
	volatile int32_t t18 = 128459;

	t18 = (x73^(x74<(x75|x76)));

	if (t18 != 2147483646) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -1;
	int32_t x78 = -168157;
	int32_t x79 = INT32_MIN;
	int16_t x80 = INT16_MIN;
	int32_t t19 = -8055;

	t19 = (x77^(x78<(x79|x80)));

	if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	volatile int16_t x82 = 1647;
	int32_t x83 = -6895;
	int32_t x84 = INT32_MIN;
	volatile int32_t t20 = INT32_MIN;

	t20 = (x81^(x82<(x83|x84)));

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 80U;
	volatile uint32_t x86 = UINT32_MAX;
	static int64_t x87 = -1LL;
	static volatile int8_t x88 = INT8_MIN;
	volatile int32_t t21 = -227998;

	t21 = (x85^(x86<(x87|x88)));

	if (t21 != 80) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = 9;
	volatile int64_t x90 = INT64_MIN;
	uint16_t x91 = 25984U;
	int32_t t22 = -448394;

	t22 = (x89^(x90<(x91|x92)));

	if (t22 != 8) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x94 = INT16_MIN;
	int8_t x95 = INT8_MIN;
	uint32_t t23 = 7U;

	t23 = (x93^(x94<(x95|x96)));

	if (t23 != 242U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x98 = INT16_MAX;
	int16_t x99 = INT16_MIN;
	int64_t x100 = -533973LL;
	uint64_t t24 = 696658111754280LLU;

	t24 = (x97^(x98<(x99|x100)));

	if (t24 != 493208826210LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint16_t x101 = 24U;
	uint32_t x102 = 113378U;
	static volatile uint32_t x104 = UINT32_MAX;
	static volatile int32_t t25 = -11100;

	t25 = (x101^(x102<(x103|x104)));

	if (t25 != 25) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -1;
	static int32_t x106 = INT32_MAX;
	int32_t x107 = 4020;
	uint64_t x108 = UINT64_MAX;
	volatile int32_t t26 = -14105;

	t26 = (x105^(x106<(x107|x108)));

	if (t26 != -2) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x109 = 76U;
	static uint16_t x111 = 2811U;
	volatile int32_t t27 = -286561;

	t27 = (x109^(x110<(x111|x112)));

	if (t27 != 76) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -1;
	int16_t x115 = INT16_MAX;
	int16_t x116 = INT16_MIN;
	int32_t t28 = 7565;

	t28 = (x113^(x114<(x115|x116)));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x120 = 151410LL;
	static int64_t t29 = -13757720793851197LL;

	t29 = (x117^(x118<(x119|x120)));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = UINT32_MAX;
	int64_t x122 = 980975145LL;
	uint32_t x123 = 1U;
	volatile uint32_t t30 = UINT32_MAX;

	t30 = (x121^(x122<(x123|x124)));

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = 3;
	int32_t x126 = INT32_MAX;
	uint64_t x127 = 7048342462550LLU;

	t31 = (x125^(x126<(x127|x128)));

	if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x129 = INT16_MAX;
	int16_t x130 = -89;
	volatile uint32_t x131 = 1657036U;
	static int16_t x132 = 1;
	volatile int32_t t32 = 0;

	t32 = (x129^(x130<(x131|x132)));

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x133 = INT32_MAX;
	volatile int16_t x135 = -1;
	int32_t t33 = INT32_MAX;

	t33 = (x133^(x134<(x135|x136)));

	if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -14;
	volatile int32_t x138 = INT32_MIN;
	int8_t x139 = 1;
	static volatile int32_t t34 = -140300708;

	t34 = (x137^(x138<(x139|x140)));

	if (t34 != -14) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x141 = UINT32_MAX;
	int32_t x142 = -1;
	int16_t x143 = 17;
	uint32_t x144 = 12U;
	static uint32_t t35 = UINT32_MAX;

	t35 = (x141^(x142<(x143|x144)));

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = 79U;
	volatile int16_t x148 = -4;
	volatile int32_t t36 = 40;

	t36 = (x145^(x146<(x147|x148)));

	if (t36 != 79) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = UINT16_MAX;
	static volatile uint64_t x150 = 1591LLU;
	int32_t x151 = 842;
	int16_t x152 = 62;
	int32_t t37 = -1770;

	t37 = (x149^(x150<(x151|x152)));

	if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 2U;
	uint16_t x154 = 0U;
	int8_t x155 = 1;
	int16_t x156 = 6;
	volatile int32_t t38 = -13799;

	t38 = (x153^(x154<(x155|x156)));

	if (t38 != 3) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = UINT16_MAX;
	uint32_t x158 = 605523011U;
	int32_t x159 = INT32_MAX;
	int64_t x160 = INT64_MIN;
	volatile int32_t t39 = -1;

	t39 = (x157^(x158<(x159|x160)));

	if (t39 != 65535) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x162 = 22996365714558LLU;
	int64_t x163 = INT64_MIN;
	static int32_t x164 = INT32_MIN;
	static int32_t t40 = 52418970;

	t40 = (x161^(x162<(x163|x164)));

	if (t40 != 32766) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x166 = INT8_MAX;
	static volatile uint64_t x167 = 11636614581244LLU;
	static int16_t x168 = -1;
	volatile int64_t t41 = -3562401467LL;

	t41 = (x165^(x166<(x167|x168)));

	if (t41 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x169 = 0U;
	int16_t x170 = INT16_MIN;
	int32_t x171 = INT32_MAX;
	volatile int32_t t42 = -950407;

	t42 = (x169^(x170<(x171|x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	volatile int64_t x174 = INT64_MIN;
	volatile int64_t x175 = -1LL;
	static int64_t t43 = -316866682356060LL;

	t43 = (x173^(x174<(x175|x176)));

	if (t43 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x178 = 25U;
	int16_t x180 = INT16_MAX;
	int32_t t44 = INT32_MIN;

	t44 = (x177^(x178<(x179|x180)));

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 3U;
	volatile int64_t x182 = INT64_MIN;
	int8_t x183 = INT8_MAX;
	volatile uint32_t x184 = 104195U;
	static volatile int32_t t45 = 2;

	t45 = (x181^(x182<(x183|x184)));

	if (t45 != 2) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x185 = -1;
	int64_t x186 = INT64_MIN;
	int64_t x187 = -157112121873869196LL;
	volatile int32_t t46 = -38;

	t46 = (x185^(x186<(x187|x188)));

	if (t46 != -2) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x189 = INT64_MAX;
	int8_t x191 = INT8_MAX;
	int8_t x192 = INT8_MAX;
	static int64_t t47 = -86778345LL;

	t47 = (x189^(x190<(x191|x192)));

	if (t47 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x193 = -1LL;
	int32_t x194 = 1;
	int16_t x195 = 1;
	volatile int64_t t48 = -515344594783230LL;

	t48 = (x193^(x194<(x195|x196)));

	if (t48 != -2LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x198 = 2U;
	uint16_t x199 = UINT16_MAX;

	t49 = (x197^(x198<(x199|x200)));

	if (t49 != -32767) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x203 = 0;
	volatile int8_t x204 = -30;
	volatile int64_t t50 = INT64_MAX;

	t50 = (x201^(x202<(x203|x204)));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = UINT32_MAX;
	int32_t x206 = INT32_MIN;
	uint8_t x207 = 0U;
	uint32_t t51 = 0U;

	t51 = (x205^(x206<(x207|x208)));

	if (t51 != 4294967294U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = UINT16_MAX;
	volatile int8_t x210 = INT8_MIN;
	int16_t x211 = INT16_MAX;
	uint64_t x212 = 3922955599LLU;
	int32_t t52 = -941356002;

	t52 = (x209^(x210<(x211|x212)));

	if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 4009970374LLU;
	int16_t x215 = -1;
	int8_t x216 = -52;
	static volatile uint64_t t53 = 1733LLU;

	t53 = (x213^(x214<(x215|x216)));

	if (t53 != 4009970374LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	int32_t x218 = -1;
	int16_t x220 = 97;
	int32_t t54 = 14;

	t54 = (x217^(x218<(x219|x220)));

	if (t54 != -127) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 233U;
	volatile uint8_t x222 = UINT8_MAX;
	int32_t x224 = INT32_MIN;
	volatile int32_t t55 = 36982570;

	t55 = (x221^(x222<(x223|x224)));

	if (t55 != 232) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x225 = INT32_MAX;
	int32_t x226 = -62;
	static int32_t x227 = -1;
	volatile int64_t x228 = INT64_MIN;

	t56 = (x225^(x226<(x227|x228)));

	if (t56 != 2147483646) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 69071LLU;
	int32_t x230 = 10;
	int64_t x231 = -523237160122977LL;
	uint16_t x232 = 6U;
	static uint64_t t57 = 50301LLU;

	t57 = (x229^(x230<(x231|x232)));

	if (t57 != 69071LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = 8744U;
	volatile uint8_t x234 = 5U;
	uint16_t x235 = 436U;
	int16_t x236 = -129;

	t58 = (x233^(x234<(x235|x236)));

	if (t58 != 8744) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = 4389521301898739LLU;
	volatile uint8_t x239 = 16U;
	int32_t x240 = INT32_MIN;
	volatile uint64_t t59 = 62396LLU;

	t59 = (x237^(x238<(x239|x240)));

	if (t59 != 4389521301898739LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x241 = -1;
	volatile int32_t x242 = -74088;
	int32_t x243 = -18918771;
	int8_t x244 = -4;
	volatile int32_t t60 = -32537;

	t60 = (x241^(x242<(x243|x244)));

	if (t60 != -2) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x246 = 3268799738869921LL;
	int16_t x247 = INT16_MIN;
	uint8_t x248 = UINT8_MAX;
	int32_t t61 = 123374169;

	t61 = (x245^(x246<(x247|x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = 2338039LLU;
	int32_t x250 = 2879637;
	volatile int8_t x252 = INT8_MIN;
	volatile uint64_t t62 = 20LLU;

	t62 = (x249^(x250<(x251|x252)));

	if (t62 != 2338038LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = 17571U;
	uint32_t x254 = 1808968U;
	volatile uint16_t x255 = 16U;
	int8_t x256 = INT8_MIN;

	t63 = (x253^(x254<(x255|x256)));

	if (t63 != 17570) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = 0U;
	volatile int64_t x258 = INT64_MAX;
	uint16_t x259 = 37U;
	volatile uint32_t x260 = 3444092U;
	volatile int32_t t64 = -286143088;

	t64 = (x257^(x258<(x259|x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MAX;
	uint64_t x262 = UINT64_MAX;
	int32_t x263 = -1;
	int32_t x264 = INT32_MIN;

	t65 = (x261^(x262<(x263|x264)));

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -1LL;
	int32_t x267 = INT32_MIN;
	int32_t x268 = INT32_MIN;
	static int64_t t66 = 60LL;

	t66 = (x265^(x266<(x267|x268)));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x269 = 107U;
	int8_t x270 = -1;
	static int32_t x271 = -1;
	volatile uint32_t t67 = 171414U;

	t67 = (x269^(x270<(x271|x272)));

	if (t67 != 107U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x274 = 43863843U;
	uint8_t x275 = 15U;
	uint8_t x276 = 2U;

	t68 = (x273^(x274<(x275|x276)));

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x278 = -1;
	volatile uint8_t x279 = 77U;
	volatile int32_t t69 = -324166;

	t69 = (x277^(x278<(x279|x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x281 = -6;
	int32_t x282 = -1;
	int64_t x283 = INT64_MIN;
	int8_t x284 = INT8_MIN;
	static int32_t t70 = -25839;

	t70 = (x281^(x282<(x283|x284)));

	if (t70 != -6) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = -1;
	int64_t x287 = -1LL;
	volatile uint8_t x288 = 47U;
	int32_t t71 = 7;

	t71 = (x285^(x286<(x287|x288)));

	if (t71 != -2) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x289 = 94;
	volatile uint32_t x290 = 127U;
	int32_t x291 = -1;
	static uint16_t x292 = 51U;
	int32_t t72 = 482007;

	t72 = (x289^(x290<(x291|x292)));

	if (t72 != 95) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x294 = 2923U;
	static uint64_t x295 = 150246LLU;
	int64_t x296 = INT64_MAX;
	int32_t t73 = 2249;

	t73 = (x293^(x294<(x295|x296)));

	if (t73 != -32767) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = -1;
	static uint64_t x298 = 3492155217194037LLU;
	volatile int64_t x299 = -1LL;
	static int8_t x300 = INT8_MIN;
	static int32_t t74 = -102398444;

	t74 = (x297^(x298<(x299|x300)));

	if (t74 != -2) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x301 = UINT64_MAX;
	int8_t x302 = INT8_MIN;
	int16_t x304 = INT16_MIN;
	volatile uint64_t t75 = UINT64_MAX;

	t75 = (x301^(x302<(x303|x304)));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -1;
	volatile int64_t x306 = INT64_MIN;
	volatile uint16_t x307 = 6659U;
	int16_t x308 = -1;

	t76 = (x305^(x306<(x307|x308)));

	if (t76 != -2) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x309 = 1LLU;
	int64_t x310 = 673352678147LL;
	uint8_t x312 = UINT8_MAX;
	volatile uint64_t t77 = 0LLU;

	t77 = (x309^(x310<(x311|x312)));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -1339231LL;
	uint8_t x314 = 63U;
	volatile int64_t x316 = -1LL;
	int64_t t78 = -7451LL;

	t78 = (x313^(x314<(x315|x316)));

	if (t78 != -1339231LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	volatile int16_t x319 = INT16_MAX;
	int16_t x320 = INT16_MAX;
	volatile int64_t t79 = 3LL;

	t79 = (x317^(x318<(x319|x320)));

	if (t79 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = -2;
	uint64_t x323 = 3LLU;
	uint8_t x324 = 9U;
	volatile int32_t t80 = 7815;

	t80 = (x321^(x322<(x323|x324)));

	if (t80 != -2) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x325 = -1LL;
	uint8_t x326 = 2U;
	int8_t x327 = -1;
	volatile uint64_t x328 = 16904481817676LLU;
	int64_t t81 = -76210411925LL;

	t81 = (x325^(x326<(x327|x328)));

	if (t81 != -2LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x329 = 18;
	static int8_t x330 = -1;
	volatile uint16_t x331 = 681U;
	int16_t x332 = 711;

	t82 = (x329^(x330<(x331|x332)));

	if (t82 != 19) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = -1;
	volatile int16_t x335 = INT16_MIN;
	static int8_t x336 = 4;

	t83 = (x333^(x334<(x335|x336)));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = UINT64_MAX;
	uint8_t x339 = 2U;
	volatile int8_t x340 = INT8_MIN;
	volatile uint64_t t84 = UINT64_MAX;

	t84 = (x337^(x338<(x339|x340)));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x341 = INT32_MIN;
	uint16_t x342 = 15U;
	static volatile uint64_t x343 = 177375718298LLU;
	int8_t x344 = INT8_MIN;
	int32_t t85 = 20;

	t85 = (x341^(x342<(x343|x344)));

	if (t85 != -2147483647) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MIN;
	int64_t x346 = INT64_MIN;
	static int16_t x347 = -1;
	int32_t x348 = 222;
	static volatile int32_t t86 = -477735191;

	t86 = (x345^(x346<(x347|x348)));

	if (t86 != -127) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 62U;
	int32_t x351 = -2;
	int32_t x352 = -53537243;
	int32_t t87 = -21413011;

	t87 = (x349^(x350<(x351|x352)));

	if (t87 != 62) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = UINT16_MAX;
	int16_t x354 = -1;
	int32_t x356 = INT32_MIN;
	static int32_t t88 = 17454150;

	t88 = (x353^(x354<(x355|x356)));

	if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = 30U;
	int64_t x359 = 259849LL;
	uint16_t x360 = UINT16_MAX;
	volatile int32_t t89 = 1;

	t89 = (x357^(x358<(x359|x360)));

	if (t89 != 31) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -1;
	int64_t x364 = -9710675LL;
	static int32_t t90 = -2202;

	t90 = (x361^(x362<(x363|x364)));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = 1;
	int64_t x368 = -261675LL;
	volatile int32_t t91 = 53;

	t91 = (x365^(x366<(x367|x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x370 = INT32_MAX;
	uint64_t x371 = UINT64_MAX;
	uint16_t x372 = 3U;
	static int32_t t92 = -7;

	t92 = (x369^(x370<(x371|x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -1;
	int32_t x374 = 24816;
	uint8_t x375 = 6U;
	int64_t x376 = INT64_MIN;
	int32_t t93 = 6;

	t93 = (x373^(x374<(x375|x376)));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 404U;
	int8_t x379 = -1;
	uint32_t x380 = 110574001U;
	int32_t t94 = 126;

	t94 = (x377^(x378<(x379|x380)));

	if (t94 != 405) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 0U;
	volatile int16_t x383 = 0;
	int32_t t95 = -138;

	t95 = (x381^(x382<(x383|x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = UINT16_MAX;
	int64_t x386 = INT64_MAX;
	int8_t x387 = INT8_MIN;
	static volatile int8_t x388 = INT8_MIN;

	t96 = (x385^(x386<(x387|x388)));

	if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x390 = UINT32_MAX;
	static uint32_t x392 = 661989683U;

	t97 = (x389^(x390<(x391|x392)));

	if (t97 != -32767) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = -1;
	uint64_t x394 = 6268383214697435LLU;
	uint8_t x395 = UINT8_MAX;
	int16_t x396 = 45;
	static int32_t t98 = -4006482;

	t98 = (x393^(x394<(x395|x396)));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x397 = INT16_MIN;
	static uint16_t x398 = 208U;
	static int64_t x399 = -79639312104306400LL;
	int32_t t99 = -10943;

	t99 = (x397^(x398<(x399|x400)));

	if (t99 != -32768) { NG(); } else { ; }
	
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

